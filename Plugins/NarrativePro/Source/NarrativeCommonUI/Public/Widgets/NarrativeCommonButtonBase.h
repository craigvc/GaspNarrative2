// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "NarrativeCommonTextBlock.h"
#include "NarrativeCommonButtonBase.generated.h"

/**
 * The base class for a narrative common UI button. Includes a bit of extra functionality over the base common button. 
 */
UCLASS(Abstract, Category = "Narrative Common Widgets")
class NARRATIVECOMMONUI_API UNarrativeCommonButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()
	
public:

	UNarrativeCommonButtonBase();

	//Just a wrapper for SetSelectedInternal, which annoyingly is BP Protected and requires wrapping. 
	UFUNCTION(BlueprintCallable, Category = "Narrative Common Button")
	virtual void ForceSetIsSelected(const bool bInSelected, bool bAllowSound, bool bBroadcast);

	//Sets the buttons text block text. 
	UFUNCTION(BlueprintCallable, Category = "Narrative Common Button")
	virtual void SetButtonText(FText InText);

protected:

	virtual void NativePreConstruct() override;
	virtual void NativeOnCurrentTextStyleChanged() override;

	//Optional button text that can be placed on the button. 
	UPROPERTY(BlueprintReadOnly, Category = "Button Text", meta = (BindWidgetOptional))
	TObjectPtr<UNarrativeCommonTextBlock> ButtonTextBlock;

	//The text to display on the buttons text block.
	UPROPERTY(EditAnywhere, Category = "Button Text")
	FText ButtonText;

	//The justification for text to display on the buttons text block.
	UPROPERTY(EditAnywhere, Category = "Button Text")
	TEnumAsByte<ETextJustify::Type> TextJustification;

};
