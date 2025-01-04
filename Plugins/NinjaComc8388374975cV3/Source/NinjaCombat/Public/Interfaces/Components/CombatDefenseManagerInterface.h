// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatDelegates.h"
#include "Types/FDamageCalculation.h"
#include "UObject/Interface.h"
#include "CombatDefenseManagerInterface.generated.h"

UINTERFACE(MinimalAPI)
class UCombatDefenseManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for a component that manages defense mechanisms.
 */
class NINJACOMBAT_API ICombatDefenseManagerInterface
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Binds to a Multicast Delegate that will notify about changes in the blocking state.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	void BindToBlockingStateChangedDelegate(const FBlockingStateChangedDelegate& Delegate);

	/**
	 * Binds to a Multicast Delegate that will notify about changes in the invulnerability state.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	void BindToInvulnerabilityStateChangedDelegate(const FInvulnerabilityStateChangedDelegate& Delegate);

	/**
	 * Unbinds an object from the blocking delegate.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	void UnbindFromBlockingStateChangedDelegate(const UObject* Source);
	
	/**
	 * Unbinds an object from the invulnerability delegate.
	 */	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	void UnbindFromInvulnerabilityStateChangedDelegate(const UObject* Source);
	
	/**
	 * Checks if the owner is blocking.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	bool IsBlocking() const;

	/**
	 * Checks if the owner can block a damage instigator.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	bool CanBlock(const FDamageCalculationInput& Input) const;
	
	/**
	 * Checks if the owner is invulnerable.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	bool IsInvulnerable() const;

	/**
	 * Checks the chance to defend against a fatal damage.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Defense Manager Interface")
	bool CheckLastStand() const;
	virtual bool CheckLastStand_Implementation() const { return false; }

	/**
	 * Effectively commits a Last Stand that has been accepted.
	 *
	 * This is where a Gameplay Effect, Tags, or etc, should be applied to remove a charge,
	 * maybe notify external systems about it, etc.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent, Category = "Defense Manager Interface")
	void CommitLastStand();
	virtual void CommitLastStand_Implementation() { }

	/**
	 * Defends incoming damage.
	 * 
	 * @param Input			Details about the incoming damage.
	 * @param Output		Results of the damage calculation, including the defense.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintNativeEvent, Category = "Defense Manager Interface")
	void DefendDamage(const FDamageCalculationInput& Input, FDamageCalculationOutput& Output) const;
	
};
