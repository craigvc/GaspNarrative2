// Copyright Narrative Tools 2024. 


#include "ArsenalStatics.h"
#include "ArsenalSettings.h"
#include "Teams/NarrativeTeamAgentInterface.h"
#include <LevelSequence.h>
#include <MovieScene.h>
#include "AI/NPCDefinition.h"
#include <Components/LODSyncComponent.h>
#include <UnrealEngine.h>
#include "UnrealFramework/NarrativePlayerController.h"
#include "Settings/NarrativeCombatDeveloperSettings.h"
#include "NarrativeUIDeveloperSettings.h"
#include "Settings/NarrativeTimeOfDaySettings.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "UnrealFramework/NarrativeGameMode.h"
#include "AI/Activities/NPCActivity.h"

bool UArsenalStatics::IsSameTeam(const AActor* A, const AActor* B)
{
	if (A && B)
	{
		const INarrativeTeamAgentInterface* ATeam = Cast<const INarrativeTeamAgentInterface>(A);
		const INarrativeTeamAgentInterface* BTeam = Cast<const INarrativeTeamAgentInterface>(B);

		if (ATeam && BTeam)
		{
			return ATeam->GetFactions().HasAny(BTeam->GetFactions());
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

void UArsenalStatics::AddFactionsToActor(AActor* Actor, const FGameplayTagContainer& Factions)
{
	if (Actor)
	{
		if (INarrativeTeamAgentInterface* ActorTeam = Cast<INarrativeTeamAgentInterface>(Actor))
		{
			TArray<FGameplayTag> FactionsTags;
			Factions.GetGameplayTagArray(FactionsTags);

			for (auto& T : FactionsTags)
			{			
				ActorTeam->AddFaction(T);
			}
		}
	}
}

void UArsenalStatics::RemoveFactionsFromActor(AActor* Actor, const FGameplayTagContainer& Factions)
{
	if (Actor)
	{
		if (INarrativeTeamAgentInterface* ActorTeam = Cast<INarrativeTeamAgentInterface>(Actor))
		{
			TArray<FGameplayTag> FactionsTags;
			Factions.GetGameplayTagArray(FactionsTags);

			for (auto& T : FactionsTags)
			{			
				ActorTeam->RemoveFaction(T);
			}
		}
	}
}

class UArsenalSettings* UArsenalStatics::GetNarrativeProSettings()
{

	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings;
	}

	return nullptr; 
}

class UNarrativeTimeOfDaySettings* UArsenalStatics::GetTimeOfDaySettings()
{
	if (UNarrativeTimeOfDaySettings* Settings = GetMutableDefault<UNarrativeTimeOfDaySettings>())
	{
		return Settings;
	}

	return nullptr; 
}

class UNarrativeUIDeveloperSettings* UArsenalStatics::GetNarrativeUISettings()
{
	if (UNarrativeUIDeveloperSettings* Settings = GetMutableDefault<UNarrativeUIDeveloperSettings>())
	{
		return Settings;
	}

	return nullptr; 
}

class UNarrativeCombatDeveloperSettings* UArsenalStatics::GetCombatSettings()
{
	if (UNarrativeCombatDeveloperSettings* Settings = GetMutableDefault<UNarrativeCombatDeveloperSettings>())
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

FName UArsenalStatics::GetCharacterCreatorMapName()
{
	if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
	{
		return Settings->CharacterCreatorMap.GetLongPackageFName();
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

FVector2D UArsenalStatics::GetGameResolution()
{
	FVector2D Result = FVector2D( 1, 1 );

	Result.X = GSystemResolution.ResX;
	Result.Y = GSystemResolution.ResY;

	return Result;
}

FText UArsenalStatics::ReplaceInputVariables(class ANarrativePlayerController* PC, FText TextToReplace)
{
	if (PC)
	{
		//Replace variables in dialogue line
		FString LineString = TextToReplace.ToString();

		int32 OpenBraceIdx = -1;
		int32 CloseBraceIdx = -1;
		bool bFoundOpenBrace = LineString.FindChar('{', OpenBraceIdx);
		bool bFoundCloseBrace = LineString.FindChar('}', CloseBraceIdx);
		uint32 Iters = 0; // More than 50 wildcard replaces and something has probably gone wrong, so safeguard against that

		while (bFoundOpenBrace && bFoundCloseBrace && OpenBraceIdx < CloseBraceIdx && Iters < 50)
		{
			const FString VariableName = LineString.Mid(OpenBraceIdx + 1, CloseBraceIdx - OpenBraceIdx - 1);
			FString VariableVal = VariableName;

			FString L, R;

			//In Narrative Pro you can do {Input.Attack} and this should be replaced with the platform specific rich text ie <img id="Input.Xbox.Attack"/>
			if (VariableName.Split(".", &L, &R))
			{
				if (L.Equals("Input", ESearchCase::IgnoreCase))
				{
					const FString InputDeviceName = PC->GetNarrativeInputDeviceName();

					if (!InputDeviceName.IsEmpty())
					{
						VariableVal = FString::Printf(TEXT("<img id=\"Input.%s.%s\"/>"), *InputDeviceName, *R);
					}

					if (!VariableVal.IsEmpty())
					{
						LineString.RemoveAt(OpenBraceIdx, CloseBraceIdx - OpenBraceIdx + 1);
						LineString.InsertAt(OpenBraceIdx, VariableVal);
					}
				}
			}

			bFoundOpenBrace = LineString.FindChar('{', OpenBraceIdx);
			bFoundCloseBrace = LineString.FindChar('}', CloseBraceIdx);

			Iters++;
		}

		if (Iters > 0)
		{
			return FText::FromString(LineString);
		}
	}


	return TextToReplace;
}

float UArsenalStatics::GetTimeOfDay(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (ANarrativeGameState* NarrativeGameState = World->GetGameState<ANarrativeGameState>())
		{
			return NarrativeGameState->GetTimeOfDay();
		}
	}
	return 0.f; 
}

bool UArsenalStatics::IsTimeInRange(const float Time, const float RangeStart, const float RangeEnd)
{
	//Time is on same day 
	if (RangeStart <= RangeEnd)
	{
		return Time >= RangeStart && Time <= RangeEnd;
	}
	else // time spans into next day 
	{ 
		return Time >= RangeStart || Time <= RangeEnd;
	}
}

FString UArsenalStatics::GetTimeOfDayAsString(const UObject* WorldContextObject)
{
	const float Time = UArsenalStatics::GetTimeOfDay(WorldContextObject);

	return TimeToString(Time);
}

FString UArsenalStatics::TimeToString(const float Time)
{
	const FString Hour = FString::FromInt(FMath::FloorToInt(Time / 100.f)); 
	const int32 MinuteInt = FMath::TruncToInt((FMath::Fmod(Time, 100.f) / 100.f) * 60.f);
	const FString Minute = MinuteInt <= 9 ? "0" + FString::FromInt(MinuteInt) : FString::FromInt(MinuteInt);

	return FString::Printf(TEXT("%s:%s"), *Hour, *Minute);
}

float UArsenalStatics::GetTotalAccumulatedTime(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (ANarrativeGameState* NarrativeGameState = World->GetGameState<ANarrativeGameState>())
		{
			return NarrativeGameState->GetAccumulatedTime();
		}
	}
	return 0.f; 
}

ANarrativeGameState* UArsenalStatics::GetNarrativeGameState(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		return World->GetGameState<ANarrativeGameState>();
	}

	return nullptr; 
}

ANarrativeGameMode* UArsenalStatics::GetNarrativeGameMode(const UObject* WorldContextObject)
{
	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		return World->GetAuthGameMode<ANarrativeGameMode>();
	}

	return nullptr;
}
