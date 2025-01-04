// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Factories/BlueprintFactory.h"
#include "ArsenalBlueprintFactories.generated.h"


UCLASS()
class UWeaponItemBlueprintFactory : public UBlueprintFactory
{
	GENERATED_BODY()
	
	UWeaponItemBlueprintFactory();

	// UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory Interface

};

UCLASS()
class UGameplayEffectItemBlueprintFactory : public UBlueprintFactory
{
	GENERATED_BODY()
	
	UGameplayEffectItemBlueprintFactory();

	// UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory Interface

};
