// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/FFactory_EquipmentDefinition.h"

#include "Data/NinjaEquipmentDataAsset.h"

UFactory_EquipmentDefinition::UFactory_EquipmentDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SupportedClass = UNinjaEquipmentDataAsset::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UFactory_EquipmentDefinition::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
	const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(UNinjaEquipmentDataAsset::StaticClass()));
	return NewObject<UNinjaEquipmentDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
