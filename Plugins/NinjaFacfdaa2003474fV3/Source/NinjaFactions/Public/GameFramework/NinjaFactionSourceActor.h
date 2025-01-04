// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/FactionSourceInterface.h"
#include "NinjaFactionSourceActor.generated.h"

/**
 * Basic implementation of a Faction Source Actor.
 */
UCLASS(Abstract, meta = (DisplayName = "Faction Source Actor"))
class NINJAFACTIONS_API ANinjaFactionSourceActor : public AActor, public IFactionSourceInterface
{
	
	GENERATED_BODY()

public:

	ANinjaFactionSourceActor(const FObjectInitializer& ObjectInitializer);

	// -- Begin Faction Source implementation
	virtual bool CanProvideFactionValues_Implementation(const UNinjaFactionDataAsset* Faction, int32 Reputation, FGameplayTag EventTag) const override;
	virtual TMap<UNinjaFactionDataAsset*, int32> GetReputationRewards_Implementation(const UNinjaFactionComponent* FactionMember, FGameplayTag EventTag) const override;
	// -- End Faction source implementation

protected:

	/** How much reputation this Actor grants. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Faction Source")
	int32 ReputationWorth;

};
