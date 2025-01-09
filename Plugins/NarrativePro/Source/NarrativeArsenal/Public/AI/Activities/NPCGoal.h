// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NPCGoalItem.h"
//#include "NPCGoal.generated.h"

/**
 * Goals exist on the NPC activity component. They are added by goal generators, and hold goal items. An example
 * would be an AttackEnemy goal that contains Attack GoalItems describing available attack targets.
 * 
 * The NPCs activities usually check if they can run by looking if they have a goal. For example, an Attack Activity 
 * may check if any AttackEnemy goals with valid AttackGoal items exist. 
 * 
 * For more information, please check out the docs: https://docs.narrativetools.io/
 */
//UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Default"))
//class NARRATIVEARSENAL_API UNPCGoal : public UObject
//{
//	GENERATED_BODY()
//
//public:
//
//	UNPCGoal(const FObjectInitializer& ObjectInitializer);
//
//	void AddGoalItem(UNPCGoalItem* GoalItem);
//	void RemoveGoalItem(UNPCGoalItem* GoalItem);
//
//	void SetOwner(class ANarrativeNPCController* OwnerController, class UNPCActivityComponent* OwnerComp);
//
//protected:
//
//	//We cache the AI controller 
//	UPROPERTY(BlueprintReadOnly, Transient, Category = "NPC Goal")
//	TObjectPtr<ANarrativeNPCController> OwnerController;
//
//	UPROPERTY(BlueprintReadOnly, Transient, Category = "NPC Goal")
//	TObjectPtr<UNPCActivityComponent> OwnerActivityComponent;
//	
//	//Goal items this goal currently has 
//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "NPC Goal")
//	TArray<UNPCGoalItem*> GoalItems;
//
//};
