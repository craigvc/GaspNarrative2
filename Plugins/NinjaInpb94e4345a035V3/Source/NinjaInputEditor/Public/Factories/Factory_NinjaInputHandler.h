// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "Factory_NinjaInputHandler.generated.h"

UCLASS()
class NINJAINPUTEDITOR_API UFactory_NinjaInputHandler : public UFactory
{
    
    GENERATED_BODY()

public:

    UFactory_NinjaInputHandler(const FObjectInitializer& ObjectInitializer);

    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
        UObject* Context, FFeedbackContext* Warn) override;

};
