// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include <AbilitySystemInterface.h>
#include "Teams/NarrativeTeamAgentInterface.h"
#include <GameplayTagAssetInterface.h>
#include "NarrativeNPCController.generated.h"

/**
 * NPC Controller for NPCs spawned by the Narrative NPC subsystem. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeNPCController : public AAIController, public IAbilitySystemInterface, public IGameplayTagAssetInterface, public INarrativeTeamAgentInterface
{
	GENERATED_BODY()
	
public:

	friend class UNarrativeAbilitySystemComponent;

	ANarrativeNPCController(const FObjectInitializer& ObjectInitializer);

	//Interfaces 
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual FGameplayTagContainer GetFactions() const override;
	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual void Destroyed() override;
	virtual void DisplayDebug(class UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) override;
	virtual void SetPawn(APawn* InPawn) override;

	#if ENABLE_VISUAL_LOG
	virtual void GrabDebugSnapshot(FVisualLogEntry* Snapshot) const override;
#endif

	//Tells the AI controller it needs to destroy itself and its pawn. 
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "NarrativeNPCController")
	void CleanUp(const float RemovePawnDelay);

	UFUNCTION(BlueprintPure, Category = "NarrativeNPCController")
	class UBehaviorTree* GetCurrentTree();

	void StopBehaviorTree();

	//Grab the NPCs data asset 
	UFUNCTION(BlueprintPure, Category = "NarrativeNPCController")
	class UNPCDefinition* GetNPCData() const;
	
	//Grab the NPCs name
	UFUNCTION(BlueprintPure, Category = "NarrativeNPCController")
	FText GetNPCName() const;

	//Check whether our controlled NPC is alive
	UFUNCTION(BlueprintPure, Category = "NarrativeNPCController")
	bool IsAlive() const;

	UFUNCTION(BlueprintPure, Category = "NarrativeNPCController")
	ANarrativeNPCCharacter* GetControlledNPC() const;

protected:
	
	/**The NPC activity component, stores the behaviour tree and current state and can write that to disk.*/
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNPCActivityComponent> NPCActivityComponent;

	//NPCs interaction component 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Interaction")
	TObjectPtr<class UNPCInteractionComponent> InteractionComponent;

	//Request an attack token from the target ASC. Return true if we successfully claimed the token and can attack. 
	UFUNCTION(BlueprintCallable, Category = "Attack Tokens")
	bool RequestAttackToken(UNarrativeAbilitySystemComponent* TargetToAttack);

	//Give our token back to the current ASC - called automatically by RequestAttackToken if we already have one. 
	UFUNCTION(BlueprintCallable, Category = "Attack Tokens")
	bool ReturnToken();

	//Called by our token granted when our granted token was stolen. 
	void TokenStolen();

	//The current attack token we've claimed 
	UPROPERTY(BlueprintReadOnly, Category = "Attack Tokens")
	TObjectPtr<class UNarrativeAbilitySystemComponent> GrantedToken;

	//Gives our NPC controller a chance to react to death.
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);
	virtual void HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);

public:

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNPCActivityComponent* GetActivityComponent() const {return NPCActivityComponent; };
	
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNPCInteractionComponent* GetInteractionComponent() const {return InteractionComponent;};

};
