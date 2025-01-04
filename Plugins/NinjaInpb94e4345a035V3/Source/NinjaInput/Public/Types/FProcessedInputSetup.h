// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FProcessedBinding.h"
#include "FProcessedInputSetup.generated.h"

class UInputAction;
class UNinjaInputSetupDataAsset;

/**
 * Information about a fully processed Input Setup.
 */
USTRUCT(BlueprintType)
struct FProcessedInputSetup
{
	
    GENERATED_BODY()

    /** Data Asset that has been processed. */
    UPROPERTY()
    TObjectPtr<const UNinjaInputSetupDataAsset> SourceData;

    /** All bindings created for this setup. */
    UPROPERTY()
    TArray<FProcessedBinding> ProcessedBindings;
    
    FProcessedInputSetup()
    {
        SourceData = nullptr;
        ProcessedBindings.Reset();
    }
	
    explicit FProcessedInputSetup(const UNinjaInputSetupDataAsset* SourceData, const TArray<FProcessedBinding>& ProcessedBindings)
        : SourceData(SourceData)
        , ProcessedBindings(ProcessedBindings)
    {
    }
};