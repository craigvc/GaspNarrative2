// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaEquipment.h"

#include "NinjaEquipmentTags.h"
#include "NinjaInventoryEquipmentLog.h"
#include "Animation/AnimInstance.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Data/NinjaEquipmentDataAsset.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "Engine/StreamableRenderAsset.h"
#include "GameFramework/Character.h"
#include "GameFramework/NinjaEquipmentAssetCompatibilityCheck.h"
#include "GameFramework/NinjaEquipmentSceneComponentSelector.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "Interfaces/EquipmentActorInterface.h"
#include "Interfaces/Aspects/EquipableItemInterface.h"
#include "Interfaces/Aspects/StorableItemInterface.h"
#include "Net/UnrealNetwork.h"

UNinjaEquipment::UNinjaEquipment()
{
	bIsDataLoaded = false;
	bIsWaitingForDataLoad = false;
	StateTag = FGameplayTag::EmptyTag;
	PreviousStateTag = FGameplayTag::EmptyTag;
}

void UNinjaEquipment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, Item);
	DOREPLIFETIME(ThisClass, SpawnedActors);
	
	DOREPLIFETIME_CONDITION(ThisClass, StateContainers, COND_OwnerOnly);
}

void UNinjaEquipment::BeginDestroy()
{
	OnEquipmentRemoved.Broadcast(this);
	UObject::BeginDestroy();
}

void UNinjaEquipment::SetItem(UNinjaInventoryItem* NewItem)
{
	// Once set, we can't set the item again.
	if (IsValid(Item) || !IsValid(NewItem))
	{
		return;
	}

	const IEquipableItemInterface* EquipableFragment = GetEquipableInterfaceFromItem(NewItem);
	if (!IsValid(EquipableFragment->GetEquipmentDataAsset()))
	{
		return;
	}
	
	Item = NewItem;
	OnRep_Item();
}

void UNinjaEquipment::OnRep_Item()
{
	if (!IsValid(Item))
	{
		return;
	}
	
	EquipmentId = Item->GetItemId();

	const IEquipableItemInterface* EquipableFragment = GetEquipableInterface();
	EquipmentData = EquipableFragment->GetEquipmentDataAsset();

	if (bIsDataLoaded)
	{
		RefreshEquipmentState();
	}
	else
	{
		bIsWaitingForDataLoad = true;
	}

	// Once the item has been set, is safe to say the equipment was added.
	OnEquipmentAdded.Broadcast(this);
}

void UNinjaEquipment::MarkEquipmentAsLoaded()
{
	if (!IsValid(GetEquipmentManager()))
	{
		return;	
	}
	
	bIsDataLoaded = true;

	// If we were waiting for the data load (meaning the item was already replicated),
	// then we need to perform the initial refresh on the equipment state here.
	//
	if (bIsWaitingForDataLoad)
	{
		bIsWaitingForDataLoad = false;
		RefreshEquipmentState();
	}
}

void UNinjaEquipment::SetEquipmentManager(UNinjaEquipmentManagerComponent* NewEquipmentManager)
{
	if (!EquipmentManager && NewEquipmentManager)
	{
		EquipmentManager = NewEquipmentManager;
	}
	else if (EquipmentManager && !NewEquipmentManager)
	{
		EquipmentManager = nullptr;
	}
}

void UNinjaEquipment::SetStateTag(const FGameplayTag NewStateTag)
{
	if (NewStateTag.IsValid() && StateTag != NewStateTag)
	{
		PreviousStateTag = StateTag;
		StateTag = NewStateTag;

		BP_OnStateTagChanged(StateTag, PreviousStateTag);
		OnEquipmentStateChanged.Broadcast(this);
	}
}

void UNinjaEquipment::RefreshEquipmentState()
{
	const UNinjaEquipmentDataAsset* Data = GetData();
	check (IsValid(Data));

	FEquipmentStateConfiguration PreviousStateConfiguration;
	if (Data->GetStateConfiguration(PreviousStateTag, PreviousStateConfiguration))
	{
		UnusedMeshComponents.Empty();
		RemoveContainers();
		ClearMeshes();
		UnlinkAnimationLayers();
		RemoveFromAbilitySystem();
	}
	
	FEquipmentStateConfiguration CurrentStateConfiguration;
	if (Data->GetStateConfiguration(StateTag, CurrentStateConfiguration))
	{
		SpawnOrReuseActors();
		AddContainers();
		ClearUnusedMeshes();
		SetMeshes();
		LinkAnimationLayers();
		AddToAbilitySystem();
	}
	else
	{
		DestroyAllActors();
	}
}

