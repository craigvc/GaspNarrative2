// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatWeaponManagerComponent.h"

#include "NinjaCombatLog.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatSystemInterface.h"
#include "Interfaces/CombatWeaponInterface.h"
#include "Net/UnrealNetwork.h"

UNinjaCombatWeaponManagerComponent::UNinjaCombatWeaponManagerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	SetIsReplicatedByDefault(true);
}

void UNinjaCombatWeaponManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, Weapons);
}

void UNinjaCombatWeaponManagerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	FindAttachedWeapons();
	InitializeWeapons();
}

void UNinjaCombatWeaponManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	DestroyAllWeapons();
	Super::EndPlay(EndPlayReason);
}

AActor* UNinjaCombatWeaponManagerComponent::GetWeapon_Implementation(const FGameplayTagQuery& WeaponQuery) const
{
	if (WeaponQuery.IsEmpty())
	{
		COMBAT_LOG(Warning, "Empty Weapon Query provided!");
		return nullptr;
	}
	
	for (AActor* WeaponInstance : Weapons)
	{
		FGameplayTagContainer WeaponTags = ICombatWeaponInterface::Execute_GetWeaponTags(WeaponInstance);
		COMBAT_LOG_ARGS(VeryVerbose, "Testing weapon %s: tags: %s - query %s.", *GetNameSafe(WeaponInstance), *WeaponTags.ToStringSimple(), *WeaponQuery.GetDescription());
		
		if (WeaponQuery.Matches(WeaponTags))
		{
			COMBAT_LOG_ARGS(VeryVerbose, "Returning weapon %s for query %s.", *GetNameSafe(WeaponInstance), *WeaponQuery.GetDescription());
			return WeaponInstance;
		}
	}

	COMBAT_LOG_ARGS(Warning, "Failed to find a weapon for query %s.", *WeaponQuery.GetDescription());
	return nullptr;
}

void UNinjaCombatWeaponManagerComponent::AddWeapon(AActor* Weapon)
{
	if (!IsValid(Weapon))
	{
		COMBAT_LOG(Warning, "Null weapon provided to the Weapon Manager!");
		return;
	}

	if (!Weapon->Implements<UCombatWeaponInterface>())
	{
		COMBAT_LOG_ARGS(Warning, "Weapon %s does not implement the Combat Weapon Interface!", *GetNameSafe(Weapon));
		return;
	}
	
	if (Weapons.Contains(Weapon))
	{
		COMBAT_LOG_ARGS(Warning, "Weapon '%s' is already registered!", *GetNameSafe(Weapon));
		return;	
	}
	
	if (OwnerHasAuthority())
	{
		const TArray<AActor*> CurrentWeapons = Weapons;
		Weapons.Add(Weapon);
		OnRep_Weapons(CurrentWeapons);
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_AddWeapon(Weapon);
	}
}

void UNinjaCombatWeaponManagerComponent::AddWeaponClass(const TSubclassOf<AActor> WeaponClass)
{
	if (!IsValid(WeaponClass))
	{
		COMBAT_LOG(Warning, "Null weapon class provided to the Weapon Manager!");
		return;
	}

	if (!WeaponClass->ImplementsInterface(UCombatWeaponInterface::StaticClass()))
	{
		COMBAT_LOG_ARGS(Warning, "Weapon class %s does not implement the Combat Weapon Interface!", *GetNameSafe(WeaponClass));
		return;
	}

	if (OwnerHasAuthority())
	{
		const TArray<AActor*> CurrentWeapons = Weapons;
		AActor* NewWeapon = SpawnWeaponActor(WeaponClass);
		Weapons.AddUnique(NewWeapon);

		OnRep_Weapons(CurrentWeapons);
		COMBAT_LOG_ARGS(Verbose, "Initialized Weapon Actor %s from class '%s'.", *GetNameSafe(NewWeapon), *GetNameSafe(WeaponClass));
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_AddWeaponClass(WeaponClass);
	}
}

void UNinjaCombatWeaponManagerComponent::RemoveWeapon(AActor* Weapon)
{
	if (!IsValid(Weapon))
	{
		COMBAT_LOG(Warning, "Null weapon provided to the Weapon Manager!");
		return;
	}
	
	if (!Weapons.Contains(Weapon))
	{
		COMBAT_LOG_ARGS(Warning, "Weapon '%s' is not registered!", *GetNameSafe(Weapon));
		return;	
	}
	
	if (OwnerHasAuthority())
	{
		const TArray<AActor*> CurrentWeapons = Weapons;
		Weapons.Remove(Weapon);
		OnRep_Weapons(CurrentWeapons);
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_RemoveWeapon(Weapon);
	}	
}

void UNinjaCombatWeaponManagerComponent::RemoveWeaponByQuery(FGameplayTagQuery WeaponQuery)
{
	if (WeaponQuery.IsEmpty())
	{
		return;
	}
	
	AActor* Weapon = Execute_GetWeapon(this, WeaponQuery);
	if (IsValid(Weapon))
	{
		RemoveWeapon(Weapon);
	}
}

void UNinjaCombatWeaponManagerComponent::DestroyAllWeapons()
{
	for (auto It = Weapons.CreateIterator(); It; ++It)
	{
		AActor* Weapon = It->Get();
		Weapon->Destroy();
		It.RemoveCurrent();
	}
}

