// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/Factory_NinjaInputSetup.h"

#include "Data/NinjaInputSetupDataAsset.h"

UFactory_NinjaInputSetup::UFactory_NinjaInputSetup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    SupportedClass = UNinjaInputSetupDataAsset::StaticClass();
    bEditAfterNew = true;
    bCreateNew = true;
}

UObject* UFactory_NinjaInputSetup::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
    const EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
    check(Class->IsChildOf(UNinjaInputSetupDataAsset::StaticClass()));
    return NewObject<UNinjaInputSetupDataAsset>(InParent, Class, Name, Flags | RF_Transactional, Context);
}