void UNinjaEquipment::RevertCurrentState()
{
	const UNinjaEquipmentDataAsset* Data = GetData();
	check (IsValid(Data));

	FEquipmentStateConfiguration StateConfiguration;
	if (Data->GetStateConfiguration(StateTag, StateConfiguration))
	{
		RemoveContainers();
		ClearMeshes();
		UnlinkAnimationLayers();
		RemoveFromAbilitySystem();
		DestroyAllActors();
	}
}

void UNinjaEquipment::AddContainers()
{
	const APawn* OwningPawn = GetPawn();
	if (!IsValid(Item) || !IsValid(OwningPawn) || !OwningPawn->HasAuthority())
	{
		return;
	}

	FEquipmentStateConfiguration StateConfiguration;
	if (!EquipmentData->GetStateConfiguration(StateTag, StateConfiguration))
	{
		return;
	}

	UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (!IsValid(InventoryManager))
	{
		return;
	}
	
	StateContainers.Empty();
	StateContainers.Reserve(StateConfiguration.Containers.Num());

	for (TSoftObjectPtr<UNinjaInventoryContainerDataAsset> ContainerDataPtr : StateConfiguration.Containers)
	{
		const UNinjaInventoryContainerDataAsset* ContainerData = ContainerDataPtr.Get();
		if (IsValid(ContainerData))
		{
			FInventoryContainerContext ContainerContext, ResultContext;
			ContainerContext.SetContainerData(ContainerData);
			ContainerContext.SetOwningItem(Item);
			InventoryManager->AddContainer(ContainerContext, ResultContext);

			if (ResultContext.IsSuccessful())
			{
				UNinjaInventoryContainer* NewContainer = ContainerContext.GetContainer();
				StateContainers.Add(NewContainer);
			}
			else
			{
				const UNinjaInventoryItemDataAsset* ItemData = Item->GetData();
				EQUIPMENT_LOG_ARGS(Warning, "Unable to add container '%s' from item '%s'.", 
					*GetNameSafe(ContainerData), *GetNameSafe(ItemData));
			}			
		}
	}
}

void UNinjaEquipment::RemoveContainers()
{
	const APawn* OwningPawn = GetPawn();
	if (!IsValid(OwningPawn) || !OwningPawn->HasAuthority())
	{
		return;
	}

	UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (IsValid(InventoryManager))
	{
		InventoryManager->RemoveContainersFromItem(Item);
		StateContainers.Empty();
	}
}

void UNinjaEquipment::SetMeshes()
{
	FEquipmentStateConfiguration StateConfiguration;
	if (!EquipmentData->GetStateConfiguration(StateTag, StateConfiguration))
	{
		return;
	}
	
	TArray<FStoredEquipmentMeshComponent> MeshComponents;
	auto UpdateMeshAssets = [&MeshComponents, this](const auto& MeshArray)
	{
		for (const auto& EquipmentMeshSetup : MeshArray)
		{
			if (EquipmentMeshSetup.Mesh.IsValid() && IsCompatibleMesh(EquipmentMeshSetup))
			{
				const FGameplayTag SlotTag = EquipmentMeshSetup.SlotTag;

				UStreamableRenderAsset* Mesh = EquipmentMeshSetup.Mesh.Get();
				UMeshComponent* MeshComponent = EquipmentManager->SetMeshToSlot(SlotTag, Mesh, EquipmentMeshSetup.SocketName);

				if (IsValid(MeshComponent))
				{
					const FName AssignedTagName = Tag_Equipment_Slot_Assigned.GetTag().GetTagName();
					MeshComponent->ComponentTags.AddUnique(AssignedTagName);

					FStoredEquipmentMeshComponent& SavedComponent = MeshComponents.AddDefaulted_GetRef();
					SavedComponent.SlotTag = SlotTag;
					SavedComponent.MeshComponent = MeshComponent;
				}
			}
		}
	};

	const int32 Size = StateConfiguration.SkeletalMeshes.Num() + StateConfiguration.StaticMeshes.Num();
	
	if (Size > 0)
	{
		MeshComponents.Reserve(Size);
		UpdateMeshAssets(StateConfiguration.SkeletalMeshes);
		UpdateMeshAssets(StateConfiguration.StaticMeshes);
	}	

	ModifiedMeshComponents.Empty();
	ModifiedMeshComponents.Reserve(Size);

	for (const FStoredEquipmentMeshComponent& EquipmentMesh : MeshComponents)
	{
		const FGameplayTag SlotTag = EquipmentMesh.SlotTag;
		UMeshComponent* MeshComponent = EquipmentMesh.GetMeshComponent(); 
		
		if (MeshComponent->IsA(USkeletalMeshComponent::StaticClass()))
		{
			USkeletalMeshComponent* SkeletalMeshComponent = Cast<USkeletalMeshComponent>(MeshComponent);
			BP_OnSkeletalMeshSet(SlotTag, SkeletalMeshComponent);
		}
		else if (MeshComponent->IsA(UStaticMeshComponent::StaticClass()))
		{
			UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(MeshComponent);
			BP_OnStaticMeshSet(SlotTag, StaticMeshComponent);
		}

		ModifiedMeshComponents.Add(EquipmentMesh);
	}
}

