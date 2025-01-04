// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include <AIController.h>
#include "UObject/NoExportTypes.h"
#include "NPCActivity.generated.h"

/**
 * NPC Activities essentially wrap a Behaviour tree, and store the variables the trees blackboard will use. 
 * The NPCBehaviourComponent begins the tree, sets blackboard values, and unsets the tree when finished. 
 * 
 * Our owning NPCBehaviourComponent will also serialize us to disk, so when we load our game back in, the blackboard and behavior tree can be kicked off again. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVESETTLEMENT_API UNPCActivity : public UObject
{
	GENERATED_BODY()
	
public:

	UNPCActivity();

protected:

	friend class UNPCBehaviourComponent;


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

	//Allow the activity BP the chance to set some BB values
	UFUNCTION(BlueprintNativeEvent)
	void SetupBlackboard(class UBlackboardComponent* BB);
	virtual void SetupBlackboard_Implementation(class UBlackboardComponent* BB);

	UFUNCTION(BlueprintNativeEvent)
	FTransform GetActivityTransform();
	virtual FTransform GetActivityTransform_Implementation();

	//Run/end the activity
	virtual bool RunActivity(class AAIController* AIC);
	virtual bool EndActivity(class AAIController* AIC);

	//We cache the AI controller 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC Activity")
	TObjectPtr<AAIController> AIController;

	//The behaviour tree this activity needs to run
	UPROPERTY(EditAnywhere, SaveGame, Category = "NPC Activity")
	TObjectPtr<class UBehaviorTree> ActivityBehaviourTree;

	//The transform this activity should be performed at. If zero'ed, this activity will be considered locationless. If you need this dynamically set, override GetActivityTransform()
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "NPC Activity")
	FTransform ActivityTransform;

	//The acceptable radius within the Activities transform we'll accept for our NPC to be near to be at the activity location.
	UPROPERTY(EditAnywhere, Category = "NPC Activity")
	float ActivityRadius;

};
