// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatCameraAnchorActor.h"

#include "Camera/CameraComponent.h"

FName ANinjaCombatCameraAnchorActor::CameraName = "Camera";

ANinjaCombatCameraAnchorActor::ANinjaCombatCameraAnchorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	USceneComponent* SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	SetRootComponent(SceneRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(CameraName);
	Camera->SetupAttachment(SceneRoot);
}

void ANinjaCombatCameraAnchorActor::Tick(const float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (SourcePtr.IsValid() && SourcePtr->IsValidLowLevelFast())
	{
		const FVector SourceLocation = SourcePtr->GetActorLocation();
		SetActorLocation(SourceLocation);
	}
	else
	{
		SetActorTickEnabled(false);
	}
}

UCameraComponent* ANinjaCombatCameraAnchorActor::GetCamera() const
{
	return Camera;
}

void ANinjaCombatCameraAnchorActor::SetSource(AActor* Source)
{
	SourcePtr = Source;

	const bool bShouldTick = IsValid(Source) && bFollowSource;
	SetActorTickEnabled(bShouldTick);
}