void UNinjaEquipment::ClearUnusedMeshes()
{
	FEquipmentStateConfiguration StateConfiguration;
	if (!EquipmentData->GetStateConfiguration(StateTag, StateConfiguration))
	{
		return;
	}

	if (!StateConfiguration.UnusedSlotTags.IsEmpty())
	{
		const FGameplayTagContainer SlotsToClear  = StateConfiguration.UnusedSlotTags;
		for (const FGameplayTag& SlotTag : SlotsToClear)
		{
			UMeshComponent* MeshComponent = EquipmentManager->ClearMeshAsset(SlotTag);
			
			FStoredEquipmentMeshComponent& SavedComponent = UnusedMeshComponents.AddDefaulted_GetRef();
			SavedComponent.SlotTag = SlotTag;
			SavedComponent.MeshComponent = MeshComponent;
		}
	}	
}

void UNinjaEquipment::ClearMeshes()
{
	for (auto It = ModifiedMeshComponents.CreateIterator(); It; ++It)
	{
		const FStoredEquipmentMeshComponent& EquipmentMesh = *It;
		
		const FGameplayTag SlotTag = EquipmentMesh.SlotTag;
		UMeshComponent* Component = EquipmentManager->ClearMeshAsset(SlotTag);
			
		const FName AssignedTagName = Tag_Equipment_Slot_Assigned.GetTag().GetTagName();
		Component->ComponentTags.Remove(AssignedTagName);

		It.RemoveCurrent();
	}	
}

void UNinjaEquipment::LinkAnimationLayers()
{
	FEquipmentStateConfiguration StateConfiguration;
	if (!EquipmentData->GetStateConfiguration(StateTag, StateConfiguration))
	{
		return;
	}	

	for (const FEquipmentAnimLayer& AnimLayer : StateConfiguration.AnimationLayers)
	{
		if (AnimLayer.AnimInstanceLayerClass.IsValid() && AnimLayer.SkeletalMeshComponentSelectorClass.IsValid())
		{
			const TSubclassOf<UAnimInstance> AnimLayerClass = AnimLayer.AnimInstanceLayerClass.Get();
			const TSubclassOf<UNinjaEquipmentSceneComponentSelector> SelectorClass = AnimLayer.SkeletalMeshComponentSelectorClass.Get();
			const UNinjaEquipmentSceneComponentSelector* Selector = GetDefault<UNinjaEquipmentSceneComponentSelector>(SelectorClass);

			USceneComponent* SceneComponent = Selector->SelectComponent(this);
			if (IsValid(SceneComponent) && SceneComponent->IsA<USkeletalMeshComponent>())
			{
				USkeletalMeshComponent* SkeletalMeshComponent = Cast<USkeletalMeshComponent>(SceneComponent);
				if (SkeletalMeshComponent->GetLinkedAnimLayerInstanceByClass(AnimLayerClass) == nullptr)
				{
					SkeletalMeshComponent->LinkAnimClassLayers(AnimLayerClass);
					
					FStoredEquipmentAnimLayer& SavedAnimLayer = AnimLayers.AddDefaulted_GetRef();
					SavedAnimLayer.MeshComponent = SkeletalMeshComponent;
					SavedAnimLayer.AnimInstanceLayerClass = AnimLayerClass;
				}
			}
		}		
	}
}

