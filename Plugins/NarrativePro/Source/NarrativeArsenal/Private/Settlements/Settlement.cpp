// Copyright Narrative Tools 2024. 

#include "Settlements/Settlement.h"
#include "POINavigationMarker.h"
#include "Components/BillboardComponent.h"
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include "AI/NPCDefinition.h"
#include "AI/NarrativeNPCSubsystem.h"
#include "NarrativeLogChannels.h"
#include "AI/NarrativeNPCController.h"
#include "NarrativeCommonUIFunctionLibrary.h"
#include "NavigatorGameplayTags.h"
#include "Engine/World.h"
#include "Settlements/Activities/SettlementActivityComponent.h"

#define LOCTEXT_NAMESPACE "Settlement"

// Sets default values
ASettlement::ASettlement()
{
	SettlementRoot = CreateDefaultSubobject<USceneComponent>("SettlementRoot");
	SetRootComponent(SettlementRoot);

	SettlementActivityManager = CreateDefaultSubobject<USettlementActivityComponent>("SettlementActivityComponent");

	PrimaryActorTick.bCanEverTick = true; 

#if WITH_EDITOR
	SetIsSpatiallyLoaded(false);

	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));

	if (SpriteComponent)
	{
		auto SettlementIconFinder = ConstructorHelpers::FObjectFinder<UTexture2D>(TEXT("/Script/Engine.Texture2D'/NarrativePro/Misc/Icons/T_Settlement.T_Settlement'"));
		if (SettlementIconFinder.Succeeded())
		{
			SpriteComponent->SetSprite(SettlementIconFinder.Object);
		}

		SpriteComponent->SetRelativeScale3D_Direct(FVector(2.f, 2.f, 2.f));
		SpriteComponent->bIsScreenSizeScaled = true;
		SpriteComponent->SetupAttachment(GetRootComponent());
	}

#endif 

	bActive = false;
	bDisabled = false;
}

bool ASettlement::IsCleared() const
{
	for (auto& Spawn : Spawns)
	{	
		if (!Spawn.bDisabled)
		{
			return false;
		}
	}

	return true; 
}

// Called when the game starts or when spawned
void ASettlement::BeginPlay()
{
	Super::BeginPlay();
	
	if (POITag.IsValid())
	{
		POIMarker = Cast<UPOINavigationMarker>(AddComponentByClass(UPOINavigationMarker::StaticClass(), false, FTransform(), true));
		POIMarker->POITag = POITag;
		POIMarker->POIDisplayName = SettlementDisplayName;
		POIMarker->DefaultMarkerSettings.LocationDisplayName = SettlementDisplayName;

		FinishAddComponent(POIMarker, false, FTransform());
	}
}

void ASettlement::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const bool bWasCleared = IsCleared();

	//If an NPC dies, disable their spawn. Disabled is saved, meaning if you come back later the spawn will remember their NPC was killed
	for (auto& Spawn : Spawns)
	{
		if (ANarrativeNPCCharacter* NPCCharacter = Spawn.SpawnedNPC.Get())
		{
			if (!Spawn.bDisabled && Spawn.bRememberIfKilled && !NPCCharacter->IsAlive())
			{
				Spawn.bDisabled = true;
			}
		}
	}

	if (!bWasCleared && IsCleared())
	{	
		//TODO add arsenal configuration settings in settings menu to configure stuff like this
		UNarrativeCommonUIFunctionLibrary::PushHUDNotification(this, FText::Format(LOCTEXT("SettlementCleared", "Settlement Cleared: {0}"), SettlementDisplayName));

		//Now that we're cleared there isn't any need to tick 
		SetActorTickEnabled(false);
	}
}

bool ASettlement::SetActive(const bool bNewActive)
{
	if (!bDisabled)
	{
		if (bNewActive != bActive)
		{
			bActive = bNewActive;

			SetActorTickEnabled(bActive);

			if (bActive)
			{
				Activate();
			}
			else
			{
				Deactivate();
			}

			return true; 
		}
	}

	return false; 
}

void ASettlement::Activate_Implementation()
{
	check(bActive);

	if (bActive)
	{
		UE_LOG(LogSettlements, Verbose, TEXT("Settlement %s was activated!"), *SettlementDisplayName.ToString());

		if (SettlementActivityManager)
		{
			SettlementActivityManager->SetActivitySchedule(SettlementSchedule);
		}

		for (auto& Spawn : Spawns)
		{
			if (ShouldSpawnNPC(Spawn))
			{
				if (ANarrativeNPCCharacter* NPC = SpawnNPC(Spawn))
				{
					UE_LOG(LogSettlements, Verbose, TEXT("Settlement %s spawned NPC %s!"), *SettlementDisplayName.ToString(), *Spawn.NPCToSpawn->NPCName.ToString());
					check(ClaimNPC(NPC));

					//Spawn NPC will cause the save system to load the NPC and will set its transform, however transform may not be correct, so we'll set it
					NPC->SetActorTransform(Spawn.SpawnTransform * GetActorTransform());
				}
			}
		}
	}
}

