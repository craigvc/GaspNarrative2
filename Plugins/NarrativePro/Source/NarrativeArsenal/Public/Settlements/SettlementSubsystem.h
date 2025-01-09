// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include <GameplayTagContainer.h>
#include "SettlementSubsystem.generated.h"

/**
 * Subsystem for managing settlements. 
 */
UCLASS()
class NARRATIVEARSENAL_API USettlementSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:

	USettlementSubsystem();

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	//Find a settlement using its tag
	UFUNCTION(BlueprintCallable, Category = "Settlement Subsystem")
	class ASettlement* GetSettlement(UPARAM(meta = (Categories = "Narrative.Settlements"))FGameplayTag SettlementTag) const;

	//We cache POIs using tags for efficient lookups 
	UPROPERTY()
	TMap<FGameplayTag, class ASettlement*> SettlementMap;
};
