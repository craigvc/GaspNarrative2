// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include <GameplayTagContainer.h>
#include "NarrativeArsenal.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include "NarrativePlayerState.generated.h"

/**
 * Base player state for Narrative Pro core. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativePlayerState : public APlayerState, public IAbilitySystemInterface, public INarrativeTeamAgentInterface
{
	GENERATED_BODY()
	
public:

	ANarrativePlayerState();

	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	class UNarrativeAttributeSetBase* GetAttributeSetBase() const;

	//void SetGenericTeamId(const FGenericTeamId& TeamID) override;
	//FGenericTeamId GetGenericTeamId() const override;
	virtual FGameplayTagContainer GetFactions() const override;
	virtual void AddFaction(const FGameplayTag& Faction) override;
	virtual void RemoveFaction(const FGameplayTag& Faction) override;

	UFUNCTION(BlueprintCallable, Category = "Narrative")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative")
	float GetHealth() const;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps) const override;

	virtual void OnRep_PlayerName();

	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	//Our affiliation 
	UPROPERTY(EditDefaultsOnly, SaveGame, ReplicatedUsing=OnRep_Faction, Category = "Factions")
	FGameplayTagContainer Factions;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(Transient)
	TObjectPtr<class UNarrativeAttributeSetBase> AttributeSetBase;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeInventoryComponent> InventoryComponent;

	//The skill tree component - this holds our perks, skills, and skill tree points. 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class USkillTreeComponent> SkillTreeComponent;

public:

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNarrativeInventoryComponent* GetInventoryComponent() const {return InventoryComponent;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class USkillTreeComponent* GetSkillTreeComponent() const {return SkillTreeComponent;};

	UFUNCTION(BlueprintCallable, Category = "Factions")
	virtual void SetFactions(UPARAM(meta = (Categories="Narrative.Factions"))const FGameplayTagContainer& NewFactions);

protected:

	UFUNCTION()
	virtual void OnRep_Faction();

};
