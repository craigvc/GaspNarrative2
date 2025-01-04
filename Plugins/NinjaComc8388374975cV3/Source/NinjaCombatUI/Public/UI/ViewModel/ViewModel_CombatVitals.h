// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "AttributeSet.h"
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "NinjaCombatViewModel.h"
#include "ViewModel_CombatVitals.generated.h"

class UAbilitySystemComponent;

/**
 * Exposes the vital combat attributes commonly used in the player's HUD: Health, Stamina and Magic.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Combat Vitals")
class NINJACOMBATUI_API UViewModel_CombatVitals : public UNinjaCombatViewModel
{

	GENERATED_BODY()

public:

	bool IsDead() const { return bIsDead; }
	void SetIsDead(bool bNewValue);
	
	float GetHealth() const { return Health; }
	float GetHealthPercent() const { return HealthPercent; }
	float GetMaxHealthTotal() const { return MaxHealthTotal; }
	void SetHealth(float NewValue);
	void SetHealthPercent(float NewValue);
	void SetMaxHealthTotal(float NewValue);

	float GetStamina() const { return Stamina; }
	float GetStaminaPercent() const { return StaminaPercent; }
	float GetMaxStaminaTotal() const { return MaxStaminaTotal; }
	void SetStamina(float NewValue);
	void SetStaminaPercent(float NewValue);
	void SetMaxStaminaTotal(float NewValue);

	float GetMagic() const { return Magic; }
	float GetMagicPercent() const { return MagicPercent; }
	float GetMaxMagicTotal() const { return MaxMagicTotal; }
	void SetMagic(float NewValue);
	void SetMagicPercent(float NewValue);
	void SetMaxMagicTotal(float NewValue);
	
protected:

	/** Indicates if the character is currently dead. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetIsDead", Getter = "IsDead", Category = "Combat Vitals")
	bool bIsDead = false;
	
	/** Current health available in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float Health = 0.f;

	/** Percent value for the current health. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float HealthPercent = 0.f;
	
	/** Maximum health available in the Attribute Set, including all modifiers. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float MaxHealthTotal = 0.f;
	
	/** Current stamina available in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float Stamina = 0.f;

	/** Percent value for the current stamina. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float StaminaPercent = 0.f;
	
	/** Maximum stamina available in the Attribute Set, including all modifiers. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float MaxStaminaTotal = 0.f;

	/** Current magic available in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float Magic = 0.f;

	/** Percent value for the current magic. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float MagicPercent = 0.f;
	
	/** Maximum magic available in the Attribute Set, including all modifiers. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combat Vitals")
	float MaxMagicTotal = 0.f;

	// -- Begin View Model implementation
	virtual void BindAttributes(UAbilitySystemComponent* AbilitySystemComponent) override;
	virtual void OnAttributeChanged(const FOnAttributeChangeData& AttributeChangeData) override;
	// -- End View Model implementation
	
};
