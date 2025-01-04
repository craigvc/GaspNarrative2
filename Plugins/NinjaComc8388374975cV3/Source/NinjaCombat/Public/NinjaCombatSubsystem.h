// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NinjaCombatSubsystem.generated.h"

/**
 * Provides game instance-level functionalities for the Combat System.
 */
UCLASS()
class NINJACOMBAT_API UNinjaCombatSubsystem : public UGameInstanceSubsystem
{
	
	GENERATED_BODY()
	
public:

	// -- Begin Subsystem implementation
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	// -- End Subsystem implementation	

	/**
	 * Provides a random float value within a given range.
	 *
	 * The float will be retrieved from an internal seed initialized along with the Subsystem, meaning
	 * it will have a far more accurate distribution than simple floats from the Math Library or from
	 * un-initialized/different seeds.
	 *
	 * @param Min			Minimum value for the range, inclusive.
	 * @param Max			Maximum value for the range, inclusive.
	 *
	 * @return
	 *		A randomly generated float, withing the determined range, created
	 *		using an internal seed for better distribution.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat")
	float GetRandomFloatInRange(float Min, float Max) const;

protected:

	/** Initializes the internal random stream. */
	virtual void InitializeStream();

private:

	/** Stream used by the Subsystem to provide proper random floats. */
	FRandomStream RandomStream;
	
};
