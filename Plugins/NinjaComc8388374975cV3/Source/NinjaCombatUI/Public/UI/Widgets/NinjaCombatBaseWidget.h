// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/CombatActorAwareInterface.h"
#include "NinjaCombatBaseWidget.generated.h"

class UAbilitySystemComponent;
class UNinjaCombatManagerComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogNinjaCombatWidget, Log, All);

/**
 * Base combat widget with common functionality.
 */
UCLASS(Abstract)
class NINJACOMBATUI_API UNinjaCombatBaseWidget : public UUserWidget, public ICombatActorAwareInterface
{
	
	GENERATED_BODY()

public:

	UNinjaCombatBaseWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// -- Begin User Widget implementation
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	// -- End User Widget implementation
	
	// -- Begin Combat Actor Aware implementation
	virtual void SetCombatActor_Implementation(AActor* NewCombatActor) override;
	// -- End Combat Actor Aware implementation

	/** 
	 * Provides the Combat Actor for this Widget.
	 *
	 * It could be the usual owning pawn or, if set differently via the Combat Widget Interface,
	 * a custom actor, such as the one that owns the hosting Widget Component.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Widgets")
	virtual AActor* GetCombatActor() const;

protected:

	/** If set, automatically shows the widget, using its default visibility, when a combat actor is set. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Widget")
	bool bShowWidgetWithCombatActor;
	
	/** If set, automatically collapses the widget visibility when a combat actor deliberately not set. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Widget")
	bool bCollapseWidgetWithoutCombatActor;

	/** Default Widget Visibility used when it must be restored later. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Combat Widget")
	ESlateVisibility DefaultVisibility;
	
	/**
	 * Provides the Ability Component assigned to this widget's Combat Actor.
	 * 
	 * Please note that, for replicated actors with an Ability Component in the player state,
	 * it may take a moment before the Ability Component becomes available for the Widget.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|Widgets")
	UAbilitySystemComponent* GetAbilityComponent() const;

	/**
	 * Refreshes the Widget's visibility, based in the internal flags.
	 */
	virtual void RefreshVisibility();
	
	/**
	 * Updates view models when the Target Actor is set.
	 */
	virtual void RefreshViewModels();

	/**
	 * Sets specific widget data to view models.
	 */
	virtual void SetWidgetDataToViewModel(UObject* Source);
	
	/**
	 * Clears view models attached to this widget.
	 */
	virtual void ClearViewModels();

	/**
	 * Clears specific widget data from view models.
	 */
	virtual void ClearWidgetDataFromViewModel(UObject* Source);
	
private:
	
	/** Combat Actor that should be considered the Combat Owner. */
	UPROPERTY()
	TObjectPtr<AActor> CombatActor;	
	
};
