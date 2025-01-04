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
#include "NarrativeCharacter.generated.h"

//Weapons store this themselves, and players store this also for unarmed combat. 
USTRUCT(BlueprintType)
struct FUnarmedCombatData
{

	GENERATED_BODY()

	FUnarmedCombatData()
	{
		TraceData.TraceDistance = 500.f;
		TraceData.TraceRadius = 100.f;
		AttackDamage = 20.f;
	};

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Unarmed Combat Data")
	FCombatTraceData TraceData;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Unarmed Combat Data")
	float AttackDamage;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Unarmed Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> UnarmedAttackMontages; 

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Unarmed Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> HeavyUnarmedAttackMontages; 
};

//Delegates 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDied, ANarrativeCharacter*, Character);

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
	void SetGenericTeamId(const FGenericTeamId& TeamID) override;
	FGenericTeamId GetGenericTeamId() const override;
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter|Attributes")
	virtual bool IsAlive() const;

	UPROPERTY(BlueprintAssignable, Category = "Narrative|NarrativeCharacter")
	FOnDied OnDied;

	//Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	FVector GetHeadLookAtLocation();

	//Called when this character becomes a dialogue avatar. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void OnEnterDialogue();

	//Called when this character finishes being a dialogue avatar. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void OnEndDialogue();

protected:

	virtual void PostInitializeComponents() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginPlay() override;
	virtual void Destroyed() override;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void SetAppearance(class UCharacterAppearance* CharacterApperance);
	virtual void SetAppearance_Implementation(class UCharacterAppearance* CharacterApperance);

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

	/**Weaponed weapon visual, should one exist. */
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<class AActor> SpawnedWeaponVisual;
	
	/** True if the weapon is currently holstered, false otherwise. TODO: This should probably be in ANarrativeCharacter.  */
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_bWeaponHolstered, BlueprintReadOnly, Category = "Weapon")
	bool bWeaponHolstered;

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

	virtual void InitASC();


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
	int32 GetCharacterLevel() const;

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

	//virtual void Die(const FOnAttributeChangeData& Data);
	virtual void HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude);

	FDelegateHandle HealthChangedDelegateHandle;

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


	//Spawn a weapon visual, attach to us 
	void SetWeaponVisual(const TSubclassOf<class AActor>& WeaponVisualClass, const FName& WeaponVisualAttachBone, const FTransform& WeaponVisualAttachOffset);
	void AttachWeaponVisual(const FName& WeaponVisualAttachBone, const FTransform& WeaponVisualAttachOffset);
	void RemoveWeaponVisual();

	UFUNCTION(BlueprintCallable, Category = "Narrative|Getters/Setters")
	void SetWeaponHolstered(const bool bHolster);

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE bool IsWeaponHolstered() const {return bWeaponHolstered;};

	UFUNCTION()
	virtual void OnRep_bWeaponHolstered();

	//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class AActor* GetWeaponVisual() const;

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
	FUnarmedCombatData UnarmedCombatData;

};
