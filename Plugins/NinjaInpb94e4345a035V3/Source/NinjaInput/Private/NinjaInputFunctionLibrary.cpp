// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaInputFunctionLibrary.h"

#include "NinjaInputHandler.h"
#include "Components/NinjaInputManagerComponent.h"
#include "Engine/HitResult.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/KismetMathLibrary.h"

UNinjaInputManagerComponent* UNinjaInputFunctionLibrary::GetInputManagerComponent(const AActor* Actor)
{
    if (IsValid(Actor))
    {
	    UNinjaInputManagerComponent* Component = Actor->FindComponentByClass<UNinjaInputManagerComponent>();
    	if (IsValid(Component))
    	{
    		return Component;
    	}
    
    	if (Actor->IsA<APawn>())
    	{
    		const AController* Controller = Cast<APawn>(Actor)->GetController();
    		return GetInputManagerComponent(Controller);
    	}

    	if (Actor->IsA<APlayerController>())
    	{
    		const APawn* Pawn = Cast<APlayerController>(Actor)->GetPawn();
    		return GetInputManagerComponent(Pawn);
    	}
    }
	
	return nullptr;
}

UActorComponent* UNinjaInputFunctionLibrary::GetInputBufferComponent(const AActor* Actor)
{
    if (IsValid(Actor))
    {
        TArray<UActorComponent*> Components = Actor->GetComponentsByInterface(UInputBufferInterface::StaticClass());
    	if (Components.IsEmpty() && Actor->IsA<APawn>())
    	{
    		const AController* Controller = Cast<APawn>(Actor)->GetController();
    		if (IsValid(Controller))
    		{
    			Components = Controller->GetComponentsByInterface(UInputBufferInterface::StaticClass());	
    		}
    	}

        const int32 Idx = Components.IndexOfByPredicate([](const UActorComponent* Candidate)
            { return IsValid(Candidate) && IInputBufferInterface::Execute_IsInputBufferEnabled(Candidate); });

        return Idx != INDEX_NONE ? Components[Idx] : nullptr;
    }

    return nullptr;
}

FBufferedInputCommand UNinjaInputFunctionLibrary::MakeBufferedInputCommand(UNinjaInputManagerComponent* Source,
	UNinjaInputHandler* Handler, const FInputActionInstance& ActionInstance, const ETriggerEvent TriggerEvent)
{
	return FBufferedInputCommand(Source, Handler, ActionInstance, TriggerEvent);
}

void UNinjaInputFunctionLibrary::BreakBufferedInputCommand(const FBufferedInputCommand& Command, bool& bIsValid,
	UNinjaInputManagerComponent*& Source, UNinjaInputHandler*& Handler, FInputActionInstance& ActionInstance,
	ETriggerEvent& TriggerEvent)
{
	bIsValid = Command.IsValid();
	Source = Command.GetSource();
	Handler = Command.GetHandler();
	TriggerEvent = Command.GetTriggerEvent();
	
	const FInputActionInstance* OriginalInstance = Command.GetActionInstance();
	ActionInstance = OriginalInstance ? *OriginalInstance : FInputActionInstance();
}

bool UNinjaInputFunctionLibrary::FindLookAtCursorRotation(const APlayerController* Controller, FRotator& OutRotation, const ECollisionChannel TraceChannel)
{
	if (!IsValid(Controller) || !IsValid(Controller->GetPawn()))
	{
		OutRotation = FRotator::ZeroRotator;
		return false;
	}
	
	FHitResult MouseHit;
	if (Controller->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(TraceChannel), true, MouseHit))
	{
		const FVector SourceLocation = Controller->GetPawn()->GetActorLocation();
		const FVector TargetLocation = MouseHit.Location;
		
		OutRotation = UKismetMathLibrary::FindLookAtRotation(SourceLocation, TargetLocation);
		return true;
	}

	OutRotation = FRotator::ZeroRotator;
	return false;
}
