// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "NarrativeItem.h"
#include "GameplayTagContainer.h"
#include <GameplayEffect.h>
#include "EquippableItem.generated.h"

UENUM(BlueprintType)
enum class EEquippableSlot : uint8 
{
	ES_Torso UMETA(DisplayName="Torso"),
	ES_Legs UMETA(DisplayName = "Legs"),
	ES_Feet UMETA(DisplayName = "Feet"),
	ES_Helmet UMETA(DisplayName = "Helmet"),
	ES_Hands UMETA(DisplayName = "Hands"),
	ES_Backpack UMETA(DisplayName = "Backpack"),
	ES_Necklace UMETA(DisplayName = "Necklace"),
	ES_Holster UMETA(DisplayName = "Holster"),
	ES_Weapon UMETA(DisplayName = "Weapon"),
	ES_ThrowableWeapon UMETA(DisplayName = "Throwable Weapon"),
	ES_Custom1 UMETA(DisplayName = "Custom1"),
	ES_Custom2 UMETA(DisplayName = "Custom2"),
	ES_Custom3 UMETA(DisplayName = "Custom3"),
	ES_Custom4 UMETA(DisplayName = "Custom4"),
	ES_Custom5 UMETA(DisplayName = "Custom5"),
};

/**
 * The base class for an equippable item the player can put on. Networking is built right in.
 */
UCLASS()
class NARRATIVEARSENAL_API UEquippableItem : public UNarrativeItem
{
	GENERATED_BODY()
	
protected:

	friend class UEquipmentComponent;

	UEquippableItem();

	/**Allows you to override what equipping the item does. By default this sets the players mesh to the Equippable Mesh, but perhaps
	you want a weapon actor to spawn in, or have an equippable aura effect that follows the player. by overriding HandleEquip you can 
	do whatever custom logic you want. */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleEquip();
	virtual void HandleEquip_Implementation();

	/**Allows you to override what happens when the item unequips. */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleUnequip();
	virtual void HandleUnequip_Implementation();

	virtual void Activated_Implementation() override;
	virtual void Deactivated_Implementation() override;

	//Add/remove the armor and attack bonus ratings to GAS 
	virtual void ApplyEquipmentAttributes();
	virtual void RemoveEquipmentAttributes();

	//Overridable in case children want to do anything with the spec - weapon items for example need to modify the spec to add damage. 
	virtual void ModifyEquipmentEffectSpec(struct FGameplayEffectSpec* Spec);

	virtual bool ShouldUseOnAdd_Implementation() const override;

	virtual FString GetStringVariable_Implementation(const FString& VariableName) override;

	/**The slot this item equips to*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	EEquippableSlot EquippableSlot;

	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	TSubclassOf<UGameplayEffect> EquipmentModGE;

	//The handle to the equipment gameplay effect that applies the equipments attributes to our player. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	struct FActiveGameplayEffectHandle EquipmentGEHandle;

	/**The amount we'll increase the wearers attack rating by when this item is equipped */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	float AttackRating;

	/**The amount we'll increase the wearers armor rating by when this item is equipped */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	float ArmorRating;

	//Equipping this item will grant these abilities to the user; we'll remove them when the item is unequipped
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Weapon|Abilities")
	TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities;

};

/**
 * Defines a clothing item. Will use the skeletal mesh set in your EquipmentComponent and set it to the clothing mesh you select.
 */
UCLASS()
class NARRATIVEARSENAL_API UEquippableItem_Clothing : public UEquippableItem
{
	GENERATED_BODY()

protected:

	UEquippableItem_Clothing();

	#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	#endif 

	virtual void HandleEquip_Implementation() override;
	virtual void HandleUnequip_Implementation() override;

	/**The mesh to put on the player when they equip the item*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	class USkeletalMesh* ClothingMesh;

	/**The materials to apply to the clothing mesh*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equippable")
	TArray<class UMaterialInterface*> ClothingMaterials;

};