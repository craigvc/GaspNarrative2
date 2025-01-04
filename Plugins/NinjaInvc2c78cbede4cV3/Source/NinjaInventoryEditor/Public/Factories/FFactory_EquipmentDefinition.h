// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FFactory_EquipmentDefinition.generated.h"

UCLASS()
class NINJAINVENTORYEDITOR_API UFactory_EquipmentDefinition : public UFactory
{
    
	GENERATED_BODY()

public:

	UFactory_EquipmentDefinition(const FObjectInitializer& ObjectInitializer);
    
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn) override;

};
