// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaEquipmentManagerComponent.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaInventoryEquipmentLog.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "NinjaInventoryTags.h"
#include "Async/NinjaInventoryAction_WaitForInventorySystem.h"
#include "Components/MeshComponent.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Data/NinjaEquipmentDataAsset.h"
#include "Data/NinjaEquipmentSlotDataAsset.h"
#include "Data/NinjaInventoryContainerDataAsset.h"
#include "Engine/ActorChannel.h"
#include "Engine/AssetManager.h"
#include "Engine/DataTable.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/NinjaEquipmentAssetCompatibilityCheck.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/NinjaInventoryItemFragment.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/EquipmentActorInterface.h"
#include "Interfaces/ItemMagnitudeProviderInterface.h"
#include "Interfaces/Aspects/EquipableItemInterface.h"
#include "Interfaces/Aspects/UpgradeableItemInterface.h"
#include "Net/UnrealNetwork.h"
#include "Types/FEquipment.h"

UNinjaEquipmentManagerComponent::UNinjaEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, ManagedEquipment(this)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	
	SetIsReplicatedByDefault(true);

	bHasInventoryManager = false;	

	static const FString AllEquipmentDescription = TEXT("Finds all equipment containers.");
	AllEquipmentContainersQuery.Build(FGameplayTagQueryExpression()
		.AllTagsMatch()
		.AddTag(Tag_Inventory_Container_Equipment),
		AllEquipmentDescription);

	static const FString RelevantEquipmentDescription = TEXT("Finds relevant (non-cosmetic) equipment containers.");
	RelevantEquipmentContainersQuery.Build(FGameplayTagQueryExpression()
		.AllExprMatch()
			.AddExpr(FGameplayTagQueryExpression().AllTagsMatch().AddTag(Tag_Inventory_Container_Equipment))
			.AddExpr(FGameplayTagQueryExpression().NoTagsMatch().AddTag(Tag_Inventory_Container_Cosmetics)),
			RelevantEquipmentDescription);
	
	DefaultStateTag = Tag_Equipment_State_Activated;
	InventoryManagerPollInterval = 0.2f;
	InventoryManagerMaxWait = 3.f;

	HiddenSlotTags = FGameplayTagContainer::EmptyContainer;
}

void UNinjaEquipmentManagerComponent::InitializeComponent()
{
	Super::InitializeComponent();
	
	// Reinforce the equipment manager for fast array serializers.
	//
	// Child-blueprints may get broken instances (GEN_VARIABLE) during construction, so we want to make
	// sure that, in case any of these serializers have invalid instances, they'll receive a valid one.
	//
	ManagedEquipment.SetEquipmentManager(this);

	// Create the inverse socket map to improve performance of inverse lookup of sockets.
	//
	// This can happen quite often, for many animations, therefore we want to ensure that this inverse
	// lookup happens at the same O(1) speed that the regular map lookups (tag -> names).
	//
	CreateInverseSocketMap();
}

void UNinjaEquipmentManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, ManagedEquipment);
}

void UNinjaEquipmentManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	TryConnectToInventoryManager();
	LoadDefaultMeshes();
}

void UNinjaEquipmentManagerComponent::TryConnectToInventoryManager()
{
	const UNinjaInventoryManagerComponent* InventoryManager = UNinjaInventoryFunctionLibrary::GetInventoryManager(GetOwner());
	if (IsValid(InventoryManager) && InventoryManager->IsInventoryInitialized())
	{
		InitializeEquipment();
	}
	else
	{
		InventoryManagerAction = UNinjaInventoryAction_WaitForInventorySystem::CreateAction(this, GetOwner(), InventoryManagerPollInterval, InventoryManagerMaxWait);
		check(IsValid(InventoryManagerAction));
		
		EQUIPMENT_LOG(Verbose, "Waiting for Inventory Manager...");
		InventoryManagerAction->OnCompleted.AddUniqueDynamic(this, &ThisClass::InitializeEquipment);
		InventoryManagerAction->Activate();
	}
}

void UNinjaEquipmentManagerComponent::CreateInverseSocketMap()
{
	InverseSlotSocketMapping.Empty();

	for (const TPair<FGameplayTag, FName>& Pair : SlotSocketMapping)
	{
		const FGameplayTag& Key = Pair.Key;
		const FName& Value = Pair.Value;

		FGameplayTagContainer* ExistingKeys = InverseSlotSocketMapping.Find(Value);
		if (ExistingKeys)
		{
			ExistingKeys->AddTag(Key);
		}
		else
		{
			FGameplayTagContainer Container = FGameplayTagContainer::EmptyContainer;
			Container.AddTagFast(Key);
			InverseSlotSocketMapping.Add(Value, Container);
		}
	}
}

void UNinjaEquipmentManagerComponent::InitializeEquipment()
{
	bHasInventoryManager = true;
	EQUIPMENT_LOG(Verbose, "Equipment Manager connected to Inventory Manager.");
	
	if (!ItemsWaitingForInventory.IsEmpty())
	{
		EQUIPMENT_LOG_ARGS(Verbose, "Initializing equipment from %d item(s) in queue...", ItemsWaitingForInventory.Num());
		for (auto It = ItemsWaitingForInventory.CreateIterator(); It; ++It)
		{
			InitializeEquipmentForItem(*It);
			It.RemoveCurrent();
		}
	}
}

void UNinjaEquipmentManagerComponent::LoadDefaultMeshes()
{
	if (IsValid(DefaultSlotData))
	{
		ClearDefaultSlotMeshes();
		
		UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
		if (IsValid(AssetManager))
		{
			const TArray<FName> Bundles = { "Meshes" };
			const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(this, &ThisClass::AssignDefaultMeshes);
			DefaultSlotsHandle = AssetManager->LoadPrimaryAsset(DefaultSlotData->GetPrimaryAssetId(), Bundles, Delegate, FStreamableManager::AsyncLoadHighPriority);
		}
	}
}

