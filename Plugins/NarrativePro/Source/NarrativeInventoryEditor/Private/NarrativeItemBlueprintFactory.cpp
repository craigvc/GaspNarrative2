//  Copyright Narrative Tools 2022.


#include "NarrativeItemBlueprintFactory.h"
#include "NarrativeItem.h"
#include "InventoryComponent.h"
#include <Kismet2/KismetEditorUtilities.h>
#include "NarrativeItemBlueprint.h"

UNarrativeItemBlueprintFactory::UNarrativeItemBlueprintFactory()
{
	SupportedClass = UNarrativeItemBlueprint::StaticClass();
	ParentClass = UNarrativeItem::StaticClass();
	bSkipClassPicker = true;
}

UObject* UNarrativeItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	// Make sure we are trying to factory a blueprint, then create and init one
	check(Class->IsChildOf(UBlueprint::StaticClass()));

	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, Name, BPTYPE_Normal, UNarrativeItemBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), CallingContext);
}

UObject* UNarrativeItemBlueprintFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FactoryCreateNew(Class, InParent, Name, Flags, Context, Warn, NAME_None);
}


UItemCollectionFactory::UItemCollectionFactory()
{
	SupportedClass = UItemCollection::StaticClass();
	bCreateNew = true; 
}

UObject* UItemCollectionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UItemCollection>(InParent, Class, Name, Flags, Context);
}