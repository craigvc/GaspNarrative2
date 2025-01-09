// Copyright Narrative Tools 2024. 


#include "SaveSystemStatics.h"
#include "Subsystems/NarrativeSaveSubsystem.h"
#include <Engine/World.h>
#include <GameFramework/Actor.h>

void USaveSystemStatics::CreateSaveGuid(FGuid& OutGuid)
{
	if (!OutGuid.IsValid())
	{
		OutGuid = FGuid::NewGuid();
	}
}

bool USaveSystemStatics::LoadSingleActor(class AActor* Actor)
{
	if (Actor)
	{
		if (UWorld* ActorWorld = Actor->GetWorld())
		{
			if (UNarrativeSaveSubsystem* SaveSubsystem = Actor->GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
			{
				return SaveSubsystem->LoadSingleActor(Actor);
			}
		}
	}

	return false;
}

bool USaveSystemStatics::SaveSingleActor(class AActor* Actor)
{
	if (Actor)
	{
		if (UWorld* ActorWorld = Actor->GetWorld())
		{
			if (UNarrativeSaveSubsystem* SaveSubsystem = Actor->GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
			{
				return SaveSubsystem->SaveSingleActor(Actor);
			}
		}
	}

	return false;
}

bool USaveSystemStatics::RemoveSingleActor(class AActor* Actor)
{
	if (Actor)
	{
		if (UWorld* ActorWorld = Actor->GetWorld())
		{
			if (UNarrativeSaveSubsystem* SaveSubsystem = Actor->GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
			{
				return SaveSubsystem->RemoveSingleActor(Actor);
			}
		}
	}

	return false;
}
