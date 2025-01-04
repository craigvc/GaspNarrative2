// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/States/AnimNotifyState_ParryWindow.h"

#include "AbilitySystem/Effects/CombatEffect_ParryWindow.h"
#include "Animation/AnimSequenceBase.h"
#include "Animation/NinjaCombatAnimNotifyHelpers.h"
#include "Components/ActorComponent.h"
#include "Components/SkeletalMeshComponent.h"

UAnimNotifyState_ParryWindow::UAnimNotifyState_ParryWindow()
{
	ParryWindowEffectClass = UCombatEffect_ParryWindow::StaticClass();
}

void UAnimNotifyState_ParryWindow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);
	EffectHandle = FNinjaCombatAnimNotifyHelpers::ApplyGameplayEffectClass(MeshComp->GetOwner(), ParryWindowEffectClass);
}

void UAnimNotifyState_ParryWindow::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);
	FNinjaCombatAnimNotifyHelpers::RemoveGameplayEffectClass(MeshComp->GetOwner(), EffectHandle);
}

FString UAnimNotifyState_ParryWindow::GetNotifyName_Implementation() const
{
	static FString NotifyName = TEXT("Parry Window");  
	return NotifyName;
}
