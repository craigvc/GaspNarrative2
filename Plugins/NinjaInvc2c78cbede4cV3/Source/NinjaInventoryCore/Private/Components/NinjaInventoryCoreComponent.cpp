// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaInventoryCoreComponent.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerState.h"

UNinjaInventoryCoreComponent::UNinjaInventoryCoreComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	bWantsInitializeComponent = true;
	SetIsReplicatedByDefault(true);
}

bool UNinjaInventoryCoreComponent::OwnerHasAuthority() const
{
	const AActor* OwnerActor = GetOwner();
	return IsValid(OwnerActor) && OwnerActor->HasAuthority();	
}

bool UNinjaInventoryCoreComponent::OwnerIsLocallyControlled() const
{
	const APawn* OwnerPawn = GetPawn();
	return IsValid(OwnerPawn) && OwnerPawn->IsLocallyControlled();
}

APawn* UNinjaInventoryCoreComponent::GetPawn() const
{
	if (GetOwner()->IsA<APawn>())
	{
		return Cast<APawn>(GetOwner());
	}

	if (GetOwner()->IsA<APlayerState>())
	{
		return Cast<APlayerState>(GetOwner())->GetPawn();	
	}
	
	if (GetOwner()->IsA<AController>())
	{
		return Cast<AController>(GetOwner())->GetPawn();	
	}
	
	return nullptr;
}

UAbilitySystemComponent* UNinjaInventoryCoreComponent::GetAbilitySystemComponent_Implementation() const
{
	return UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwner());
}

bool UNinjaInventoryCoreComponent::IsValidAbilitySystemComponent_Implementation(const UAbilitySystemComponent* AbilityComponent) const
{
	if (!IsValid(AbilityComponent))
	{
		return false;
	}

	const AActor* Avatar = AbilityComponent->GetAvatarActor();
	if (!IsValid(Avatar))
	{
		return false;
	}

	if (Avatar->IsA<APlayerState>() || Avatar->IsA<AController>())
	{
		return false;
	}

	return true;
}