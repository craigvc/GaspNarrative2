// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CombatDissolveManagerInterface.generated.h"

class UCurveFloat;

/** Configures a parameter for the dissolve material. */
USTRUCT(BlueprintType)
struct FDissolveMaterialParameter
{
	
	GENERATED_BODY()

	/** Parameter name in the Material. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dissolve Settings")
	FName ParameterName = NAME_None;

	/** Curve used to retrieve parameter values. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dissolve Settings")
	TObjectPtr<UCurveFloat> CurveValue;
	
};

UINTERFACE(MinimalAPI)
class UCombatDissolveManagerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Defines the API for the dissolve functionality.
 */
class NINJACOMBAT_API ICombatDissolveManagerInterface
{
	
	GENERATED_BODY()

public:
	
	/**
	 * Dissolves the owner, using the provided parameters and curves.
	 *
	 * @param DissolveSettings
	 *		Settings for the dissolve effect.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Dissolve Manager Interface")
	void Dissolve(const TArray<FDissolveMaterialParameter>& DissolveSettings);

};
