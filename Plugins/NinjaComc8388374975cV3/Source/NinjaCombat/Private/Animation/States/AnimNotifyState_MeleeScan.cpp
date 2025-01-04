// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/States/AnimNotifyState_MeleeScan.h"

#include "AbilitySystemComponent.h"
#include "NinjaCombatLog.h"
#include "NinjaCombatSettings.h"
#include "NinjaCombatTags.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/NinjaCombatManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/NinjaCombatMeleeScan.h"

UAnimNotifyState_MeleeScan::UAnimNotifyState_MeleeScan()
{
	bUsesComponentTag = false;
	Source = ECombatAbilitySource::Weapon;
	WeaponQuery = FGameplayTagQuery::EmptyQuery;
	ScanSocketPrefix = TEXT("sScan");
	ScanChannel = GetDefault<UNinjaCombatSettings>()->MeleeScanChannel;
	ScanMode = EMeleeScanMode::LineTrace;
	SphereRadius = 20.f;
	BoxHalfExtent = FVector::OneVector;
	CapsuleExtent = FVector::OneVector;
	MeleeScanClass = GetDefault<UNinjaCombatSettings>()->MeleeScanClass;
	MeleeMeshTag = FGameplayTag::EmptyTag;
	TrailGameplayCueTag = Tag_GameplayCue_Combat_MeleeTrails;
	RequestId = INDEX_NONE;
}

void UAnimNotifyState_MeleeScan::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	AActor* Owner = MeshComp->GetOwner();
	if (!IsValid(Owner))
	{
		return;
	}

	UNinjaCombatManagerComponent* CombatManager = UNinjaCombatFunctionLibrary::GetCombatManagerComponent(Owner);
	if (!IsValid(CombatManager))
	{
		return;
	}
	
	if (Source == ECombatAbilitySource::Owner)
	{
		InitializeObjects(Owner);
	}
	else
	{
		TryInitializeObjectsForWeapon(Owner);
	}

	AActor* Causer = IsValid(ScanMeshComponent) ? ScanMeshComponent->GetOwner() : nullptr;
	if (IsValid(Causer))
	{
		const UNinjaCombatMeleeScan* MeleeScan = CreateMeleeScanInstance(Owner, Causer, ScanMeshComponent, TotalDuration);
		checkf(IsValid(MeleeScan), TEXT("Sanity Check: Unable to create a Melee Scan."));
		
		COMBAT_LOG_ARGS(Verbose, "Created Melee Scan '%s': owner '%s', causer '%s' and mesh ' %s'.",
			*GetNameSafe(MeleeScan), *GetNameSafe(Owner), *GetNameSafe(Causer), *GetNameSafe(ScanMeshComponent));

		RequestId = CombatManager->RegisterMeleeScanRequest(MeleeScan);
	}
}

void UAnimNotifyState_MeleeScan::InitializeObjects(const AActor* AssetSource)
{
	if (IsValid(AssetSource))
	{
		// First use the interface as may provide fast access to the component.
		if (AssetSource->Implements<UCombatMeleeInterface>())
		{
			if (bUsesComponentTag && MeleeMeshTag.IsValid())
			{
				ScanMeshComponent = ICombatMeleeInterface::Execute_GetMeleeMeshByTag(AssetSource, MeleeMeshTag);
			}
			else
			{
				ScanMeshComponent = ICombatMeleeInterface::Execute_GetMeleeMesh(AssetSource);
			}
		}

		// As a fallback, try to find the component tagged with the melee scan source tag.
		if (ScanMeshComponent == nullptr)
		{
			const FName Tag = Tag_Combat_Component_MeleeScanSource.GetTag().GetTagName();
			ScanMeshComponent = AssetSource->FindComponentByTag<UMeshComponent>(Tag);	
		}

		// Retrieve the sockets from the mesh.
		if (IsValid(ScanMeshComponent))
		{
			const FString SocketPrefixString = ScanSocketPrefix.ToString();
			const TArray<FName>& AllSockets = ScanMeshComponent->GetAllSocketNames();

			ScanSocketNames = AllSockets.FilterByPredicate([SocketPrefixString](const FName& SocketName)
			{
				const FString SocketString = SocketName.ToString();
				return SocketString.StartsWith(SocketPrefixString);
			});
		}
	}
}

void UAnimNotifyState_MeleeScan::TryInitializeObjectsForWeapon(const AActor* Owner)
{
	const TScriptInterface<ICombatWeaponInterface> WeaponScript = FNinjaCombatAnimNotifyHelpers::GetWeapon(Owner, WeaponQuery);
	const AActor* Causer = Cast<AActor>(WeaponScript.GetObject());
		
	if (IsValid(Causer))
	{
		InitializeObjects(Causer);
	}
	else
	{
#if !WITH_EDITOR
		// Only log this warning in the game. No point doing it in the animation editor.
		COMBAT_LOG_ARGS(Warning, "Weapon Query %s did not return a valid weapon!", *WeaponQuery.GetDescription());
#endif
	}
}

UNinjaCombatMeleeScan* UAnimNotifyState_MeleeScan::CreateMeleeScanInstance_Implementation(AActor* Owner, AActor* Causer, UMeshComponent* SourceMesh, const float Duration) const
{
	TSubclassOf<UNinjaCombatMeleeScan> ScanClass = MeleeScanClass; 
	if (!IsValid(ScanClass))
	{
		// Use the default class since an actual scan class was not provided.
		ScanClass = UNinjaCombatMeleeScan::StaticClass();
	}

	FVector ShapeDimensions = FVector::ZeroVector;
	switch (ScanMode)
	{
		case EMeleeScanMode::LineTrace:
			ShapeDimensions = FVector::ZeroVector;
			break;
		case EMeleeScanMode::BoxSweep:
			ShapeDimensions = BoxHalfExtent;
			break;
		case EMeleeScanMode::CapsuleSweep:
			ShapeDimensions = CapsuleExtent;
			break;
		case EMeleeScanMode::SphereSweep:
			ShapeDimensions.X = SphereRadius;
			break;
		default:
			const UEnum* Enum = StaticEnum<EMeleeScanMode>();
			COMBAT_LOG_ARGS(Error, "Invalid Melee Scan Mode: %s!", *Enum->GetValueAsName(ScanMode).ToString());
			break;
	}
	
	UNinjaCombatMeleeScan* MeleeScan = UNinjaCombatMeleeScan::NewInstance(
		ScanClass, Owner, Owner, Causer, SourceMesh,
		ScanSocketNames, ScanChannel, ScanMode, ShapeDimensions, Duration);

	if (IsValid(MeleeScan))
	{
		MeleeScan->SetMeleeHitOverride(MeleeHitOverride);
		MeleeScan->SetTrailGameplayCue(TrailGameplayCueTag);	
	}
	
	return MeleeScan;
}

void UAnimNotifyState_MeleeScan::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	const AActor* Owner = MeshComp->GetOwner();
	if (!IsValid(Owner) || RequestId == INDEX_NONE)
	{
		return;
	}

	UNinjaCombatManagerComponent* CombatManager = UNinjaCombatFunctionLibrary::GetCombatManagerComponent(Owner);
	if (!IsValid(CombatManager))
	{
		return;
	}
	
	CombatManager->CancelMeleeScanRequest(RequestId);
}

FString UAnimNotifyState_MeleeScan::GetNotifyName_Implementation() const
{
	return "Melee Scan";
}
