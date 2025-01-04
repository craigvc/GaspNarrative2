// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#if WITH_GAMEPLAY_DEBUGGER

#include "CoreMinimal.h"
#include "GameplayDebuggerCategory.h"

class AActor;
class APlayerController;

class FGameplayDebuggerCategory_Faction final : public FGameplayDebuggerCategory
{
public:
    
    FGameplayDebuggerCategory_Faction();

    // -- Begin Gameplay Debugger Category implementation
    static TSharedRef<FGameplayDebuggerCategory> MakeInstance();
    virtual void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
    // -- End Gameplay Debugger Category implementation

private:

    void DisplayFactionData(const APlayerController* OwnerPC, const AActor* DebugActor);
    
};
#endif