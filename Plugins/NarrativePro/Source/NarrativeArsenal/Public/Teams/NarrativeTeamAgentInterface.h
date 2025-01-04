// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenericTeamAgentInterface.h"
#include "NarrativeTeamAgentInterface.generated.h"


/**In Narrative pro we use a custom team agent interface, just in case we want to add some custom teams stuff later. */
UINTERFACE()
class UNarrativeTeamAgentInterface : public UGenericTeamAgentInterface
{
	GENERATED_UINTERFACE_BODY()
};

class NARRATIVEARSENAL_API INarrativeTeamAgentInterface : public IGenericTeamAgentInterface
{
	GENERATED_IINTERFACE_BODY()
};
