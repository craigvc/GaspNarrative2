// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativePlayerController.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeCheatManager.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "Interaction/PlayerInteractionComponent.h"
#include "NarrativeNavigationComponent.h"
#include <EnhancedInputComponent.h>
#include <CommonInputSubsystem.h>
#include <Engine/Canvas.h>
#include <DisplayDebugHelpers.h>
#include "Settlements/SettlementSubsystem.h"
#include "Settlements/Settlement.h"
#include "ArsenalStatics.h"

ANarrativePlayerController::ANarrativePlayerController(const class FObjectInitializer& ObjectInitializer)
{
	InteractionComponent = CreateDefaultSubobject<UPlayerInteractionComponent>(TEXT("InteractionComponent"));
	NavigationComponent = CreateDefaultSubobject<UNarrativeNavigationComponent>(TEXT("NavigationComponent"));
	TalesComponent = CreateDefaultSubobject<UTalesComponent>(TEXT("TalesComponent"));

	CheatClass = UNarrativeCheatManager::StaticClass();
}

void ANarrativePlayerController::HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{

}

void ANarrativePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		if (UNarrativeAbilitySystemComponent* NASC = Cast<UNarrativeAbilitySystemComponent>(PS->GetAbilitySystemComponent()))
		{
			NASC->InitAbilityActorInfo(PS, InPawn);
			NASC->OnDied.AddUniqueDynamic(this, &ThisClass::HandleDeath);
		}

	}
}

void ANarrativePlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		if (UNarrativeAbilitySystemComponent* NASC = Cast<UNarrativeAbilitySystemComponent>(PS->GetAbilitySystemComponent()))
		{
			NASC->OnDied.AddUniqueDynamic(this, &ThisClass::HandleDeath);
		}
	}
}

void ANarrativePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
	//{
	//	if (InteractionComponent)
	//	{
	//		InteractionComponent->BindToInput(EnhancedInput);
	//	}
	//}
}

class UAbilitySystemComponent* ANarrativePlayerController::GetAbilitySystemComponent() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetAbilitySystemComponent();
	}

	return nullptr;
}

FGameplayTagContainer ANarrativePlayerController::GetFactions() const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetFactions();
	}

	return FGameplayTagContainer::EmptyContainer;
}

void ANarrativePlayerController::AddFaction(const FGameplayTag& Faction)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->AddFaction(Faction);
	}
}

void ANarrativePlayerController::RemoveFaction(const FGameplayTag& Faction)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->RemoveFaction(Faction);
	}
}

ETeamAttitude::Type ANarrativePlayerController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetTeamAttitudeTowards(Other);
	}

	return ETeamAttitude::Neutral;
}

void ANarrativePlayerController::DisplayDebug(class UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos)
{
	Super::DisplayDebug(Canvas, DebugDisplay, YL, YPos);

	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;
	DisplayDebugManager.SetDrawColor(FColor(255, 255, 0));
	

	if (DebugDisplay.IsDisplayOn("Settlements"))
	{
		if (USettlementSubsystem* SSS = GetWorld()->GetSubsystem<USettlementSubsystem>())
		{
			FString ActiveSettlements;
			FString DeactivatedSettlements;

			for (auto& SettlementKVP : SSS->SettlementMap)
			{
				if (ASettlement* Settlement = SettlementKVP.Value)
				{
					if (Settlement->IsActive())
					{
						ActiveSettlements += (*Settlement->SettlementDisplayName.ToString());
						ActiveSettlements += TEXT(", ");
					}
					else
					{
						DeactivatedSettlements += (*Settlement->SettlementDisplayName.ToString());
						ActiveSettlements += TEXT(", ");
					}
				}
			}
			if (ActiveSettlements.Len())
			{
				DisplayDebugManager.DrawString(FString::Printf(TEXT("Active Settlements: %s"), *ActiveSettlements));
			}

			if (DeactivatedSettlements.Len())
			{
				DisplayDebugManager.DrawString(FString::Printf(TEXT("Deactivated Settlements: %s"), *DeactivatedSettlements));
			}
		}
	}
	
	if (DebugDisplay.IsDisplayOn("Factions"))
	{
		FGameplayTagContainer Factions = GetFactions();

		if (Factions.IsValid())
		{
			DisplayDebugManager.DrawString(FString::Printf(TEXT("Factions: %s"), *Factions.ToString()));
		}
	}

	if (DebugDisplay.IsDisplayOn("TimeOfDay"))
	{
		DisplayDebugManager.DrawString(FString::Printf(TEXT("Time: %s"), *UArsenalStatics::GetTimeOfDayAsString(this)));
	}
}

void ANarrativePlayerController::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		NCharacter->GetOwnedGameplayTags(TagContainer);
	}

}

bool ANarrativePlayerController::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasMatchingGameplayTag(TagToCheck);
	}
	return false; 
}

bool ANarrativePlayerController::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasAllMatchingGameplayTags(TagContainer);
	}
	return false; 
}

bool ANarrativePlayerController::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasAnyMatchingGameplayTags(TagContainer);
	}
	return false; 
}

FString ANarrativePlayerController::GetNarrativeInputDeviceName() const
{
	if(UCommonInputSubsystem* CIS = UCommonInputSubsystem::Get(GetLocalPlayer()))
	{
		ECommonInputType InputType = CIS->GetCurrentInputType();

		if (InputType == ECommonInputType::MouseAndKeyboard)
		{
			return "Keyboard";
		}
		else if (InputType == ECommonInputType::Gamepad)
		{
			const FName GPName = CIS->GetCurrentGamepadName();

			if (GPName.IsEqual("Generic"))
			{
				return "Xbox";
			}
			else
			{
				return GPName.ToString();
			}
		}
		else if (InputType == ECommonInputType::Touch)
		{
			return "Touch";
		}
		else if (InputType == ECommonInputType::Count)
		{
			return "Count";
		}
	}

	return "None";
}

bool ANarrativePlayerController::IsUsingGamepad() const
{
	if(UCommonInputSubsystem* CIS = UCommonInputSubsystem::Get(GetLocalPlayer()))
	{
		ECommonInputType InputType = CIS->GetCurrentInputType();

		return InputType == ECommonInputType::Gamepad;
	}

	return false;
}

void ANarrativePlayerController::NotifyDealtDamage_Implementation(AActor* DamagedActor, const float DamgeAmount)
{
	HandleDamageActor(DamagedActor, DamgeAmount);
}

class ANarrativePlayerCharacter* ANarrativePlayerController::GetControlledCharacter() const
{
	return Cast<ANarrativePlayerCharacter>(GetPawn());
}
