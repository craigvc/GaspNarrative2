// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Engine/StreamableManager.h"
#include "UObject/SoftObjectPtr.h"
#include "AnimNotifyState_AttachConsumableMesh.generated.h"

class USkeletalMesh;
class UStaticMesh;
class UNinjaEquipmentManagerComponent;

/**
 * Mesh type that represents the consumable.
 */
UENUM(BlueprintType)
enum class EConsumableMeshType : uint8
{
	SkeletalMesh,
	StaticMesh
};

/**
 * Attaches a consumable mesh to a slot, for the duration of the notify state.
 *
 * Consumables usually don't have a physical presence, therefore they usually don't have an
 * Equipment Definition related to them. This Animation Notify State is useful for those cases,
 * where a mesh should be attached to the owner, to represent the consumable during the animation.
 *
 * It's also connected to the Asset Manager, so meshes are soft references, and their handles
 * are released when the animation is finished.
 */
UCLASS(meta = (DisplayName = "Attach Consumable Mesh"))
class NINJAINVENTORYGAMEPLAY_API UAnimNotifyState_AttachConsumableMesh : public UAnimNotifyState
{
	
	GENERATED_BODY()

public:

	UAnimNotifyState_AttachConsumableMesh();

	// -- Begin Anim Notify State implementation
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	virtual FString GetNotifyName_Implementation() const override;
	// -- End Anim Notify State implementation

	/**
	 * Provides the Equipment Manager assigned to this Notify State.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Inventory|Animation")
	UNinjaEquipmentManagerComponent* GetEquipmentManager() const;
	
protected:

	/** Type of asset that represents the consumable. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable")
	EConsumableMeshType MeshType = EConsumableMeshType::StaticMesh;
	
	/** The Skeletal Mesh to use. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable", meta = (EditCondition = "MeshType == EConsumableMeshType::SkeletalMesh", EditConditionHides))
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh = nullptr;
	
	/** The Static Mesh to use. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable", meta = (EditCondition = "MeshType == EConsumableMeshType::StaticMesh", EditConditionHides))
	TSoftObjectPtr<UStaticMesh> StaticMesh = nullptr;

	/** Gameplay Tag representing the slot used to attach the consumable (i.e. Equipment.Slot.Consumable). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable", meta = (Categories = "Equipment.Slot"))
	FGameplayTag SlotTag = FGameplayTag::EmptyTag;
	
	/** Socket used to attach the new Mesh Component. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable", meta = (AnimNotifyBoneName = "true"))
	FName AttachSocket = NAME_None;

	/**
	 * Equipment slots that must be hidden while the animation is playing.
	 *
	 * Since consumables are usually attached to the character's main hand, it is very likely
	 * that any equipment being currently held must be temporarily hidden.
	 *
	 * This is done by changing the visibility of the component. For that reason it's recommended
	 * that you have different slots for the consumable and other items being held.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Consumable", meta = (Categories = "Equipment.Slot"))
	FGameplayTagContainer SlotsToHide = FGameplayTagContainer::EmptyContainer;
	
	virtual void LoadMesh();
	virtual void OnMeshLoaded();
	
private:

	bool bHasSetMesh = false;
	TSharedPtr<FStreamableHandle> MeshHandlePtr;
	TWeakObjectPtr<UNinjaEquipmentManagerComponent> EquipmentManagerPtr;
	
#if WITH_EDITOR
public:

	// Begin Editor implementation
	virtual void ValidateAssociatedAssets() override;
	// End Editor implementation
	
#endif
};
