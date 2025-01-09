// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeAbilitySystemComponent.h"
#include "GAS/NarrativeAttributeSetBase.h"
#include "UnrealFramework/NarrativeAnimInstance.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeNPCCharacter.h"
#include <AbilitySystemBlueprintLibrary.h>
#include "Settings/NarrativeCombatDeveloperSettings.h"
#include "AI/NarrativeNPCController.h"
#include "AI/NPCDefinition.h"
#include "ArsenalStatics.h"
#include "NarrativeGameplayTags.h"
#include "Net/UnrealNetwork.h"
#include <Engine/World.h>

UNarrativeAbilitySystemComponent::UNarrativeAbilitySystemComponent(const FObjectInitializer& ObjectInitializer)
{
	NumAttackTokens = 10;
	AttackPriority = 1.f;
	bIsDead = false; 
}

void UNarrativeAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor) 
{
	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();

	if (UNarrativeAnimInstance* AnimInstance = Cast<UNarrativeAnimInstance>(ActorInfo->GetAnimInstance()))
	{
		AnimInstance->InitializePropertyMap(this);
	}

	//TODO binding this is annoying because attribute set is const and so HandleOutOfHealth() needs to be const too - will come back to this, have higher priorites atm 
	if (const UNarrativeAttributeSetBase* AttributeSet = Cast<UNarrativeAttributeSetBase>(GetAttributeSet(UNarrativeAttributeSetBase::StaticClass())))
	{
		/*GAS wants this to be const which is fair, however we need to assign a delegate which requires non - const.
		We know assigning a delegate is safe because its in our custom attribute set and we're not touching any underlying GAS stuff so we can remove the const. */
		if (UNarrativeAttributeSetBase* MutableAttributeSet = const_cast<UNarrativeAttributeSetBase*>(AttributeSet))
		{
			MutableAttributeSet->OnOutOfHealth.AddUObject(this, &UNarrativeAbilitySystemComponent::HandleOutOfHealth);
		}
	}
}

void UNarrativeAbilitySystemComponent::HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude) 
{
	//Health will be zero on beginplay and this will be called, we can use bStartupEffectsApplied to ensure we ignore that call 
	if (GetOwnerRole() >= ROLE_Authority && bStartupEffectsApplied) 
	{
		const FGameplayTag DeadTag = FNarrativeGameplayTags::Get().State_IsDead;

		if (!HasMatchingGameplayTag(DeadTag))
		{
			FGameplayEventData Payload;
			Payload.EventTag = FNarrativeGameplayTags::Get().GameplayEvent_Death;
			Payload.Instigator = DamageInstigator;
			Payload.Target = GetAvatarActor();
			Payload.OptionalObject = DamageEffectSpec.Def;
			Payload.ContextHandle = DamageEffectSpec.GetEffectContext();
			Payload.InstigatorTags = *DamageEffectSpec.CapturedSourceTags.GetAggregatedTags();
			Payload.TargetTags = *DamageEffectSpec.CapturedTargetTags.GetAggregatedTags();
			Payload.EventMagnitude = DamageMagnitude;

			FScopedPredictionWindow NewScopedWindow(this, true);
			HandleGameplayEvent(Payload.EventTag, &Payload);

			/**Basically GAS is an absolute pain to work with and firing our Death ability on all clients does not work with
			- Owner Tag Added ability trigger
			- GameplayEvent based trigger 
			
			So we're manually writing this so that death reliably fires on all clients, and works for anything that owns an ASC. */
			bIsDead = true;
			OnRep_bIsDead();
		}
	}
}	

void UNarrativeAbilitySystemComponent::Debug_Internal(struct FAbilitySystemComponentDebugInfo& Info)
{
	Super::Debug_Internal(Info);

	FString TokenStrings;
	int32 TokenCount = 1;
	int32 NumTokens = GrantedAttackTokens.Num();
	int32 AvailableTokens = GetNumAttackTokens();
	if (NumTokens > 0)
	{
		for (auto& Token : GrantedAttackTokens)
		{
			if (Token.Owner && Token.Owner->GetPawn())
			{

				TokenStrings += Token.Owner->GetNPCName().ToString();

				if (TokenCount++ < NumTokens)
				{
					TokenStrings += TEXT(", ");
				}
			} 
		}

		DebugLine(Info, FString::Printf(TEXT("Attack Tokens: %s, (%d/%d)"), *TokenStrings, GrantedAttackTokens.Num(), AvailableTokens), 4.f, 0.f, 4);
	}
	else
	{
		DebugLine(Info, FString::Printf(TEXT("Attack Tokens: None, (0/%d)"), AvailableTokens), 4.f, 0.f, 4);
	}

}

void UNarrativeAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	DOREPLIFETIME(UNarrativeAbilitySystemComponent, bIsDead);

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

bool UNarrativeAbilitySystemComponent::TryClaimToken(class ANarrativeNPCController* Claimer)
{
	if (Claimer && Claimer->GetPawn() && GetAvatarActor())
	{
		const bool bHasTokensAvailable = GrantedAttackTokens.Num() < GetNumAttackTokens();
		const APawn* ClaimerPawn = Claimer->GetPawn();
		const AActor* OurActor = GetAvatarActor();

		//If no tokens are available, we may be able to steal one 
		if (!bHasTokensAvailable)
		{
			int32 StealTokenFromIdx = INDEX_NONE;
			float BestScore = 0.f;

			const float DistFromClaimer = FVector::DistSquared(ClaimerPawn->GetActorLocation(), OurActor->GetActorLocation());

			int32 Idx = 0;
			//Loop over everyone and see if we can steal from them. 
			for (auto& ExistingToken : GrantedAttackTokens)
			{
				//In some cases we should always steal a token, for example if the token holder has died. In these cases just early out 
				if (ShouldImmediatelyStealToken(ExistingToken))
				{
					StealTokenFromIdx = Idx;
					break;
				}

				//See if we can steal and grab the steal score. 
				float StealScore = 0.f;
				if (CanStealToken(Claimer, ExistingToken, StealScore))
				{
					if (StealScore > BestScore)
					{
						//UE_LOG(LogTemp, Warning, TEXT("New best steal score is %f. We'll steal from %s"), StealScore, *ExistingToken.Owner->GetNPCName().ToString());
						StealTokenFromIdx = Idx;
						BestScore = StealScore;
					}
				}

				++Idx;
			}

			if (StealTokenFromIdx != INDEX_NONE && GrantedAttackTokens.IsValidIndex(StealTokenFromIdx))
			{
				//UE_LOG(LogTemp, Warning, TEXT("We stole a token from %s!"), *GrantedAttackTokens[StealTokenFromIdx].Owner->GetNPCName().ToString());

				GrantedAttackTokens[StealTokenFromIdx].Owner->TokenStolen();
				ReturnTokenAtIndex(StealTokenFromIdx);
			}
		}

		//Sanity check this again then add the token 
		if (GrantedAttackTokens.Num() < GetNumAttackTokens())
		{
			FAttackToken NewToken = FAttackToken(Claimer, GetWorld()->GetTimeSeconds());
			GrantedAttackTokens.Add(NewToken);

			Claimer->GrantedToken = this;
			return true; 
		}
	}

	return false; 
}

void UNarrativeAbilitySystemComponent::ReturnTokenAtIndex(int32 Index)
{
	if (GrantedAttackTokens.IsValidIndex(Index))
	{
		if (GrantedAttackTokens[Index].Owner)
		{
			GrantedAttackTokens[Index].Owner->GrantedToken = nullptr;
		}
	}

	GrantedAttackTokens.RemoveAt(Index);
}

void UNarrativeAbilitySystemComponent::ReturnToken(class ANarrativeNPCController* Returner)
{
	int32 FoundIdx = INDEX_NONE;

	for (int32 i = 0; i < GrantedAttackTokens.Num(); ++i)
	{
		if (GrantedAttackTokens.IsValidIndex(i) && GrantedAttackTokens[i].Owner == Returner)
		{
			FoundIdx = i;
			break;
		}
	}
	
	if (FoundIdx != INDEX_NONE)
	{
		ReturnTokenAtIndex(FoundIdx);
	}

}

bool UNarrativeAbilitySystemComponent::ShouldImmediatelyStealToken(const FAttackToken& Token) const
{
	return !Token.Owner || !Token.Owner->IsAlive() || !Token.Owner->GetPawn();
}

