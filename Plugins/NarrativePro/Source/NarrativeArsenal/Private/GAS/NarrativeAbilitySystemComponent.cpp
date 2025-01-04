// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeAbilitySystemComponent.h"
#include "UnrealFramework/NarrativeAnimInstance.h"
#include <AbilitySystemBlueprintLibrary.h>
#include "UnrealFramework/NarrativeCharacter.h"


void UNarrativeAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	FGameplayAbilityActorInfo* ActorInfo = AbilityActorInfo.Get();

	if (UNarrativeAnimInstance* AnimInstance = Cast<UNarrativeAnimInstance>(ActorInfo->GetAnimInstance()))
	{
		AnimInstance->InitializePropertyMap(this);
	}
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
				UE_LOG(LogTemp, Warning, TEXT("Saving attribute %s with value %f"), *Attribute.AttributeName, AttributeValue);
				FSavedAttribute SavedAttribute;
				SavedAttribute.AttributeName = Attribute.AttributeName;
				SavedAttribute.Value = AttributeValue;

				SavedAttributes.Add(SavedAttribute);
			}
		}
	}

}
