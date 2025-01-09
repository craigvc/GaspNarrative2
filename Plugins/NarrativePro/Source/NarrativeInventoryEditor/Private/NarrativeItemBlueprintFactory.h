//  Copyright Narrative Tools 2022.

#pragma once

#include "CoreMinimal.h"
#include "Factories/BlueprintFactory.h"
#include "NarrativeItemBlueprintFactory.generated.h"

/**
 * Factory for creating a new NarrativeItemBlueprint 
 */
UCLASS()
class UNarrativeItemBlueprintFactory : public UBlueprintFactory
{
	GENERATED_BODY()
	
	UNarrativeItemBlueprintFactory();

	// UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory Interface

};

UCLASS()
class UItemCollectionFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UItemCollectionFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};