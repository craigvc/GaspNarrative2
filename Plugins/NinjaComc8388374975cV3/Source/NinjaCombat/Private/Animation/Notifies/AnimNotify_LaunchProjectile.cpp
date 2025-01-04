// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/Notifies/AnimNotify_LaunchProjectile.h"

#include "AbilitySystemComponent.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/NinjaCombatProjectileRequest.h"
#include "Interfaces/CombatProjectileInterface.h"
#include "Interfaces/CombatProjectileProviderInterface.h"

UAnimNotify_LaunchProjectile::UAnimNotify_LaunchProjectile()
{
	Source = ECombatAbilitySource::Weapon; 
	WeaponQuery = FGameplayTagQuery::EmptyQuery;
	OriginSocketName = GetDefault<UNinjaCombatSettings>()->ProjectileSocketName;
	ProjectileRequestClass = GetDefault<UNinjaCombatSettings>()->ProjectileRequestClass;
	ProjectileClass = nullptr;
}

void UAnimNotify_LaunchProjectile::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	const AActor* Owner = MeshComp->GetOwner();
	if (!IsValid(Owner))
	{
		return;
	}
	
	UMeshComponent* SourceMesh = nullptr;
	if (Source == ECombatAbilitySource::Weapon)
	{
		const AActor* WeaponActor = GetWeaponActor(Owner);
		if (IsValid(WeaponActor))
		{
			SourceMesh = GetRangedMesh(WeaponActor);
		}
	}
	else
	{
		SourceMesh = GetRangedMesh(Owner);
	}
	
	if (IsValid(SourceMesh))
	{
		const UNinjaCombatProjectileRequest* ProjectileRequest = CreateRequestInstance(MeshComp->GetOwner(), SourceMesh);
		FNinjaCombatAnimNotifyHelpers::BroadcastEvent(MeshComp->GetOwner(), Tag_Combat_Event_Projectile_Launch, ProjectileRequest);
	}
}

AActor* UAnimNotify_LaunchProjectile::GetWeaponActor(const AActor* WeaponOwner) const
{
	const TScriptInterface<ICombatWeaponInterface> WeaponScript = FNinjaCombatAnimNotifyHelpers::GetWeapon(WeaponOwner, WeaponQuery);
	if (WeaponScript != nullptr && WeaponScript.GetObject() != nullptr)
	{
		return Cast<AActor>(WeaponScript.GetObject());
	}

	return nullptr;
}

UMeshComponent* UAnimNotify_LaunchProjectile::GetRangedMesh(const AActor* MeshOwner) const
{
	if (IsValid(MeshOwner))
	{
		// First use the interface as may provide fast access to the component or custom logic for the mesh.
		if (MeshOwner->Implements<UCombatRangedInterface>())
		{
			return ICombatRangedInterface::Execute_GetProjectileSourceMesh(MeshOwner, OriginSocketName);	
		}

		// As a fallback, try to find the component tagged with the projectile source tag. Not ideal.
		const FName Tag = Tag_Combat_Component_ProjectileSource.GetTag().GetTagName();
		return MeshOwner->FindComponentByTag<UMeshComponent>(Tag);
	}
	
	return nullptr;
}

UNinjaCombatProjectileRequest* UAnimNotify_LaunchProjectile::CreateRequestInstance_Implementation(AActor* Owner, UMeshComponent* SourceMesh) const
{
	TSubclassOf<UNinjaCombatProjectileRequest> RequestClass = ProjectileRequestClass; 
	if (!IsValid(RequestClass))
	{
		// Use the default class since an actual request class was not provided.
		RequestClass = UNinjaCombatProjectileRequest::StaticClass();
	}

	const TSubclassOf<AActor> ActualProjectileClass = GetProjectileClass(Owner);
	return UNinjaCombatProjectileRequest::NewInstance(RequestClass, this, Owner, Owner, SourceMesh, OriginSocketName, ActualProjectileClass);
}

TSubclassOf<AActor> UAnimNotify_LaunchProjectile::GetProjectileClass_Implementation(const AActor* Owner) const
{
	// First, we'll return the projectile class from the weapon, via interface.
	if (Source == ECombatAbilitySource::Weapon)
	{
		TSubclassOf<AActor> WeaponProjectileClass;
		const AActor* WeaponActor = GetWeaponActor(Owner);
		
		if (GetValidProjectileClass(WeaponActor, WeaponProjectileClass))
		{
			return WeaponProjectileClass;
		}
	}

	// Otherwise, we'll return the projectile class from the owner, via interface.
	TSubclassOf<AActor> OwnerProjectileClass;
	if (GetValidProjectileClass(Owner, OwnerProjectileClass))
	{
		return OwnerProjectileClass;
	}

	// Finally, we'll return the projectile class from this notify.
	return ProjectileClass;
}

bool UAnimNotify_LaunchProjectile::GetValidProjectileClass(const AActor* ProjectileSource, TSubclassOf<AActor>& OutProjectileClass)
{
	if (IsValid(ProjectileSource) && ProjectileSource->Implements<UCombatProjectileProviderInterface>())
	{
		TSubclassOf<AActor> CustomProjectileClass;
		if (ICombatProjectileProviderInterface::Execute_GetProjectileClass(ProjectileSource, CustomProjectileClass)
			&& IsValid(CustomProjectileClass)
			&& CustomProjectileClass->ImplementsInterface(UCombatProjectileInterface::StaticClass()))
        {
        	OutProjectileClass = CustomProjectileClass;
			return true;
        }
	}

	return false;
}

FString UAnimNotify_LaunchProjectile::GetNotifyName_Implementation() const
{
	return "Launch Projectile";
}
