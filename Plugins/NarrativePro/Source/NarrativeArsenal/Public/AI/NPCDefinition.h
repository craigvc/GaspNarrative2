// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <GameplayTagContainer.h>
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "Character/CharacterDefinition.h"
#include "NPCDefinition.generated.h"

/**
 * Data asset with information about an NPC, as well as its class. We don't store NPC information in the NPC actor itself, this is so we can access 
 * NPC information like name, icon, etc without having to load the entire NPC class into memory. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNPCDefinition : public UCharacterDefinition
{
	GENERATED_BODY()
	
public:

	UNPCDefinition();

	/** FName ID for this NPC - eventually I want to phase this out but dialogues require a SpeakerID so we populate that using this. (SpeakerID is difficult to remove atm as very coupled to other things.) */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "NPC")
	FName NPCID;

	/**The name of this NPC. Will be used for the interaction and navigation markers. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "NPC")
	FText NPCName;

	/** The NPCs level will be randomized between these values. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "NPC", meta = (ClampMin=1, ClampMax=5000))
	FInt32Range LevelRange;

	/** Is this NPC unique, or can we spawn multiple of them? Main characters for example generally only
	want a max of one spawned in a time, whilst a generic bandit might have as many instances as we want. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "NPC")
	bool bAllowMultipleInstances;

	/** If this NPC is unique, we'll use this as the NPCs save system GUID. Since there is only one unique GUID
	defined here, this will nicely guarantee unique NPCs only ever have 1 save record created per NPC. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "NPC", meta = (EditCondition="!bAllowMultipleInstances", EditConditionHides))
	FGuid UniqueNPCGUID;

	/** Class path */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "NPC")
	TSoftClassPtr<ANarrativeNPCCharacter> NPCClassPath;

	/** The dialogue that should play when we interact with this NPC - can be left empty.  */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Dialogue", meta = (AssetBundles = "SpawnedData"))
	TSoftClassPtr<class UDialogue> Dialogue;

	/** The NPCs tagged dialogues these are essentially dialogue, usually free movement that can be kicked off via a tag "TaggedDialogue.Taunt, TaggedDialogue.Greet, etc. */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Dialogue")
	TArray<FTaggedDialogue> TaggedDialogues;

	/** Whether this NPCs inventory should be a vendor inventory - that is to say they are a shop vendor  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	bool bIsVendor;

	/** Default currency this character should have in their inventory */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	int32 TradingCurrency;

	/** The items we should grant the character by default. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
	TArray<FLootTableRoll> TradingItemLoadout;

	/** The name of the vendors shop, if this NPC is a vendor.  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory", meta = (EditCondition = "bIsVendor", EditConditionHides))
	FText ShopFriendlyName;

	/** The NPCs Activity schedule. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "AI", meta = (AssetBundles = "SpawnedData"))
	TSoftObjectPtr<class UNPCActivitySchedule> ActivitySchedule;
	
	/** The NPCs activity config. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "AI", meta = (AssetBundles = "SpawnedData"))
	TSoftObjectPtr<class UNPCActivityConfiguration> ActivityConfiguration;
};
