//  Copyright Narrative Tools 2022.


#include "EquippableItemBlueprintFactory.h"
#include "Items/EquippableItem.h"
#include <Kismet2/KismetEditorUtilities.h>
#include "EquippableItemBlueprint.h"

UEquippableItemBlueprintFactory::UEquippableItemBlueprintFactory()
{
	SupportedClass = UEquippableItemBlueprint::StaticClass();
	ParentClass = UEquippableItem::StaticClass();
	bSkipClassPicker = true;
}

UObject* UEquippableItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UBlueprint::StaticClass()));

	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UEquippableItemBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), CallingContext);
}

UObject* UEquippableItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}

UClothingItemBlueprintFactory::UClothingItemBlueprintFactory()
{
	SupportedClass = UClothingItemBlueprint::StaticClass();
	ParentClass = UEquippableItem_Clothing::StaticClass();
	bSkipClassPicker = true;
}

UObject* UClothingItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UBlueprint::StaticClass()));

	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UClothingItemBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), CallingContext);
}

UObject* UClothingItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}