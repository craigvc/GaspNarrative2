// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/Factory_NinjaFactionData.h"

#include "Data/NinjaFactionDataAsset.h"

UFactory_NinjaFactionData::UFactory_NinjaFactionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    SupportedClass = UNinjaFactionDataAsset::StaticClass();
    bEditAfterNew = true;
    bCreateNew = true;
}

UObject* UFactory_NinjaFactionData::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
    const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    check(Class->IsChildOf(UNinjaFactionDataAsset::StaticClass()));
    return NewObject<UNinjaFactionDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
