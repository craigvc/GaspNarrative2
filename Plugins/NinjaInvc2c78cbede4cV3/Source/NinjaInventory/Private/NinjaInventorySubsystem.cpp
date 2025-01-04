// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInventorySubsystem.h"

#include "AbilitySystemGlobals.h"
#include "NinjaInventorySettings.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "Engine/AssetManager.h"
#include "EnvironmentQuery/EnvQuery.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "GameFramework/NinjaInventoryItem.h"

void UNinjaInventorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UAbilitySystemGlobals::Get().InitGlobalData();
	
	LoadAssetsFromSettings();
	InitializeStream();
}

void UNinjaInventorySubsystem::Deinitialize()
{
	QualityMappingTable = nullptr;
	ItemPlacementQuery = nullptr;
	AssetsHandle.Reset();
	Super::Deinitialize();
}

float UNinjaInventorySubsystem::GetRandomFloatInRange(const float Min, const float Max) const
{
	return RandomStream.FRandRange(Min, Max);	
}

void UNinjaInventorySubsystem::LoadAssetsFromSettings()
{
	const UNinjaInventorySettings* InventorySettings = GetDefault<UNinjaInventorySettings>();

	TArray<FSoftObjectPath> ObjectsToLoad;
	ObjectsToLoad.Add(InventorySettings->QualityMappingTable.ToSoftObjectPath());
	
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();

	const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::OnAssetsFromSettingsLoaded); 
	AssetsHandle = AssetManager->LoadAssetList(ObjectsToLoad, Delegate);
}

void UNinjaInventorySubsystem::OnAssetsFromSettingsLoaded()
{
	const UNinjaInventorySettings* InventorySettings = GetDefault<UNinjaInventorySettings>();
	QualityMappingTable = InventorySettings->QualityMappingTable.Get();
}

void UNinjaInventorySubsystem::InitializeStream()
{
	RandomStream = FRandomStream();
	RandomStream.Initialize(FDateTime::Now().ToUnixTimestamp());
}

bool UNinjaInventorySubsystem::GetQualityMapping(FInventoryItemQualityMappingTableRow& OutRow, const FGameplayTag QualityTag) const
{
	return FInventoryItemQualityMappingTableRow::FindRow(OutRow, QualityMappingTable, QualityTag);
}

void UNinjaInventorySubsystem::DropItemDefinition(UNinjaInventoryManagerComponent* InventoryManager, const UNinjaInventoryItemDataAsset* ItemDefinition, const int32 Amount)
{
	checkf(IsValid(InventoryManager), TEXT("Missing Inventory Manager."));
	checkf(IsValid(ItemDefinition), TEXT("Missing Item Definition."));

	//UNinjaInventoryItem* ItemInstance = InstantiateItem(ItemDefinition);
	//DropItemInstance(InventoryManager, ItemInstance);
}

void UNinjaInventorySubsystem::DropItemInstance(UNinjaInventoryManagerComponent* InventoryManager, UNinjaInventoryItem* ItemInstance)
{
	TArray<UNinjaInventoryItem*> Instances;
	Instances.Add(ItemInstance);
	DropItemInstances(InventoryManager, Instances);
}

void UNinjaInventorySubsystem::DropItemInstances(UNinjaInventoryManagerComponent* InventoryManager, TArray<UNinjaInventoryItem*> ItemInstances)
{
	checkf(IsValid(InventoryManager), TEXT("Missing Inventory Manager."));
	checkf(!ItemInstances.IsEmpty(), TEXT("Missing Item Instances."));

	const int32 QueryID = ExecuteItemPlacementQuery(InventoryManager);
	FInventoryItemDropRequest& Request = DropRequests.Add(QueryID);
	Request.bGroupItems = GetDefault<UNinjaInventorySettings>()->bGroupDroppedItemInstances;
	Request.InventoryManager = InventoryManager;
	Request.ItemInstances = ItemInstances;
}

int32 UNinjaInventorySubsystem::ExecuteItemPlacementQuery(UNinjaInventoryManagerComponent* InventoryManager)
{
	UObject* Avatar = InventoryManager->GetInventoryAvatar();
	FEnvQueryRequest PlacementQueryRequest = FEnvQueryRequest(ItemPlacementQuery, Avatar);
	return PlacementQueryRequest.Execute(EEnvQueryRunMode::RandomBest25Pct, this, &ThisClass::OnItemPlacementQueryCompleted);
}

// ReSharper disable once CppPassValueParameterByConstReference
void UNinjaInventorySubsystem::OnItemPlacementQueryCompleted(const TSharedPtr<FEnvQueryResult> Result)
{
	const int32 QueryID = Result->QueryID;
	if (Result->IsSuccessful() && DropRequests.Contains(QueryID))
	{
		const FInventoryItemDropRequest& Request = DropRequests.FindAndRemoveChecked(QueryID);
		if (ensureMsgf(Request.HasValidData(), TEXT("Item Placement Request for ID %d has invalid data!"), QueryID))
		{
			UNinjaInventoryManagerComponent* InventoryManager = Request.InventoryManager;

			if (Request.bGroupItems)
			{
				const FVector Location = Result->GetItemAsLocation(0);
				//TODO InventoryManager->DropGroupedItemInstancesAtLocation(Request.ItemInstances, Request.PickupActorClass, Location);	
			}
			else for (int32 Idx = 0; Idx < Request.ItemInstances.Num(); ++Idx) 
			{
				UNinjaInventoryItem* ItemInstance = Request.ItemInstances[Idx];

				const int32 LocationIdx = FMath::RandRange(0, Result->Items.Num() - 1);
				const FVector Location = Result->GetItemAsLocation(LocationIdx);

				// TODO InventoryManager->DropItemInstanceAtLocation(ItemInstance, Location);	
			}
		}
	}
}
