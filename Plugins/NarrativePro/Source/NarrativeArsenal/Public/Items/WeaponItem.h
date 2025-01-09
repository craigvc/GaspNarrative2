// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "EquippableItem.h"
#include "GAS/NarrativeCombatAbility.h"
#include "GAS/AttackComboAnimSet.h"
#include "WeaponItem.generated.h"

/**
 * Base class for an equippable weapon. Weapons don't generally have any attack logic in them, instead they grant abilities which have the logic. 
 */
UCLASS()
class NARRATIVEARSENAL_API UWeaponItem : public UEquippableItem
{
	GENERATED_BODY()

public:

	friend class UNarrativeCombatAbility;
	friend class ANarrativeCharacter; 
	friend class ANarrativePlayerCharacter; 

	UWeaponItem();


protected:

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void HandleEquip_Implementation();
	virtual void HandleUnequip_Implementation();

	/** Called when our owner actually starts holding this weapon */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleWield();
	virtual void HandleWield_Implementation();

	/** Called when our owner stops holding this weapon */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleUnWield();
	virtual void HandleUnWield_Implementation();

	//Add/remove the armor and attack bonus ratings to GAS 
	virtual void ModifyEquipmentEffectSpec(struct FGameplayEffectSpec* Spec) override;
	virtual FString GetStringVariable_Implementation(const FString& VariableName) override;

	/** Anim BP we'll apply to the owner when the weapon is unholstered. TODO should probably be soft reffed. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class UAnimInstance> WeaponAnimLayer;

	/**Weapon visual actor to spawn*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class AActor> WeaponVisualClass;

	/**Camera mode to use when using this weapon*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<class UNarrativeCameraMode> WeaponCameraMode;

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

	/** Allows us to define whether the pawn should follow the camera rotation with this weapon equipped. Bots will not apply this as they need their AIFocus to work. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	bool bPawnFollowsControlRotation;

	/** Allows us to define whether the pawn orient their rotation to velocity with this weapon equipped. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	bool bPawnOrientsRotationToMovement;

	/** base damage this weapon should do. It is up the combat ability whether it wants/needs this value. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Attack")
	float AttackDamage;

	/** How much should base damage be multiplied for a heavy attack. It is up the combat ability whether it wants/needs this value, some weapons may not have heavy attacks. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Attack")
	float HeavyAttackDamageMultiplier;

	/** Ammo item class for this weapon. Combat Ability will deny activation if we don't have the required ammo. 
	empty class means weapon can attack without ammo. This is in WeaponItem base class as any weapon should be able to support ammo, not just firearms. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ammo")
	TSoftClassPtr<class UAmmoItem> RequiredAmmo;

	/** The amount of ammo loaded into the clip of the weapon. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ammo")
	int32 ClipSize;

	/** The amount of ammo loaded into the clip of the weapon. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Weapon|Config|Ammo")
	int32 AmmoInClip;

	/** Weapon trace distance when doing a weapon bash */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Trace")
	FCombatTraceData BashTraceData;

	//Tell our weapon to use some ammo
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	bool ConsumeAmmo();

public:

	//Update the ammo in our clip. 
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual bool Reload();

	//Return the combo animations for a given attack type - by default this won't return any combo anims, weapons that need combos should override this. 
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual TArray<UNarrativeAnimSet*> GetComboAnims(const bool bHeavyAttack) const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	bool IsHolstered() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	bool WantsReload() const;

	bool HasAmmo() const;

	UFUNCTION(BlueprintNativeEvent, Category = "Weapon")
	bool CanAttack() const;
	virtual bool CanAttack_Implementation() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	virtual FCombatTraceData GetTraceData() const;

	//Used by bots to determine whether they are close enough to perform an attack with this weapon 
	UFUNCTION(BlueprintPure, Category = "Weapon")
	virtual float GetAttackRange() const;

};
