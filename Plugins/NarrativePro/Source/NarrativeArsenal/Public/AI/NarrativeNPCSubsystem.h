// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include <GameplayTagContainer.h>
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "Character/CharacterDefinition.h"
#include <Kismet/BlueprintAsyncActionBase.h>
#include "NarrativeNPCSubsystem.generated.h"

//Called when a requested NPC was spawned. This is because spawning is deferred since we do it async, we don't do it immediately 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRequestedNPCSpawned, const UNPCDefinition*, NPCData, class ANarrativeNPCCharacter*, Character);

//Seperate delgate used by the async node 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestedNPCReady, class ANarrativeNPCCharacter*, Character);

//This handy node will find a spawned NPC in the world, or if one doesn't exist it will load the NPC in for you. 
UCLASS() 
class NARRATIVEARSENAL_API UAsyncAction_FindOrSpawnNPC : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

protected:

	void HandleRequestCompleted();

public:

	/** Execute the actual load */
	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", Category = "NPC Subsystem", WorldContext = "WorldContextObject"))
	static UAsyncAction_FindOrSpawnNPC* FindOrSpawnNPC(UObject* WorldContextObject, UNPCDefinition* NPCData, FTransform Transform = FTransform());

	//We need to check when the NPC was spawned in by the subsystem, we bind this to sub
	UFUNCTION()
	void OnNPCSpawned(const UNPCDefinition* NPCAsset, class ANarrativeNPCCharacter* Character);

	UPROPERTY(BlueprintAssignable)
	FOnRequestedNPCReady OnNPCReady;

	FScriptDelegate ScriptDel;

	//NPC Tag and Transform to spawn NPC at if doesn't exist. 
	TObjectPtr<UNPCDefinition> NPCAsset;
	FTransform Transform;
	TWeakObjectPtr<UWorld> World;
};

//Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct. 
USTRUCT()
struct FCharacterArray
{
	GENERATED_BODY()

public:

	FCharacterArray(){};
	
	TArray<class ANarrativeCharacter*> Characters;

		bool HasValidCharacters() const
	{
		for (auto& Char : Characters)
		{
			if (IsValid(Char))
			{
				return true;
			}
		}

		return false;
	};


};

//Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct. 
USTRUCT()
struct FNPCArray
{
	GENERATED_BODY()

public:

	FNPCArray(){};

	TArray<class ANarrativeNPCCharacter*> NPCs;
	
	bool HasValidNPCs() const
	{
		for (auto& NPC : NPCs)
		{
			if (IsValid(NPC))
			{
				return true;
			}
		}

		return false;
	};

};

/**
 * Character subsystem for Narrative. Allows us to easily load an Character/NPC, find an NPC in the world, ensures we don't spawn multiple NPC instances, etc. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeNPCSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
public:

	friend class UAsyncAction_FindOrSpawnNPC;

	UNarrativeNPCSubsystem();

	virtual void PostInitialize() override;
	virtual void Deinitialize() override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	/**Spawn an NPC in. 
	@param Transform is optional, and is only used if the actor doesnt exist in the world and needs spawning */
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	class ANarrativeNPCCharacter* SpawnNPC(UNPCDefinition* NPCData, FTransform Transform = FTransform());

	/** Same as spawn NPC, but will just return the NPC should it already exist in the level.  */
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	class ANarrativeNPCCharacter* FindOrSpawnNPC(UNPCDefinition* NPCData, FTransform Transform = FTransform());

	/** Return the first NPC in the world with this type. Much, much more efficient than a GetActorOfClass.
	Extremely efficient as NPCs are cached via a TMap lookup. */
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	class ANarrativeNPCCharacter* FindNPC(const UNPCDefinition* NPCData) const;

	/** Return the first character in the world with this definition. Much, much more efficient than a GetActorOfClass.
	Extremely efficient as characters are cached via a TMap lookup. */
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	class ANarrativeCharacter* FindCharacter(const UCharacterDefinition* CharacterDefinition) const;

	/** Request all NPCs of the given type. Much, much more efficient than a GetAllActorsOfClass. 
	Extremely efficient as NPCs are cached via a TMap lookup. */
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	void FindNPCs(const UNPCDefinition* NPCData, TArray<ANarrativeNPCCharacter*>& OutActors) const;

	/** Request all Characters of the given type. Much, much more efficient than a GetAllActorsOfClass. 
	Extremely efficient as NPCs are cached via a TMap lookup. */
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	void FindCharacters(const UCharacterDefinition* CharacterDefinition, TArray<ANarrativeCharacter*>& OutActors) const;

	/**Return whether a given character exists in the world*/
	UFUNCTION(BlueprintCallable, Category = "NPC Subsystem")
	bool IsCharacterSpawned(const UCharacterDefinition* CharacterDefinition) const;

	//Spawn the actual NPC in once we know its class has been loaded. 
	virtual class ANarrativeNPCCharacter* SpawnNPC_Internal(UNPCDefinition* NPCData, const FTransform& SpawnTransform);

	//Call this to add a character to the character map - destroying is done automatically
	void RegisterCharacter(class ANarrativeCharacter* Character);

protected:

	//Callback for when the NPC class is loaded and we can actually spawn it in. 
	UFUNCTION()
	virtual void OnNPCClassLoaded(FPrimaryAssetId LoadedId, const FTransform SpawnTransform);

	UPROPERTY(BlueprintAssignable, Category = "NPC Subsystem")
	FOnRequestedNPCSpawned OnNPCSpawned;

	FDelegateHandle ActorSpawnedHandle;
	FDelegateHandle ActorDestroyedHandle;

	//Maps CharacterDefinitions to spawned characters of that type, so we can efficiently access them without expensive GetAllActorsOfClass
	UPROPERTY(EditAnywhere, Category = "Settings")
	TMap<TObjectPtr<UCharacterDefinition>, FCharacterArray> CharacterMap;

	//Specialized NPC version of CharacterMap to avoid casting 
	UPROPERTY(EditAnywhere, Category = "Settings")
	TMap<TObjectPtr<UNPCDefinition>, FNPCArray> NPCMap;

	UFUNCTION()
	void OnActorSpawned(class AActor* SpawnedActor);

	UFUNCTION()
	void OnActorDestroyed(class AActor* DestroyedActor);
};
