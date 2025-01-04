// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "NarrativeCharacter.h"
#include "NarrativePlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativePlayerCharacter : public ANarrativeCharacter
{
	GENERATED_BODY()
	
public:

	ANarrativePlayerCharacter(const class FObjectInitializer& ObjectInitializer);

protected:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Camera")
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Camera")
	TObjectPtr<class UNarrativeCameraComponent> FollowCamera;

	bool ASCInputBound = false;

	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> LookAction;

	/** Confirm Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> AbilityConfirmAction;

	/** Cancel Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputAction> AbilityCancelAction;

	//The default abilities we grant the player! We also store their input mappings so player subclass can bind these 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AbilitySystem", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UNarrativeAbilityInputMapping> AbilityInputMappings;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UInputMappingContext> DefaultMappingContext;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for ability input press */
	void AbilityInputPressed(const int32 InputID);
	void AbilityInputReleased(const int32 InputID);
	void AbilityConfirmPressed();
	void AbilityCancelPressed();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:

	FORCEINLINE class UNarrativeCameraComponent* GetCameraComponent() const {return FollowCamera;};

};
