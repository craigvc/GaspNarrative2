// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include <GameplayEffectTypes.h>
#include "Teams/NarrativeTeamAgentInterface.h"
#include <Animation/AnimInstance.h>
#include <GameplayTagAssetInterface.h>
#include "GAS/NarrativeCombatAbility.h"
#include "NarrativeSavableActor.h"
#include "GAS/AttackComboAnimSet.h"
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include "Interaction/InteractableComponent.h"
#include "NarrativeCharacter.generated.h"

//Holds an animation combo set - make sure your montages have attack notifies and warps - see docs for more info. 
USTRUCT(BlueprintType)
struct FMeleeComboAnimSet
{
	GENERATED_BODY()

	//Attack montages for the melee attack
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> AttackMontages; 

	//Heavy attack montages for the melee attack 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> HeavyAttackMontages; 
};

//Melee abilities use this to operate, both with unarmed attacks and melee weapons. 
USTRUCT(BlueprintType)
struct FMeleeCombatData
{

	GENERATED_BODY()

	FMeleeCombatData()
	{
		TraceData.TraceDistance = 300.f;
		TraceData.TraceRadius = 100.f;
	};

	//Attacking without a weapon will use this trace data 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	FCombatTraceData TraceData;

	//Combo montages for our melee attacks 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<UNarrativeAnimSet>> AttackCombos;

	//Combo montages for our heavy melee attacks 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<UNarrativeAnimSet>> HeavyAttackCombos;

};

/**Base class for characters built on Narrative Pro framework. Sets up some core stuff you probably want - a navigation marker, interactions, inventories, etc. */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeCharacter : public ACharacter, public IAbilitySystemInterface, public IGameplayTagAssetInterface, public INarrativeTeamAgentInterface
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	ANarrativeCharacter(const class FObjectInitializer& ObjectInitializer);

	// Interfaces 
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter|Attributes")
	virtual bool IsAlive() const;

	//Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	FVector GetHeadLookAtLocation();

	//Get the location of the floor, optionally offset by a z
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter|Movement")
	FVector GetFloorLocation(const float ZOffset=0.f) const;

	//Called when this character becomes a dialogue avatar. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void OnEnterDialogue(class UDialogue* Dialogue);

	//Called when this character finishes being a dialogue avatar. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void OnEndDialogue(class UDialogue* Dialogue);

	//Get the character definition from the character
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter")
	virtual class UCharacterDefinition* GetCharacterDefinition() const;

	//Get the interactioncomponent from the character
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter")
	virtual class UNarrativeInteractionComponent* GetInteractionComponent() const;

	//This is called when the NarrativeCharacters definition is updated. 
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void OnDefinitionSet(UCharacterDefinition* NewDefinition);
	virtual void OnDefinitionSet_Implementation(UCharacterDefinition* NewDefinition);

	//Called when OnDefinitionSet sees we dont have any save data and new initialized for first time. 
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void LoadNewCharacter();
	virtual void LoadNewCharacter_Implementation();


protected:

	virtual void PostInitializeComponents() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	/**By default narrative ships with a Character appearance set up that works great for metahumans and other UE5 skeleton types.
	You can subclass UCharacterAppearanceBase and override this function to apply your custom appereance if required. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void SetAppearanceFromCreatorData(const FCharacterCreatorAttributeSet& CreatorAttributes);
	virtual void SetAppearanceFromCreatorData_Implementation(const FCharacterCreatorAttributeSet& CreatorAttributes);



public:

	virtual void SetMeshToBaseAppearance(FGameplayTag Slot);
	virtual void SetMeshAppearance(FGameplayTag Slot, const FCharacterCreatorAttribute_Mesh& MeshData);

	virtual void SetGroomAtSlotToBaseAppearance(FGameplayTag Slot);

protected: 

	//Our characters current appearance asset
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Appearance")
	TObjectPtr<class UCharacterAppearanceBase> Appearance;

	//Our characters current customization asset
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Appearance")
	FCharacterCreatorAttributeSet AppearanceAttributeSet;

	//BODY MESHES - we air on the side of giving people more clothing meshes than they need - if your game doesn't require some of these please remove them as this may improve performance. 

	/**Base body mesh - use this for metahumans */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> BodyMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> TorsoMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> LegsMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> FeetMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> HelmetMesh;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> GlovesMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> FaceMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> BeardMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> MoustacheMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class USkeletalMeshComponent> HairMesh;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UMotionWarpingComponent> MotionWarpingComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|GAS")
	TObjectPtr<class UNarrativeAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UTeamMarkerComponent> MarkerComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeAttributeSetBase> AttributeSetBase;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UEquipmentComponent> EquipmentComp;

	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	// These effects are only applied one time on startup
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	// Default abilities to grant the player  
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TArray<TSubclassOf<class UNarrativeGameplayAbility>> DefaultAbilities;

	// Will be activated when this character dies - initially used GameplayEvents but these broke in packaged game 
	//UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	//TSubclassOf<class UNarrativeGameplayAbility> DeathAbility;

	//Lowering this number means the base XP required per level is higher 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	float LevelExponentX; 

	//Upping this value means higher jumps between levels, ie levels will grow exponentially 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	float LevelExponentY; 

	/**Weaponed weapon visuals, can be accessed via map */
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	TMap<FGameplayTag, TObjectPtr<class AActor>> SpawnedWeaponVisuals;
	
	/** True if the weapon is currently holstered, false otherwise.  */
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Weapon")
	bool bWeaponHolstered;

	/** Our currently equipped weapon */
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_EquippedWeapon, BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<UWeaponItem> EquippedWeapon;

	// Set our ASC pointer, as well as initializing the avatar info. 
	//virtual void SetupAbilitySystemComponent(class UNarrativeAbilitySystemComponent* ASC);

	// Grant abilities on the Server. The Ability Specs will be replicated to the owning client.
	virtual void AddDefaultAbilities();

	// Removes all CharacterAbilities. Can only be called by the Server. Removing on the Server will remove from Client too.
	virtual void RemoveCharacterAbilities();

	// Initialize the Character's attributes. Must run on Server but we run it on Client too
	// so that we don't have to wait. The Server's replication to the Client won't matter since
	// the values should be the same.
	virtual void InitializeAttributes();
	virtual void AddStartupEffects();

	/**
	* Setters for Attributes. Only use these in special cases like Respawning, otherwise use a GE to change Attributes.
	* These change the Attribute's Base Value.
	*/
	virtual void SetHealth(float Health);
	virtual void SetStamina(float Stamina);

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	int32 XPToLevel(const float XP) const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float LevelToXP(const int32 Level) const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetPercentToNextLevel() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	virtual int32 GetCharacterLevel() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetXP() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);
	virtual void HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);

