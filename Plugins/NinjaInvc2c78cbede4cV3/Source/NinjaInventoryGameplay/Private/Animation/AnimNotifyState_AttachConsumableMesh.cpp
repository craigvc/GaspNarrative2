// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/AnimNotifyState_AttachConsumableMesh.h"

#include "NinjaEquipmentFunctionLibrary.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/AssetManager.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"

#if WITH_EDITOR
#include "Logging/MessageLog.h"
#include "Misc/UObjectToken.h"
#endif

UAnimNotifyState_AttachConsumableMesh::UAnimNotifyState_AttachConsumableMesh()
{
#if WITH_EDITORONLY_DATA
	// Ninja Bear Green! :D
	NotifyColor = FColor(211, 221, 197);
#endif
}

UNinjaEquipmentManagerComponent* UAnimNotifyState_AttachConsumableMesh::GetEquipmentManager() const
{
	if (EquipmentManagerPtr.IsValid() && EquipmentManagerPtr->IsValidLowLevelFast())
	{
		return EquipmentManagerPtr.Get();
	}

	return nullptr;
}

void UAnimNotifyState_AttachConsumableMesh::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManager(MeshComp->GetOwner());
	if (IsValid(EquipmentManager))
	{
		EquipmentManagerPtr = EquipmentManager;
		LoadMesh();
	}
}

void UAnimNotifyState_AttachConsumableMesh::LoadMesh()
{
	TArray<FSoftObjectPath> SoftPaths;
	if (MeshType == EConsumableMeshType::StaticMesh)
	{
		SoftPaths.Add(StaticMesh.ToSoftObjectPath());
	}
	else if (MeshType == EConsumableMeshType::SkeletalMesh)
	{
		SoftPaths.Add(SkeletalMesh.ToSoftObjectPath());
	}

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if (IsValid(AssetManager) && !SoftPaths.IsEmpty())
	{
		const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::OnMeshLoaded);
		MeshHandlePtr = AssetManager->LoadAssetList(SoftPaths, Delegate, FStreamableManager::AsyncLoadHighPriority);
	}
}

void UAnimNotifyState_AttachConsumableMesh::OnMeshLoaded()
{
	UStreamableRenderAsset* MeshAsset = nullptr;
	
	if (MeshType == EConsumableMeshType::StaticMesh)
	{
		MeshAsset = StaticMesh.Get();
	}
	else if (MeshType == EConsumableMeshType::SkeletalMesh)
	{
		MeshAsset = SkeletalMesh.Get();
	}

	if (IsValid(MeshAsset))
	{
		UNinjaEquipmentManagerComponent* EquipmentManager = GetEquipmentManager();
		if (IsValid(EquipmentManager) && EquipmentManager->HasEquipmentSlot(SlotTag))
		{
			const UMeshComponent* MeshComponent = EquipmentManager->SetMeshToSlot(SlotTag, MeshAsset, AttachSocket);
			if (IsValid(MeshComponent))
			{
				bHasSetMesh = true;
				
				if (SlotsToHide.IsValid())
				{
					// ReSharper disable once CppExpressionWithoutSideEffects
					EquipmentManager->HideEquipmentSlots(SlotsToHide);
				}				
			}
		}
	}
}

void UAnimNotifyState_AttachConsumableMesh::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (bHasSetMesh)
	{
		// We are being deliberate at obtaining the Equipment Manager again.
		// For clients, the equipment manager might be already null here.
		//
		UNinjaEquipmentManagerComponent* EquipmentManager = UNinjaEquipmentFunctionLibrary::GetEquipmentManager(MeshComp->GetOwner());
		if (IsValid(EquipmentManager))
		{
			EquipmentManager->ClearMeshAsset(SlotTag);
			
			if (SlotsToHide.IsValid())
			{
				// ReSharper disable once CppExpressionWithoutSideEffects
				EquipmentManager->ShowEquipmentSlots(SlotsToHide);
			}
		}
	}

	MeshHandlePtr.Reset();
	EquipmentManagerPtr.Reset();
}

FString UAnimNotifyState_AttachConsumableMesh::GetNotifyName_Implementation() const
{
	return TEXT("Attach Consumable Mesh");
}

#if WITH_EDITOR
void UAnimNotifyState_AttachConsumableMesh::ValidateAssociatedAssets()
{
	static const FName AssetCheckName("AssetCheck");
	const UObject* ContainingAsset = GetContainingAsset();

	FMessageLog AssetCheckLog(AssetCheckName);
	
	if (MeshType == EConsumableMeshType::StaticMesh && StaticMesh.IsNull())
	{
		const FText Message = FText::Format(
			NSLOCTEXT("AnimNotify", "Consumable_MissingStaticMesh", "Static Mesh configured for {0}, but no asset was set."),
			FText::AsCultureInvariant(ContainingAsset->GetPathName()));

		AssetCheckLog.Warning()
			->AddToken(FUObjectToken::Create(ContainingAsset))
			->AddToken(FTextToken::Create(Message));

		if (GIsEditor)
		{
			AssetCheckLog.Notify(Message, EMessageSeverity::Warning,true);
		}
	}

	if (MeshType == EConsumableMeshType::SkeletalMesh && SkeletalMesh.IsNull())
	{
		const FText Message = FText::Format(
			NSLOCTEXT("AnimNotify", "Consumable_MissingSkeletalMesh", "Skeletal Mesh configured for {0}, but no asset was set."),
			FText::AsCultureInvariant(ContainingAsset->GetPathName()));

		AssetCheckLog.Warning()
			->AddToken(FUObjectToken::Create(ContainingAsset))
			->AddToken(FTextToken::Create(Message));

		if (GIsEditor)
		{
			AssetCheckLog.Notify(Message, EMessageSeverity::Warning,true);
		}		
	}

	if (!SlotTag.IsValid())
	{
		const FText Message = FText::Format(
			NSLOCTEXT("AnimNotify", "Consumable_NoSlotTag", "{0} does not have a valid Slot Tag."),
			FText::AsCultureInvariant(ContainingAsset->GetPathName()));

		AssetCheckLog.Warning()
			->AddToken(FUObjectToken::Create(ContainingAsset))
			->AddToken(FTextToken::Create(Message));

		if (GIsEditor)
		{
			AssetCheckLog.Notify(Message, EMessageSeverity::Warning,true);
		}
	}
}
#endif
