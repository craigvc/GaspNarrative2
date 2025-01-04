// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativePlayerState.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "GAS/NarrativeAttributeSetBase.h"
#include "InventoryComponent.h"
#include "SkillTrees/SkillTreeComponent.h"
#include "NavigationMarkerComponent.h"
#include "Components/TeamMarkerComponent.h"
#include "Teams/FactionDefinition.h"
#include <Net/UnrealNetwork.h>
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "Engine/World.h"


ANarrativePlayerState::ANarrativePlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UNarrativeAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSetBase = CreateDefaultSubobject<UNarrativeAttributeSetBase>(TEXT("AttributeSetBase"));

	InventoryComponent = CreateDefaultSubobject<UNarrativeInventoryComponent>("InventoryComponent");

	SkillTreeComponent = CreateDefaultSubobject<USkillTreeComponent>(TEXT("SkillTreeComponent"));

	NetUpdateFrequency = 100.0f;

}

class UAbilitySystemComponent* ANarrativePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

class UNarrativeAttributeSetBase* ANarrativePlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

bool ANarrativePlayerState::IsAlive() const
{
	return GetHealth() > 0.f;
}

float ANarrativePlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

void ANarrativePlayerState::BeginPlay()
{
	Super::BeginPlay();

	//If we have items on beginplay, its because we've loaded from a save file. If thats the case, dont give the default items, they were already given 
	if (!InventoryComponent->GetItems().Num())
	{
		if (InventoryComponent)
		{
			//Moved to post appearance granted  
			//InventoryComponent->GiveDefaultItems();
		}
	}
}

void ANarrativePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANarrativePlayerState, Faction);
}

void ANarrativePlayerState::OnRep_PlayerName()
{
	Super::OnRep_PlayerName();

	if (ANarrativePlayerCharacter* PlayerCharacter = Cast<ANarrativePlayerCharacter>(GetPawn()))
	{
		if (UNavigationMarkerComponent* Marker = PlayerCharacter->GetMarkerComponent())
		{
			Marker->DefaultMarkerSettings.LocationDisplayName = FText::FromString(GetPlayerName());
			Marker->RefreshMarker();
		}
	}
}

void ANarrativePlayerState::SetFaction(UFactionDefinition* NewFaction)
{
	if (NewFaction)
	{
		Faction = NewFaction;
		OnRep_Faction();
	}
}

void ANarrativePlayerState::OnRep_Faction()
{

}

void ANarrativePlayerState::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	checkf(false, TEXT("Set generic team ID shouldn't be used, call SetFaction instead."));
	//Faction = static_cast<ENarrativeFactionID>(NewTeamID.GetId());
	//OnRep_Faction();
}

FGenericTeamId ANarrativePlayerState::GetGenericTeamId() const
{
	if (Faction)
	{
		return FGenericTeamId(static_cast<uint8>(Faction->FactionID));
	}

	return FGenericTeamId::NoTeam;
}

ETeamAttitude::Type ANarrativePlayerState::GetTeamAttitudeTowards(const AActor& Other) const
{
	//TODO use GS 
	if(const INarrativeTeamAgentInterface* OtherTeamAgent = Cast<const INarrativeTeamAgentInterface>(&Other))
	{
		if (Faction)
		{
			ENarrativeFactionID OurFaction = Faction->FactionID;
			ENarrativeFactionID TheirFaction = static_cast<ENarrativeFactionID>(OtherTeamAgent->GetGenericTeamId().GetId());

			if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(GetWorld()->GetGameState()))
			{
				return GS->GetAttitudeTowards(OurFaction, TheirFaction);
			}

		}
	}

	return ETeamAttitude::Neutral;
}
