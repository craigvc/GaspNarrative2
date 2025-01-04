// Ninja Bear Studio Inc., all rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "NinjaCombatViewModel.h"
#include "ViewModel_ComboState.generated.h"

/**
 * Exposes the Combo State.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName = "Combo State")
class NINJACOMBATUI_API UViewModel_ComboState : public UNinjaCombatViewModel
{
	
	GENERATED_BODY()

public:

	// -- Begin Combat Actor Aware Implementation
	virtual void SetCombatActor_Implementation(AActor* NewCombatActor) override;
	// -- End Combat Actor Aware Implementation	

	bool InComboWindow() const { return bInComboWindow; }
	void SetInComboWindow(bool bNewValue);

	int32 GetComboCount() const { return ComboCount; }
	void SetComboCount(int32 NewValue);
	
protected:

	/** Indicates if the character is currently staggered. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter = "SetInComboWindow", Getter = "InComboWindow", Category = "Combo")
	bool bInComboWindow = false;
	
	/** Poise available in the Attribute Set. */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter, Category = "Combo")
	int32 ComboCount = 0.f;
	
	UFUNCTION()
	void HandleComboWindowChanged(UActorComponent* ComboManager, bool bNewValue);
	
	UFUNCTION()
	void HandleComboCountChanged(UActorComponent* ComboManager, int32 NewValue);	
	
};
