// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "ItemWidget.generated.h"

/**
 * Base class for items in the inventory. This is mostly C++ based so we can make use of BindWidget, in order to have different inventory widget styles.
 */
UCLASS()
class NARRATIVEINVENTORY_API UItemWidget : public UCommonButtonBase
{
	GENERATED_BODY()
	
};
