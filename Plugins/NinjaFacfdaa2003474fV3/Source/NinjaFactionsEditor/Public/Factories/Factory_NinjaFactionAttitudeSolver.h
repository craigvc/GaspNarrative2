// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "Factory_NinjaFactionAttitudeSolver.generated.h"

UCLASS()
class NINJAFACTIONSEDITOR_API UFactory_NinjaFactionAttitudeSolver : public UFactory
{
    
    GENERATED_BODY()

public:

    UFactory_NinjaFactionAttitudeSolver(const FObjectInitializer& ObjectInitializer);

    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
        UObject* Context, FFeedbackContext* Warn) override;

};
