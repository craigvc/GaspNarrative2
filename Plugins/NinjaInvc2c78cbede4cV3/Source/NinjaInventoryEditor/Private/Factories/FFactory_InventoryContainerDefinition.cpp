// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/FFactory_InventoryContainerDefinition.h"

#include "Data/NinjaInventoryContainerDataAsset.h"

UFactory_InventoryContainerDefinition::UFactory_InventoryContainerDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SupportedClass = UNinjaInventoryContainerDataAsset::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UFactory_InventoryContainerDefinition::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
	const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(UNinjaInventoryContainerDataAsset::StaticClass()));
	return NewObject<UNinjaInventoryContainerDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
