// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "FFactionSerialization.generated.h"

class UNinjaInventoryContainer;
class UNinjaInventoryItem;

/**
 * Represents a serialized membership that can be used when saving/loading the game.
 */
USTRUCT(BlueprintType)
struct NINJAFACTIONS_API FFactionMembershipRecord
{
	
	GENERATED_BODY()

	/** Asset Path to the Faction Data Asset. */
	UPROPERTY(BlueprintReadWrite, Category = "Membership Record", SaveGame)
	FString DataAssetPath;

	/** Is this considered the main faction?. */
	UPROPERTY(BlueprintReadWrite, Category = "Membership Record", SaveGame)
	bool bIsMainFaction = false;

	/** Reputation assigned to this faction. Determines the tier. */
	UPROPERTY(BlueprintReadWrite, Category = "Membership Record", SaveGame)
	int32 Reputation = 0;	
	
};

/**
 * Represents a serialized manager that can be used when saving/loading the game.
 */
USTRUCT(BlueprintType)
struct NINJAFACTIONS_API FFactionManagerRecord
{
	
	GENERATED_BODY()

	/** All memberships assigned to the owner. */
	UPROPERTY(BlueprintReadWrite, Category = "Manager Record", SaveGame)
	TArray<FFactionMembershipRecord> MembershipRecords;

	UPROPERTY()
	TArray<uint8> Data;
	
};