// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "Types/FFactionMembership.h"
#include "UObject/Interface.h"
#include "FactionMemberInterface.generated.h"

class UNinjaFactionComponent;

UINTERFACE(MinimalAPI)
class UFactionMemberInterface : public UInterface
{
    GENERATED_BODY()
};

/**
 * Allows an actor to provide faction data.
 */
class NINJAFACTIONS_API IFactionMemberInterface
{
    
    GENERATED_BODY()

public:

    /**
     * Provides the Faction Component assigned to this agent.
     * 
     * @return
     *      The component that bridges this actor with the world's Faction Database and
     *      provides faction details, alignments, attitude checks, etc. Must be valid.
     */
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Faction Member Interface")
    UNinjaFactionComponent* GetFactionComponent() const;
    virtual UNinjaFactionComponent* GetFactionComponent_Implementation() const;

};