void UNinjaEquipmentManagerComponent::AssignDefaultMeshes()
{
	check(IsValid(DefaultSlotData));

	FGameplayTagContainer DefaultSlotTags;
	for (FEquipmentSkeletalMesh& DefaultMesh : DefaultSlotData->SkeletalMeshes)
	{
		if (!DefaultSlotTags.HasTagExact(DefaultMesh.SlotTag))
		{
			DefaultSlotTags.AddTagFast(DefaultMesh.SlotTag);
		}
	}

	for (const FGameplayTag& SlotTag : DefaultSlotTags)
	{
		TOptional<FEquipmentSkeletalMesh> OptionalDefaultMesh = Internal_SelectDefaultMesh(SlotTag);
		if (OptionalDefaultMesh.IsSet())
		{
			const FEquipmentSkeletalMesh& DefaultMesh = OptionalDefaultMesh.GetValue();
			SetDefaultMeshToSlot(DefaultMesh, SlotTag);
		}
	}
}

void UNinjaEquipmentManagerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (IsValid(InventoryManagerAction))
	{
		InventoryManagerAction->Cancel();
		InventoryManagerAction = nullptr;
	}
	
	EquipmentWaitingForReplication.Empty();
	
	ClearDefaultSlotMeshes();
	DestroyEquipment();
	
	Super::EndPlay(EndPlayReason);
}

void UNinjaEquipmentManagerComponent::ClearDefaultSlotMeshes()
{
	if (IsValid(DefaultSlotData))
	{
		for (const FEquipmentSkeletalMesh& DefaultMesh : DefaultSlotData->SkeletalMeshes)
		{
			const FGameplayTag& SlotTag = DefaultMesh.SlotTag;
			USkeletalMeshComponent* MeshComponent = GetMeshComponentForSlotTag(SlotTag);
			if (IsValid(MeshComponent))
			{
				MeshComponent->SetSkeletalMeshAsset(nullptr);
				EQUIPMENT_LOG_ARGS(Verbose, "Cleared default slot mesh for %s.", *SlotTag.ToString());
			}
		}
	}

	if (DefaultSlotsHandle.IsValid() && DefaultSlotsHandle->IsActive())
	{
		DefaultSlotsHandle->ReleaseHandle();
		EQUIPMENT_LOG(Verbose, "Released Asset Manager handle for default slots.");
	}	
}

void UNinjaEquipmentManagerComponent::DestroyEquipment()
{
	if (OwnerHasAuthority())
	{
		ManagedEquipment.RemoveAllEntries();
	}
}

bool UNinjaEquipmentManagerComponent::HasEquipment(const UNinjaEquipment* Equipment) const
{
	if (!IsValid(Equipment))
	{
		return false;
	}
	
	const int32 Idx = ManagedEquipment.IndexOfByEquipment(Equipment);
	return Idx != INDEX_NONE;
}

bool UNinjaEquipmentManagerComponent::HasItemInInventoryQueue(const UNinjaInventoryItem* Item) const
{
	return ItemsWaitingForInventory.Contains(Item); 
}

TArray<UNinjaInventoryContainer*> UNinjaEquipmentManagerComponent::GetAllEquipmentContainers() const
{
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (!IsValid(InventoryManager))
	{
		return TArray<UNinjaInventoryContainer*>();
	}

	return InventoryManager->GetContainersByQuery(AllEquipmentContainersQuery);
}

TArray<UNinjaInventoryContainer*> UNinjaEquipmentManagerComponent::GetRelevantEquipmentContainers() const
{
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (!IsValid(InventoryManager))
	{
		return TArray<UNinjaInventoryContainer*>();
	}

	return InventoryManager->GetContainersByQuery(RelevantEquipmentContainersQuery);	
}

UNinjaEquipment* UNinjaEquipmentManagerComponent::GetEquipmentByItem(const UNinjaInventoryItem* Item) const
{
	const int32 Idx = ManagedEquipment.IndexOfByItem(Item);
	if (Idx != INDEX_NONE)
	{
		return ManagedEquipment.Entries[Idx].Equipment;
	}

	return nullptr;
}

UNinjaEquipment* UNinjaEquipmentManagerComponent::GetFirstEquipmentByQuery(const FGameplayTagQuery& Query) const
{
	const TArray<FEquipmentEntry> Entries = ManagedEquipment.FilterByQuery(Query);
	if (!Entries.IsEmpty())
	{
		return Entries[0].Equipment;
	}

	return nullptr;
}

UNinjaEquipment* UNinjaEquipmentManagerComponent::GetEquipmentBySlot(const UNinjaInventoryContainer* Slot) const
{
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	if (IsValid(InventoryManager))
	{
		const TArray<UNinjaInventoryItem*> Items = InventoryManager->GetItemsByContainer(Slot);
		if (!Items.IsEmpty())
		{
			const int32 Idx = ManagedEquipment.IndexOfByItem(Items[0]);
			if (Idx != INDEX_NONE)
			{
				return ManagedEquipment.Entries[Idx].Equipment;
			}
		}	
	}

	return nullptr;
}

TArray<UNinjaEquipment*> UNinjaEquipmentManagerComponent::GetEquipmentByQuery(const FGameplayTagQuery& Query) const
{
	TArray<UNinjaEquipment*> Results;

	const TArray<FEquipmentEntry> Entries = ManagedEquipment.FilterByQuery(Query);
	if (!Entries.IsEmpty())
	{
		Results.Reserve(Entries.Num());
		for (const FEquipmentEntry& Entry : Entries)
		{
			Results.Add(Entry.Equipment);
		}
	}

	return Results;
}

void UNinjaEquipmentManagerComponent::InitializeEquipmentForItem(UNinjaInventoryItem* Item)
{
	if (!OwnerHasAuthority() || !IsValid(Item))
	{
		EQUIPMENT_LOG(Warning, "Unable to create equipment for item.");
		return;
	}

	const UNinjaInventoryItemFragment* Fragment = Item->FindFragmentByInterface(UEquipableItemInterface::StaticClass());
	if (!IsValid(Fragment))
	{
		EQUIPMENT_LOG_ARGS(Warning, "Item %s does not have an Equipable Fragment.", *GetNameSafe(Item));
		return;
	}

	const IEquipableItemInterface* EquipmentFragment = Cast<IEquipableItemInterface>(Fragment);
	const UNinjaEquipmentDataAsset* EquipmentData = EquipmentFragment->GetEquipmentDataAsset();
	if (!IsValid(EquipmentData) || !IsValid(EquipmentData->EquipmentInstanceClass))
	{
		EQUIPMENT_LOG_ARGS(Warning, "Equipment Fragment for item %s does not have a valid Equipment Definition.", *GetNameSafe(Item));
		return;
	}

	if (HasBegunPlay() && bHasInventoryManager)
	{
		const TSubclassOf<UNinjaEquipment> EquipmentClass = EquipmentData->EquipmentInstanceClass;
        UNinjaEquipment* Equipment = NewObject<UNinjaEquipment>(GetOwner(), EquipmentClass);
    
        Equipment->SetItem(Item);
        Equipment->SetEquipmentManager(this);
    
        FGameplayTag ContainerStateTag = GetBestEquipmentState(Equipment);
        Equipment->SetStateTag(ContainerStateTag);
    
        AddEquipment(Equipment, ContainerStateTag);
		EQUIPMENT_LOG_ARGS(Log, "Initialized equipment for item %s.", *GetNameSafe(Item));
	}
	else
	{
		ItemsWaitingForInventory.AddUnique(Item);
		EQUIPMENT_LOG_ARGS(Log, "Added item %s to the initialization queue.", *GetNameSafe(Item));
	}
}

