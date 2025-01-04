// Ninja Bear Studio Inc., all rights reserved.
#include "NinjaFactionFunctionLibrary.h"

#include "NinjaFactionSettings.h"
#include "NinjaFactionSubsystem.h"
#include "Components/NinjaFactionComponent.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/FactionMemberInterface.h"

UNinjaFactionComponent* UNinjaFactionFunctionLibrary::GetFactionComponent(const AActor* Member)
{
	// Attempt to retrieve the Faction Component via Interface or Component Find.
    UNinjaFactionComponent* FactionComponent = GetFactionComponent_Internal(Member);
    if (IsValid(FactionComponent))
    {
    	return FactionComponent;
    }

	// If that's a pawn, try to find the faction from the controller.
	if (Member->IsA<APawn>())
	{
		const APawn* Pawn = Cast<APawn>(Member);
		const AController* Controller = Pawn->GetController();
		FactionComponent = GetFactionComponent_Internal(Controller);
		if (IsValid(FactionComponent))
		{
			return FactionComponent;
		}
	}

	// If that's a controller, try to find the faction from the pawn.
	if (Member->IsA<AController>())
	{
		const AController* Controller = Cast<AController>(Member);
		const APawn* Pawn = Controller->GetPawn();
		
		FactionComponent = GetFactionComponent_Internal(Pawn);
		if (IsValid(FactionComponent))
		{
			return FactionComponent;
		}
	}

	// No Faction Component! :(
	return nullptr;
}

UNinjaFactionDataAsset* UNinjaFactionFunctionLibrary::GetMainFaction(const AActor* Member)
{
    const TObjectPtr<const UNinjaFactionComponent> NinjaFactionComponent = GetFactionComponent(Member);
    if (IsValid(NinjaFactionComponent))
    {
        FFactionMembership MainMembership;
        if (NinjaFactionComponent->GetMainFactionMembership(MainMembership))
        {
            return MainMembership.FactionData;
        }
    }

    return nullptr;
}

uint8 UNinjaFactionFunctionLibrary::GetMainTeamId(const UNinjaFactionComponent* FactionComponent)
{
	FFactionMembership MainMembership;
	if (IsValid(FactionComponent) && FactionComponent->GetMainFactionMembership(MainMembership))
	{
		return MainMembership.GetGenericTeamId();
	}

	const uint8 DefaultTeam = GetDefault<UNinjaFactionSettings>()->DefaultTeam; 
	return FGenericTeamId(DefaultTeam);
}

bool UNinjaFactionFunctionLibrary::GetAttitude(const AActor* Source, const AActor* Target, TEnumAsByte<ETeamAttitude::Type>& Attitude)
{
	if (IsValid(Source) && IsValid(Target))
	{
		const UWorld* World = Source->GetWorld();
		check(IsValid(World));
		
		const UNinjaFactionSubsystem* Subsystem = World->GetGameInstance()->GetSubsystem<UNinjaFactionSubsystem>();
		check(IsValid(Subsystem));
		
		Attitude = Subsystem->GetAttitude(Source, Target);
		return true;
		
	}

	return false;
}

UNinjaFactionComponent* UNinjaFactionFunctionLibrary::GetFactionComponent_Internal(const AActor* PawnOrController)
{
	if (!IsValid(PawnOrController))
	{
		return nullptr;
	}
	
	// Fast path. Retrieve the component using the interface.
	if (PawnOrController->Implements<UFactionMemberInterface>())
	{
		return IFactionMemberInterface::Execute_GetFactionComponent(PawnOrController);
	}

	// May take a bit longer, but we can also go through the Find Component Route.
	UNinjaFactionComponent* FactionComponent = PawnOrController->FindComponentByClass<UNinjaFactionComponent>();
	if (IsValid(FactionComponent))
	{
		return FactionComponent;
	}

	return nullptr;
}
