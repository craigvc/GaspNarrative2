// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <UObject/Interface.h>
#include "NarrativeSavableComponent.generated.h"

/**
 * Any components implementing this will be captured by Narrative Save subsystem, provided their owner implements INarrativeSavableActor. 
 */
UINTERFACE(BlueprintType)
class NARRATIVESAVESYSTEM_API UNarrativeSavableComponent : public UInterface
{
	GENERATED_BODY()
	
};

/**
 * Any Components implementing this interface will be capture by the Narrative Save subsystem
 */
class NARRATIVESAVESYSTEM_API INarrativeSavableComponent
{
	GENERATED_BODY()

public:
	
	//Tell the Component it is about to be saved, and needs to populate all its save data 
	UFUNCTION(BlueprintNativeEvent)
	void PrepareForSave();
	virtual void PrepareForSave_Implementation();

	//Tell the Component it has been loaded in from a save. 
	UFUNCTION(BlueprintNativeEvent)
	void Load();
	virtual void Load_Implementation();

};