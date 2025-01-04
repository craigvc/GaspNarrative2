// Ninja Bear Studio Inc., all rights reserved.
#include "Factories/Factory_NinjaFactionAttitudeSolver.h"

#include "Blueprints/NinjaFactionAttitudeSolverBlueprint.h"
#include "GameFramework/NinjaFactionAttitudeSolver.h"
#include "Kismet2/KismetEditorUtilities.h"

UFactory_NinjaFactionAttitudeSolver::UFactory_NinjaFactionAttitudeSolver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    SupportedClass = UNinjaFactionAttitudeSolverBlueprint::StaticClass(); 
    bEditAfterNew = true;
    bCreateNew = true;
}

UObject* UFactory_NinjaFactionAttitudeSolver::FactoryCreateNew(UClass* Class, UObject* InParent, const FName Name,
    EObjectFlags const Flags, UObject* Context, FFeedbackContext* Warn)
{
    check(Class->IsChildOf(UNinjaFactionAttitudeSolverBlueprint::StaticClass()));
    return FKismetEditorUtilities::CreateBlueprint(UNinjaFactionAttitudeSolver::StaticClass(), InParent, Name,
        BPTYPE_Normal, UNinjaFactionAttitudeSolverBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
}