void UNinjaEquipment::UnlinkAnimationLayers()
{
	for (auto It = AnimLayers.CreateIterator(); It; ++It)
	{
		FStoredEquipmentAnimLayer StoredAnimLayer = *It;
		
		USkeletalMeshComponent* SkeletalMeshComponent = StoredAnimLayer.GetSkeletalMeshComponent();
		if (IsValid(SkeletalMeshComponent))
		{
			const TSubclassOf<UAnimInstance> AnimLayer = StoredAnimLayer.AnimInstanceLayerClass;
			SkeletalMeshComponent->UnlinkAnimClassLayers(AnimLayer);	
		}

		It.RemoveCurrent();
	}
}

void UNinjaEquipment::SpawnOrReuseActors()
{
	const APawn* OwningPawn = GetPawn();
	if (!IsValid(EquipmentManager) || !IsValid(OwningPawn) || !OwningPawn->HasAuthority())
	{
		return;
	}

	FEquipmentStateConfiguration StateConfiguration;
	if (!EquipmentData->GetStateConfiguration(StateTag, StateConfiguration))
	{
		return;
	}

	TArray<AActor*> StateActors = GetSpawnedActors();
	StateActors.Reserve(StateConfiguration.Actors.Num());
	
	TSet<AActor*> ValidActors;
	ValidActors.Reserve(StateConfiguration.Actors.Num());
	
	for (const FEquipmentActor& ActorSetup : StateConfiguration.Actors)
	{
		if (!ActorSetup.ActorClass.IsValid())
		{
			EQUIPMENT_LOG(Warning, "Attempt to spawn an actor that wasn't loaded.");
			continue;
		}

		if (!ActorSetup.SceneComponentSelectorClass.IsValid())
		{
			EQUIPMENT_LOG(Warning, "No selector class provided for actor attachment.");
			continue;
		}		

		const TSubclassOf<AActor> ActorClass = ActorSetup.ActorClass.Get();
		const TSubclassOf<UNinjaEquipmentSceneComponentSelector> SelectorClass = ActorSetup.SceneComponentSelectorClass.Get();

		AActor* StateActor = nullptr;
		
		const int32 Idx = StateActors.IndexOfByPredicate([ActorClass](const AActor* SpawnedActor){ return SpawnedActor->GetClass() == ActorClass; }); 
		if (Idx != INDEX_NONE)
		{
			// This actor was already spawned, so we will reuse-it.
			StateActor = StateActors[Idx];
			ValidActors.Add(StateActor);
		}
		else
		{
			// This actor needs to be spawned.
			StateActor = EquipmentManager->CreateEquipmentActor(ActorClass, this);
			checkf(IsValid(StateActor), TEXT("Unable to spawn State Actor!"));
			
			StateActors.Add(StateActor);
			ValidActors.Add(StateActor);
		}

		if (IsValid(StateActor))
		{
			const FGameplayTag SlotTag = ActorSetup.SlotTag;
			const FName SocketName = EquipmentManager->GetSocketNameForEquipmentSlot(SlotTag);
			AttachEquipmentActor(StateActor, SelectorClass, SocketName);
		}
	}

	// Clear all actors that were in the previous state but won't be in the next one.
	for (auto It = StateActors.CreateIterator(); It; ++It)
	{
		AActor* StateActor = *It;
		if (!ValidActors.Contains(StateActor))
		{
			It.RemoveCurrent();
		}
	}
	
	SynchronizeSavedActors(StateActors);
}

void UNinjaEquipment::AttachEquipmentActor(AActor* EquipmentActor, TSubclassOf<UNinjaEquipmentSceneComponentSelector> SelectorClass, const FName SocketName) const
{
	if (!IsValid(EquipmentActor) || !IsValid(SelectorClass) || SocketName == NAME_None)
	{
		return;
	}
	
	const UNinjaEquipmentSceneComponentSelector* Selector = GetDefault<UNinjaEquipmentSceneComponentSelector>(SelectorClass);
	if (!IsValid(Selector))
	{
		EQUIPMENT_LOG(Warning, "Failed to instantiate the selector class.");
		return;
	}
	
	USceneComponent* AttachTarget = Selector->SelectComponent(this);
	if (!IsValid(AttachTarget))
	{
		EQUIPMENT_LOG(Warning, "Attach Target is not valid.");
		return;
	}

	const USceneComponent* CurrentTarget = EquipmentActor->GetParentComponent();
	const FName CurrentSocket = EquipmentActor->GetAttachParentSocketName();
	
	if (AttachTarget != CurrentTarget || SocketName != CurrentSocket)
	{
		EquipmentActor->AttachToComponent(AttachTarget, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);	
	}		
}

