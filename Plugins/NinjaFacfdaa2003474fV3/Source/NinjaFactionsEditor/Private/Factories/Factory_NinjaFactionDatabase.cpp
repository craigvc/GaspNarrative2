// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/Factory_NinjaFactionDatabase.h"

#include "Blueprints/NinjaFactionDatabaseBlueprint.h"
#include "GameFramework/NinjaFactionDatabase.h"
#include "Kismet2/KismetEditorUtilities.h"

UFactory_NinjaFactionDatabase::UFactory_NinjaFactionDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    SupportedClass = UNinjaFactionDatabaseBlueprint::StaticClass(); 
    bEditAfterNew = true;
    bCreateNew = true;
}

UObject* UFactory_NinjaFactionDatabase::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
    EObjectFlags const Flags, UObject* Context, FFeedbackContext* Warn)
{
    check(Class->IsChildOf(UNinjaFactionDatabaseBlueprint::StaticClass()));
    return FKismetEditorUtilities::CreateBlueprint(UNinjaFactionDatabase::StaticClass(), InParent, Name,
        BPTYPE_Normal, UNinjaFactionDatabaseBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
}
