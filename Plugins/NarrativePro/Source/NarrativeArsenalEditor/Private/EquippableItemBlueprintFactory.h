// Copyright Narrative Tools 2022.

#pragma once

#include "CoreMinimal.h"
#include "Factories/BlueprintFactory.h"
#include "EquippableItemBlueprintFactory.generated.h"

/**
 * Factory for creating a new NarrativeEquippableBlueprint 
 */
UCLASS()
class UEquippableItemBlueprintFactory : public UBlueprintFactory
{
	GENERATED_BODY()
	
	UEquippableItemBlueprintFactory();

	// UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory Interface

};


/**
 * Factory for creating a new NarrativeClothingBlueprint 
 */
UCLASS()
class UClothingItemBlueprintFactory : public UBlueprintFactory
{
	GENERATED_BODY()
	
	UClothingItemBlueprintFactory();

	// UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory Interface

};
