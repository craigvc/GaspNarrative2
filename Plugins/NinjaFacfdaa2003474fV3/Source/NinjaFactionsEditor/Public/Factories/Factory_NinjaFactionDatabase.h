// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "Factory_NinjaFactionDatabase.generated.h"

UCLASS()
class NINJAFACTIONSEDITOR_API UFactory_NinjaFactionDatabase : public UFactory
{
    
    GENERATED_BODY()

public:

    UFactory_NinjaFactionDatabase(const FObjectInitializer& ObjectInitializer);

    virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
        UObject* Context, FFeedbackContext* Warn) override;

};
