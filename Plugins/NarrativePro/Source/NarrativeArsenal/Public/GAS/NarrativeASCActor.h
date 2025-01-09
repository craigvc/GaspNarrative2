// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NarrativeASCActor.generated.h"

/**
* Basic actor that comes with an Ability System Comp and some attributes. 
* 
* Added mostly for testing purposes, however would be useful for perhaps an attack dummy etc. 
*/
UCLASS()
class NARRATIVEARSENAL_API ANarrativeASCActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANarrativeASCActor();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|GAS")
	TObjectPtr<class UNarrativeAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeAttributeSetBase> AttributeSetBase;

	// Default attributes to apply to the actor - we can probably move this to the ASC itself. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	// The level to assign to the ASC. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	int32 Level;

	UFUNCTION(BlueprintCallable, Category = "Narrative|Abilities")
	virtual void InitializeAttributes();

	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);
	virtual void HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);
};