void UNinjaEquipmentManagerComponent::AddEquipment(UNinjaEquipment* Equipment, FGameplayTag& InitialStateTag)
{
	if (OwnerHasAuthority() && IsValid(Equipment))
	{
		InitialStateTag = GetBestEquipmentState(Equipment, InitialStateTag);
		Equipment->SetStateTag(InitialStateTag);
		
		// Initial/default equipment might arrive before the component is ready to replicate.
		// To handle that scenario, we must store the equipment and allow them to be added
		// again when the component is ready for replication.
		//
		if (IsReadyForReplication())
		{
			AddReplicatedSubObject(Equipment);
			ManagedEquipment.AddEntry(Equipment, InitialStateTag);
		}
		else
		{
			EquipmentWaitingForReplication.Add(Equipment);			
		}
	}
}

FGameplayTag UNinjaEquipmentManagerComponent::GetBestEquipmentState(UNinjaEquipment* Equipment, const FGameplayTag PreferredState)
{
	// We received a preferred state, let's go with it.
	if (PreferredState.IsValid())
	{
		return PreferredState;
	}

	// The next priority is a state defined by the equipment.
	if (Equipment->GetStateTag().IsValid())
	{
		return Equipment->GetStateTag();
	}

	// Next, we can check if our container defines a state that we can use.
	const FGameplayTag ContainerState = GetEquipmentStateFromContainer(Equipment); 
	if (ContainerState.IsValid())
	{
		return ContainerState; 
	}

	// No state retrieved, use the one assigned to this component.
	return DefaultStateTag;
}

FGameplayTag UNinjaEquipmentManagerComponent::GetEquipmentStateFromContainer(UNinjaEquipment* Equipment)
{
	if (!IsValid(Equipment))
	{
		EQUIPMENT_LOG(Warning, "No equipment provided.");
		return Tag_Equipment_State_Deactivated;
	}

	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	const UNinjaInventoryContainer* Container = InventoryManager->GetPrimaryContainerForItem(Equipment->GetItem());
	if (!IsValid(Container))
	{
		EQUIPMENT_LOG_ARGS(Warning, "No container found for equipment %s.", *GetNameSafe(Equipment));
		return Tag_Equipment_State_Deactivated;
	}

	return Container->GetData()->GetDefaultStateTag();
}

void UNinjaEquipmentManagerComponent::HandleEquipmentAdded(const FEquipmentEntry& Entry, const int32 Idx)
{
	UNinjaEquipment* Equipment = Entry.Equipment;
	check(IsValid(Equipment));

	const FGameplayTag StateTag = ManagedEquipment.Entries[Idx].StateTag;
	Equipment->SetEquipmentManager(this);
	Equipment->SetStateTag(StateTag);
	
	LoadEquipmentAssets(Equipment);
	OnEquipmentAdded.Broadcast(Equipment);

	const FString EquipmentName = GetNameSafe(Equipment->GetData());
	const FString NetRoleName = OwnerHasAuthority() ? "Authority" : "Client";
	EQUIPMENT_LOG_ARGS(Verbose, "Added equipment %s on %s.", *EquipmentName, *NetRoleName);	
}

void UNinjaEquipmentManagerComponent::ChangeEquipmentState(UNinjaEquipment* Equipment, const FGameplayTag NewStateTag)
{
	if (!IsValid(Equipment))
	{
		EQUIPMENT_LOG(Warning, "Null equipment provided!");
		return;
	}
	
	if (Equipment->GetStateTag() == NewStateTag)
	{
		const FString EquipmentName = GetNameSafe(Equipment->GetData());
		EQUIPMENT_LOG_ARGS(Verbose, "Discarded repeated state '%s' for equipment '%s'.", *NewStateTag.ToString(), *EquipmentName);
		return;
	}
	
	if (OwnerHasAuthority())
	{
		const FString EquipmentName = GetNameSafe(Equipment->GetData());
		EQUIPMENT_LOG_ARGS(Verbose, "Changing equipment '%s' to state '%s'.", *EquipmentName, *NewStateTag.ToString());
		ManagedEquipment.ChangeState(Equipment, NewStateTag);
	}
	else if (OwnerIsLocallyControlled())
	{
		Server_ChangeEquipmentState(Equipment, NewStateTag);
	}
}

void UNinjaEquipmentManagerComponent::HandleEquipmentStateChanged(const FEquipmentEntry& Entry, const int32 Idx)
{
	UNinjaEquipment* Equipment = Entry.Equipment;
	check(IsValid(Equipment));

	const FGameplayTag StateTag = Entry.StateTag;
	Equipment->SetStateTag(StateTag);
	Equipment->RefreshEquipmentState();
	OnEquipmentStateChanged.Broadcast(Equipment);
}

void UNinjaEquipmentManagerComponent::RemoveEquipment(const UNinjaInventoryItem* Item)
{
	if (OwnerHasAuthority() && IsValid(Item))
	{
		UNinjaEquipment* Equipment = GetEquipmentByItem(Item);
		if (IsValid(Equipment))
		{
			ManagedEquipment.RemoveEntry(Equipment);
			RemoveReplicatedSubObject(Equipment);	
		}
	}
}

