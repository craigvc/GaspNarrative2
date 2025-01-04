// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/Factory_NinjaInputHandler.h"

#include "KismetCompiler.h"
#include "NinjaInputHandler.h"
#include "NinjaInputHandlerBlueprint.h"
#include "Kismet2/KismetEditorUtilities.h"

UFactory_NinjaInputHandler::UFactory_NinjaInputHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    SupportedClass = UNinjaInputHandlerBlueprint::StaticClass(); 
    bEditAfterNew = true;
    bCreateNew = true;
}

UObject* UFactory_NinjaInputHandler::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
    EObjectFlags const Flags, UObject* Context, FFeedbackContext* Warn)
{
    check(Class->IsChildOf(UNinjaInputHandlerBlueprint::StaticClass()));
    return FKismetEditorUtilities::CreateBlueprint(UNinjaInputHandler::StaticClass(), InParent, Name,
        BPTYPE_Normal, UNinjaInputHandlerBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
}
