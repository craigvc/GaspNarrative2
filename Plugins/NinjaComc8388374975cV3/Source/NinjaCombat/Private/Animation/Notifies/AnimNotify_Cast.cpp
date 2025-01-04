// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/Notifies/AnimNotify_Cast.h"

#include "NinjaCombatTags.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/NinjaCombatCastRequest.h"

UAnimNotify_Cast::UAnimNotify_Cast()
{
}

void UAnimNotify_Cast::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	const UNinjaCombatCastRequest* CastRequest = UNinjaCombatCastRequest::NewInstance(UNinjaCombatCastRequest::StaticClass(), this, MeshComp->GetOwner(), MeshComp->GetOwner(), nullptr);
	FNinjaCombatAnimNotifyHelpers::BroadcastEvent(MeshComp->GetOwner(), Tag_Combat_Event_Cast, CastRequest);
}

FString UAnimNotify_Cast::GetNotifyName_Implementation() const
{
	return "Cast";
}
