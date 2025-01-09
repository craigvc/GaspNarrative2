// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeGameMode.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "AI/NarrativeNPCSubsystem.h"
ANarrativeGameMode::ANarrativeGameMode()
{

}

UPlayerDefinition* ANarrativeGameMode::GetPlayerDefinitionForController_Implementation(AController* InController)
{

	const int32 PIndex = GetNumPlayers() - 1;

	if (PlayerDefinitions.IsValidIndex(PIndex))
	{
		return PlayerDefinitions[PIndex];
	}
	else
	{
		//If only one def exists use that
		if (PlayerDefinitions.IsValidIndex(0))
		{
			return PlayerDefinitions[0];
		}
	}


	return nullptr; 
}

APawn* ANarrativeGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform)
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = GetInstigator();
	SpawnInfo.ObjectFlags |= RF_Transient;	// We never want to save default player pawns into a map
	UClass* PawnClass = GetDefaultPawnClassForController(NewPlayer);
	APawn* ResultPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnTransform, SpawnInfo);

	ANarrativePlayerCharacter* NChar = Cast<ANarrativePlayerCharacter>(ResultPawn);

	/**As players join the game, assign their player definition assets. */
	if (NChar)
	{
		if (UPlayerDefinition* PDef = GetPlayerDefinitionForController(NewPlayer))
		{
			NChar->SetPlayerDefinition(PDef);
		}
		else
		{
			UE_LOG(LogGameMode, Warning, TEXT("Couldnt get player definition for spawned player! "));
		}	
	}

	if (!ResultPawn)
	{
		UE_LOG(LogGameMode, Warning, TEXT("SpawnDefaultPawnAtTransform: Couldn't spawn Pawn of type %s at %s"), *GetNameSafe(PawnClass), *SpawnTransform.ToHumanReadableString());
	}

	//tell the character subsystem to add the char now that we know its chardef is set 
	if (NChar)
	{
		if (UNarrativeNPCSubsystem* NPCSubsystem = GetWorld()->GetSubsystem<UNarrativeNPCSubsystem>())
		{
			NPCSubsystem->RegisterCharacter(NChar);
		}
	}

	return ResultPawn;
}