void UNinjaEquipmentManagerComponent::GrantToAbilitySystem(UNinjaEquipment* Source, FEquipmentAbilityHandles& OutHandles) const
{
	checkf(IsValid(Source), TEXT("Equipment Instance is missing."));

	if (OwnerHasAuthority())
	{
		const UNinjaEquipmentDataAsset* EquipmentDefinition = Source->GetData();
		checkf(IsValid(EquipmentDefinition), TEXT("Equipment Definition is missing."));

		UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponent();
		checkf(IsValid(AbilitySystemComponent), TEXT("Ability System Component missing."));

		const FGameplayTag StateTag = Source->GetStateTag();

		FEquipmentStateConfiguration StateConfiguration;
		if (EquipmentDefinition->GetStateConfiguration(StateTag, StateConfiguration))
		{
			AddAttributeSets(AbilitySystemComponent, StateConfiguration, OutHandles);
			ApplyGameplayEffects(AbilitySystemComponent, Source, StateConfiguration, OutHandles);
			GrantGameplayAbilities(AbilitySystemComponent, Source, StateConfiguration, OutHandles);			
		}
	}
}

void UNinjaEquipmentManagerComponent::RevokeFromAbilitySystem(FEquipmentAbilityHandles& Handles) const
{
	UAbilitySystemComponent* AbilitySystemComponent = GetAbilitySystemComponent();
	if (IsValid(AbilitySystemComponent) && OwnerHasAuthority() && Handles.HasValidHandles())
	{
		ClearGameplayAbilities(AbilitySystemComponent, Handles);
		RemoveGameplayEffects(AbilitySystemComponent, Handles);
		RemoveAttributeSets(AbilitySystemComponent, Handles);
	}
}

AActor* UNinjaEquipmentManagerComponent::CreateEquipmentActor(const TSubclassOf<AActor> EquipmentActorClass, UNinjaEquipment* Equipment)
{
	AActor* EquipmentActor = nullptr;
	
	if (OwnerHasAuthority() && IsValid(EquipmentActorClass) && IsValid(Equipment))
	{
		FActorSpawnParameters SpawnParameters = FActorSpawnParameters();

		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		EquipmentActor = GetWorld()->SpawnActorDeferred<AActor>(EquipmentActorClass, FTransform::Identity);
		check(IsValid(EquipmentActor));

		EquipmentActor->SetOwner(GetOwner());
		EquipmentActor->SetInstigator(Cast<APawn>(GetOwner()));
		EquipmentActor->AddTickPrerequisiteActor(GetOwner());
		
		if (EquipmentActor->Implements<UEquipmentActorInterface>())
		{
			// Set this Equipment Instance to the new actor, via the appropriate interface.
			// Do this before finishing spawning, so the equipment is available on "Begin Play".
			IEquipmentActorInterface::Execute_SetEquipment(EquipmentActor, Equipment);
		}

		const TArray<UActorComponent*>& ReceiverComponents = EquipmentActor->GetComponentsByInterface(UEquipmentActorInterface::StaticClass());
		for (int32 Idx = 0; Idx < ReceiverComponents.Num(); ++Idx)
		{
			// Set this Equipment Instance to any components that want to receive it.
			// Do this before finishing spawning, so the equipment is available on "Begin Play".
			IEquipmentActorInterface::Execute_SetEquipment(ReceiverComponents[Idx], Equipment);
		}
		
		EquipmentActor->FinishSpawning(FTransform::Identity);
	}

	return EquipmentActor;
}

float UNinjaEquipmentManagerComponent::GetAverageGearLevel(const float AbsoluteGearLevel) const
{
	return OnGetAverageGearLevel(AbsoluteGearLevel);
}

float UNinjaEquipmentManagerComponent::OnGetAverageGearLevel_Implementation(const float AbsoluteGearLevel) const
{
	const int32 SlotCount = FMath::Max(GetRelevantEquipmentContainers().Num(), 1);
	return AbsoluteGearLevel / SlotCount;
}

bool UNinjaEquipmentManagerComponent::HasEquipmentSlot(const FGameplayTag& SlotTag) const
{
	if (!SlotTag.IsValid())
	{
		return false;
	}

	// Check this first, since it is cheaper than finding components!
	if (SlotSocketMapping.Contains(SlotTag))
	{
		return true;
	}
	
	const FName TagName = SlotTag.GetTagName();
	const UMeshComponent* MeshComponent = GetOwner()->FindComponentByTag<UMeshComponent>(TagName);
	
	return IsValid(MeshComponent);
}

FName UNinjaEquipmentManagerComponent::GetSocketNameForEquipmentSlot(const FGameplayTag& SlotTag) const
{
	if (SlotTag.IsValid() && SlotSocketMapping.Contains(SlotTag))
	{
		return *SlotSocketMapping.Find(SlotTag);
	}

	return NAME_None;
}

FGameplayTagContainer UNinjaEquipmentManagerComponent::GetSlotTagForAttachmentSocket(const FName& AttachSocket) const
{
	if (AttachSocket != NAME_None && InverseSlotSocketMapping.Contains(AttachSocket))
	{
		return *InverseSlotSocketMapping.Find(AttachSocket);
	}

	return FGameplayTagContainer::EmptyContainer;
}

FGameplayTagContainer UNinjaEquipmentManagerComponent::GetHiddenEquipmentSlots() const
{
	return HiddenSlotTags;
}

int32 UNinjaEquipmentManagerComponent::HideEquipmentSlots(const FGameplayTagContainer& SlotTags)
{
	static constexpr bool bVisible = false;
	const int32 SlotCount = SetVisibilityToEquipmentSlots(SlotTags, bVisible);

	if (SlotCount > 0)
	{
		HiddenSlotTags.AppendTags(SlotTags);
	}

	return SlotCount;
}

int32 UNinjaEquipmentManagerComponent::ShowEquipmentSlots(const FGameplayTagContainer& SlotTags)
{
	static constexpr bool bVisible = true;
	const int32 SlotCount = SetVisibilityToEquipmentSlots(SlotTags, bVisible);

	if (SlotCount > 0)
	{
		HiddenSlotTags.RemoveTags(SlotTags);
	}

	return SlotCount;
}

int32 UNinjaEquipmentManagerComponent::SetVisibilityToEquipmentSlots(const FGameplayTagContainer& SlotTags, const bool bVisible) const
{
	int32 ComponentCount = 0;
	
	for (FGameplayTag SlotTag : SlotTags)
	{
		const FName TagName = SlotTag.GetTagName();
		
		TArray<UActorComponent*> Components = GetOwner()->GetComponentsByTag(UMeshComponent::StaticClass(), TagName);
		for (UActorComponent* Component : Components)
		{
			UMeshComponent* MeshComponent = Cast<UMeshComponent>(Component);
			MeshComponent->SetVisibility(bVisible);
			ComponentCount++;
		}
	}

	TArray<AActor*> Actors;
	GetOwner()->GetAttachedActors(Actors);
	for (AActor* EquipmentActor : Actors)
	{
		const FName SocketName = EquipmentActor->GetAttachParentSocketName();
		const FGameplayTagContainer AttachmentTags = GetSlotTagForAttachmentSocket(SocketName);
		
		if (SlotTags.HasAny(AttachmentTags))
		{
			EquipmentActor->SetActorHiddenInGame(!bVisible);		
		}
	}

	return ComponentCount;
}

