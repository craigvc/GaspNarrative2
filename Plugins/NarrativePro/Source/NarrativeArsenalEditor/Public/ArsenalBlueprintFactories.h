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

UCLASS()
class UNPCDefinitionFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UNPCDefinitionFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};

UCLASS()
class UPlayerDefinitionFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UPlayerDefinitionFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};

UCLASS()
class UCreatorOptionMeshFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorOptionMeshFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};

UCLASS()
class UCreatorOptionGroomFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorOptionGroomFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorOptionScalarFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorOptionScalarFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorOptionVectorFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorOptionVectorFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorItemMeshFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorItemMeshFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorItemGroomFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorItemGroomFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorFormFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorFormFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorSectionFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorSectionFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};


UCLASS()
class UCreatorPageFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorPageFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};



UCLASS()
class UCreatorColorSwatchFactory : public UFactory
{
	GENERATED_BODY()

	public: 
	
	UCreatorColorSwatchFactory();

	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

};
