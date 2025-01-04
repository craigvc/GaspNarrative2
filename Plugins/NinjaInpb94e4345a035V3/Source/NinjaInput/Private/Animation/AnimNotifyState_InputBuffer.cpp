// Ninja Bear Studio Inc., all rights reserved.
#include "Animation/AnimNotifyState_InputBuffer.h"

#include "NinjaInputFunctionLibrary.h"
#include "Components/NinjaInputManagerComponent.h"
#include "Components/SkeletalMeshComponent.h"

UAnimNotifyState_InputBuffer::UAnimNotifyState_InputBuffer()
{
    ElapsedTime = 0.f;
    NotifyDuration = 0.f;

    #if WITH_EDITORONLY_DATA
    NotifyColor = FColor(211, 221, 197);
    #endif
}

void UAnimNotifyState_InputBuffer::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
    float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

    if (IsValid(MeshComp) && IsValid(MeshComp->GetOwner()))
    {
        const TObjectPtr<UActorComponent> InputBuffer = UNinjaInputFunctionLibrary::GetInputBufferComponent(MeshComp->GetOwner());
        if (IsValid(InputBuffer))
        {
            ElapsedTime = 0.f;
            NotifyDuration = TotalDuration;
            IInputBufferInterface::Execute_OpenInputBuffer(InputBuffer);
        }
    }
}

void UAnimNotifyState_InputBuffer::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
    float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);
    ElapsedTime += FrameDeltaTime;
}

void UAnimNotifyState_InputBuffer::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
    const FAnimNotifyEventReference& EventReference)
{
    Super::NotifyEnd(MeshComp, Animation, EventReference);

    if (IsValid(MeshComp) && IsValid(MeshComp->GetOwner()))
    {
        const TObjectPtr<UActorComponent> InputBuffer = UNinjaInputFunctionLibrary::GetInputBufferComponent(MeshComp->GetOwner());
        if (IsValid(InputBuffer))
        {
            const bool bCancelled = ElapsedTime < NotifyDuration;
            IInputBufferInterface::Execute_CloseInputBuffer(InputBuffer, bCancelled);
        }
    }
}

FString UAnimNotifyState_InputBuffer::GetNotifyName_Implementation() const
{
    return "Input Buffer";
}
