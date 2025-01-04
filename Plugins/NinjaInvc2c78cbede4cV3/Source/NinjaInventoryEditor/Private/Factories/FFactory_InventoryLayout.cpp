// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/FFactory_InventoryLayout.h"

#include "Data/NinjaInventoryLayoutDataAsset.h"

UFactory_InventoryLayout::UFactory_InventoryLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	SupportedClass = UNinjaInventoryLayoutDataAsset::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UFactory_InventoryLayout::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
	const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	check(Class->IsChildOf(UNinjaInventoryLayoutDataAsset::StaticClass()));
	return NewObject<UNinjaInventoryLayoutDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
