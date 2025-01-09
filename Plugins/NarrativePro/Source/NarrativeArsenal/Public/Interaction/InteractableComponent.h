// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <GameplayTagContainer.h>

#if WITH_GAMEPLAY_DEBUGGER
#include "GameplayDebuggerCategory.h"
#include "GameplayDebuggerTypes.h"
#endif 

#include "InteractableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeginInteract, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEndInteract, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBeginFocus, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEndFocus, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteract, class APawn*, Interactor, class UNarrativeInteractionComponent*, InteractionComp);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnTargetedSlotTaken, int32, Slot, class UNarrativeInteractionComponent*, InteractionComp, class UNarrativeInteractableComponent*, InteractableComp);


USTRUCT(BlueprintType)
struct FInteractionDefiniton
{
	GENERATED_BODY()

public: 

	FInteractionDefiniton()
	{
		bActive = true;
	}

	//TODO figure this out - we need the interaction to define some behavior, for now i'm thinking some sort of delegate 
	UPROPERTY(BlueprintAssignable)
	FOnInteract OnInteractDelegate;

	//Whether this interaction is active or not 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	bool bActive;

	//The amount of time the interaction needs its interact key held for 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (ClampMin=0))
	float InteractionTime;

	//The name that will come up when the player looks at the interactable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableNameText;

	//The verb that describes how the interaction works, ie "Sit" for a chair, "Eat" for food, "Light" for a fireplace
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableVerb;

	//The input action we require to begin this interaction
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TObjectPtr<class UInputAction> InteractionInput;

	//The animation our player can play during the interact. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TObjectPtr<class UAnimMontage> InteractionAnimation;
};

UENUM(BlueprintType)
enum class EInteractionSlotStatus : uint8
{
	ISS_Free UMETA(DisplayName="Free"),
	ISS_Targeted UMETA(DisplayName="Targeted"),
	ISS_Occupied UMETA(DisplayName="Occupied")
};

//Defines a slot for interacting with the interactable. 
USTRUCT(BlueprintType)
struct FActiveInteractionSlot
{
	GENERATED_BODY()

	FActiveInteractionSlot()
	{
		SlotStatus = EInteractionSlotStatus::ISS_Free;
	};

	//The status of this slot
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction")
	EInteractionSlotStatus SlotStatus;

	//The interactor using the slot
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction")
	TObjectPtr<class UNarrativeInteractionComponent> SlotUser;

};

//Defines a debug slot the interactable visualizer will draw
USTRUCT(BlueprintType)
struct FInteractionDebugVisualizeSlot
{
	GENERATED_BODY()

	FInteractionDebugVisualizeSlot(){};

	UPROPERTY(BlueprintReadWrite, Category = "Debug Visualize Slot")
	FTransform SlotDebugTransform;

	UPROPERTY(BlueprintReadWrite, Category = "Debug Visualize Slot")
	FColor SlotDebugColor;

	UPROPERTY(BlueprintReadWrite, Category = "Debug Visualize Slot")
	FString SlotDebugString;
};

/**
 * Defines a behavior that should be ran when a player or NPC interacts with an Interaction Slot. Subclass this and add any variables your SlotInteractBehavior requires. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UInteractionSlotBehavior : public UObject
{

GENERATED_BODY()

public: 

	UInteractionSlotBehavior();

protected:

	//This ability will be fired when a character interacts with this slot. The slot will release when the ability ends.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TSubclassOf<class UNarrativeInteractAbility> SlotInteractBehavior;

public: 

	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	TArray<FInteractionDebugVisualizeSlot> GetDebugSlots(const FTransform& SlotTransform, const FTransform& OwnerTransform) const;
	virtual TArray<FInteractionDebugVisualizeSlot> GetDebugSlots_Implementation(const FTransform& SlotTransform, const FTransform& OwnerTransform) const;

public: 

	FORCEINLINE TSubclassOf<class UNarrativeInteractAbility> GetInteractAbility() const {return SlotInteractBehavior;};
};

//Defines a slot for interacting with the interactable. 
USTRUCT(BlueprintType)
struct FInteractionSlotConfig
{
	GENERATED_BODY()

	FInteractionSlotConfig()
	{
		DebugColor = FColor::Green;
	};

	//Optional tag used for the slot 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FGameplayTag SlotTag;

	//Debug color for the slot
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FColor DebugColor;

	//NPCs will move to this transform when attempting to use the slot, and players can be motion warped to this spot etc if required. 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (MakeEditWidget))
	FTransform SlotTransform;

	//This ability will be fired when a character interacts with this slot. The slot will release when the ability ends.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category = "Interaction")
	TObjectPtr<class UInteractionSlotBehavior> SlotInteractBehavior;
};

//Holds information about a claimer
USTRUCT(BlueprintType)
struct FInteractionSlotClaimHandle
{
	GENERATED_BODY()

	FInteractionSlotClaimHandle()
	{
		HandleIndex = -1;
		HandleOwner = nullptr; 
	};
	FInteractionSlotClaimHandle(const int32 InHandleIndex, TWeakObjectPtr<UNarrativeInteractableComponent> InHandleOwner) : HandleIndex(InHandleIndex), HandleOwner(InHandleOwner){};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	int32 HandleIndex;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TWeakObjectPtr<UNarrativeInteractableComponent> HandleOwner; 

	bool IsValidHandle() const
	{
		return HandleIndex != -1.f && HandleOwner.IsValid();
	}
	
	static FInteractionSlotClaimHandle InvalidHandle()
	{
		FInteractionSlotClaimHandle Invalid;
		Invalid.HandleIndex = -1;
		return Invalid;
	}

};

#if WITH_GAMEPLAY_DEBUGGER


class AActor;
class APlayerController;

class FGameplayDebuggerCategory_Interactable : public FGameplayDebuggerCategory
{
public:
	FGameplayDebuggerCategory_Interactable();

	virtual void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
	
	static TSharedRef<FGameplayDebuggerCategory> MakeInstance();
};

#endif // WITH_GAMEPLAY_DEBUGGER

/**Not to be confused with the NarrativeInteractionComponent which enables a pawn to interact with interactables,
the NarrativeInteractableComponent enables an actor to be interacted with in some way. 

This also contains interaction slots - these are a more lightweight implementation of UE's smartobjects however unlike SmartObjects they handle networking, 
and both NPC/Player interaction instead of being AI focused. They implement interaction behavior via a GameplayAbility which works well as lots of interaction 
need to be latent, which GameplayAbilities excel at.See the UNarrativeInteractAbility class for more. 

If no slots are added, interacting with the interactable object will just fire the OnInteract delegate - great for simple interactions like taking a pickup. 
*/
UCLASS(Blueprintable, DisplayName = "Narrative Interactable", meta=(BlueprintSpawnableComponent))
class NARRATIVEARSENAL_API UNarrativeInteractableComponent : public UActorComponent
{
	GENERATED_BODY()


protected:

