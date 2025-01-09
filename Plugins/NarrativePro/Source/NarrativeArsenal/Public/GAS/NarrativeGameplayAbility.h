// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "NarrativeArsenal.h"
#include "NarrativeGameplayAbility.generated.h"

/**
 * The base class for all abilities in the Narrative pro toolkit. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	UNarrativeGameplayAbility();

	//When we grant a set of abilities to the player, this is the input this ability will map to. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative Ability")
	ENarrativeAbilityInputID InputID = ENarrativeAbilityInputID::None;

	// Tells an ability to activate immediately when its granted
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Narrative Ability")
	bool bActivateAbilityOnGranted = false;

	// If an ability is marked as 'ActivateAbilityOnGranted', activate them immediately when given here
	// Epic's comment: Projects may want to initiate passives or do other "BeginPlay" type of logic here.
	virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

	UPROPERTY(BlueprintReadOnly, Category = "Narrative Ability")
	TObjectPtr<class ANarrativeCharacter> CharacterOwner;

	//Nice function for setting camera mode instead of having to grab camera and doing it manually
	UFUNCTION(BlueprintCallable, Category = "Narrative Ability")
	virtual void SetCameraMode(TSubclassOf<class UNarrativeCameraMode> CameraMode);

	UFUNCTION(BlueprintPure, Category = "Narrative Ability")
	virtual class AController* GetOwningController() const;

	UFUNCTION(BlueprintPure, Category = "Narrative Ability")
	virtual class ANarrativeCharacter* GetOwningNarrativeCharacter() const;

	UFUNCTION(BlueprintPure, Category = "Narrative Ability")
	virtual class UWeaponItem* GetOwnerEquippedWeapon() const;

	//True if this ability is being ran by a bot 
	UFUNCTION(BlueprintPure, Category = "Narrative Ability")
	virtual bool IsBot() const;

};
