// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include <Delegates/DelegateCombinations.h>
#include "NarrativeActivatableWidget.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FInputActionExecutedDelegate, FName, ActionName);

USTRUCT(BlueprintType)
struct FInputActionBindingHandle
{
	GENERATED_BODY()
	
public:
	struct FUIActionBindingHandle Handle;
};

UCLASS(meta = (DisableNativeTick))
class NARRATIVECOMMONUI_API UNarrativeActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()

protected:

	UNarrativeActivatableWidget();

	virtual void NativeDestruct() override;

	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative Activatable Widget")
	void RegisterBinding(FDataTableRowHandle InputAction, const FInputActionExecutedDelegate& Callback, FInputActionBindingHandle& BindingHandle, FText OverrideDisplayName, const bool bShouldDisplayInActionBar=true);

	UFUNCTION(BlueprintCallable, Category = "Narrative Activatable Widget")
	void UnregisterBinding(FInputActionBindingHandle BindingHandle);

	UFUNCTION(BlueprintCallable, Category = "Narrative Activatable Widget")
	void UnregisterAllBindings();

	UFUNCTION(BlueprintCallable, Category = "Narrative Activatable Widget")
	void SetBindingDisplayName(FInputActionBindingHandle BindingHandle, FText NewDisplayName);

	virtual void NativeOnActivated();
	virtual void NativeOnDeactivated();

	UFUNCTION(BlueprintImplementableEvent)
	void RegisterActions();

	virtual void NativeRegisterActions();
	
protected:

	UPROPERTY(EditDefaultsOnly, Category = "Narrative Activatable Widget")
	bool bUseGameInput;

	UPROPERTY(EditDefaultsOnly, Category = "Narrative Activatable Widget")
	bool bDeactivateOnBack;

	//If true we'll automatically focus GetDesiredFocusTarget() when widget activates
	UPROPERTY(EditDefaultsOnly, Category = "Narrative Activatable Widget")
	bool bFocusDesiredTargetOnActivate;

private:
	TArray<struct FUIActionBindingHandle> BindingHandles;
};
