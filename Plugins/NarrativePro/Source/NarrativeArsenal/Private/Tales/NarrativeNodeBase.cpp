// Copyright Narrative Tools 2022. 


#include "Tales/NarrativeNodeBase.h"
#include "Tales/NarrativeCondition.h"
#include "Tales/NarrativeEvent.h"
#include "Tales/TalesComponent.h"
#include "Tales/NarrativePartyComponent.h"
#include "AI/NarrativeNPCSubsystem.h"

UNarrativeNodeBase::UNarrativeNodeBase()
{
	//autofill the ID
	ID = GetFName();
}

#if WITH_EDITOR

void UNarrativeNodeBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.MemberProperty)
	{
		//If we changed the ID, make sure it doesn't conflict with any other IDs in the quest
		if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UNarrativeNodeBase, ID))
		{
			EnsureUniqueID();
		}
	}
}

#endif 

void UNarrativeNodeBase::ProcessEvents(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent, const EEventRuntime Runtime)
{
	if (!NarrativeComponent)
	{
		UE_LOG(LogNarrative, Warning, TEXT("Tried running events on node %s but Narrative Comp was null."), *GetNameSafe(this));
		return;
	}

	const bool bIsLoading = NarrativeComponent->bIsLoading;

	for (auto& Event : Events)
	{
		if (Event)
		{
			const bool bShouldFire = (!bIsLoading || Event->bRefireOnLoad ) && (Event->EventRuntime == Runtime || Event->EventRuntime == EEventRuntime::Both);

			if (bShouldFire)
			{
				TArray<UCharacterDefinition*> CharTargets = Event->GetCharacterTargets();

				//If we have any NPC targets, run the event on them instead of the owning player! 
				if (CharTargets.Num())
				{
					//NPCOnly events have special functionality to grab all avatars
					if (UWorld* World = NarrativeComponent->GetWorld())
					{
						if (UNarrativeNPCSubsystem* NPCS = World->GetSubsystem<UNarrativeNPCSubsystem>())
						{
							for (auto& NPCTarget : CharTargets)
							{
								if (ANarrativeCharacter* Character = NPCS->FindCharacter(NPCTarget))
								{
									Event->ExecuteEvent(Character, Controller, NarrativeComponent);
								}
							}
						}
					}
				}
				else
				{
					Event->ExecuteEvent(NarrativeComponent->GetOwningPawn(), NarrativeComponent->GetOwningController(), NarrativeComponent);
				}

			}
		}
	}
}

bool UNarrativeNodeBase::AreConditionsMet(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent)
{

	if (!NarrativeComponent)
	{
		UE_LOG(LogNarrative, Warning, TEXT("Tried running conditions on node %s but Narrative Comp was null."), *GetNameSafe(this));
		return false;
	}
	  
	//Ensure all conditions are met
	for (auto& Cond : Conditions)
	{	
		if (Cond)
		{
			if (Cond->CharacterTargets.Num())
			{
				if (UWorld* World = NarrativeComponent->GetWorld())
				{
					if (UNarrativeNPCSubsystem* NPCS = World->GetSubsystem<UNarrativeNPCSubsystem>())
					{
						for (auto& NPCTarget : Cond->CharacterTargets)
						{
							if (ANarrativeCharacter* Character = NPCS->FindCharacter(NPCTarget))
							{
								if (Cond->CheckCondition(Character, Controller, NarrativeComponent) == Cond->bNot)
								{
									return false; 
								}
							}
						}

						//All targets passed 
						return true; 
					}
				}
			}
			else
			{
				if (Cond->CheckCondition(Pawn, Controller, NarrativeComponent) == Cond->bNot)
				{
					return false;
				}
			}
		}
	}

	return true;
}
