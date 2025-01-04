// Ninja Bear Studio Inc., all rights reserved.
#include "Camera/NinjaCombatPlayerCameraManager.h"

#include "CameraAnimationSequence.h"
#include "GameFramework/PlayerController.h"

void ANinjaCombatPlayerCameraManager::PlayCombatCameraAnimation_Implementation(AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters)
{
	if (!IsValid(Anchor) || !IsValid(Animation))
	{
		return;
	}

	APlayerController* Player = GetOwningPlayerController();
	if (!IsValid(Player))
	{
		return;
	}

	FCameraAnimationParams OriginalParameters;
	CopyStructProperties(Parameters, OriginalParameters);
	
	UCameraAnimationCameraModifier* CameraModifier = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(Player);
	if (!CameraModifier->IsCameraAnimationActive(Handle))
	{
		Player->SetViewTargetWithBlend(Anchor, BlendIn.BlendTime, BlendIn.BlendFunction, BlendIn.BlendExp, true);
		Handle = CameraModifier->PlayCameraAnimation(Animation, OriginalParameters);
	}
}

void ANinjaCombatPlayerCameraManager::StopCombatCameraAnimation_Implementation()
{
	APlayerController* Player = GetOwningPlayerController();
	if (IsValid(Player))
	{
		UCameraAnimationCameraModifier* CameraModifier = UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(Player);
		CameraModifier->StopCameraAnimation(Handle);
		
		APawn* PlayerPawn = Player->GetPawn();
		Player->SetViewTargetWithBlend(PlayerPawn, BlendOut.BlendTime, BlendOut.BlendFunction, BlendOut.BlendExp, true);
	}
}

void ANinjaCombatPlayerCameraManager::CopyStructProperties(FCombatCameraAnimationParameters& Source, FCameraAnimationParams& Destination)
{
	// We'll copy properties between these two structs using reflection.
	//
	// Might look a bit crazy at first if you are not familiar with the Reflection System, but
	// it's actually pretty straightforward. Let's do this!
	//
	const UStruct* SourceStructDefinition = FCombatCameraAnimationParameters::StaticStruct();
	const UStruct* DestStructDefinition = FCameraAnimationParams::StaticStruct();

	// We'll go over each property in the source struct (the custom version).
	//
	// We want to get each property's name, so we can retrieve its value and then look for a
	// property with same name in the target struct (the engine version). 
	//
	for (TFieldIterator<FProperty> SourceIt(SourceStructDefinition); SourceIt; ++SourceIt)
	{
		const FProperty* SourceProperty = *SourceIt;
		const FName& PropertyName = SourceProperty->GetFName();

		// Find the matching property in the destination struct.
		// We will use the name to match properties between source and destination.
		//
		const FProperty* DestProperty = DestStructDefinition->FindPropertyByName(PropertyName);
		if (DestProperty && SourceProperty->SameType(DestProperty))
		{
			// Get pointers to the source and destination properties, so we can get their values.
			// For the source, we are fine with a const value since we won't be changing it.
			//
			const void* SourceValuePtr = SourceProperty->ContainerPtrToValuePtr<void>(&Source);
			void* DestValuePtr = DestProperty->ContainerPtrToValuePtr<void>(&Destination);

			// Finally, we can copy the complete memory between source and destination.
			// This function is a bit odd as it has the source and destination inverted.
			//
			DestProperty->CopyCompleteValue(DestValuePtr, SourceValuePtr);
		}
	}
}
