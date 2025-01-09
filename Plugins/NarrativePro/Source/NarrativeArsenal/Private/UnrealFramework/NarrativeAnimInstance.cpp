// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeAnimInstance.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"

UNarrativeAnimInstance::UNarrativeAnimInstance()
{

}


void UNarrativeAnimInstance::InitializePropertyMap(class UAbilitySystemComponent* ASC)
{
	GameplayTagPropertyMap.Initialize(this, ASC);
}

void UNarrativeAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializePropertyMap(ASC);
		}
	}
}
