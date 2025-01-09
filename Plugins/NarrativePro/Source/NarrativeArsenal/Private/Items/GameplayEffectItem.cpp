// Copyright Narrative Tools 2024. 


#include "Items/GameplayEffectItem.h"
#include <AbilitySystemComponent.h>
#include <AbilitySystemGlobals.h>
#include <GameplayTagContainer.h>
#include <GameFramework/Character.h>
#include "NarrativeGameplayTags.h"
#include <UObject/ConstructorHelpers.h>

#define LOCTEXT_NAMESPACE "GameplayEffectItem"

#define ItemStat_Heals "Heals"
#define ItemStat_Stamina "Stamina"
#define ItemStat_Duration "Duration"

UGameplayEffectItem::UGameplayEffectItem()
{
	bConsumeOnUse = true;

	auto GameplayEffectClassFinder = ConstructorHelpers::FClassFinder<UGameplayEffect>(TEXT("/Script/Engine.Blueprint'/NarrativePro/Abilities/GameplayEffects/GE_ItemGameplayEffect.GE_ItemGameplayEffect_C'"));

	if (GameplayEffectClassFinder.Succeeded())
	{
		GameplayEffectClass = GameplayEffectClassFinder.Class;
	}

	Stats.Add(FNarrativeItemStat(LOCTEXT("HealsStatDisplayText", "Heals"), ItemStat_Heals, LOCTEXT("HealsStatTooltip", "The amount this item heals.")));
	Stats.Add(FNarrativeItemStat(LOCTEXT("StaminaStatDisplayText", "Stamina"), ItemStat_Stamina, LOCTEXT("StaminaStatTooltip", "The stamina this item restores.")));

	SetByCallerValues.Add(FNarrativeGameplayTags::Get().SetByCaller_Health, 0.f);
	SetByCallerValues.Add(FNarrativeGameplayTags::Get().SetByCaller_Stamina, 0.f);
	SetByCallerValues.Add(FNarrativeGameplayTags::Get().SetByCaller_Duration, 0.f);
}

void UGameplayEffectItem::Use()
{
	Super::Use();

	if (APawn* PawnOwner = GetOwningPawn())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PawnOwner))
		{
			// Can run on Server and Client
			FGameplayEffectContextHandle EffectContext = ASC->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(GameplayEffectClass, 1.f, EffectContext);

			if (FGameplayEffectSpec* Spec = SpecHandle.Data.Get())
			{
				for (auto& SetByCallerKVP : SetByCallerValues)
				{
					const FGameplayTag SBCTag = SetByCallerKVP.Key;
					const float Value = SetByCallerKVP.Value;

					Spec->SetSetByCallerMagnitude(SBCTag, Value);
				}

				if (SpecHandle.IsValid())
				{
					FActiveGameplayEffectHandle ActiveGEHandle = ASC->ApplyGameplayEffectSpecToTarget(*Spec, ASC);
				}
			}
		}
	}
}

FString UGameplayEffectItem::GetStringVariable_Implementation(const FString& VariableName)
{
	if (VariableName == ItemStat_Heals)
	{
		FGameplayTag HealthTag = FNarrativeGameplayTags::Get().SetByCaller_Health;
		if (SetByCallerValues.Contains(HealthTag))
		{
			const float Health = SetByCallerValues[HealthTag];
			if (SetByCallerValues[HealthTag] > 0.f)
			{
				return FString::SanitizeFloat(Health);
			}
		}
	}
	else if (VariableName == ItemStat_Stamina)
	{
		FGameplayTag StaminaTag = FNarrativeGameplayTags::Get().SetByCaller_Stamina;
		if (SetByCallerValues.Contains(StaminaTag))
		{
			const float Stamina = SetByCallerValues[StaminaTag];
			if (SetByCallerValues[StaminaTag] > 0.f)
			{
				return FString::SanitizeFloat(Stamina);
			}
		}
	}
	else if (VariableName == ItemStat_Duration)
	{
		FGameplayTag DurationTag = FNarrativeGameplayTags::Get().SetByCaller_Duration;
		if (SetByCallerValues.Contains(DurationTag))
		{
			const float Duration = SetByCallerValues[DurationTag];
			if (SetByCallerValues[DurationTag] > 0.f)
			{
				return FString::SanitizeFloat(Duration);
			}
		}
	}

	return Super::GetStringVariable_Implementation(VariableName);
}

#undef LOCTEXT_NAMESPACE