	friend class UNarrativeInteractionComponent;
	friend class UPlayerInteractionComponent;
	friend class UNPCInteractionComponent;

public:
	// Sets default values for this component's properties
	UNarrativeInteractableComponent();

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Deactivate() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:

	/**The interactables interaction slots - this is essentially a more lightweight implementation of UE's smartobjects
	that handles networking, and both NPC/Player interaction as smartobjects doesn't handle those well. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	TArray<FInteractionSlotConfig> InteractionSlots;

	//The active interaction slots
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SlotStatuses, Category = "Interaction")
	TArray<FActiveInteractionSlot> SlotStatuses;

	//The time the player must hold the interact key to interact with this object
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (ClampMin=0))
	float InteractionTime;

	//The max distance the player can be away from this actor before you can interact
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	float InteractionDistance;

	//The name that will come up when the player looks at the interactable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableNameText;

	//The verb that describes how the interaction works, ie "Sit" for a chair, "Eat" for food, "Light" for a fireplace
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	FText InteractableActionText;

	//A material to draw over any mesh components our owner has when this interatable is focused 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction")
	class UMaterialInterface* FocusedOverlayMaterial;

public:

	//Call this to change the name of the interactable. Will also refresh the interaction widget.
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetInteractableNameText(const FText& NewNameText);

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void SetInteractableActionText(const FText& NewActionText);

	/**Return the closest slot to the claimer.*/
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	int32 GetClosestAvailableSlot(class UNarrativeInteractionComponent* Claimer, const TArray<int32>& SlotsToCheck);

	/**Return a list of available slots*/
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	TArray<int32> GetAvailableSlots(const bool bIncludeTargeted=true);

	/**Claim a slot, set its active slot data to our character, and set its status to either targeted or claimed depending on bShouldTarget*/
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	FInteractionSlotClaimHandle ClaimSlot(class UNarrativeInteractionComponent* Claimer, int32 SlotToClaimIdx, const bool bMarkTargeted=false);

	//Used by both players and NPCs to release a slot, adding it back into the available handles 
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void UpdateSlotStatus(const FInteractionSlotClaimHandle& Handle, const EInteractionSlotStatus NewStatus);

	//Used by NPCs to reserve the first available slot. 
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	FInteractionSlotConfig GetConfigAtSlot(int32 SlotIndex);

	/**Ask if any slots are available
	
	@param bAllowTargeted consider a slot available if it is only targeted and not actually occupied */
	UFUNCTION(BlueprintPure, Category = "Interaction")
	bool HasSlotAvailable(const bool bAllowTargeted) const;

	FBox GetInteractableBounds() const;

protected:

	//Called on the client when the players interaction check trace begins/ends hitting this item
	virtual void BeginFocus(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void EndFocus(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	//Called on the client when the player begins/ends/interacts with the item
	virtual void BeginInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void EndInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual bool Interact(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void OnInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnBeginInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void OnBeginInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	UFUNCTION(BlueprintNativeEvent, Category = "Interaction")
	void OnEndInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);
	virtual void OnEndInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp);

	/**
	* Return true if the given interactor is allowed to interact with us
	* 
	* @param OutErrorText this is the reason why the interact isn't allowed 
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Interaction")
	bool CanInteract(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText);
	virtual bool CanInteract_Implementation(class APawn* Interactor, class UNarrativeInteractionComponent* InteractionComp, FText& OutErrorText);

	//Called when our slot statuses replicate. 
	UFUNCTION()
	virtual void OnRep_SlotStatuses(const TArray<FActiveInteractionSlot>& OldStatuses);

protected:

	//Delegates

	//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor
	UPROPERTY(BlueprintAssignable)
	FOnBeginInteract OnBeginInteracted;

	//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact
	UPROPERTY(BlueprintAssignable)
	FOnEndInteract OnEndInteracted;

	//[local + server] Called when the player presses the interact key whilst focusing on this interactable actor
	UPROPERTY(BlueprintAssignable)
	FOnBeginFocus OnBeginFocus;

	//[local + server] Called when the player releases the interact key, stops looking at the interactable actor, or gets too far away after starting an interact
	UPROPERTY(BlueprintAssignable)
	FOnEndFocus OnEndFocus;

	//[local + server] Called when the player has interacted with the item for the required amount of time
	UPROPERTY(BlueprintAssignable)
	FOnInteract OnInteracted;

	//[local + server] Called when a targeted slot gets removed. 
	UPROPERTY(BlueprintAssignable)
	FOnTargetedSlotTaken OnTargetedSlotTaken;
};
