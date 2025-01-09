// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GameplayTagContainer.h>
#include "NarrativeSavableActor.h"
#include "Settlement.generated.h"

/**Defines a spawn in our settlement - who should spawn, where they should spawn, as well as if they have previously been killed so we can prevent spawning, etc. */
USTRUCT(BlueprintType)
struct FSettlementSpawn
{

	GENERATED_BODY()

	FSettlementSpawn()
	{
		//If we dont wrap this in a valid check, it seems to regenerate the GUID on BeginPlay() - which we do not want 
		//if (!SpawnID.IsValid())
		//{
		//	SpawnID = FGuid::NewGuid();
		//}

		bRememberIfKilled = true;
		bReleased = false;
		bDisabled = false; 
	};

	//Whether or not the spawn is disabled. Enemies that have been killed will disable their spawn if bRememberIfKilled is true 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info")
	bool bDisabled;

	//Used internally by settlements to identify which spawn is which 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info")
	FGuid SpawnID;

	//Optional tag, can used to grab the spawn to modify it later (for example to change the spawned NPC)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info")
	FGameplayTag SpawnTag;

	//The NPC we want the spawn to spawn in 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info")
	TObjectPtr<class UNPCDefinition> NPCToSpawn;

	// Where we'll spawn the NPC
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info", meta = (MakeEditWidget))
	FTransform SpawnTransform; 

	//Whether the spawn should deactivate itself once its enemy is killed, or whether we should respawn 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info")
	bool bRememberIfKilled;

	//A pointer to the NPC, provided they are currently spawned in 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn Info")
	TWeakObjectPtr<class ANarrativeNPCCharacter> SpawnedNPC;

	//Whether the spawn has released the NPC or not. If true, the NPC has been detached from this spawn and no longer owns it. We also won't spawn it when we activate. 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, SaveGame, Category = "Spawn Info")
	bool bReleased;
};

/**
Intended for non-multiplayer games, Settlements are useful for creating towns, villages, bandit camps, etc. They are always loaded into the world, however exist in a lightweight
deactivated state until activated. In this deactivated state you can access their name, location, check/modify which NPCs will spawn there etc. 
This means you can change which NPCs spawn at a settlement, check if a settlement is cleared, move spawns around, etc even if a settlement
isn't activated.  however none of their NPCs will be spawned in this deactivated state. 

Once activated, settlements will spawn their NPCs in, and remove them when deactivated. They are typically activated by an ASettlementLoader. When World Partition
loads/unloads the settlement loader, it will automatically activate or deactivate the settlement, meaning only settlements your player is near will be activated, and have their loaded in! 
This means you get good performance. If your game has hundreds of towns or villages, only nearby ones will have their NPCs kept in the world. 

Finally, settlements are saved to disk. That means that if your ever change what NPC is spawned at a settlement, or whether you've discovered or cleared a 
settlement, when you come back in and load your save the settlement will be as you left it. 
*/
UCLASS()
class NARRATIVEARSENAL_API ASettlement : public AActor, public INarrativeSavableActor
{
	GENERATED_BODY()
	
	friend class ASettlementLoader;

public:	
	// Sets default values for this actor's properties
	ASettlement();

	//Root component - we want the settlement to have a transform 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class USceneComponent> SettlementRoot;
	 
	//The settlement activity component. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class USettlementActivityComponent> SettlementActivityManager;

	//All settlements get a POI marker by default 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	TObjectPtr<class UPOINavigationMarker> POIMarker;

	//The settlements spawns
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, Category = "Settlement Configuration|Spawns")
	TArray<FSettlementSpawn> Spawns;

	//Enable this if you want to prevent the settlement activating, usually for debugging 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame, Category = "Settlement Configuration")
	bool bDisabled;

	//The GUID that the save system uses to identify and save the settlement
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settlement Configuration")
	FGuid SettlementGUID;

	//The gameplay tag used to identity the settlement 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settlement Configuration", meta = (Categories = "Narrative.Settlements"))
	FGameplayTag SettlementTag;

	//If you want the settlement to be registered as a POI, provide a valid POI tag here and the settlement will auto-register itself as a POI. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settlement Configuration", meta = (Categories = "Narrative.POIs"))
	FGameplayTag POITag;

	//The display name of the settlement. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settlement Configuration")
	FText SettlementDisplayName;

	//The settlements schedule, if one is desired.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settlement Configuration")
	TObjectPtr<class USettlementActivitySchedule> SettlementSchedule;

	//Return true if the settlement is cleared, meaning all spawns are deactivated and no NPCs remain 
	UFUNCTION(BlueprintPure, Category = "Settlement")
	bool IsCleared() const; 

	//Check whether settlement is active or whether WP has deactivated it 
	UFUNCTION(BlueprintPure, Category = "Settlement")
	FORCEINLINE bool IsActive() const {return bActive;};

	#if WITH_EDITORONLY_DATA

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Display, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UBillboardComponent> SpriteComponent;

	#endif 

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick( float DeltaSeconds ) override;

	FGuid GetActorGUID_Implementation() const override;
	void SetActorGUID_Implementation(const FGuid& SavedGUID) override;

	UFUNCTION(BlueprintCallable, Category = "Settlement")
	virtual bool SetActive(const bool bActive);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Settlement")
	void Activate();
	virtual void Activate_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Settlement")
	void Deactivate();
	virtual void Deactivate_Implementation();
	
	//Spawn an NPC, and store it in the spawn info.
	virtual class ANarrativeNPCCharacter* SpawnNPC(FSettlementSpawn& SpawnInfo);
	virtual bool DespawnNPC(FSettlementSpawn& SpawnInfo);

	UFUNCTION(BlueprintCallable, Category = "Settlement")
	virtual bool ClaimNPC(class ANarrativeNPCCharacter* NPCToClaim, const bool bMoveToSpawn = true);

	UFUNCTION(BlueprintCallable, Category = "Settlement")
	virtual bool ReleaseNPC(class ANarrativeNPCCharacter* NPCToRelease);

	//Checks if the settlement should spawn this NPC or not. 
	virtual bool ShouldSpawnNPC(const FSettlementSpawn& SpawnInfo) const;
	virtual bool ShouldDespawnNPC(const FSettlementSpawn& SpawnInfo) const;

	FSettlementSpawn* GetNPCOwningSpawn(class ANarrativeNPCCharacter* NPC);

	//Grab spawn data using spawn ID
	UFUNCTION(BlueprintCallable, Category = "Settlement")
	FSettlementSpawn GetSpawnData(const FGuid& SpawnID);

	//Disable the settlement
	UFUNCTION(BlueprintCallable, Category = "Settlement")
	void SetDisabled(const bool bNewDisabled);

	//Whether the settlement is active or not 
	UPROPERTY(BlueprintReadOnly, Category = "Settlement Configuration")
	bool bActive;

};
