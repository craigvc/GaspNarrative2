// Copyright Narrative Tools 2024. 


#include "AI/NPCDefinition.h"

UNPCDefinition::UNPCDefinition()
{

	AssetType = TEXT("NPCDefinition");

	bAllowMultipleInstances = false;

	//Try auto-populate some info 
	NPCID = FName(GetName());
	NPCName = FText::FromString(GetName());
	UniqueNPCGUID = FGuid::NewGuid();
	LevelRange.SetLowerBound(1);
	LevelRange.SetLowerBoundValue(1);
	LevelRange.SetUpperBound(5000);
	LevelRange.SetUpperBoundValue(1);

	FSoftObjectPath SoftPath(TEXT("/Script/Engine.Blueprint'/NarrativePro/Blueprints/Character/NPCs/BP_NarrativeNPC.BP_NarrativeNPC_C'"));

	//Moved to this instead of class finder as it was loading ABP and causing errors with Locomotion Animation library 
	NPCClassPath = SoftPath;

}
