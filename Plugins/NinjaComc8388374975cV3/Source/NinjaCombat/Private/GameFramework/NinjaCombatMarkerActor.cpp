// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatMarkerActor.h"

#include "NinjaCombatTags.h"
#include "Components/WidgetComponent.h"
#include "Interfaces/CombatActorAwareInterface.h"

DEFINE_LOG_CATEGORY(LogNinjaCombatTargetLock);

FName ANinjaCombatMarkerActor::TargetLockWidgetName = TEXT("TargetMarkerWidget");

ANinjaCombatMarkerActor::ANinjaCombatMarkerActor()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;

	bReplicates = false;
	bOnlyRelevantToOwner = true;
	bDestroyOnDetach = false;
	TargetMeshTag = Tag_Combat_Component_TargetLockAnchor.GetTag().GetTagName();

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TargetLockRoot"));
	SetRootComponent(SceneComponent);

	TargetLockWidget = CreateOptionalDefaultSubobject<UWidgetComponent>(TargetLockWidgetName);
	TargetLockWidget->SetWidgetSpace(EWidgetSpace::Screen);
	TargetLockWidget->SetDrawAtDesiredSize(true);
	TargetLockWidget->SetupAttachment(GetRootComponent());

	SetActorEnableCollision(false);
}

void ANinjaCombatMarkerActor::BeginPlay()
{
	SetActorHiddenInGame(true);
	Super::BeginPlay();
}

void ANinjaCombatMarkerActor::LockOnTarget(AActor* Target)
{
	USceneComponent* AnchorComponent = FindAttachAnchor(Target);
	if (IsValid(AnchorComponent))
	{
		const bool bAttached = AttachToTarget(AnchorComponent);
		if (bAttached)
		{
			CurrentTarget = Target;
			SetCombatActorToWidgets();
			HandleTargetSet(Target);
		}

		const FName TargetSocketName = AnchorComponent->GetAttachSocketName();
		UE_LOG(LogNinjaCombatTargetLock, Verbose, TEXT("%s to %s.%s.%s!"),
			bAttached ? TEXT("Attached") : TEXT("Unable to attach"),
			*GetNameSafe(Target), *GetNameSafe(AnchorComponent), *TargetSocketName.ToString());			
	}
}

USceneComponent* ANinjaCombatMarkerActor::FindAttachAnchor_Implementation(const AActor* Target) const
{
	if (!IsValid(Target))
	{
		return nullptr;
	}
	
	USceneComponent* AnchorComponent = Target->FindComponentByTag<USceneComponent>(TargetMeshTag);
	if (IsValid(AnchorComponent))
	{
		return AnchorComponent;
	}
	
	return Target->GetRootComponent();
}

bool ANinjaCombatMarkerActor::AttachToTarget_Implementation(USceneComponent* AnchorComponent)
{
	check(IsValid(AnchorComponent))

	const bool bAttached = AttachToComponent(AnchorComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	if (bAttached && IsHidden())
	{
		SetActorHiddenInGame(false);
	}
	
	return bAttached;
}

void ANinjaCombatMarkerActor::DismissTarget()
{
	UE_LOG(LogNinjaCombatTargetLock, Verbose, TEXT("Detaching from target!"));
	DetachFromTarget();
}

void ANinjaCombatMarkerActor::DetachFromTarget_Implementation()
{
	HandleTargetCleared(CurrentTarget);
	CurrentTarget = nullptr;
	SetCombatActorToWidgets();
	
	if (bDestroyOnDetach)
	{
		Destroy();
	}
	else
	{
		DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		SetActorHiddenInGame(true);
	}
}

UWidgetComponent* ANinjaCombatMarkerActor::GetTargetLockWidget() const
{
	return TargetLockWidget;
}

void ANinjaCombatMarkerActor::SetCombatActorToWidgets() const
{
	TInlineComponentArray<UWidgetComponent*> WidgetComponents(this);
	for (const UWidgetComponent* WidgetComponent : WidgetComponents)
	{
		UWidget* Widget = WidgetComponent->GetWidget();
		if (Widget && Widget->Implements<UCombatActorAwareInterface>())
		{
			ICombatActorAwareInterface::Execute_SetCombatActor(Widget, CurrentTarget);
		}
	}
}
