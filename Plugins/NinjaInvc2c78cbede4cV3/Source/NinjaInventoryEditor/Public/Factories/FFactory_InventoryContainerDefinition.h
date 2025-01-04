// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FFactory_InventoryContainerDefinition.generated.h"

UCLASS()
class NINJAINVENTORYEDITOR_API UFactory_InventoryContainerDefinition : public UFactory
{
    
	GENERATED_BODY()

public:

	UFactory_InventoryContainerDefinition(const FObjectInitializer& ObjectInitializer);
    
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn) override;

};
