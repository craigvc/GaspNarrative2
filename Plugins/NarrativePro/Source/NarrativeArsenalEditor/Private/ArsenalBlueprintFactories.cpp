// Copyright Narrative Tools 2024. 


#include "ArsenalBlueprintFactories.h"
#include "Items/WeaponItem.h"
#include "Items/GameplayEffectItem.h"
#include "ArsenalBlueprints.h"
#include "AI/NPCDefinition.h"
#include "Character/PlayerDefinition.h"
#include <Kismet2/KismetEditorUtilities.h>
#include "InventoryComponent.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Mesh.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Groom.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Scalar.h"
#include "CharacterCreator/Options/CharacterCreatorOption_Vector.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Mesh.h"
#include "CharacterCreator/Items/CharacterCreatorItem_Groom.h"
#include "CharacterCreator/CharacterCreatorConfiguration.h"
#include "CharacterCreator/CreatorColorSwatch.h"

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

UNPCDefinitionFactory::UNPCDefinitionFactory()
{
	SupportedClass = UNPCDefinition::StaticClass();
	bCreateNew = true; 
}

UObject* UNPCDefinitionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UNPCDefinition>(InParent, Class, Name, Flags, Context);
}

UPlayerDefinitionFactory::UPlayerDefinitionFactory()
{
	SupportedClass = UPlayerDefinition::StaticClass();
	bCreateNew = true; 
}

UObject* UPlayerDefinitionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UPlayerDefinition>(InParent, Class, Name, Flags, Context);
}

UCreatorOptionMeshFactory::UCreatorOptionMeshFactory()
{
	SupportedClass = UCharacterCreatorOption_Mesh::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorOptionMeshFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorOption_Mesh>(InParent, Class, Name, Flags, Context);
}

UCreatorOptionGroomFactory::UCreatorOptionGroomFactory()
{
	SupportedClass = UCharacterCreatorOption_Groom::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorOptionGroomFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorOption_Groom>(InParent, Class, Name, Flags, Context);
}

UCreatorOptionScalarFactory::UCreatorOptionScalarFactory()
{
	SupportedClass = UCharacterCreatorOption_Scalar::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorOptionScalarFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorOption_Scalar>(InParent, Class, Name, Flags, Context);
}

UCreatorOptionVectorFactory::UCreatorOptionVectorFactory()
{
	SupportedClass = UCharacterCreatorOption_Vector::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorOptionVectorFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorOption_Vector>(InParent, Class, Name, Flags, Context);
}

UCreatorItemMeshFactory::UCreatorItemMeshFactory()
{
	SupportedClass = UCharacterCreatorItem_Mesh::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorItemMeshFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorItem_Mesh>(InParent, Class, Name, Flags, Context);
}

UCreatorItemGroomFactory::UCreatorItemGroomFactory()
{
	SupportedClass = UCharacterCreatorItem_Groom::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorItemGroomFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorItem_Groom>(InParent, Class, Name, Flags, Context);
}


UCreatorFormFactory::UCreatorFormFactory()
{
	SupportedClass = UCharacterCreatorForm::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorFormFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorForm>(InParent, Class, Name, Flags, Context);
}

UCreatorSectionFactory::UCreatorSectionFactory()
{
	SupportedClass = UCharacterCreatorSection::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorSectionFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorSection>(InParent, Class, Name, Flags, Context);
}

UCreatorPageFactory::UCreatorPageFactory()
{
	SupportedClass =  UCharacterCreatorPage::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorPageFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorPage>(InParent, Class, Name, Flags, Context);
}

UCreatorColorSwatchFactory::UCreatorColorSwatchFactory()
{
	SupportedClass = UCharacterCreatorColorSwatch::StaticClass();
	bCreateNew = true; 
}

UObject* UCreatorColorSwatchFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterCreatorColorSwatch>(InParent, Class, Name, Flags, Context);
}
