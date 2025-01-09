// Copyright Narrative Tools 2022. 


#include "Tales/NarrativeFunctionLibrary.h"
#include "Tales/TalesComponent.h"
#include "Tales/NarrativeTaskManager.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "Engine/GameInstance.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "UnrealFramework/NarrativePlayerController.h"

class UTalesComponent* UNarrativeFunctionLibrary::GetTalesComponent(const UObject* WorldContextObject)
{
	return GetNarrativeComponentFromTarget(UGameplayStatics::GetPlayerController(WorldContextObject, 0));
}

class UTalesComponent* UNarrativeFunctionLibrary::GetNarrativeComponentFromTarget(AActor* Target)
{
	if (!Target)
	{
		return nullptr;
	}

	if (UTalesComponent* NarrativeComp = Target->FindComponentByClass<UTalesComponent>())
	{
		return NarrativeComp;
	}

	//Narrative comp may be on the controllers pawn or pawns controller
	if (APlayerController* OwningController = Cast<APlayerController>(Target))
	{
		if (OwningController->GetPawn())
		{
			return OwningController->GetPawn()->FindComponentByClass<UTalesComponent>();
		}
	}

	if (APawn* OwningPawn = Cast<APawn>(Target))
	{
		if (OwningPawn->GetController())
		{
			return OwningPawn->GetController()->FindComponentByClass<UTalesComponent>();
		}
	}

	return nullptr;
}

bool UNarrativeFunctionLibrary::CompleteNarrativeDataTask(class UTalesComponent* Target, const UNarrativeDataTask* Task, const FString& Argument, const int32 Quantity)
{
	if (Target)
	{
		return Target->CompleteNarrativeDataTask(Task, Argument, Quantity);
	}
	return false;
}

static FString DefaultString("LooseTask");

bool UNarrativeFunctionLibrary::CompleteLooseNarrativeDataTask(class UTalesComponent* Target, const FString& Argument, const int32 Quantity /*= 1*/)
{
	if (Target)
	{
		return Target->CompleteNarrativeDataTask(DefaultString, Argument, Quantity);
	}
	return false;
}

class UNarrativeDataTask* UNarrativeFunctionLibrary::GetTaskByName(const UObject* WorldContextObject, const FString& EventName)
{
	if (UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject))
	{
		if (UNarrativeTaskManager* EventManager = GI->GetSubsystem<UNarrativeTaskManager>())
		{
			return EventManager->GetTask(EventName);
		}
	}

	return nullptr;
}

FString UNarrativeFunctionLibrary::MakeDisplayString(const FString& String)
{
	return FName::NameToDisplayString(String, false);
}