bool UNarrativeAbilitySystemComponent::CanStealToken(class ANarrativeNPCController* Stealer, const FAttackToken& ExistingToken, float& StealScore) const
{
	if (const UNarrativeCombatDeveloperSettings* CombatSettings = GetDefault<UNarrativeCombatDeveloperSettings>())
	{
		if (Stealer && ExistingToken.Owner)
		{
			const APawn* StealerPawn = Stealer->GetPawn();
			const APawn* ExistingPawn = ExistingToken.Owner->GetPawn();
			const AActor* OurActor = GetAvatarActor();

			if (StealerPawn && ExistingPawn)
			{
				const float DistFromStealer = FVector::DistSquared(StealerPawn->GetActorLocation(), OurActor->GetActorLocation());
				const float DistFromExisting = FVector::DistSquared(ExistingPawn->GetActorLocation(), OurActor->GetActorLocation());
				const float TimeSinceGrant = GetWorld()->TimeSince(ExistingToken.TokenGrantedTime);
				bool bCanSteal = false;

				//The existing token was granted ages ago, lets allow for a steal!
				if (TimeSinceGrant > CombatSettings->TokenStealableAgeSeconds)
				{
					//Every second past the stealable age is a point of score. 
					StealScore += TimeSinceGrant - CombatSettings->TokenStealableAgeSeconds;
					bCanSteal = true; 
				}

				//If the stealer is x% closer to us than the existing token, then lets steal it! 
				if (DistFromStealer < DistFromExisting && DistFromStealer / DistFromExisting < CombatSettings->StealTokenProximity)
				{
					//Higher score means we should steal. So use DistFromExisting as the score. Further away will be scored higher. 
					StealScore += DistFromExisting / (50000.f * 50000.f);
					bCanSteal = true;
				}

				return bCanSteal;
			}

		}
	}

	return false; 
}

int32 UNarrativeAbilitySystemComponent::GetNumAttackTokens() const
{
	if (const UNarrativeCombatDeveloperSettings* CombatSettings = GetDefault<UNarrativeCombatDeveloperSettings>())
	{
		return CombatSettings->GetAttackTokensForDifficulty(UArsenalStatics::GetGameplayDifficultyLevel());
	}
	else
	{
		return INT_MAX;
	}
}

int32 UNarrativeAbilitySystemComponent::GetAvailableAttackTokens() const
{
	return GetNumAttackTokens() - GrantedAttackTokens.Num();
}

int32 UNarrativeAbilitySystemComponent::GetNumGrantedAttackTokens() const
{
	return GrantedAttackTokens.Num();
}

float UNarrativeAbilitySystemComponent::GetAttackPriority() const
{	
	return AttackPriority;
}

void UNarrativeAbilitySystemComponent::OnRep_bIsDead()
{
	OnDied.Broadcast(GetAvatarActor(), this);
}

void UNarrativeAbilitySystemComponent::Load_Implementation()
{
	TArray<FGameplayAttribute> OurAttributes;
	GetAllAttributes(OurAttributes);

	for (auto& Attribute : OurAttributes)
	{
		for (auto& SA : SavedAttributes)
		{
			if (SA.AttributeName == Attribute.AttributeName)
			{
				if (!AttributesToSave.Contains(Attribute))
				{
					return;
				}

				ApplyModToAttribute(Attribute, EGameplayModOp::Override, SA.Value);
				break;
			}
		}
	}

}

void UNarrativeAbilitySystemComponent::PrepareForSave_Implementation()
{

	TArray<FGameplayAttribute> OurAttributes;
	GetAllAttributes(OurAttributes);

	SavedAttributes.Empty();

	for (auto& Attribute : OurAttributes)
	{
		if (Attribute.IsValid())
		{
			bool bFound;
			float AttributeValue = UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(this, Attribute, bFound);

			if (!AttributesToSave.Contains(Attribute))
			{
				return; 
			}

			//Wont work in packaged as HasMetadata is editor only 
			//if (FProperty* Prop = Attribute.GetUProperty())
			//{
			//	if (!Prop->HasMetaData("NarrativeSaveAttribute"))
			//	{
			//		return;
			//	}
			//}
				
			if (bFound)
			{
				UE_LOG(LogTemp, Verbose, TEXT("Saving attribute %s with value %f"), *Attribute.AttributeName, AttributeValue);
				FSavedAttribute SavedAttribute;
				SavedAttribute.AttributeName = Attribute.AttributeName;
				SavedAttribute.Value = AttributeValue;

				SavedAttributes.Add(SavedAttribute);
			}
		}
	}

}
