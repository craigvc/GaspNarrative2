// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Components/ComboBoxString.h"
#include "NarrativeComboBoxString.generated.h"

/**
 * Base class for a string combo box in Narrative - 
 */
UCLASS(Category = "Narrative Common Widgets")
class NARRATIVECOMMONUI_API UNarrativeComboBoxString : public UComboBoxString
{
	GENERATED_BODY()
	
protected:

	UNarrativeComboBoxString(const FObjectInitializer& ObjectInitializer);

	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
};