void ASettlement::Deactivate_Implementation()
{
	check(!bActive);

	if (!bActive)
	{
		UE_LOG(LogSettlements, Verbose, TEXT("Settlement %s was deactivated!"), *SettlementDisplayName.ToString());

		for (auto& Spawn : Spawns)
		{
			if (ShouldDespawnNPC(Spawn))
			{

				UE_LOG(LogSettlements, Verbose, TEXT("Settlement %s destroyed NPC %s!"), *SettlementDisplayName.ToString(), *Spawn.NPCToSpawn->NPCName.ToString());
				DespawnNPC(Spawn);
			}
		}
	}
}

ANarrativeNPCCharacter* ASettlement::SpawnNPC(FSettlementSpawn& SpawnInfo)
{
	if (IsValid(SpawnInfo.NPCToSpawn))
	{
		if (UNarrativeNPCSubsystem* NPCSubsystem = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
		{
			if (ANarrativeNPCCharacter* NPC = NPCSubsystem->SpawnNPC(SpawnInfo.NPCToSpawn, SpawnInfo.SpawnTransform * GetActorTransform()))
			{
				SpawnInfo.SpawnedNPC = NPC;
				
				//NPC remembers who spawned it, and which spawn owns it, so it can return to its settlement if needed 
				NPC->OwningSettlement = SettlementTag;
				NPC->OwningSpawn = SpawnInfo.SpawnID;

				return NPC;
			}
		}
	}

	return nullptr; 
}

bool ASettlement::DespawnNPC(FSettlementSpawn& SpawnInfo)
{
	if (ANarrativeNPCCharacter* NPCCharacter = SpawnInfo.SpawnedNPC.Get())
	{
		if (ANarrativeNPCController* NPCController = Cast<ANarrativeNPCController>(NPCCharacter->GetController()))
		{
			NPCController->CleanUp(0.f);
		}
		else
		{
			NPCCharacter->Destroy();
		}

		SpawnInfo.SpawnedNPC.Reset();
		return true;
	}

	return false; 
}

bool ASettlement::ClaimNPC(class ANarrativeNPCCharacter* NPCToClaim, const bool bMoveToSpawn)
{
	if (IsValid(NPCToClaim))
	{
		if (FSettlementSpawn* Spawn = GetNPCOwningSpawn(NPCToClaim))
		{
			Spawn->bReleased = false;

			if (bMoveToSpawn)
			{
				//TODO we probably don't need this in future but atm when we reclaim NPCs they should go to spawn loc. 
				NPCToClaim->SetActorTransform(Spawn->SpawnTransform * GetActorTransform());
			}

			return true;
		}
	}

	return false; 
}

bool ASettlement::ReleaseNPC(class ANarrativeNPCCharacter* NPCToRelease)
{
	if (FSettlementSpawn* Spawn = GetNPCOwningSpawn(NPCToRelease))
	{
		Spawn->bReleased = true;
		return true;
	}

	return false; 
}

bool ASettlement::ShouldSpawnNPC(const FSettlementSpawn& SpawnInfo) const
{
	if (SpawnInfo.bReleased || SpawnInfo.bDisabled || !IsValid(SpawnInfo.NPCToSpawn))
	{
		return false; 
	}

	if (SpawnInfo.NPCToSpawn->bAllowMultipleInstances)
	{
		return true;
	}
	else 
	{
		/*Unique NPCs only spawn if they aren't already in the world somewhere. If they are already in the world, something else
		has spawned them, possibly another settlement, and so we shouldn't create them. */
		if (UNarrativeNPCSubsystem* NPCSubsystem = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
		{
			return !NPCSubsystem->IsCharacterSpawned(SpawnInfo.NPCToSpawn);
		}
	}

	return false;
}

bool ASettlement::ShouldDespawnNPC(const FSettlementSpawn& SpawnInfo) const
{
	return SpawnInfo.SpawnedNPC.IsValid() && !SpawnInfo.bReleased;
}

FSettlementSpawn* ASettlement::GetNPCOwningSpawn(class ANarrativeNPCCharacter* NPC)
{
	check(NPC->OwningSpawn.IsValid());
	check(NPC->OwningSettlement.IsValid() && NPC->OwningSettlement == SettlementTag);

	if (!NPC->OwningSpawn.IsValid())
	{
		return nullptr;
	}

	for (FSettlementSpawn& Spawn : Spawns)
	{
		if (Spawn.SpawnID == NPC->OwningSpawn)
		{
			return &Spawn;
		}
	}

	return nullptr;
}

FSettlementSpawn ASettlement::GetSpawnData(const FGuid& SpawnID)
{
	for (FSettlementSpawn& Spawn : Spawns)
	{
		if (Spawn.SpawnID == SpawnID)
		{
			return Spawn;
		}
	}

	return FSettlementSpawn();
}

void ASettlement::SetDisabled(const bool bNewDisabled)
{
	if (bNewDisabled != bDisabled)
	{
		if (bNewDisabled && IsActive())
		{
			SetActive(false);
		}

		bDisabled = bNewDisabled;
	}
}

void ASettlement::SetActorGUID_Implementation(const FGuid& SavedGUID)
{
	//Dont need this as settlements are never dynamically spawned 
	//SettlementGUID = SavedGUID;  
}

FGuid ASettlement::GetActorGUID_Implementation() const
{
	return SettlementGUID;
}


#undef LOCTEXT_NAMESPACE 