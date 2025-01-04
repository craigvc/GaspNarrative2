// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Damage/NinjaCombatDamageHandler.h"
#include "DamageHandler_Dissolve.generated.h"

struct FDissolveMaterialParameter;
class UCurveFloat;

/**
 * Executes a dissolve effect based on a material's parameter and dissolve curve.
 *
 * Meant to be executed on fatal damage.
 *
 * It also uses the "Dissolve Manager" interface, usually implemented by a component,
 * to actually perform the dissolve, since that requires some sort of tick. Keep in
 * mind that the default Damage Handler implements this interface by default.
 */
UCLASS(DisplayName = "Dissolve")
class NINJACOMBAT_API UDamageHandler_Dissolve : public UNinjaCombatDamageHandler
{
	
	GENERATED_BODY()

public:

	UDamageHandler_Dissolve();
	
	// -- Begin Damage Handler implementation
	virtual void HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const override;
	// -- End Damage Handler implementation

protected:

	/** Parameters used for the dissolve material. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Damage Handler", meta = (TitleProperty = "ParameterName"))
	TArray<FDissolveMaterialParameter> DissolveSettings;
	
};
