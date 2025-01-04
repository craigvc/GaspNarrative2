// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryEquipmentAwarePickupActor.h"

#include "NinjaEquipmentTags.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Data/NinjaEquipmentDataAsset.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "Engine/AssetManager.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "Engine/StreamableRenderAsset.h"
#include "GameFramework/ItemFragments/ItemFragment_Equipment.h"
#include "GameFramework/ItemFragments/ItemFragment_Quality.h"

ANinjaInventoryEquipmentAwarePickupActor::ANinjaInventoryEquipmentAwarePickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	TargetEquipmentStateTag = Tag_Equipment_State_Deactivated;
}

void ANinjaInventoryEquipmentAwarePickupActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	EquipmentAssetsHandle.Reset();
	Super::EndPlay(EndPlayReason);
}

UStaticMeshComponent* ANinjaInventoryEquipmentAwarePickupActor::GetStaticMeshComponent_Implementation() const
{
	return FindComponentByClass<UStaticMeshComponent>();
}

USkeletalMeshComponent* ANinjaInventoryEquipmentAwarePickupActor::GetSkeletalMeshComponent_Implementation() const
{
	return FindComponentByClass<USkeletalMeshComponent>(); 	
}

void ANinjaInventoryEquipmentAwarePickupActor::HandleItemDataUpdated_Implementation()
{
	RetrieveAndLoadEquipmentAssets();
}

void ANinjaInventoryEquipmentAwarePickupActor::OnRep_ItemData()
{
	Super::OnRep_ItemData();

	const UNinjaInventoryItemDataAsset* CurrentItemData = Execute_GetItemData(this);
	if (IsValid(CurrentItemData))
	{
		const UItemFragment_Quality* Quality = CurrentItemData->FindFragment<UItemFragment_Quality>();
		if (IsValid(Quality))
		{
			const FGameplayTag QualityTag = Quality->GetQualityTag();
			HandleItemQualityUpdated(QualityTag);
		}
	}
}

void ANinjaInventoryEquipmentAwarePickupActor::RetrieveAndLoadEquipmentAssets()
{
	const UNinjaEquipmentDataAsset* EquipmentDefinition = GetEquipmentDefinition();
	if (IsValid(EquipmentDefinition))
	{
		FEquipmentStateConfiguration StateConfiguration;
		if (EquipmentDefinition->GetStateConfiguration(TargetEquipmentStateTag, StateConfiguration))
		{
			TArray<TSoftObjectPtr<UStreamableRenderAsset>> EquipmentAssets;
			AddAssetsToLoad(StateConfiguration, EquipmentAssets);
			LoadAssets(EquipmentAssets);
		}
	}
}

const UNinjaEquipmentDataAsset* ANinjaInventoryEquipmentAwarePickupActor::GetEquipmentDefinition() const
{
	const UNinjaInventoryItemDataAsset* MyItemData = Execute_GetItemData(this);
	if (IsValid(MyItemData))
	{
		const UItemFragment_Equipment* EquipmentFragment = MyItemData->FindFragment<UItemFragment_Equipment>();
		if (IsValid(EquipmentFragment))
		{
			return EquipmentFragment->GetEquipmentDataAsset();
		}
	}
	
	return nullptr;
}

void ANinjaInventoryEquipmentAwarePickupActor::AddAssetsToLoad(const FEquipmentStateConfiguration& StateConfiguration, TArray<TSoftObjectPtr<UStreamableRenderAsset>>& EquipmentAssets) const
{
	if (!StateConfiguration.SkeletalMeshes.IsEmpty())
	{
		EquipmentAssets.Add(StateConfiguration.SkeletalMeshes[0].Mesh);
	}
	else if (!StateConfiguration.StaticMeshes.IsEmpty())
	{
		EquipmentAssets.Add(StateConfiguration.StaticMeshes[0].Mesh);
	}
}

void ANinjaInventoryEquipmentAwarePickupActor::LoadAssets(TArray<TSoftObjectPtr<UStreamableRenderAsset>>& EquipmentAssets)
{
	if (!EquipmentAssets.IsEmpty())
	{
		TArray<FSoftObjectPath> SoftPaths;
		SoftPaths.Reserve(EquipmentAssets.Num());
		
		for (TSoftObjectPtr<UStreamableRenderAsset> EquipmentAssetPtr : EquipmentAssets)
		{
			SoftPaths.Add(EquipmentAssetPtr.ToSoftObjectPath());	
		}
		
		UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
		if (IsValid(AssetManager))
		{
			const FStreamableDelegate DelegateToCall = FStreamableDelegate::CreateUObject(this, &ThisClass::OnEquipmentAssetsLoaded, EquipmentAssets);
			AssetManager->LoadAssetList(SoftPaths, DelegateToCall);
		}
	}
}

void ANinjaInventoryEquipmentAwarePickupActor::OnEquipmentAssetsLoaded(TArray<TSoftObjectPtr<UStreamableRenderAsset>> EquipmentAssets)
{
	for (TSoftObjectPtr<UStreamableRenderAsset> EquipmentAssetPtr : EquipmentAssets)
	{
		UStreamableRenderAsset* EquipmentAsset = EquipmentAssetPtr.Get();
		HandleEquipmentAsset(EquipmentAsset);	
	}
}

void ANinjaInventoryEquipmentAwarePickupActor::HandleEquipmentAsset(UStreamableRenderAsset* EquipmentAsset)
{
	if (EquipmentAsset->IsA(UStaticMesh::StaticClass()))
	{
		UStaticMesh* StaticMeshAsset = Cast<UStaticMesh>(EquipmentAsset);
		HandleStaticMeshAsset(StaticMeshAsset);
	}
	else if (EquipmentAsset->IsA(USkeletalMesh::StaticClass()))
	{
		USkeletalMesh* SkeletalMeshAsset = Cast<USkeletalMesh>(EquipmentAsset);
		HandleSkeletalMeshAsset(SkeletalMeshAsset);
	}	
}

void ANinjaInventoryEquipmentAwarePickupActor::HandleItemQualityUpdated_Implementation(FGameplayTag QualityTag)
{
}

void ANinjaInventoryEquipmentAwarePickupActor::HandleStaticMeshAsset_Implementation(UStaticMesh* StaticMeshAsset)
{
	UStaticMeshComponent* MeshComponent = GetStaticMeshComponent();
	if (IsValid(MeshComponent))
	{
		MeshComponent->SetStaticMesh(StaticMeshAsset);
	}
}

void ANinjaInventoryEquipmentAwarePickupActor::HandleSkeletalMeshAsset_Implementation(USkeletalMesh* SkeletalMeshAsset)
{
	USkeletalMeshComponent* MeshComponent = GetSkeletalMeshComponent();
	if (IsValid(MeshComponent))
	{
		MeshComponent->SetSkeletalMeshAsset(SkeletalMeshAsset);
	}
}
