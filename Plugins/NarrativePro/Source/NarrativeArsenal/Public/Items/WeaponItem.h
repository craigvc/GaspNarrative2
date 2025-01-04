// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "EquippableItem.h"
#include "GAS/NarrativeCombatAbility.h"
#include "WeaponItem.generated.h"

/**
 * Base class for an equippable weapon. 
 */
UCLASS()
class NARRATIVEARSENAL_API UWeaponItem : public UEquippableItem
{
	GENERATED_BODY()

public:

	friend class UNarrativeCombatAbility;
	friend class ANarrativeCharacter; 

	UWeaponItem();

protected:

	virtual void HandleEquip_Implementation();
	virtual void HandleUnequip_Implementation();

	//Add/remove the armor and attack bonus ratings to GAS 
	virtual void ModifyEquipmentEffectSpec(struct FGameplayEffectSpec* Spec) override;
	virtual FString GetStringVariable_Implementation(const FString& VariableName) override;

	/** Anim BP we'll apply to the owner when the weapon is unholstered. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class UAnimInstance> WeaponAnimLayer;

	/**Weapon visual actor to spawn*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class AActor> WeaponVisualClass;

	/**Weapon visual bone to attach to*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName WeaponVisualAttachBone;

	/**Weapon visual bone to attach to for holstered state */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName WeaponVisualHolsteredAttachBone;

	/** Weapon visual offset from attach */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FTransform WeaponVisualAttachOffset;

	/** Weapon visual offset from attach for holster*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FTransform WeaponVisualHolsteredAttachOffset;

	/** base damage this weapon should do */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Attack")
	float AttackDamage;

	/** Ammo item class for this weapon. Abilities can deny activation if we don't have the required ammo. empty class means weapon can shoot without ammo.  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ammo")
	TSoftClassPtr<class UAmmoItem> RequiredAmmo;

	/** The amount of ammo loaded into the clip of the weapon. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ammo")
	int32 ClipSize;

	/** The amount of ammo loaded into the clip of the weapon. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|Config|Ammo")
	int32 AmmoInClip;

	/** Weapon trace distance when doing a hitscan */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Trace")
	FCombatTraceData TraceData;

	/** Weapon trace distance when doing a weapon bash */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Trace")
	FCombatTraceData BashTraceData;

	bool ConsumeAmmo();



public:

	//Update the ammo in our clip. 
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual bool Reload();

	UFUNCTION(BlueprintPure, Category = "Weapon")
	bool IsHolstered() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	bool WantsReload() const;

	bool HasAmmo() const;

	UFUNCTION(BlueprintNativeEvent, Category = "Weapon")
	bool CanFire() const;
	virtual bool CanFire_Implementation() const;

};
