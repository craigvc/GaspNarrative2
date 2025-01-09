// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NarrativeEvent.generated.h"


//How do we handle running this event on a party?
UENUM()
enum class EPartyEventPolicy
{
	/**The event is run on the party itself - Use this if you want the event to effect the party in some way - for example if you want your event
	to begin a quest for all members in the party, use this to run the event on the parties narrative component. */
	Party UMETA(DisplayName = "Party"),

	/**The event is run on every party member - for example if your event gave the player a reward, every member in the party would receive the award.*/
	AllPartyMembers UMETA(DisplayName="All Party Members"),

	/**The event is run on the party leader - for example if your event gave the player a reward, only the party leader would receieve the award.*/
	PartyLeader UMETA(DisplayName = "Party Leader")

};


/**
* Used for picking when an event should run
*/
UENUM(BlueprintType)
enum class EEventRuntime : uint8
{
	/* Execute the event at the start.

	For dialogue, this is when the dialogue line starts playing.
	For Quest states, this is when the state is entered
	For Quest branches, this is when the branch becomes active
	*/
	Start,
	/* Execute the event at the end. 

	For dialogue, this is when the dialogue line finishes playing.
	For Quest states, this is when the state is exited
	For Quest branches, this is when the branch gets taken to a new state and gets deactivated. 
	*/
	End,
	// Run the event at both start and end. This means your event will be executed twice. 
	Both
};

/**
* Used for picking who an event should be allowed to run on 
*/
UENUM(BlueprintType)
enum class EEventFilter : uint8
{
	EF_Anyone UMETA(DisplayName="Anyone"),
	EF_OnlyNPCs UMETA(DisplayName="Only NPCs"),
	EF_OnlyPlayers UMETA(DisplayName="Only Players")
};

/**
 * Narrative Events allow you to write a little bit of code that fires when a given quest or dialogue node is reached. 
 *
 * For example, you could make a Narrative Event "Give item" that adds an item to the players inventory. Then, you could 
 * add that event to a dialogue node, for example if an NPC said "Heres my sword, I want you to take it." you could add your
 * event to that dialogue node and actually add the sword item to the players inventory. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API UNarrativeEvent : public UObject
{
	GENERATED_BODY()

public:

	UNarrativeEvent(const FObjectInitializer& ObjectInitializer);

	// Allows the Object to get a valid UWorld from it's outer.
	virtual UWorld* GetWorld() const override
	{
		if (HasAllFlags(RF_ClassDefaultObject))
		{
			// If we are a CDO, we must return nullptr instead of calling Outer->GetWorld() to fool UObject::ImplementsGetWorld.
			return nullptr;
		}

		UObject* Outer = GetOuter();

		while (Outer)
		{
			UWorld* World = Outer->GetWorld();
			if (World)
			{
				return World;
			}

			Outer = Outer->GetOuter();
		}

		return nullptr;
	}

	/**
	When the game loads back in, should we fire this event off again when your quest loads back in?
	
	For example, if we used a GiveXP event to give the player 500XP when we get to a certain quest state, this should be false.
	Since XP is saved already, quitting and reloading would grant 500XP on top of the previous amount, which is not what we want. 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Event")
	bool bRefireOnLoad;

	/**
	Defines when the event should be executed 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Event")
	EEventRuntime EventRuntime;

	/**
	Defines what types of characters the event should be allowed to run on 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parties")
	EEventFilter EventFilter;

	/**
	Defines how events should be executed when the dialogue is playing as a party. Ignored if not in a party. 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Parties")
	EPartyEventPolicy PartyEventPolicy;

	/**Execute the event.
	@param Pawn this is the Players Pawn, or the NPC Target if you've added some NPC targets to NPCTargets array. 
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Event")
	void ExecuteEvent(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent);
	virtual void ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent);

	/**Define the text that will show up on a node if this event is added to it */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Event")
	FString GetGraphDisplayText();
	virtual FString GetGraphDisplayText_Implementation();

	/**If the event is on a dialogue option, this is the text we'll show after the line. (Begin Quest, etc)*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Event")
	FText GetHintText();
	virtual FText GetHintText_Implementation();

	//return the characters to run the event on 
	UFUNCTION(BlueprintCallable, Category = "Event")
	TArray<class UCharacterDefinition*> GetCharacterTargets() const;

protected:

	/**Characters we should run the event on. If empty, we'll run on the character that owns the quest/dialogue.*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Event", meta = (EditCondition = "EventFilter == EEventFilter::EF_Anyone", EditConditionHides))
	TArray<TObjectPtr<class UCharacterDefinition>> CharacterTargets;

	/** NPCs we should run the event on. If empty, we'll run the event on all NPCs in the dialogue */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Event", meta = (EditCondition = "EventFilter == EEventFilter::EF_OnlyNPCs", EditConditionHides))
	TArray<TObjectPtr<class UNPCDefinition>> NPCTargets;

	/** Players we should run the event on. If empty, we'll run on the character that owns the quest/dialogue. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Event", meta = (EditCondition = "EventFilter == EEventFilter::EF_OnlyPlayers", EditConditionHides))
	TArray<TObjectPtr<class UPlayerDefinition>> PlayerTargets;
};
