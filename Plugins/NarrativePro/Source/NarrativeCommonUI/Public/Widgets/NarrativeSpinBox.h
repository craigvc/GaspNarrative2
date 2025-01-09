// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/SpinBox.h"
#include "NarrativeSpinBox.generated.h"

/**
 * Base class for the narrative spin box. Will pull its style from the UIPrimary and UIInvert colors set in the plugin settings. 
 */
UCLASS(Category = "Narrative Common Widgets")
class NARRATIVECOMMONUI_API UNarrativeSpinBox : public USpinBox
{
	GENERATED_BODY()

protected:

	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
};
