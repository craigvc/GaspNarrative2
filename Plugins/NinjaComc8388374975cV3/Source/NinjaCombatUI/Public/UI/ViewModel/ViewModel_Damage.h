// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatViewModel.h"
#include "Types/FDamageEntry.h"
#include "ViewModel_Damage.generated.h"

/**
 * Exposes information about damage received.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Damage")
class NINJACOMBATUI_API UViewModel_Damage : public UNinjaCombatViewModel
{
	
	GENERATED_BODY()

public:
	
	bool HasReceivedBlockingHit() const { return bReceivedBlockingHit; }
	bool HasReceivedBreakerHit() const { return bReceivedBreakerHit; }
	bool HasReceivedCriticalHit() const { return bReceivedCriticalHit; }
	bool HasReceivedFatalHit() const { return bReceivedFatalHit; }
	bool HasReceivedStaggeringHit() const { return bReceivedStaggeringHit; }
	float GetLastDamageReceived() const { return LastDamageReceived; }
	
	void SetReceivedBlockingHit(bool bNewValue);
	void SetReceivedBreakerHit(bool bNewValue);
	void SetReceivedCriticalHit(bool bNewValue);
	void SetReceivedFatalHit(bool bNewValue);
	void SetReceivedStaggeringHit(bool bNewValue);
	void SetLastDamageReceived(float NewValue);
	
protected:
	
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetReceivedBlockingHit", Getter = "HasReceivedBlockingHit", Category = "Damage")
	bool bReceivedBlockingHit = false;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetReceivedBreakerHit", Getter = "HasReceivedBreakerHit", Category = "Damage")
	bool bReceivedBreakerHit = false;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetReceivedCriticalHit", Getter = "HasReceivedCriticalHit", Category = "Damage")
	bool bReceivedCriticalHit = false;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetReceivedFatalHit", Getter = "HasReceivedFatalHit", Category = "Damage")
	bool bReceivedFatalHit = false;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetReceivedStaggeringHit", Getter = "HasReceivedStaggeringHit", Category = "Damage")
	bool bReceivedStaggeringHit = false;
	
	/** Amount of damage received from the last attack. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Damage")
	float LastDamageReceived = 0.f;

	// -- Begin View Model implementation
	virtual void BindToCombatSystem(AActor* Actor) override;
	virtual void UnbindFromCombatSystem(AActor* OldActor) override;
	virtual void Reset() override;
	// -- End View Model implementation
	
	/** Handles incoming damage. */
	UFUNCTION()
	void HandleDamageReceived(AActor* Causer, AActor* Target, const FDamageEntry& DamageEntry);
	
};
