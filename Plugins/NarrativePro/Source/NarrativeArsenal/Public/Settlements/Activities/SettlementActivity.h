// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/Activities/NarrativeActivityBase.h"
#include "AI/Activities/NPCGoalItem.h"
#include "SettlementActivity.generated.h"

//Represents one of the NPCs in a settlement activity
USTRUCT(BlueprintType)
struct FSettlementActivityNPCTarget
{
	GENERATED_BODY()

	FSettlementActivityNPCTarget()
	{
		bRequireSucceed = true; 
	};

	//The NPC to run this activity on
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settlement Activity")
	TObjectPtr<class UNPCDefinition> NPCDefinition;

	//The activity to run at the specified time 
	UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadOnly, Category = "Settlement Activity")
	TObjectPtr<UNPCGoalItem> Goal; 

	//If false, the settlement activity can still run even if this NPC failed to start the activity the settlement wanted. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settlement Activity")
	bool bRequireSucceed;
};

/**
 * Similar to an NPC Activity, however this one is ran by the settlement instead, and can effect multiple different NPCs.  
 * 
 * A settlement activity consists of a list of targets and their activities. Their activities will be ran and the settlement activity acts
 * as a manager, tracking the various tasks. The settlement activity can either end itself or be ended when its EndTime is reached. 
 * 
 * A good example would be SettlementActivity_ConversateAtLocation. The NPCs to go to the specifed location, and then the settlement activity acts
 * as a manager of sorts, and will begin the dialogue once it sees all of the NPCs have reached their target location. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
class NARRATIVEARSENAL_API USettlementActivity : public UNarrativeActivityBase
{
	GENERATED_BODY()
	
public: 

	 USettlementActivity(const FObjectInitializer& ObjectInitializer);

	virtual bool CanRunActivity() const;

	//Called when activity starts and ends 
	virtual bool RunActivity();
	virtual bool EndActivity();

	virtual FString DescribeActivity_Implementation() const;

	//The NPCs that this settlement activity will effect 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Settlement Activity")
	TArray<FSettlementActivityNPCTarget> NPCTargets;

	//We cache the owning settlement and activity component
	UPROPERTY(BlueprintReadOnly, Transient, Category = "Settlement Activity")
	TObjectPtr<class ASettlement> OwnerSettlement;

	UPROPERTY(BlueprintReadOnly, Transient, Category = "Settlement Activity")
	TObjectPtr<class USettlementActivityComponent> OwnerActivityComponent;

	UPROPERTY(VisibleAnywhere, Transient, Category = "Settlement Activity")
	TArray<TObjectPtr<class UNPCGoalItem>> IssuedGoals; 

protected:

	friend class USettlementActivityComponent;
	
};