void UNinjaCombatWeaponManagerComponent::FindAttachedWeapons()
{
	if (!OwnerHasAuthority())
	{
		return;
	}
	
	TArray<AActor*> AttachedActors;
	GetOwner()->GetAttachedActors(AttachedActors);
	
	for (AActor* AttachedActor : AttachedActors)
	{
		if (AttachedActor->Implements<UCombatWeaponInterface>())
		{
			const TArray<AActor*> CurrentWeapons = Weapons;

			Weapons.AddUnique(AttachedActor);
			OnRep_Weapons(CurrentWeapons);
			
			COMBAT_LOG_ARGS(Verbose, "Registered attached Weapon Actor '%s'.", *GetNameSafe(AttachedActor));
		}
	}
}

void UNinjaCombatWeaponManagerComponent::InitializeWeapons()
{
	if (!OwnerHasAuthority())
	{
		return;
	}
	
	for (TSubclassOf<AActor>& WeaponClass : DefaultWeaponClasses)
	{
		if (ensure(WeaponClass && WeaponClass->ImplementsInterface(UCombatWeaponInterface::StaticClass())))
		{
			const TArray<AActor*> CurrentWeapons = Weapons;
			
			AActor* NewWeapon = SpawnWeaponActor(WeaponClass);
			Weapons.AddUnique(NewWeapon);
			OnRep_Weapons(CurrentWeapons);
			
			COMBAT_LOG_ARGS(Verbose, "Initialized Weapon Actor %s from class '%s'.", *GetNameSafe(NewWeapon), *GetNameSafe(WeaponClass));
		}
	}
}

AActor* UNinjaCombatWeaponManagerComponent::SpawnWeaponActor_Implementation(const TSubclassOf<AActor> WeaponClass)
{
	if (WeaponClass == nullptr)
	{
		COMBAT_LOG(Warning, "Null weapon class!");
		return nullptr;
	}

	if (!WeaponClass->ImplementsInterface(UCombatWeaponInterface::StaticClass()))
	{
		COMBAT_LOG_ARGS(Warning, "Actor Class %s does not implement Weapon Combat Interface!", *GetNameSafe(WeaponClass));
		return nullptr;
	}
	
	UWorld* World = GetOwner()->GetWorld();
	if (IsValid(World))
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = GetOwner();
		SpawnParameters.Instigator = Cast<APawn>(GetOwner());
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		return World->SpawnActor<AActor>(WeaponClass, SpawnParameters);
	}

	return nullptr;
}

void UNinjaCombatWeaponManagerComponent::AttachWeaponActor_Implementation(AActor* Weapon)
{
	if (!IsValid(Weapon) || !Weapon->Implements<UCombatWeaponInterface>())
	{
		return;
	}

	const FName* SocketNamePtr = WeaponSocketMapping.Find(Weapon->GetClass());
	if (SocketNamePtr == nullptr)
	{
		return;
	}
	
	USceneComponent* SceneComponent = ICombatSystemInterface::Execute_GetCombatMesh(GetOwner());
	if (IsValid(SceneComponent))
	{
		const FName& SocketName = *SocketNamePtr;
		const bool bAttached = Weapon->AttachToComponent(SceneComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
		if (bAttached)
		{
			COMBAT_LOG_ARGS(Verbose, "Attached Weapon Actor '%s' to socket '%s'.",
				*GetNameSafe(Weapon), *SocketName.ToString());
		}
		else
		{
			COMBAT_LOG_ARGS(Warning, "Failed to attached Weapon Actor '%s' to socket '%s'.",
				*GetNameSafe(Weapon), *SocketName.ToString());
		}
	}
}

void UNinjaCombatWeaponManagerComponent::HandleOwnerFinishedDying_Implementation(AActor* Actor)
{
	DestroyAllWeapons();
}

void UNinjaCombatWeaponManagerComponent::OnRep_Weapons(const TArray<AActor*>& OldWeapons)
{
	for (AActor* OldWeapon : OldWeapons)
	{
		if (OldWeapon && !Weapons.Contains(OldWeapon))
		{
			OldWeapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			OnWeaponRemoved.Broadcast(OldWeapon);

			if (OwnerHasAuthority())
			{
				OldWeapon->Destroy();	
			}
		}
	}

	for (AActor* CurrentWeapon : Weapons)
	{
		if (CurrentWeapon && !OldWeapons.Contains(CurrentWeapon))
		{
			AttachWeaponActor(CurrentWeapon);
			OnWeaponAdded.Broadcast(CurrentWeapon);
		}
	}
}

void UNinjaCombatWeaponManagerComponent::Server_AddWeapon_Implementation(AActor* Weapon)
{
	AddWeapon(Weapon);
}

bool UNinjaCombatWeaponManagerComponent::Server_AddWeapon_Validate(AActor* Weapon)
{
	return true;
}

void UNinjaCombatWeaponManagerComponent::Server_AddWeaponClass_Implementation(const TSubclassOf<AActor> WeaponClass)
{
	AddWeaponClass(WeaponClass);
}

bool UNinjaCombatWeaponManagerComponent::Server_AddWeaponClass_Validate(const TSubclassOf<AActor> WeaponClass)
{
	return true;
}

void UNinjaCombatWeaponManagerComponent::Server_RemoveWeapon_Implementation(AActor* Weapon)
{
	RemoveWeapon(Weapon);
}

bool UNinjaCombatWeaponManagerComponent::Server_RemoveWeapon_Validate(AActor* Weapon)
{
	return true;
}
