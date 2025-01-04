// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FEquipmentAbilityTypes.h"
#include "FEquipmentActor.h"
#include "FEquipmentMeshTypes.h"
#include "GameplayTagContainer.h"
#include "FEquipmentStateConfiguration.generated.h"

class UNinjaInventoryContainerDataAsset;

/**
 * Configures aspects that are assigned to an owner, when the equipment is at a certain state.
 */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentStateConfiguration
{
	
	GENERATED_BODY()
	
	/** States compatible with this configuration. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (Categories = "Equipment.State"))
	FGameplayTagContainer StateTags = FGameplayTagContainer::EmptyContainer;

	/** Any slots that must be cleared. No need to clear slots that are being replaced by this state. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (Categories = "Equipment.Slot"))
	FGameplayTagContainer UnusedSlotTags = FGameplayTagContainer::EmptyContainer;
	
	/** Skeletal Meshes added to certain slots when this state is active. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "SlotTag"))
	TArray<FEquipmentSkeletalMesh> SkeletalMeshes;

	/** Static Meshes attached to certain sockets when this state is active. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "SlotTag"))
	TArray<FEquipmentStaticMesh> StaticMeshes;

	/** Animation Layers linked to a certain mesh, while this state is active. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "AnimInstanceLayerClass"))
	TArray<FEquipmentAnimLayer> AnimationLayers;
	
	/** Actors added and attached to certain sockets/components when this state is active. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "ActorClass"))
	TArray<FEquipmentActor> Actors;

	/** Attribute Sets granted to the equipment owner. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "AttributeSetClass"))
	TArray<FEquipmentAttributeSet> AttributeSets;

	/** Gameplay Effects granted to the equipment owner. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "GameplayEffectClass"))
	TArray<FEquipmentGameplayEffect> GameplayEffects;

	/** Gameplay Effects granted to the equipment owner. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration", meta = (TitleProperty = "GameplayAbilityClass"))
	TArray<FEquipmentGameplayAbility> GameplayAbilities;

	/** All containers granted by this equipment, in this state. */
	UPROPERTY(EditDefaultsOnly, Category = "State Configuration")
	TArray<TSoftObjectPtr<UNinjaInventoryContainerDataAsset>> Containers;

};