// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Components/StateTreeComponentSchema.h"
#include "Runtime/Launch/Resources/Version.h"
#include "NinjaCombatComboComponentSchema.generated.h"

struct FStateTreeExecutionContext;

class UBrainComponent;
class UActorComponent;

/**
 * State Tree schema to be used with the Combo Manager Component.
 *
 * It ensures the owner is a valid implementation of the Combat Combo Manager Component.
 */
UCLASS(BlueprintType, EditInlineNew, CollapseCategories, meta = (DisplayName = "Combat Combo", CommonSchema))
class NINJACOMBAT_API UNinjaCombatComboComponentSchema : public UStateTreeComponentSchema
{
	
	GENERATED_BODY()

public:

	/** The index where the Combo Component should be, in the array of data. */
	static int32 ComboComponentIndex;

	/** The name with which the Combo Component is stored in the data. */
	static FName ComboComponentName;

	UNinjaCombatComboComponentSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

#if ENGINE_MINOR_VERSION > 3
	
	// -- Begin Tree Schema implementation
	virtual void PostLoad() override;
	static bool SetContextRequirements(UBrainComponent& BrainComponent, FStateTreeExecutionContext& Context, bool bLogErrors = false);
	// -- Begin Tree Schema implementation

#endif
	
protected:
	
	/** Actor Component implementing the Combo Manager Component. */
	UPROPERTY(EditAnywhere, Category = "Defaults", NoClear, meta = (MustImplement = "/Script/NinjaCombat.CombatComboManagerInterface"))
	TSubclassOf<UActorComponent> ComboManagerClass = nullptr;

#if WITH_EDITOR && ENGINE_MINOR_VERSION > 3
public:

	// -- Begin Editor functionality
	virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
	// -- End Editor functionality
	
#endif
};
