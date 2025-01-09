// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "NarrativeSavableComponent.h"
#include "NarrativeAbilitySystemComponent.generated.h"

USTRUCT()
struct FSavedAttribute
{

GENERATED_BODY()

public: 

	FSavedAttribute() {};	

	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Saving")
	FString AttributeName;

	UPROPERTY(EditDefaultsOnly, SaveGame, Category = "Saving")
	float Value;

};

//An attack token that has been created for a given attacker. Inspired by 
USTRUCT()
struct FAttackToken
{

GENERATED_BODY()

public: 

	FAttackToken(){};

	FAttackToken(class ANarrativeNPCController* InAttacker, const float InTokenGrantedTime) : Owner(InAttacker), TokenGrantedTime(InTokenGrantedTime) {};

	//The NPC that owns this attack token
	UPROPERTY()
	TObjectPtr<class ANarrativeNPCController> Owner;

	//The game time that the token was granted 
	UPROPERTY()
	float TokenGrantedTime; 

};

//Delegates 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDied, AActor*, KilledActor, UNarrativeAbilitySystemComponent*, KilledActorASC);

/**
 * Custom Ability system component for Narrative pro. Has ISavableComponent for saving attributes.
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAbilitySystemComponent : public UAbilitySystemComponent, public INarrativeSavableComponent
{
	GENERATED_BODY()
	
public:

	UNarrativeAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

	bool bStartupEffectsApplied = false;

	virtual void InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) override;
	virtual void HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude);
	virtual void Debug_Internal(struct FAbilitySystemComponentDebugInfo& Info) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//This defines the attributes that should be saved to disk 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Saving")
	TArray<FGameplayAttribute> AttributesToSave;

	//ATTACK TOKENS - maintained really just on the server, clients don't need to worry about these

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack Tokens")
	int32 NumAttackTokens;

	//NPCs will use this value when they decide whether they should attack us or not. Higher priority people are attacked first 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack Tokens")
	float AttackPriority;

	/**The attackers we've granted a token to are in here. We don't actally bother with a TokenHandle 
	or anything extra as that overcomplicates things - tokens are just pointers to the token holder*/
	UPROPERTY()
	TArray<FAttackToken> GrantedAttackTokens;

	//NPCControllers call this when they want to claim one of our attack tokens. 
	bool TryClaimToken(class ANarrativeNPCController* Claimer);

	//Return a token. Never fails. 
	void ReturnTokenAtIndex(int32 Index);
	void ReturnToken(class ANarrativeNPCController* Returner);

	//Return true if we can steal a token from the existing one. StealScore should be set to the score so we can use the best score to steal from.
	virtual bool ShouldImmediatelyStealToken(const FAttackToken& Token) const;
	virtual bool CanStealToken(class ANarrativeNPCController* Stealer, const FAttackToken& ExistingToken, float& StealScore) const;
	virtual int32 GetNumAttackTokens() const;
	int32 GetAvailableAttackTokens() const;
	int32 GetNumGrantedAttackTokens() const;

	virtual float GetAttackPriority() const;

	//Any ASC owner wishing to do something OnDeath should bind to this - it fires on server and all clients when the ASC dies. 
	UPROPERTY(BlueprintAssignable, Category = "Narrative|GAS")
	FOnDied OnDied;

protected:

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_bIsDead, Category = "Narrative|GAS")
	bool bIsDead;

	UFUNCTION()
	virtual void OnRep_bIsDead();

	//We use this to remember attribute -> attribute value 
	UPROPERTY(SaveGame)
	TArray<FSavedAttribute> SavedAttributes;

	void PrepareForSave_Implementation() override;
	void Load_Implementation() override;

};
