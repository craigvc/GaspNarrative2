// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "NarrativeCharacter.h"
#include "NarrativeSave.h"
#include "AI/Activities/NPCGoalItem.h"
#include "NarrativeNPCCharacter.generated.h"

//Represents a tagged dialogue - this is essentially a dialogue that can be kicked off via a tag "TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. "
USTRUCT(BlueprintType)
struct FTaggedDialogue
{
	GENERATED_BODY()

	FTaggedDialogue() 
	{
		Chance = 1.f;
		Cooldown = 30.f;
		LastPlayTime = -10000.f;
		MaxDistance = -1.f;
	};

	/** The tag that will kick off this dialogue. */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue", meta = (Categories = "Narrative.TaggedDialogue"))
	FGameplayTag Tag;

	/** The dialogue to begin */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue")
	TSoftClassPtr<class UDialogue> Dialogue;

	/** Instigator needs to be less than this many units away to play the dialogue. Negative means don't check  */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue")
	float MaxDistance;

	/** The chance of this dialogue beginning, for example  */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue", meta = (ClampMin=0.0, ClampMax=1.0))
	float Chance;

	/** The amount of time we should cooldown before playing this dialogue again. */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue")
	float Cooldown;

	/** Tags that will be required for the NPC to begin this tagged dialogue */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue")
	FGameplayTagContainer RequiredTags;

	/** Tags that if owned by the NPC, will prevent this dialogue beginning. For example, we wouldn't want to greet a player if we were fighting someone. */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Tagged Dialogue")
	FGameplayTagContainer BlockedTags;

	UPROPERTY(BlueprintReadOnly, Category = "Tagged Dialogue")
	float LastPlayTime;
};

/**
 * Base class for a NarrativeCharacter that is AI Controlled. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeNPCCharacter : public ANarrativeCharacter, public INarrativeSavableActor
{
	GENERATED_BODY()
	
public:

	friend class UNarrativeNPCSubsystem;
	friend class ASettlement;

	ANarrativeNPCCharacter(const class FObjectInitializer& ObjectInitializer);

protected:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeInventoryComponent> InventoryComponent;

	//NPCs have a seperate inventory for trading from. 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeInventoryComponent> TradingInventoryComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNPCInteractable> NPCInteractableComponent;

	virtual void BeginPlay() override;
	virtual void SpawnDefaultController() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	//FGenericTeamId GetGenericTeamId() const override;
	virtual FGameplayTagContainer GetFactions() const override;
	virtual void AddFaction(const FGameplayTag& Faction) override;
	virtual void RemoveFaction(const FGameplayTag& Faction) override;
	virtual void DamagedBy(AController* DamagerController, const float Damage) override;
	virtual int32 GetCharacterLevel() const override;
	virtual class UCharacterDefinition* GetCharacterDefinition() const override;
	virtual void LoadNewCharacter_Implementation() override;
	virtual FString GetHumanReadableName() const override;
	virtual class UNarrativeInteractionComponent* GetInteractionComponent() const;
	virtual void HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);

	virtual void PrepareForSave_Implementation() override;
	virtual void Load_Implementation() override;

	//In order to link NPCs and their AIController save records, we have NPCs store their AIC record. That works nicely. 
	UPROPERTY(SaveGame)
	FNarrativeActorRecord AICRecord;

	/** The NPCs data asset - this is set automatically by the NPC subsystem when it detects the NPC has spawned in */
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_NPCData, Category = "NPC")
	TObjectPtr<class UNPCDefinition> NPCData;

	/** References the settlement that last spawned us, if one did.  */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, SaveGame, Category = "NPC")
	FGameplayTag OwningSettlement;

	/** Settlement spawn ID */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, SaveGame, Category = "NPC")
	FGuid OwningSpawn;

	/** This NPCs level - NPCs levels are defined by their NPC asset */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, SaveGame, Replicated, Category = "NPC")
	int32 NPCLevel;

	/** This NPCs faction - can be changed at anytime and will be saved to disk */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, SaveGame, ReplicatedUsing=OnRep_NPCFactions, Category = "NPC")
	FGameplayTagContainer NPCFactions;

	/** If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction. */
	UPROPERTY(BlueprintReadOnly, Category = "NPC")
	bool bAggressiveOnTakeDamage;

	/** If true, this NPC will start attacking anyone that causes damage to them, provided they aren't in the same faction. */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "NPC")
	TArray<FTaggedDialogue> TaggedDialogues;

	/** Consider anything in this list a "hostile override" - that is to say even if the actor is neutral or even friendly, we'll treat them as a hostile and attack.
	We need this because there are occasions where we want friendlies to attack each other, maybe during a quest. We also often want to attack neutrals that have attacked us. */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "NPC")
	TArray<TObjectPtr<AActor>> Hostiles;

	UFUNCTION()
	virtual void OnRep_NPCData();

	UFUNCTION(BlueprintImplementableEvent)
	void NPCDataReady();

	/**Allows a chance to let us be hostile towards any perceived target if you return true, even if they aren't in a hostile faction. 
	This would let you do things like have friendly NPCs turn on the player if you've damaged them enough, etc. */
	UFUNCTION(BlueprintNativeEvent, Category = "Hostiles")
	bool ShouldBeAggressiveTowardsTarget(const class AActor* Target) const;
	virtual bool ShouldBeAggressiveTowardsTarget_Implementation(const class AActor* Target) const;

public:

	FORCEINLINE class UNPCDefinition* GetNPCData() const {return NPCData;};

	//Grab the NPCs name
	UFUNCTION(BlueprintPure, Category = "NPC")
	FText GetNPCName() const;

	virtual void SetNPCDefinition(class UNPCDefinition* NPCData);
	  
	//Notify the NPC a tagged dialogue should try play, like a greeting, farewell, taunt, etc. 
	UFUNCTION(BlueprintCallable, Category = "NPC")
	void PlayTaggedDialogue(UPARAM(meta = (Categories = "Narrative.TaggedDialogue")) FGameplayTag Tag, AActor* DialogueInstigator);

	//Notify the NPC a tagged dialogue should try play - this is blueprint implementable 
	UFUNCTION(BlueprintImplementableEvent, Category = "NPC")
	void ExecutePlayTaggedDialogue(FTaggedDialogue Dialogue, AActor* DialogueInstigator);

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class UNPCActivityComponent* GetActivityComponent() const;

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	ANarrativeNPCController* GetNPCController() const;

	FORCEINLINE FGameplayTag GetOwningSettlement() const { return OwningSettlement;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNarrativeInventoryComponent* GetInventoryComponent() const {return InventoryComponent;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNarrativeInventoryComponent* GetTradingInventoryComponent() const {return TradingInventoryComponent;};

protected:

	UFUNCTION()
	virtual void OnRep_NPCFactions();
};
