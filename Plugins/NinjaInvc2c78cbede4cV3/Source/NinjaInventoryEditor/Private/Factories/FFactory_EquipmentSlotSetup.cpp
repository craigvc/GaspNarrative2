// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/FFactory_EquipmentSlotSetup.h"

#include "Data/NinjaEquipmentSlotDataAsset.h"

UFactory_EquipmentSlotSetup::UFactory_EquipmentSlotSetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SupportedClass = UNinjaEquipmentSlotDataAsset::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UFactory_EquipmentSlotSetup::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
	const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(UNinjaEquipmentSlotDataAsset::StaticClass()));
	return NewObject<UNinjaEquipmentSlotDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
