// Copyright Narrative Tools 2024. 


#include "ArsenalStatics.h"
#include "ArsenalSettings.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include <LevelSequence.h>
#include <MovieScene.h>
#include "AI/NPCDefinition.h"
#include "Sections/MovieScene3DTransformSection.h"
#include <Tracks/MovieScene3DTransformTrack.h>
#include <Components/LODSyncComponent.h>

bool UArsenalStatics::IsSameTeam(const AActor* A, const AActor* B)
{
	if (A && B)
	{
		const INarrativeTeamAgentInterface* ATeam = Cast<const INarrativeTeamAgentInterface>(A);
		const INarrativeTeamAgentInterface* BTeam = Cast<const INarrativeTeamAgentInterface>(B);

		if (ATeam && BTeam)
		{
			return ATeam->GetGenericTeamId() == BTeam->GetGenericTeamId();
		}
	}

	return false;
}

ETeamAttitude::Type UArsenalStatics::GetAttitude(const AActor* TestActor, const AActor* Target)
{
	if (TestActor && Target)
	{
		if (const INarrativeTeamAgentInterface* TestActorTeam = Cast<const INarrativeTeamAgentInterface>(TestActor))
		{
			if (TestActorTeam)
			{
				return TestActorTeam->GetTeamAttitudeTowards(*Target);
			}
		}
	}

	return ETeamAttitude::Neutral;
}

FTransform UArsenalStatics::GetNPCSequenceStartTransform(class ULevelSequence* Sequence, class UNPCDefinition* NPC)
{
	if (Sequence && NPC)
	{
		UMovieScene* MovieScene = Sequence->GetMovieScene();

		for (int i = 0; i < MovieScene->GetPossessableCount(); i++)
		{
			FMovieScenePossessable& Possessable = MovieScene->GetPossessable(i);
			
			//TODO - this only worksm because Possessable.GetName() isn't editor only, but it will likely be in future - we need to find a more robust way to do this possibly with GUIDs. 
			if (Possessable.GetName().Equals(NPC->NPCID.ToString(), ESearchCase::IgnoreCase))
			{
				//MovieScene->FindTrack is not working in packaged games 
				if (const UMovieScene3DTransformTrack* TransformTrack = MovieScene->FindTrack<UMovieScene3DTransformTrack>(Possessable.GetGuid(), FName("Transform")))
				{
					const TArray<UMovieSceneSection*>& Sections = TransformTrack->GetAllSections();

					if (Sections.Num() > 0)
					{
						const UMovieSceneSection* Section0 = Sections[0];

						const FMovieSceneChannelProxy& Proxy = Section0->GetChannelProxy();

						//Find the float values in the transform 
						auto Channels = Proxy.GetChannels<FMovieSceneDoubleChannel>();

						int32 NumChannels = Channels.Num() - 1; 

						TArray<double> TransformData;

						for (int32 x = 0; x < NumChannels; x++)
						{
							if (Channels.IsValidIndex(x))
							{
								double Val = 0.0f;
								bool Succeeded = Channels[x]->Evaluate(FFrameTime(0), Val);

								TransformData.Add(Val);
							}
						}
					
						//Map the floats into the transform, dont worry about scale. 
						FVector Location = FVector(TransformData[0], TransformData[1], TransformData[2]);
						FRotator Rotation = FRotator(TransformData[4], TransformData[5], TransformData[3]);

						return FTransform(Rotation, Location);
					}
				}
			}
		}
	}

	return FTransform();
}

class UArsenalSettings* UArsenalStatics::GetNarrativeProSettings()
{

	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings;
	}

	return nullptr; 
}

FName UArsenalStatics::GetGameEntryMapName()
{
	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings->GameEntryMap.GetLongPackageFName();
	}

	return FName();
}

class UNarrativeGameUserSettings* UArsenalStatics::GetNarrativeGameUserSettings()
{
	return Cast<UNarrativeGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

ENarrativeGameplayDifficulty UArsenalStatics::GetGameplayDifficultyLevel()
{
	if (UNarrativeGameUserSettings* GUS = GetNarrativeGameUserSettings())
	{
		return GUS->GetGameplayDifficulty();
	}
	return ENarrativeGameplayDifficulty::Easy;
}