void UNinjaEquipmentManagerComponent::LoadEquipmentAssets(UNinjaEquipment* Equipment)
{
	check(IsValid(Equipment));
	
	const int32 Idx = ManagedEquipment.IndexOfByEquipment(Equipment);
	if (Idx == INDEX_NONE) return;
	
	const UNinjaEquipmentDataAsset* Data = ManagedEquipment.Entries[Idx].EquipmentData;
	if (!IsValid(Data)) return;
	
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if (IsValid(AssetManager))
	{
		const TArray<FName> Bundles = { "States" };
		const FStreamableDelegate Delegate = FStreamableDelegate::CreateUObject(Equipment, &UNinjaEquipment::MarkEquipmentAsLoaded);
		ManagedEquipment.Entries[Idx].EquipmentDataHandle = AssetManager->LoadPrimaryAsset(Data->GetPrimaryAssetId(), Bundles, Delegate, FStreamableManager::AsyncLoadHighPriority);
	}
}

UStaticMeshComponent* UNinjaEquipmentManagerComponent::SetStaticMeshAsset(const FGameplayTag& SlotTag, const TSoftObjectPtr<UStaticMesh>& MeshPtr, const FName SocketName)
{
	if (MeshPtr.IsValid())
	{
		UStaticMesh* MeshAsset = MeshPtr.Get();
		return Cast<UStaticMeshComponent>(SetMeshToSlot(SlotTag, MeshAsset, SocketName));
	}

	return nullptr;
}

USkeletalMeshComponent* UNinjaEquipmentManagerComponent::SetSkeletalMeshAsset(const FGameplayTag& SlotTag, const TSoftObjectPtr<USkeletalMesh>& MeshPtr, const FName SocketName)
{
	if (MeshPtr.IsValid())
	{
		USkeletalMesh* MeshAsset = MeshPtr.Get();
		return Cast<USkeletalMeshComponent>(SetMeshToSlot(SlotTag, MeshAsset, SocketName));
	}

	return nullptr;
}