public:

	//Workaround for attribute changed GEData not containing a valid instigator - we need the instigator so bots know when they receive damage. 
	virtual void DamagedBy(AController* DamagerController, const float Damage);

	UFUNCTION(BlueprintImplementableEvent)
	void BPDamagedBy(AController* DamagerController, const float Damage);

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	virtual void SetAnimBPOverride(TSubclassOf<class UAnimInstance> NewAnimBP);

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	virtual void ClearAnimBPOverride();

	/**Will add the ability set*/
	virtual void AddAbility(TSubclassOf<class UNarrativeGameplayAbility> Ability);
	virtual void GrantAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities);
	virtual void RemoveAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities);

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	virtual void InitializeEquipmentComponent();

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class USkeletalMeshComponent* GetTorsoMesh() const { return TorsoMesh;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class USkeletalMeshComponent* GetFeetMesh() const { return FeetMesh;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class USkeletalMeshComponent* GetFaceMesh() const { return FaceMesh;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class USkeletalMeshComponent* GetLegsMesh() const { return LegsMesh;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UTeamMarkerComponent* GetMarkerComponent() const { return MarkerComponent;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UEquipmentComponent* GetEquipmentComponent() const {return EquipmentComp;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNarrativeAttributeSetBase* GetAttributeSetBase() const {return AttributeSetBase;};

	//Get the Narrative character movement component. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class UNarrativeCharacterMovement* GetNarrativeCharacterMovement() const;

	//Spawn a weapon visual, attach to us 
	bool AddWeaponVisual(class UWeaponItem* WeaponItem);
	void AttachWeaponVisual(class UWeaponItem* WeaponItem, const bool bHolster);
	void RemoveWeaponVisual(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Weapon"))const FGameplayTag& WeaponSlot);

	UFUNCTION(BlueprintCallable, Category = "Narrative|Getters/Setters")
	void SetWeaponHolstered(const bool bHolster);
	
	UFUNCTION(BlueprintCallable, Category = "Narrative|Getters/Setters")
	void SetEquippedWeapon(class UWeaponItem* WeaponToEquip);

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE bool IsWeaponHolstered() const { return bWeaponHolstered; };
	
	UFUNCTION()
	virtual void OnRep_EquippedWeapon(class UWeaponItem* OldEquippedWeapon);

	virtual void WieldWeapon(class UWeaponItem* Weapon);
	virtual void UnWieldWeapon(class UWeaponItem* Weapon);

	//Returns the visual of the equipped weapon 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class AActor* GetEquippedWeaponVisual() const;

	//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class AActor* GetWeaponVisual(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Weapon"))const FGameplayTag& WeaponSlot) const;

	//Returns our equipped weapon item. This is the item in our inventory driving our weapon, it holds data like the weapons abilities, spread, damage etc.
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class UWeaponItem* GetWeapon() const;
	
	// Default unarmed anim layer
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Animation")
	TSubclassOf<class UAnimInstance> UnarmedAnimBP;

	// Current override anim layer 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Animation")
	TSubclassOf<class UAnimInstance> OverrideAnimBP;

	/** Data specifically related to unarmed combat */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Trace")
	FCombatTraceData UnarmedCombatData;

	//Attacking without a weapon will deal this amount of base damage 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Unarmed Combat Data")
	float UnarmedAttackDamage;

	//Get the range we can attack someone from
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	float GetAttackRange() const;

	//Get the trace data for an attack
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FCombatTraceData GetAttackTraceData() const;

};
