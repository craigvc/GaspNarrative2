// Copyright Narrative Tools 2024. 


#include "AI/Activities/NPCGoal.h"

//UNPCGoal::UNPCGoal(const FObjectInitializer& ObjectInitializer)
//{
//
//}
//
//void UNPCGoal::AddGoalItem(UNPCGoalItem* GoalItem)
//{
//	/**TODO GoalItems shouldn't allow duplicates, for example if we had AttackGoalItem: Seth we shouldn't be
//	* allowed to add another AttackGoalItem: Seth. For this reason, GoalItems should probably have a GetUniqueKey
//	* function that returns some UObject we'll keep a set of to ensure uniqueness. AttackGoalItem.GetUniqueKey() returns Seth,
//	* and now if we try add another AttackGoalItem with Seth this will be blocked because the unique keys will match... 
//	
//	In the meantime we use TMaps in our generators to track which actors have already been assigned keys. 
//	*/
//	GoalItems.AddUnique(GoalItem);
//}
//
//void UNPCGoal::RemoveGoalItem(UNPCGoalItem* GoalItem)
//{
//	GoalItems.Remove(GoalItem);
//}
//
//void UNPCGoal::SetOwner(class ANarrativeNPCController* InOwnerController, class UNPCActivityComponent* InOwnerComp)
//{
//	check(InOwnerController && InOwnerComp);
//
//	OwnerController = InOwnerController;
//	OwnerActivityComponent = InOwnerComp;
//}