UMeshComponent* UNinjaEquipmentManagerComponent::SetMeshToSlot(const FGameplayTag& SlotTag, UStreamableRenderAsset* Mesh, const FName SocketName)
{
	UMeshComponent* MeshComponent;
	
	if (Mesh == nullptr)
	{
		const FName TagName = SlotTag.IsValid() ? SlotTag.GetTagName() : Tag_Equipment_Component.GetTag().GetTagName();
		MeshComponent = GetOwner()->FindComponentByTag<UMeshComponent>(TagName);	
	}
	else
	{
		const TSubclassOf<UMeshComponent> MeshType = Mesh->IsA<USkeletalMesh>() ? USkeletalMeshComponent::StaticClass() : UStaticMeshComponent::StaticClass();  
		MeshComponent = FindSlotMeshComponent(MeshType, SlotTag);		
	}
	
	if (!IsValid(MeshComponent))
	{
		EQUIPMENT_LOG_ARGS(Warning, "Unable to find Mesh Component %s for set operation.", *SlotTag.ToString());
		return nullptr;
	}
	
	if (MeshComponent->IsA<USkeletalMeshComponent>())
	{
		USkeletalMeshComponent* SkeletalMeshComponent = Cast<USkeletalMeshComponent>(MeshComponent);
		USkeletalMesh* SkeletalMesh = Cast<USkeletalMesh>(Mesh);
		SkeletalMeshComponent->SetSkeletalMeshAsset(SkeletalMesh);	
	}
	else if (MeshComponent->IsA<UStaticMeshComponent>())
	{
		UStaticMeshComponent* StaticMeshComponent = Cast<UStaticMeshComponent>(MeshComponent);
		UStaticMesh* StaticMesh = Cast<UStaticMesh>(Mesh);
		StaticMeshComponent->SetStaticMesh(StaticMesh);
	}
	
	MeshComponent->EmptyOverrideMaterials();
	MeshComponent->MarkForNeededEndOfFrameUpdate();

	if (SocketName != NAME_None && MeshComponent->GetAttachSocketName() != SocketName)
	{
		USceneComponent* Parent = MeshComponent->GetAttachParent();
		MeshComponent->AttachToComponent(Parent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
	}

	return MeshComponent;
}

UMeshComponent* UNinjaEquipmentManagerComponent::FindSlotMeshComponent(const TSubclassOf<UMeshComponent> ComponentType, const FGameplayTag& SlotTag)
{
	const FName TagName = SlotTag.IsValid() ? SlotTag.GetTagName() : Tag_Equipment_Component.GetTag().GetTagName();
	return Cast<UMeshComponent>(GetOwner()->FindComponentByTag(ComponentType, TagName));
}

UMeshComponent* UNinjaEquipmentManagerComponent::ClearMeshAsset(const FGameplayTag SlotTag)
{
	UMeshComponent* MeshComponent = SetMeshToSlot(SlotTag, nullptr);
	if (!IsValid(MeshComponent))
	{
		EQUIPMENT_LOG_ARGS(Warning, "Unable to find Mesh Component %s for clear operation.", *SlotTag.ToString());
		return nullptr;
	}
	
	const FName AssignedTagName = Tag_Equipment_Slot_Assigned.GetTag().GetTagName();
	MeshComponent->ComponentTags.Remove(AssignedTagName);
	return MeshComponent;
}

void UNinjaEquipmentManagerComponent::SendEquipmentEvent(const FGameplayTag& EventTag, UNinjaEquipment* EquipmentInstance) const
{
	UAbilitySystemComponent* AbilityComponent = GetAbilitySystemComponent();
	if (IsValid(AbilityComponent))
	{
		FGameplayEventData* EventData = new FGameplayEventData();
		EventData->EventTag = EventTag;
		EventData->Instigator = GetOwner();
		EventData->Target = GetOwner();
		EventData->OptionalObject = EquipmentInstance;
		AbilityComponent->HandleGameplayEvent(EventTag, EventData);	
	}
}

void UNinjaEquipmentManagerComponent::HandleEquipmentRemoved(const FEquipmentEntry& Entry, const int32 Idx)
{
	UNinjaEquipment* Equipment = Entry.Equipment;
	check(IsValid(Equipment));
	
	Equipment->RevertCurrentState();
	Equipment->SetEquipmentManager(nullptr);
	
	OnEquipmentRemoved.Broadcast(Equipment);
	RevertMeshesFromRemovedEquipment(Equipment);
	RemoveReplicatedSubObject(Equipment);

	const FString EquipmentName = GetNameSafe(Equipment->GetData());
	const FString NetRoleName = OwnerHasAuthority() ? "Authority" : "Client";
	EQUIPMENT_LOG_ARGS(Verbose, "Removed equipment %s on %s.", *EquipmentName, *NetRoleName);		
}

void UNinjaEquipmentManagerComponent::RevertMeshesFromRemovedEquipment_Implementation(const UNinjaEquipment* Equipment)
{
	if (!IsValid(DefaultSlotData))
	{
		EQUIPMENT_LOG(Warning, "No Default Slot Data set, nothing to revert.")
		return;
	}
	
	if (!IsValid(Equipment))
	{
		EQUIPMENT_LOG(Warning, "Invalid/null equipment provided. Nothing to revert.")
		return;
	}
	
	const UNinjaEquipmentDataAsset* Definition = Equipment->GetData();
	checkf(IsValid(Definition), TEXT("Equipment %s does not have a valid definition."), *GetNameSafe(Equipment));

	const FGameplayTag StateTag = Equipment->GetStateTag();
	FGameplayTagContainer SlotsToRevert = FGameplayTagContainer::EmptyContainer;
	
	FEquipmentStateConfiguration StateConfiguration;
	if (Definition->GetStateConfiguration(StateTag, StateConfiguration))
	{
		SlotsToRevert.AppendTags(StateConfiguration.UnusedSlotTags);
		
		for (const FEquipmentSkeletalMesh& Info : StateConfiguration.SkeletalMeshes)
		{
			const FGameplayTag SlotTag = Info.SlotTag;
			SlotsToRevert.AddTag(SlotTag);
		}

		for (const FEquipmentStaticMesh& Info : StateConfiguration.StaticMeshes)
		{
			const FGameplayTag SlotTag = Info.SlotTag;
			SlotsToRevert.AddTag(SlotTag);
		}
	}

	RevertMeshesFromSlots(SlotsToRevert);
}

void UNinjaEquipmentManagerComponent::RevertMeshesFromSlots_Implementation(FGameplayTagContainer& SlotsToRevert)
{
	if (SlotsToRevert.IsEmpty())
	{
		EQUIPMENT_LOG(Verbose, "No slot tags to revert.");
		return;
	}

	for (const FGameplayTag& SlotTag : SlotsToRevert)
	{
		TOptional<FEquipmentSkeletalMesh> OptionalDefaultMesh = Internal_SelectDefaultMesh(SlotTag);
		if (OptionalDefaultMesh.IsSet())
		{
			const FEquipmentSkeletalMesh& DefaultMesh = OptionalDefaultMesh.GetValue();
			SetDefaultMeshToSlot(DefaultMesh, SlotTag);
		}
	}
}

bool UNinjaEquipmentManagerComponent::SelectDefaultMesh(const FGameplayTag& SlotTag, FEquipmentSkeletalMesh& OutMesh) const
{
	TOptional<FEquipmentSkeletalMesh> OptionalMesh = Internal_SelectDefaultMesh(SlotTag);
	if (OptionalMesh.IsSet())
	{
		OutMesh = OptionalMesh.GetValue();
		return true;
	}

	return false;
}

TOptional<FEquipmentSkeletalMesh> UNinjaEquipmentManagerComponent::Internal_SelectDefaultMesh(const FGameplayTag& SlotTag) const
{
	if (!IsValid(DefaultSlotData))
	{
		EQUIPMENT_LOG(Warning, "No default slot data! Returning empty default mesh.");
		return TOptional<FEquipmentSkeletalMesh>();
	}

	const TArray<FEquipmentSkeletalMesh>& DefaultMeshes = DefaultSlotData->SkeletalMeshes.FilterByPredicate([SlotTag](const FEquipmentSkeletalMesh& Mesh){ return Mesh.SlotTag == SlotTag; });
	for (const FEquipmentSkeletalMesh& DefaultMesh : DefaultMeshes)
	{
		bool bIsCompatible = true;
		for (const TSoftClassPtr<UNinjaEquipmentAssetCompatibilityCheck>& CompatibilityCheckClass : DefaultMesh.CompatibilityChecks)
		{
			if (CompatibilityCheckClass.IsValid())
			{
				const UNinjaEquipmentAssetCompatibilityCheck* Check = GetDefault<UNinjaEquipmentAssetCompatibilityCheck>(CompatibilityCheckClass.Get());
				if (!Check->IsCompatible(DefaultMesh.MeshTags, GetOwner()))
				{
					bIsCompatible = false;
					break;
				}
			}
		}

		if (bIsCompatible)
		{
			return TOptional(DefaultMesh);	
		}
	}

	EQUIPMENT_LOG_ARGS(Verbose, "No default mesh for slot %s.", *SlotTag.ToString());
	return TOptional<FEquipmentSkeletalMesh>();
}

USkeletalMeshComponent* UNinjaEquipmentManagerComponent::GetMeshComponentForSlotTag_Implementation(const FGameplayTag SlotTag) const
{
	const FName SlotTagName = SlotTag.GetTagName();
	return GetOwner()->FindComponentByTag<USkeletalMeshComponent>(SlotTagName);
}

void UNinjaEquipmentManagerComponent::SetDefaultMeshToSlot_Implementation(const FEquipmentSkeletalMesh& SkeletalMesh, const FGameplayTag SlotTag)
{
	if (!SkeletalMesh.Mesh.IsValid())
	{
		const FString AssetState = SkeletalMesh.Mesh.IsNull() ? "null" : "not loaded"; 
		EQUIPMENT_LOG_ARGS(Warning, "Skeletal mesh is %s.", *AssetState);
		return;
	}

	if (!SlotTag.IsValid())
	{
		EQUIPMENT_LOG(Warning, "Empty Slot Tag provided.");
		return;
	}
	
	const USkeletalMeshComponent* MeshComponent = GetMeshComponentForSlotTag(SkeletalMesh.SlotTag);
	if (!IsValid(MeshComponent))
	{
		EQUIPMENT_LOG_ARGS(Warning, "No Skeletal Mesh Component for slot %s.", *SlotTag.ToString());
		return;
	}

	const FName AssignedTagName = Tag_Equipment_Slot_Assigned.GetTag().GetTagName();
	if (MeshComponent->ComponentTags.Contains(AssignedTagName))
	{
		// Not a severe issue that requires a "warning". It can happen during initialization, when
		// default meshes are set, but actual equipment meshes were already loaded.
		//
		EQUIPMENT_LOG_ARGS(Verbose, "Skeletal Mesh Component for slot %s is currently assigned.", *SlotTag.ToString());
		return;
	}
	
	// ReSharper disable once CppExpressionWithoutSideEffects
	SetSkeletalMeshAsset(SkeletalMesh.SlotTag, SkeletalMesh.Mesh, SkeletalMesh.SocketName);
	EQUIPMENT_LOG_ARGS(Verbose, "Set default mesh %s to slot %s and socket %s.", *SkeletalMesh.Mesh.GetAssetName(), *SlotTag.ToString(), *SkeletalMesh.SocketName.ToString());
}

void UNinjaEquipmentManagerComponent::AddAttributeSets(UAbilitySystemComponent* AbilitySystemComponent,
	FEquipmentStateConfiguration StateConfiguration, FEquipmentAbilityHandles& OutHandles) const
{
	if (!OwnerHasAuthority())
	{
		return;
	}
	
	for (int32 Idx = 0; Idx < StateConfiguration.AttributeSets.Num(); ++Idx)
	{
		const FEquipmentAttributeSet& Entry = StateConfiguration.AttributeSets[Idx];
		if (ensure(IsValid(Entry.AttributeSetClass)) && AbilitySystemComponent->GetAttributeSet(Entry.AttributeSetClass) == nullptr)
		{
			UAttributeSet* NewSet = NewObject<UAttributeSet>(AbilitySystemComponent->GetOwner(), Entry.AttributeSetClass);
			check(IsValid(NewSet));
		
			AbilitySystemComponent->AddAttributeSetSubobject(NewSet);
			OutHandles.AddAttributeSet(NewSet);
			EQUIPMENT_LOG_ARGS(Verbose, "Granted Attribute Set %s.", *GetNameSafe(NewSet));

			TObjectPtr<UDataTable> InitialData = Entry.InitialData; 
			if (IsValid(InitialData))
			{
				NewSet->InitFromMetaDataTable(Entry.InitialData);
				EQUIPMENT_LOG_ARGS(Verbose, "Initialized Attribute Set %s with %s.", *GetNameSafe(NewSet), *GetNameSafe(InitialData));
			}
		}
	}
}

void UNinjaEquipmentManagerComponent::ApplyGameplayEffects(UAbilitySystemComponent* AbilitySystemComponent,
	UNinjaEquipment* Equipment, FEquipmentStateConfiguration StateConfiguration, FEquipmentAbilityHandles& OutHandles) const
{
	if (!OwnerHasAuthority())
	{
		return;
	}
	
	for (int32 Idx = 0; Idx < StateConfiguration.GameplayEffects.Num(); ++Idx)
	{
		const FEquipmentGameplayEffect& Entry = StateConfiguration.GameplayEffects[Idx];

		const TSubclassOf<UGameplayEffect> GameplayEffect = Entry.GameplayEffectClass;
		const float EffectLevel = DetermineEffectLevel(Equipment, Entry);
		
		if (ensure(IsValid(GameplayEffect)))
		{
			FGameplayEffectContextHandle ContextHandle = AbilitySystemComponent->MakeEffectContext();
			ContextHandle.AddSourceObject(Equipment);

			AActor* EffectCauser = Equipment->GetEffectCauserActor();
			if (IsValid(EffectCauser))
			{
				AActor* Instigator = AbilitySystemComponent->GetOwnerActor();
				ContextHandle.AddInstigator(Instigator, EffectCauser);
			}

			FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, EffectLevel, ContextHandle);
			if (SpecHandle.IsValid())
			{
				SetByCallerMagnitudes(Equipment, SpecHandle);
			}

			const FActiveGameplayEffectHandle GameplayEffectHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			if (GameplayEffectHandle.WasSuccessfullyApplied())
			{
				if (GameplayEffectHandle.IsValid())
				{
					// If valid, then this is an ongoing effect, and we want to keep track of it.
					// Instant effects that were successfully applied are not considered "valid".
					OutHandles.AddGameplayEffectHandle(GameplayEffectHandle);	
				}

				EQUIPMENT_LOG_ARGS(Verbose, "Applied Gameplay Effect %s.", *GetNameSafe(GameplayEffect));
			}
		}
	}
}

