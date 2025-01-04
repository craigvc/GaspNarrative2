// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NarrativeSavableComponent.h"
#include "NPCBehaviourComponent.generated.h"



/**Holds a time that an activity will be performed at, as well as the activity itself  */
USTRUCT()
struct FScheduledActivity
{
	GENERATED_BODY()

	FScheduledActivity(){};

	//The time the activity should be performed at
	UPROPERTY(EditDefaultsOnly, Category = "Scheduled Activity")
	FFloatRange Time;

	//The activity to be performed 
	UPROPERTY(EditDefaultsOnly, Instanced, Category = "Scheduled Activity")
	class UNPCActivity* Activity;

};

/**When added to an AIController, this component will take control of the AIControllers
Behaviour tree using the NPCActivity */
UCLASS( ClassGroup=(Narrative), meta=(BlueprintSpawnableComponent) )
class NARRATIVESETTLEMENT_API UNPCBehaviourComponent : public UActorComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UNPCBehaviourComponent();

protected:

	UFUNCTION(BlueprintCallable, Category = "Activities")
	virtual bool BeginActivity(class UNPCActivity* NewActivity);

	//The activities we have scheduled
	UPROPERTY(EditDefaultsOnly, Category = "Activities")
	TArray<FScheduledActivity> ScheduledActivities;

	//The activity we're currently running
	UPROPERTY(EditDefaultsOnly, Instanced, Category = "Activities")
	class UNPCActivity* CurrentActivity;

	//The AI controller we're attached to 
	UPROPERTY()
	class AAIController* OwnerAIC;

	// Called when the game starts
	virtual void BeginPlay() override;

public:

	void PrepareForSave_Implementation() override;
	void Load_Implementation() override;

};
