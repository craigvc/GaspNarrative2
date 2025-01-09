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

	//So GM can set player definition
	friend class ANarrativeGameMode;

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
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual FGameplayTagContainer GetFactions() const override;
	virtual void AddFaction(const FGameplayTag& Faction) override;
	virtual void RemoveFaction(const FGameplayTag& Faction) override;
	virtual class UNarrativeInteractionComponent* GetInteractionComponent() const;

	virtual void WieldWeapon(class UWeaponItem* Weapon);
	virtual void UnWieldWeapon(class UWeaponItem* Weapon);

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

	/** The player definition for this character */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, ReplicatedUsing=OnRep_PlayerDefinition, Category = NarrativeCharacter, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<class UPlayerDefinition> PlayerDefinition;

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

	virtual class UCharacterDefinition* GetCharacterDefinition() const override;
	virtual void SetPlayerDefinition(class UPlayerDefinition* PDef);

	UFUNCTION()
	virtual void OnRep_PlayerDefinition();

public:

	FORCEINLINE class UNarrativeCameraComponent* GetCameraComponent() const {return FollowCamera;};

};
