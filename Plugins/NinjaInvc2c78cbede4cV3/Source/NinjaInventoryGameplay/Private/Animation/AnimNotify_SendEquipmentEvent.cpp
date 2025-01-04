// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/AnimNotify_SendEquipmentEvent.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaEquipmentFunctionLibrary.h"
#include "NinjaInventoryGameplayTags.h"
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/NinjaEquipment.h"

UAnimNotify_SendEquipmentEvent::UAnimNotify_SendEquipmentEvent()
{
#if WITH_EDITORONLY_DATA
	// Ninja Bear Green! :D
	NotifyColor = FColor(211, 221, 197);
#endif
	
	EventTag = Tag_Inventory_Event_Animation;
	EquipmentTags = FGameplayTagContainer::EmptyContainer;
}

void UAnimNotify_SendEquipmentEvent::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	const AActor* AnimationOwner = MeshComp->GetOwner();
	
	UAbilitySystemComponent* AbilityComponent = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(AnimationOwner);
	if (IsValid(AbilityComponent))
	{
		FGameplayEventData* Payload = new FGameplayEventData();
		Payload->Instigator = AnimationOwner;
		Payload->Target = AnimationOwner;
		Payload->EventTag = EventTag;
		Payload->TargetTags.AppendTags(EquipmentTags);
		AbilityComponent->HandleGameplayEvent(EventTag, Payload);
	}
}

FString UAnimNotify_SendEquipmentEvent::GetNotifyName_Implementation() const
{
	return TEXT("Send Equipment Event");
}