void UNinjaEquipment::SynchronizeSavedActors(TArray<AActor*>& StateActors)
{
	// If there are no actors yet, then just store the new array.
	if (SpawnedActors.IsEmpty())
	{
		SpawnedActors = StateActors;
		return;
	}

	// A set provides O(1) average time complexity for Contains checks.
	const TSet StateActorsSet(StateActors);
	
	for (auto It = SpawnedActors.CreateIterator(); It; ++It)
	{
		AActor* SpawnedActor = *It;
		if (!StateActorsSet.Contains(SpawnedActor) && IsValid(SpawnedActor))
		{
			SpawnedActor->Destroy();
			It.RemoveCurrent();
		}
	}

	SpawnedActors.Shrink();
	SpawnedActors.Reserve(StateActors.Num());
	
	for (AActor* StateActor : StateActors)
	{
		SpawnedActors.AddUnique(StateActor);
	}
}

void UNinjaEquipment::AddToAbilitySystem()
{
	if (!IsValid(EquipmentManager))
	{
		return;
	}

	FEquipmentAbilityHandles Handles;
	EquipmentManager->GrantToAbilitySystem(this, Handles);

	if (Handles.HasValidHandles())
	{
		AbilityHandles = MakeShared<FEquipmentAbilityHandles>(Handles);
	}
}

void UNinjaEquipment::RemoveFromAbilitySystem()
{
	if (AbilityHandles.IsValid() && AbilityHandles->HasValidHandles())
	{
		const UNinjaEquipmentManagerComponent* ManagerComponent = GetEquipmentManager();
		check(IsValid(ManagerComponent));

		FEquipmentAbilityHandles& Handles = *AbilityHandles.Get();
		ManagerComponent->RevokeFromAbilitySystem(Handles);
		AbilityHandles.Reset();
	}
}

void UNinjaEquipment::DestroyAllActors()
{
	if (GetPawn()->HasAuthority())
	{
		for (auto It = SpawnedActors.CreateIterator(); It; ++It)
		{
			It->Get()->Destroy();
			It.RemoveCurrent();
		}
	}
}

bool UNinjaEquipment::IsCompatibleMesh(const FEquipmentBaseMesh& EquipmentMesh) const
{
	AActor* EquipmentOwner = GetPawn();
	if (!IsValid(EquipmentOwner))
	{
		return false;
	}
	
	for (TSoftClassPtr<UNinjaEquipmentAssetCompatibilityCheck> CheckPtr : EquipmentMesh.CompatibilityChecks)
	{
		if (CheckPtr.IsValid())
		{
			const UNinjaEquipmentAssetCompatibilityCheck* Check = GetDefault<UNinjaEquipmentAssetCompatibilityCheck>(CheckPtr.Get());
			if (!Check->IsCompatible(EquipmentMesh.MeshTags, EquipmentOwner))
			{
				return false;
			}
		}
	}

	// Unless a compatibility check fails, we assume the mesh is compatible. 
	return true;
}

IEquipableItemInterface* UNinjaEquipment::GetEquipableInterfaceFromItem(const UNinjaInventoryItem* TargetItem)
{
	if (!IsValid(TargetItem))
	{
		return nullptr;
	}
	
	UNinjaInventoryItemFragment* Fragment = TargetItem->FindFragmentByInterface(UEquipableItemInterface::StaticClass());
	if (!IsValid(Fragment))
	{
		return nullptr;
	}

	return Cast<IEquipableItemInterface>(Fragment);
}

void UNinjaEquipment::UseEquipment_Implementation()
{
	for (AActor* SpawnedActor : SpawnedActors)
	{
		if (IsValid(SpawnedActor) && SpawnedActor->Implements<UUsableEquipmentInterface>())
		{
			Execute_UseEquipment(SpawnedActor);
		}
	}
}

APawn* UNinjaEquipment::GetPawn() const
{
	return Cast<APawn>(GetOuter());
}

TArray<UNinjaInventoryContainer*> UNinjaEquipment::GetStateContainers() const
{
	return StateContainers;
}

TArray<FStoredEquipmentMeshComponent> UNinjaEquipment::GetModifiedMeshComponents() const
{
	return ModifiedMeshComponents;
}

