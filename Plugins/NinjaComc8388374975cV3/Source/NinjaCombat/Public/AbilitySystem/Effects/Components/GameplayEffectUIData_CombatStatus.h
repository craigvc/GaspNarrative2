// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectUIData.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectUIData_CombatStatus.generated.h"

class UUserWidget;

/**
 * A Component that allows you to describe a Status Effect applied from the Combat System.
 * It can be used on widgets using the "Status Effect" Viewmodel.
 */
UCLASS(ClassGroup=NinjaCombat)
class NINJACOMBAT_API UGameplayEffectUIData_CombatStatus : public UGameplayEffectUIData
{
	
	GENERATED_BODY()

public:
	
	/** An optional text that describes the effect. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Data)
	FText DisplayName;

	/** Widget used to represent this status in the UI. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Data)
	TSubclassOf<UUserWidget> IconWidgetClass;

	UGameplayEffectUIData_CombatStatus();
	
};
