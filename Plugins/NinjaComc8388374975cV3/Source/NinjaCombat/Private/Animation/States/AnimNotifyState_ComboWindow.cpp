// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/States/AnimNotifyState_ComboWindow.h"

#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatTags.h"
#include "Animation/AnimSequenceBase.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"

UAnimNotifyState_ComboWindow::UAnimNotifyState_ComboWindow()
{
}

void UAnimNotifyState_ComboWindow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	const FGameplayTag EventTag = Tag_Combat_Event_Combo_Begin;
	FNinjaCombatAnimNotifyHelpers::BroadcastEvent(MeshComp->GetOwner(), EventTag);
}

void UAnimNotifyState_ComboWindow::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	const FGameplayTag EventTag = Tag_Combat_Event_Combo_End;
	FNinjaCombatAnimNotifyHelpers::BroadcastEvent(MeshComp->GetOwner(), EventTag);
}

FString UAnimNotifyState_ComboWindow::GetNotifyName_Implementation() const
{
	static FString NotifyName = TEXT("Combo Window");  
	return NotifyName;
}
