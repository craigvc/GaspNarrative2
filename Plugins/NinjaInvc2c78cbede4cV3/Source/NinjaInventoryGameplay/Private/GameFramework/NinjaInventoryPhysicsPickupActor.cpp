// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaInventoryPhysicsPickupActor.h"

#include "NinjaInventoryLog.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "GameFramework/ItemFragments/ItemFragment_Weight.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Types/FItemFragmentMemories.h"

ANinjaInventoryPhysicsPickupActor::ANinjaInventoryPhysicsPickupActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	HeightOffset = 120.f;
	DefaultMassInKg = 40.f;
}

void ANinjaInventoryPhysicsPickupActor::SetInitialLocation_Implementation(FVector InitialLocation, FVector& ActualLocation)
{
	const float Height = InitialLocation.Z + HeightOffset;
	InitialLocation.Z = Height;
	ActualLocation = InitialLocation;
	
	Super::SetInitialLocation_Implementation(ActualLocation, ActualLocation);
}

void ANinjaInventoryPhysicsPickupActor::HandleStaticMeshAsset_Implementation(UStaticMesh* StaticMeshAsset)
{
	Super::HandleStaticMeshAsset_Implementation(StaticMeshAsset);
	
	UStaticMeshComponent* StaticMeshComponent = GetStaticMeshComponent();
	if (IsValid(StaticMeshComponent))
	{
		ApplyPhysics(StaticMeshComponent);
	}
}

void ANinjaInventoryPhysicsPickupActor::HandleSkeletalMeshAsset_Implementation(USkeletalMesh* SkeletalMeshAsset)
{
	Super::HandleSkeletalMeshAsset_Implementation(SkeletalMeshAsset);

	USkeletalMeshComponent* SkeletalMeshComponent = GetSkeletalMeshComponent();
	if (IsValid(SkeletalMeshComponent))
	{
		ApplyPhysics(SkeletalMeshComponent);		
	}
}

float ANinjaInventoryPhysicsPickupActor::GetBaseWeight() const
{
	const UNinjaInventoryItemDataAsset* CurrentItemData = Execute_GetItemData(this);
	if (!IsValid(CurrentItemData))
	{
		INVENTORY_LOG(Warning, "Attempted to determine pickup weight without setting the Item Data!");
		return 0.f;
	}
	
	const UItemFragment_Weight* Weight = CurrentItemData->FindFragment<UItemFragment_Weight>();
	if (!IsValid(Weight))
	{
		INVENTORY_LOG(Verbose, "No stack memory set for pickup, returning default mass.");
		return DefaultMassInKg;
	}
	
	const float BaseWeight = Weight->GetWeight();
    const int32 StackSize = GetStackSize();
	const float TotalWeight = BaseWeight * StackSize;
	
	INVENTORY_LOG_ARGS(Verbose, "Pickup %s has a calculated weight of %f * %d = %f.", *GetNameSafe(this), BaseWeight, StackSize, TotalWeight);
    return TotalWeight;
}

int32 ANinjaInventoryPhysicsPickupActor::GetStackSize() const
{
	TArray<FInventoryDefaultItemMemory> DefaultItemMemories = Execute_GetItemMemories(this);
	for (const FInventoryDefaultItemMemory& Memory : DefaultItemMemories)
	{
		if (Memory.IsCompatibleWithFragmentClass(UItemFragment_Stack::StaticClass()))
		{
			const FInventoryItemFragmentStackMemory& StackMemory = Memory.Memory.Get<FInventoryItemFragmentStackMemory>();
			return StackMemory.StackSize;
		}
	}

	// We don't have a stack, so assume a single item.
	return 1;
}

void ANinjaInventoryPhysicsPickupActor::ApplyPhysics_Implementation(UMeshComponent* MeshComponent) const
{
	if (IsValid(MeshComponent))
	{
		const float Weight = GetBaseWeight();
		INVENTORY_LOG_ARGS(Verbose, "Pickup %s will have a mass of %f.", *GetNameSafe(this), Weight);
		
		MeshComponent->SetSimulatePhysics(true);
		MeshComponent->SetEnableGravity(true);
		MeshComponent->SetMassOverrideInKg(NAME_None, Weight);
		MeshComponent->SetCollisionObjectType(ECC_PhysicsBody);
		MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		MeshComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
		MeshComponent->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block);
		MeshComponent->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
		MeshComponent->SetCollisionResponseToChannel(ECC_PhysicsBody, ECR_Block);
		MeshComponent->SetCollisionResponseToChannel(ECC_Destructible, ECR_Block);
	}
}
