// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "SettlementActivitySchedule.h"
#include "AI/Activities/NarrativeActivityBase.h"
#include "Settlements/Settlement.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "GameplayDebuggerTypes.h"
#include "GameplayDebuggerCategory.h"
#endif

#include "SettlementActivityComponent.generated.h"

UCLASS(ClassGroup=(Narrative), meta=(BlueprintSpawnableComponent))
class NARRATIVEARSENAL_API USettlementActivityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USettlementActivityComponent();

	// Called when the game starts
	virtual void BeginPlay() override;

	#if WITH_GAMEPLAY_DEBUGGER
	virtual void DescribeSelfToGameplayDebugger(FGameplayDebuggerCategory* DebuggerCategory) const;
#endif // WITH_GAMEPLAY_DEBUGGER

	/**Run an activity from the specified template. Also contains a context struct to see why the activity was ran. */
	UFUNCTION(BlueprintCallable, Category = "Activities")
	USettlementActivity* RunActivity(USettlementActivity* SettlementActivity);

	//Stop one of our currently running activities
	UFUNCTION(BlueprintCallable, Category = "Activities")
	void StopActivity(USettlementActivity* ActivityToStop);

	//Set our settlements activity schedule 
	UFUNCTION(BlueprintCallable, Category = "Activities")
	void SetActivitySchedule(class USettlementActivitySchedule* Schedule);

protected: 

	//Our settlement, cached. We may want to store this on the settlementloader instead which would make this component even more lightweight. 
	UPROPERTY(EditDefaultsOnly, Category = "Activities")
	TObjectPtr<class ASettlement> OwnerSettlement;

	//Activities the settlement is currently running
	UPROPERTY()
	TArray<TObjectPtr<class USettlementActivity>> CurrentActivities;

	//Our scheduled activities go in here. 
	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Activities")
	TObjectPtr<class USettlementActivitySchedule> ActivitySchedule;

	UPROPERTY()
	TArray<TObjectPtr<class UScheduledBehavior>> ActiveScheduledActivites;

	//Start the activity, internal function 
	USettlementActivity* StartActivity(USettlementActivity* SettlementActivity);

public: 

	FORCEINLINE class USettlementActivitySchedule* GetActivitySchedule() const { return ActivitySchedule;};
};
