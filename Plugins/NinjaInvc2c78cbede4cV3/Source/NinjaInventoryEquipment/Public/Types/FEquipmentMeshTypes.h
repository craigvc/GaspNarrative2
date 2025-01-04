// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimInstance.h"
#include "FEquipmentMeshTypes.generated.h"

class UAnimInstance;
class UStaticMesh;
class USkeletalMesh;
class UMeshComponent;
class UNinjaEquipmentAssetCompatibilityCheck;
class UNinjaEquipmentSceneComponentSelector;

USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentBaseMesh
{
	
	GENERATED_BODY()

	/** Gameplay Tag representing the equipment slot. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh", meta = (Categories = "Equipment.Slot"))
	FGameplayTag SlotTag = FGameplayTag::EmptyTag;

	/** Tags that may further describe this mesh. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	FGameplayTagContainer MeshTags = FGameplayTagContainer::EmptyContainer;
	
	/** An optional socket that can be used to reattach the component. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	FName SocketName = NAME_None;

	/**
	 * A set of checks to ensure this mesh is compatible with the owner.
	 * 
	 * Useful for cases when you have assets that can be granted to different types of characters
	 * (i.e. male and female body types), and want to select which mesh to use for the owner.
	 *
	 * For that purpose you can, for example, check for certain Gameplay Tags in the owner, or
	 * identify certain environmental aspects such as special dates for cosmetics.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh", meta = (NoElementDuplicate))
	TArray<TSoftClassPtr<UNinjaEquipmentAssetCompatibilityCheck>> CompatibilityChecks;
	
};

/** Configures a skeletal mesh asset assigned to a slot. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentSkeletalMesh : public FEquipmentBaseMesh
{
	
	GENERATED_BODY()

	/** The Skeletal Mesh to use. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TSoftObjectPtr<USkeletalMesh> Mesh = nullptr;

};

/** Configures a static mesh asset assigned to a slot. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentStaticMesh : public FEquipmentBaseMesh
{
	
	GENERATED_BODY()

	/** The Static Mesh to use. */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	TSoftObjectPtr<UStaticMesh> Mesh = nullptr;

};

/** Information about an equipment mesh component that has been saved. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FStoredEquipmentMeshComponent
{
	
	GENERATED_BODY()

	/** Slot Tag that selected this component. */
	UPROPERTY(EditDefaultsOnly, Category = "Saved Mesh")
	FGameplayTag SlotTag = FGameplayTag::EmptyTag;
	
	/** The Mesh Component to use. */
	UPROPERTY(EditDefaultsOnly, Category = "Saved Mesh")
	TWeakObjectPtr<UMeshComponent> MeshComponent = nullptr;

	/** Provides the mesh component, if the weak pointer is valid. */
	UMeshComponent* GetMeshComponent() const;
	
};

/** Configures an Animation Layer to be linked to the owner. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FEquipmentAnimLayer
{
	
	GENERATED_BODY()

	/** Animation Layer class to be linked to a Skeletal Mesh Component. */
	UPROPERTY(EditDefaultsOnly, Category = "Anim Layer")
	TSoftClassPtr<UAnimInstance> AnimInstanceLayerClass;

	/** Class used to select the proper Skeletal Mesh Component. */
	UPROPERTY(EditDefaultsOnly, Category = "Actor", NoClear)
	TSoftClassPtr<UNinjaEquipmentSceneComponentSelector> SkeletalMeshComponentSelectorClass;
	
	FEquipmentAnimLayer();

	/** Checks if both soft class pointers are loaded. */
	bool IsValid() const;
	
};

/** Registers an animation layer that has been assigned. */
USTRUCT(BlueprintType)
struct NINJAINVENTORYEQUIPMENT_API FStoredEquipmentAnimLayer
{
	
	GENERATED_BODY()

	/** The Mesh Component storing the animation layer. */
	UPROPERTY(EditDefaultsOnly, Category = "Saved Mesh")
	TWeakObjectPtr<USkeletalMeshComponent> MeshComponent = nullptr;
	
	/** Animation Layer class to be linked to a Skeletal Mesh Component. */
	UPROPERTY(EditDefaultsOnly, Category = "Anim Layer")
	TSubclassOf<UAnimInstance> AnimInstanceLayerClass;

	/** Provides the mesh component, if the weak pointer is valid. */
	USkeletalMeshComponent* GetSkeletalMeshComponent() const;
	
};