float UNinjaEquipmentManagerComponent::DetermineEffectLevel(const UNinjaEquipment* Equipment,
	const FEquipmentGameplayEffect& Entry) const
{
	if (Entry.bUseItemLevelAsEffectLevel)
	{
		checkf(IsValid(Equipment), TEXT("Sanity Check: Equipment should never be null!"));

		const UNinjaInventoryItem* Item = Equipment->GetItem();
		checkf(IsValid(Item), TEXT("Sanity Check: Item should never be null!"));
		
		const TScriptInterface<IUpgradeableItemInterface> UpgradeableItem = UNinjaInventoryFunctionLibrary::GetUpgradeableItemAspect(Item->GetData());
		if (UpgradeableItem.GetObject() != nullptr)
		{
			return UpgradeableItem->GetLevel(Item);
		}
	}
	
	return Entry.EffectLevel;
}

void UNinjaEquipmentManagerComponent::SetByCallerMagnitudes(UNinjaEquipment* Equipment,
	FGameplayEffectSpecHandle& EffectSpecHandle) const
{
	const UNinjaInventoryItem* Item = Equipment->GetItem();
	check(IsValid(Item));

	SetByCallerMagnitudesFromInterface(Item, Item, EffectSpecHandle);	
	SetByCallerMagnitudesFromInterface(Equipment, Item, EffectSpecHandle);
}

