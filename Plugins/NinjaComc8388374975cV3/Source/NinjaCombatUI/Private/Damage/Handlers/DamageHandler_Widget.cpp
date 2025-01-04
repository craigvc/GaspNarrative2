// Ninja Bear Studio Inc., all rights reserved.
#include "Damage/Handlers/DamageHandler_Widget.h"

#include "NinjaCombatTags.h"
#include "Components/ActorComponent.h"
#include "UI/Components/NinjaCombatWidgetComponent.h"

UDamageHandler_Widget::UDamageHandler_Widget()
{
	WidgetComponentTag = Tag_Combat_Component_HealthWidget;
	bOnlyOnLocalInstigator = true;
	bFilterCues = true;
	AcceptedCues.AddTag(Tag_GameplayCue_Combat_Death);
	AcceptedCues.AddTag(Tag_GameplayCue_Combat_Hit);
}

void UDamageHandler_Widget::HandleDamage_Implementation(UActorComponent* DamageManager, const FGameplayCueParameters& Parameters) const
{
	if (bOnlyOnLocalInstigator && !IsSourceLocallyController(Parameters))
	{
		// Only meant to trigger in the local instigator.
		return;
	}

	if (bFilterCues && !AcceptedCues.HasTagExact(Parameters.OriginalTag))
	{
		// This event is filtered-out from this handler.
		return;
	}
	
	const AActor* Owner = DamageManager->GetOwner();
	check(IsValid(Owner));

	const FName ComponentTag = WidgetComponentTag.GetTagName();
	TArray<UActorComponent*> Components = Owner->GetComponentsByTag(UNinjaCombatWidgetComponent::StaticClass(), ComponentTag);

	for (UActorComponent* Component : Components)
	{
		const UNinjaCombatWidgetComponent* WidgetComponent = Cast<UNinjaCombatWidgetComponent>(Component);
		WidgetComponent->HandleGameplayCue(Parameters);
	}
}
