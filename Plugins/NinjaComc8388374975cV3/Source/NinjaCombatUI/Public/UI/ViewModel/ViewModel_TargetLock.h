// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatViewModel.h"
#include "UI/Interfaces/CombatViewModelInterface.h"
#include "ViewModel_TargetLock.generated.h"

/**
 * Identifies a target lock on the widget's combat owner, being the HUD owner.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Target Lock")
class NINJACOMBATUI_API UViewModel_TargetLock : public UNinjaCombatViewModel, public ICombatViewModelInterface
{
	
	GENERATED_BODY()

public:

	// -- Begin Combat View Model Implementation
	virtual void SetWidgetOwner_Implementation(APlayerController* NewWidgetOwner) override;
	virtual void ClearWidgetOwner_Implementation() override;
	// -- End Combat View Model Implementation

	/**
	 * Provides the Combat Actor current bound to this Viewmodel.
	 */
	UFUNCTION(BlueprintPure, Category = "Ninja Combat|View Model")
	APlayerController* GetWidgetOwner() const;
	
	bool IsLockedByHUDOwner() const { return bIsLockedByHUDOwner; }
	void SetIsLockedByHUDOwner(bool bNewValue);
	
protected:

	/** Indicates if the combatant is target locked by the HUD/Widget owner. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetIsLockedByHUDOwner", Getter = "IsLockedByHUDOwner", Category = "Target Lock")
	bool bIsLockedByHUDOwner = false;

	// -- Begin View Model implementation
	virtual void Reset() override;
	// -- End View Model implementation

	UFUNCTION()
	void HandleTargetChanged(UActorComponent* TargetManager, const AActor* NewCombatTarget, const AActor* OldCombatTarget);

private:

	TWeakObjectPtr<APlayerController> WidgetOwnerPtr;
	
};