TArray<FStoredEquipmentMeshComponent> UNinjaEquipment::GetUnusedMeshComponents() const
{
	return UnusedMeshComponents;
}

TArray<FStoredEquipmentAnimLayer> UNinjaEquipment::GetLinkedAnimationLayers() const
{
	return AnimLayers;
}

TArray<AActor*> UNinjaEquipment::GetSpawnedActors() const
{
	return SpawnedActors;
}

AActor* UNinjaEquipment::GetEffectCauserActor() const
{
	if (SpawnedActors.IsEmpty())
	{
		// No actors to use, no need to go further.
		return nullptr;
	}
	
	if (SpawnedActors.Num() == 1)
	{
		// Only one actor, so that's an easy pick.
		return SpawnedActors[0];
	}

	// Multiple actors, we'll have to check the interface.
	for (AActor* SpawnedActor : SpawnedActors)
	{
		if (IsValid(SpawnedActor)
			&& SpawnedActor->Implements<UEquipmentActorInterface>()
			&& IEquipmentActorInterface::Execute_IsEffectCauser(SpawnedActor))
		{
			return SpawnedActor;
		}
	}
	
	EQUIPMENT_LOG_ARGS(Warning, "Equipment '%s' has multiple actors, but no effect causer!", *GetNameSafe(GetData()));
	return nullptr;
}

FGameplayTagContainer UNinjaEquipment::GetEquipmentTags() const
{
	FGameplayTagContainer Tags = FGameplayTagContainer::EmptyContainer;
	Tags.AddTagFast(GetStateTag());

	if (IsValid(Item))
	{
		FGameplayTagContainer ItemTags;
		Item->GetOwnedGameplayTags(ItemTags);
		Tags.AppendTags(ItemTags);
	}

	const UNinjaInventoryContainer* Container = GetContainer();
	if (IsValid(Container))
	{
		FGameplayTagContainer ContainerTags;
		Container->GetOwnedGameplayTags(ContainerTags);
		Tags.AppendTags(ContainerTags);
	}
	
	return Tags;
}

FGameplayTag UNinjaEquipment::GetSlotTag() const
{
	FGameplayTagContainer FilterContainer = FGameplayTagContainer::EmptyContainer;
	FilterContainer.AddTagFast(Tag_Equipment_Slot);
	return GetEquipmentTags().Filter(FilterContainer).First();
}

UNinjaInventoryContainer* UNinjaEquipment::GetContainer() const
{
	if (IsValid(Item))
	{
		const IStorableItemInterface* StorageFragment = Cast<IStorableItemInterface>(Item->FindFragmentByInterface(UStorableItemInterface::StaticClass()));
		if (StorageFragment != nullptr)
		{
			return StorageFragment->GetPrimaryContainer(Item); 
		}	
	}
	
	return nullptr;
}

UNinjaInventoryItem* UNinjaEquipment::GetItem() const
{
	return Item;
}

IEquipableItemInterface* UNinjaEquipment::GetEquipableInterface() const
{
	return GetEquipableInterfaceFromItem(Item);
}

const UNinjaEquipmentDataAsset* UNinjaEquipment::GetData() const
{
	return EquipmentData;
}

UNinjaEquipmentManagerComponent* UNinjaEquipment::GetEquipmentManager() const
{
	return EquipmentManager;
}

UNinjaInventoryManagerComponent* UNinjaEquipment::GetInventoryManager() const
{
	return EquipmentManager->GetInventoryManager();
}

UAbilitySystemComponent* UNinjaEquipment::GetAbilitySystemComponent() const
{
	checkf(GetEquipmentManager(), TEXT("Missing equipment manager!"));
	return GetEquipmentManager()->GetAbilitySystemComponent();
}

USceneComponent* UNinjaEquipment::GetRootComponent_Implementation() const
{
	USceneComponent* AttachTarget = nullptr;
	
	const APawn* OwningPawn = GetPawn();
	if (IsValid(OwningPawn))
	{
		AttachTarget = OwningPawn->GetRootComponent();

		const ACharacter* OwningCharacter = Cast<ACharacter>(OwningPawn);
		if (IsValid(OwningCharacter))
		{
			AttachTarget = OwningCharacter->GetMesh();
		}		
	}

	return AttachTarget;
}

UWorld* UNinjaEquipment::GetWorld() const
{
	const APawn* OwningPawn = GetPawn();
	return IsValid(OwningPawn) ? OwningPawn->GetWorld() : nullptr;
}
