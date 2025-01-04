// Copyright Narrative Tools 2024. 


#include "AI/NarrativeNPCSubsystem.h"
#include "AI/NPCDefinition.h"
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include <EngineUtils.h>
#include <Engine/AssetManager.h>
#include <GameFramework/GameModeBase.h>
#include "Subsystems/NarrativeSaveSubsystem.h"
#include <Kismet/GameplayStatics.h>
#include "NarrativeLogChannels.h"

UNarrativeNPCSubsystem::UNarrativeNPCSubsystem()
{

}


void UNarrativeNPCSubsystem::PostInitialize()
{
	Super::PostInitialize();
	
	//The save subsystem used to load all this itself, but we had a problem - we needed NPC data around before we loaded - so we've moved it here instead. TODO perhaps a more proper system to handle load ordering 
	if (UWorld* World = GetWorld())
	{
		FOnActorDestroyed::FDelegate ActorDestroyed = FOnActorDestroyed::FDelegate::CreateUObject(this, &UNarrativeNPCSubsystem::OnActorDestroyed);
		ActorDestroyedHandle = World->AddOnActorDestroyedHandler(ActorDestroyed);
	}
}

void UNarrativeNPCSubsystem::Deinitialize()
{
	Super::Deinitialize();

	NPCMap.Empty();
	ActorDestroyedHandle.Reset();
}

void UNarrativeNPCSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
}

class ANarrativeNPCCharacter* UNarrativeNPCSubsystem::SpawnNPC(UNPCDefinition* NPCData, FTransform SpawnTransform /*= FTransform()*/)
{
	if (NPCData)
	{
		if (UWorld* World = GetWorld())
		{
			//Only server types should spawn NPCs, which should then replicate 
			if (World->GetNetMode() < NM_Client)
			{
				if (!NPCData->NPCClassPath.IsValid())
				{
					//TODO we should async load new NPCs in 
					NPCData->NPCClassPath.LoadSynchronous();
				}

				//If the NPCs class path is valid, we can spawn it immediately. Otherwise, we'll need to wait for the asset manager to load it. 
				if (NPCData->NPCClassPath.IsValid())
				{
					return SpawnNPC_Internal(NPCData, SpawnTransform);
				}
			}
		}
	}

	return nullptr;
}

class ANarrativeNPCCharacter* UNarrativeNPCSubsystem::FindOrSpawnNPC(UNPCDefinition* NPCData, FTransform SpawnTransform)
{
	if (!IsValid(NPCData))
	{
		return nullptr;
	}

	ANarrativeNPCCharacter* NPC = FindNPC(NPCData);

	//If the NPC is invalid, it wasn't in the world, and so we need to make sure we spawn it. 
	if(!IsValid(NPC))
	{
		return SpawnNPC(NPCData, SpawnTransform);

	}

	return NPC;
}

class ANarrativeNPCCharacter* UNarrativeNPCSubsystem::FindNPC(const UNPCDefinition* NPCData) const 
{
	if (NPCMap.Contains(NPCData))
	{
		for (auto& NPC : NPCMap[NPCData].NPCs)
		{
			if (IsValid(NPC))
			{
				return NPC;
			}
		}
	}
	return nullptr;
}

void UNarrativeNPCSubsystem::FindNPCs(const UNPCDefinition* NPCData, TArray<ANarrativeNPCCharacter*>& OutActors) const
{
	if (NPCMap.Contains(NPCData))
	{
		OutActors = NPCMap[NPCData].NPCs;
	}
}

bool UNarrativeNPCSubsystem::IsNPCSpawned(const UNPCDefinition* NPCData) const
{
	if (NPCMap.Contains(NPCData))
	{
		return NPCMap[NPCData].HasValidNPCs();
	}

	return false;
}

class ANarrativeNPCCharacter* UNarrativeNPCSubsystem::SpawnNPC_Internal(UNPCDefinition* NPCData, const FTransform& SpawnTransform)
{
	if (UWorld* World = GetWorld())
	{
		//Only server types should spawn NPCs, which should then replicate 
		if (World->GetNetMode() < NM_Client)
		{
			if (IsValid(NPCData))
			{	
				//TODO maybe just have one npc class and load syncronous it 
				const TSubclassOf<ANarrativeNPCCharacter> NPCClass =  NPCData->NPCClassPath.LoadSynchronous();

				FNPCArray& NPCArray = NPCMap.FindOrAdd(NPCData);

				//The NPC array already has an NPC spawned under this key. This instance cannot be created, lets destroy the NPC we tried to spawn 
				if (NPCArray.HasValidNPCs() && !NPCData->bAllowMultipleInstances)
				{
					UE_LOG(LogNPCs, Warning, TEXT("UNarrativeNPCSubsystem::SpawnNPC_Internal prevented a duplicate of %s"), *NPCData->NPCName.ToString());
					return nullptr;
				}

				if (ANarrativeNPCCharacter* NPC = World->SpawnActorDeferred<ANarrativeNPCCharacter>(NPCClass, SpawnTransform, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn))
				{
					if (IsValid(NPC))
					{
						NPC->SetNPCDefinition(NPCData);
						NPC->FinishSpawning(SpawnTransform);

						#if WITH_EDITOR
							NPC->SetActorLabel("NarrativeNPC_" + NPC->NPCData->NPCID.ToString());
						#endif

						if (NPC)
						{
							NPC->SpawnDefaultController();
						}

						NPCArray.NPCs.AddUnique(NPC);
						OnNPCSpawned.Broadcast(NPCData, NPC);

						return NPC;
					}

				}
			}
		}
	}
	return nullptr;
}

