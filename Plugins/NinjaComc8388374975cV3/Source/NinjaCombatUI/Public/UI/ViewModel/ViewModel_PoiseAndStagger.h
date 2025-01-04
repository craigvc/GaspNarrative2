// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "AttributeSet.h"
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "NinjaCombatViewModel.h"
#include "ViewModel_PoiseAndStagger.generated.h"

class UAbilitySystemComponent;

/**
 * Exposes information about a character's Poise and Stagger.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Poise and Stagger")
class NINJACOMBATUI_API UViewModel_PoiseAndStagger : public UNinjaCombatViewModel
{

	GENERATED_BODY()

public:

	bool IsStaggered() const { return bIsStaggered; }
	void SetIsStaggered(bool bNewValue);
	
	float GetPoise() const { return Poise; }
	float GetPoiseDamage() const { return PoiseDamage; }
	float GetPoiseRecovery() const { return PoiseRecovery; }
	float GetPoiseRecoveryInterval() const { return PoiseRecoveryInterval; }
	float GetPoisePercent() const { return PoisePercent; }
	float GetStaggerDuration() const { return StaggerDuration; }
	void SetPoise(float NewValue);
	void SetPoiseDamage(float NewValue);
	void SetPoiseRecovery(float NewValue);
	void SetPoiseRecoveryInterval(float NewValue);
	void SetPoisePercent(float NewValue);
	void SetStaggerDuration(float NewValue);
	
protected:

	/** Indicates if the character is currently staggered. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetIsStaggered", Getter = "IsStaggered", Category = "Poise and Stagger")
	bool bIsStaggered = false;
	
	/** Poise available in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Poise and Stagger")
	float Poise = 0.f;

	/** Current Poise Damage applied. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Poise and Stagger")
	float PoiseDamage = 0.f;

	/** How much poise is recovered. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Poise and Stagger")
	float PoiseRecovery = 0.f;

	/** How fast poise is recovered. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Poise and Stagger")
	float PoiseRecoveryInterval = 0.f;
	
	/** Percent value for the current poise damage. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Poise and Stagger")
	float PoisePercent = 0.f;

	/** Duration of the stagger effect. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Poise and Stagger")
	float StaggerDuration = 0.f;
	
	// -- Begin View Model implementation
	virtual void BindAttributes(UAbilitySystemComponent* AbilitySystemComponent) override;
	virtual void OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData) override;
	virtual void BindToCombatSystem(AActor* Actor) override;
	virtual void UnbindFromCombatSystem(AActor* OldActor) override;
	virtual void Reset() override;
	// -- End View Model implementation

	UFUNCTION()
	void HandleStaggeredStateChanged(UActorComponent* DamageManager, bool bNewIsStaggered);
	
};