void UNinjaEquipmentManagerComponent::SetByCallerMagnitudesFromInterface(const UObject* Implementation,
	const UNinjaInventoryItem* Item, FGameplayEffectSpecHandle& EffectSpecHandle) const
{
	if (!IsValid(Implementation) || !Implementation->Implements<UItemMagnitudeValueInterface>())
	{
		return;
	}
	
	const TMap<FGameplayTag, float>& Magnitudes = IItemMagnitudeValueInterface::Execute_GetAllMagnitudeValues(Implementation, Item);
	if (Magnitudes.IsEmpty())
	{
		return;
	}
	
	TArray<FGameplayTag> Tags;
	EffectSpecHandle.Data->SetByCallerTagMagnitudes.GetKeys(Tags);
	for (const TPair<FGameplayTag, float>& Pair : Magnitudes)
	{
		const FGameplayTag DataTag = Pair.Key;
		const float Value = Pair.Value;
		EffectSpecHandle.Data->SetSetByCallerMagnitude(DataTag, Value);

		const UGameplayEffect* Effect = EffectSpecHandle.Data->Def;
		EQUIPMENT_LOG_ARGS(VeryVerbose, "Set magnitude to '%s':  %s = %f.", *GetNameSafe(Effect), *DataTag.ToString(), Value);
	}
}

void UNinjaEquipmentManagerComponent::GrantGameplayAbilities(UAbilitySystemComponent* AbilitySystemComponent,
	UNinjaEquipment* Equipment, FEquipmentStateConfiguration StateConfiguration, FEquipmentAbilityHandles& OutHandles) const
{
	if (!OwnerHasAuthority())
	{
		return;
	}
	
	for (int32 Idx = 0; Idx < StateConfiguration.GameplayAbilities.Num(); ++Idx)
	{
		const FEquipmentGameplayAbility& Entry = StateConfiguration.GameplayAbilities[Idx];
		if (ensure(IsValid(Entry.GameplayAbilityClass)))
		{
			UGameplayAbility* AbilityCDO = Entry.GameplayAbilityClass->GetDefaultObject<UGameplayAbility>();
				
			FGameplayAbilitySpec AbilitySpec(AbilityCDO, Entry.AbilityLevel);
			AbilitySpec.SourceObject = Equipment;

			const FGameplayAbilitySpecHandle AbilitySpecHandle = AbilitySystemComponent->GiveAbility(AbilitySpec);
			if (AbilitySpecHandle.IsValid())
			{
				OutHandles.AddGameplayAbilitySpecHandle(AbilitySpecHandle);
				EQUIPMENT_LOG_ARGS(Verbose, "Granted Gameplay Ability %s.", *GetNameSafe(Entry.GameplayAbilityClass));
			}
		}
	}
}

void UNinjaEquipmentManagerComponent::ClearGameplayAbilities(UAbilitySystemComponent* AbilitySystemComponent,
	FEquipmentAbilityHandles& Handles) const
{
	for (auto It = Handles.AbilitySpecHandles.CreateIterator(); It; ++It)
	{
		FGameplayAbilitySpecHandle& Handle = *It;
		if (Handle.IsValid())
		{
			AbilitySystemComponent->ClearAbility(*It);
			EQUIPMENT_LOG_ARGS(Verbose, "Cleared Gameplay Ability with handle %s.", *Handle.ToString());
		}
			
		It.RemoveCurrent();
	}
}

void UNinjaEquipmentManagerComponent::RemoveGameplayEffects(UAbilitySystemComponent* AbilitySystemComponent,
	FEquipmentAbilityHandles& Handles) const
{
	for (auto It = Handles.GameplayEffectHandles.CreateIterator(); It; ++It)
	{
		FActiveGameplayEffectHandle& Handle = *It;
		if (Handle.IsValid())
		{
			constexpr int32 StacksToRemove = 1;
			FGameplayEffectQuery Query;
			AbilitySystemComponent->RemoveActiveGameplayEffect(Handle, StacksToRemove);
			EQUIPMENT_LOG_ARGS(Verbose, "Cleared Gameplay Effect with handle %s.", *Handle.ToString());
		}

		It.RemoveCurrent();
	}
}

void UNinjaEquipmentManagerComponent::RemoveAttributeSets(UAbilitySystemComponent* AbilitySystemComponent,
	FEquipmentAbilityHandles& Handles) const
{
	for (auto It = Handles.GrantedAttributeSets.CreateIterator(); It; ++It)
	{
		UAttributeSet* AttributeSet = *It;
		if (IsValid(AttributeSet))
		{
			AbilitySystemComponent->RemoveSpawnedAttribute(AttributeSet);
			EQUIPMENT_LOG_ARGS(Verbose, "Removed Attribute Set %s.", *GetNameSafe(AttributeSet));
		}

		It.RemoveCurrent();
	}
}

void UNinjaEquipmentManagerComponent::ReadyForReplication()
{
	Super::ReadyForReplication();

	if (!EquipmentWaitingForReplication.IsEmpty())
	{
		for (UNinjaEquipment* Equipment : EquipmentWaitingForReplication)
		{
			FGameplayTag StateTag = Equipment->GetStateTag();
			AddEquipment(Equipment, StateTag);
		}

		EquipmentWaitingForReplication.Empty();
		EquipmentWaitingForReplication.Shrink();
	}
}

bool UNinjaEquipmentManagerComponent::ReplicateSubobjects(UActorChannel* Channel, FOutBunch* Bunch,
	FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (FEquipmentEntry& Entry : ManagedEquipment.Entries)
	{
		UNinjaEquipment* Instance = Entry.Equipment;
		if (IsValid(Instance))
		{
			WroteSomething |= Channel->ReplicateSubobject(Instance, *Bunch, *RepFlags);
		}
	}

	return WroteSomething;
}

UNinjaInventoryManagerComponent* UNinjaEquipmentManagerComponent::GetInventoryManager() const
{
	return UNinjaInventoryFunctionLibrary::GetInventoryManager(GetOwner());
}

void UNinjaEquipmentManagerComponent::Server_ChangeEquipmentState_Implementation(UNinjaEquipment* Equipment, const FGameplayTag NewStateTag)
{
	ChangeEquipmentState(Equipment, NewStateTag);
}

bool UNinjaEquipmentManagerComponent::Server_ChangeEquipmentState_Validate(UNinjaEquipment* Equipment, FGameplayTag NewStateTag)
{
	const UNinjaInventoryManagerComponent* InventoryManager = GetInventoryManager();
	return IsValid(InventoryManager) && InventoryManager->HasItem(Equipment->GetItem());
}
