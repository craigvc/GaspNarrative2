// Copyright Narrative Tools 2024. 


#include "ArsenalBlueprintFactories.h"
#include "Items/WeaponItem.h"
#include "Items/GameplayEffectItem.h"
#include "ArsenalBlueprints.h"
#include <Kismet2/KismetEditorUtilities.h>

UWeaponItemBlueprintFactory::UWeaponItemBlueprintFactory()
{
	SupportedClass = UWeaponItemBlueprint::StaticClass();
	ParentClass = UWeaponItem::StaticClass();
	bSkipClassPicker = true;
}

UObject* UWeaponItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UBlueprint::StaticClass()));

	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UWeaponItemBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), CallingContext);
}

UObject* UWeaponItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}

UGameplayEffectItemBlueprintFactory::UGameplayEffectItemBlueprintFactory()
{
	SupportedClass = UGameplayEffectItemBlueprint::StaticClass();
	ParentClass = UGameplayEffectItem::StaticClass();
	bSkipClassPicker = true;
}

UObject* UGameplayEffectItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UBlueprint::StaticClass()));

	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UGameplayEffectItemBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), CallingContext);
}

UObject* UGameplayEffectItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}