void UNarrativeNPCSubsystem::OnNPCClassLoaded(FPrimaryAssetId LoadedId, const FTransform SpawnTransform)
{
	if (UAssetManager* Manager = UAssetManager::GetIfValid())
	{
		if (UNPCDefinition* NPCData = Cast<UNPCDefinition>(Manager->GetPrimaryAssetObject(LoadedId)))
		{
			//The class path should now be loaded thanks to bundles! 
			check(NPCData->NPCClassPath.IsValid());

			SpawnNPC_Internal(NPCData, SpawnTransform);
		}
	}
}

void UNarrativeNPCSubsystem::OnActorDestroyed(class AActor* DestroyedActor)
{
	//Remove the destroyed NPC from its map
	if (ANarrativeNPCCharacter* DestroyedNPC = Cast<ANarrativeNPCCharacter>(DestroyedActor))
	{
		if (UNPCDefinition* NPCData = DestroyedNPC->NPCData)
		{
			if (NPCMap.Contains(NPCData))
			{
				NPCMap[NPCData].NPCs.Remove(DestroyedNPC);
			}
			else
			{
				UE_LOG(LogNPCs, Warning, TEXT("UNarrativeNPCSubsystem::OnActorDestroyed tried removing NPC from map but it had null NPCData! "));
			}
		}
	}
}


void UAsyncAction_FindOrSpawnNPC::HandleRequestCompleted()
{

}

void UAsyncAction_FindOrSpawnNPC::Activate()
{
	if (World.IsValid())
	{
		UWorld* OurWorld = World.Get();

		if (UNarrativeNPCSubsystem* NPCSubsystem = OurWorld->GetSubsystem<UNarrativeNPCSubsystem>())
		{
			//If character isn't valid yet, wait for subsystem to announce its ready
			// TODO REMOVED FOR NOW AS WE ARE NOT ASYNC LOAD ATM, ADD THIS BACK WHEN READY 
			//NPCSubsystem->OnNPCSpawned.AddDynamic(this, &UAsyncAction_FindOrSpawnNPC::OnNPCSpawned);

			ANarrativeNPCCharacter* Character = NPCSubsystem->FindOrSpawnNPC(NPCAsset, Transform);

			if (IsValid(Character))
			{
				OnNPCReady.Broadcast(Character);
			}
		}
	}
}


UAsyncAction_FindOrSpawnNPC* UAsyncAction_FindOrSpawnNPC::FindOrSpawnNPC(UObject* WorldContextObject, UNPCDefinition* NPCData, FTransform Transform /*= FTransform()*/)
{
	if (WorldContextObject)
	{
		UAsyncAction_FindOrSpawnNPC* Action = NewObject<UAsyncAction_FindOrSpawnNPC>();
		Action->NPCAsset = NPCData;
		Action->Transform = Transform;
		Action->World = WorldContextObject->GetWorld();
		Action->RegisterWithGameInstance(WorldContextObject);

		return Action;
	}

	return nullptr;
}

void UAsyncAction_FindOrSpawnNPC::OnNPCSpawned(const UNPCDefinition* InNPCAsset, class ANarrativeNPCCharacter* Character)
{	
	UWorld* OurWorld = World.Get();

	//TODO remove delegate in better way 
	if (UNarrativeNPCSubsystem* NPCSubsystem = OurWorld->GetSubsystem<UNarrativeNPCSubsystem>())
	{
		//Make sure the NPC we requested was spawned and not a different one 
		if (InNPCAsset == NPCAsset)
		{
			OnNPCReady.Broadcast(Character);
		}

		//If character isn't valid yet, wait for subsystem to announce its ready
		NPCSubsystem->OnNPCSpawned.RemoveDynamic(this, &UAsyncAction_FindOrSpawnNPC::OnNPCSpawned);
	}

}
