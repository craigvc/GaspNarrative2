// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/FFactory_InventoryItemDefinition.h"

#include "Data/NinjaInventoryItemDataAsset.h"

UFactory_InventoryItemDefinition::UFactory_InventoryItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SupportedClass = UNinjaInventoryItemDataAsset::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UFactory_InventoryItemDefinition::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
	const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(UNinjaInventoryItemDataAsset::StaticClass()));
	return NewObject<UNinjaInventoryItemDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
