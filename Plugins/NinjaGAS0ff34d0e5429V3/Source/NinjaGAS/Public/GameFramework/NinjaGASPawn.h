﻿// Ninja Bear Studio Inc. 2024, all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Pawn.h"
#include "NinjaGASPawn.generated.h"

class UNinjaGASAbilitySystemComponent;

/**
 * Base Pawn class, with a pre-configured Ability System Component.
 */
UCLASS(Abstract)
class NINJAGAS_API ANinjaGASPawn : public APawn, public IAbilitySystemInterface
{
	
	GENERATED_BODY()

public:

	/** Name for the ASC Component, if initialized by the class. */
	static FName AbilitySystemComponentName;
	
	ANinjaGASPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin Actor implementation
	virtual void PostInitProperties() override;
	virtual void PreInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// -- End Actor implementation

	// -- Begin Ability System implementation
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// -- End Ability System implementation

protected:

	/** Allows subclasses to skip ASC initialization, most likely because they'll use the Player State. */
	bool bInitializeAbilityComponentOnBeginPlay;
	
	/**
	 * Sets how the Ability System component will replicate data to clients.
	 *
	 * As per Dan Tranek's GAS Documentation, these are their descriptions and recommendations:
	 * 
	 * - Full:		Single Player, every Gameplay Effect is replicated to every client.
	 * 
	 * - Mixed:		Player Actors in Multiplayer, Gameplay Effects are replicated to owning client.
	 *				Gameplay Tags and Cues will replicate to everyone.
	 *				
	 * - Minimal	AI Actors in Multiplayer, Gameplay Effects are never replicated.
	 *				Gameplay Tags and Cues will replicate to everyone.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability System")
	EGameplayEffectReplicationMode AbilityReplicationMode;

	/**
	 * Initializes the ability system component using the source as an avatar.
	 *
	 * @param AbilitySystemOwner
	 *		Actor that owns the Ability System Component. It may be the same pawn
	 *		or an external source such as the Player State.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja GAS|Pawn")
	virtual void SetupAbilitySystemComponent(AActor* AbilitySystemOwner);
	
	/**
	 * Clears the ability system component, most likely due to the character being destroyed.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "Ninja GAS|Pawn")
	virtual void ClearAbilitySystemComponent();

	/**
	 * Timer-friendly function to initialize features from the Player State.
	 * By default, retrieves a copy of the ASC, but can be used for other components too.
	 */
	UFUNCTION()
	virtual void InitializeFromPlayerState();
	
private:

	/** The Ability System Component managed by this pawn class. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess))
	TObjectPtr<UNinjaGASAbilitySystemComponent> PawnAbilities;
	
};
