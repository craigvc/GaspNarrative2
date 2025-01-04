// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "FFactory_EquipmentSlotSetup.generated.h"

UCLASS()
class NINJAINVENTORYEDITOR_API UFactory_EquipmentSlotSetup : public UFactory
{
    
	GENERATED_BODY()

public:

	UFactory_EquipmentSlotSetup(const FObjectInitializer& ObjectInitializer);
    
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn) override;

};
