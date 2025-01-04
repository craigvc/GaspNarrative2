// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatCastRequest.h"

#include "NinjaCombatActorPoolFunctionLibrary.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatCastInterface.h"

UNinjaCombatCastRequest::UNinjaCombatCastRequest()
{
}

UNinjaCombatCastRequest* UNinjaCombatCastRequest::NewInstance(const TSubclassOf<UNinjaCombatCastRequest> RequestClass,
	const UObject* Source, AActor* Owner, AActor* Instigator, const TSubclassOf<AActor> CastClass)
{
	UNinjaCombatCastRequest* Request = NewObject<UNinjaCombatCastRequest>(Owner, RequestClass);
	Request->RequestSource = Source;
	Request->RequestOwner = Owner;
	Request->Instigator = Cast<APawn>(Instigator);
	Request->CastClass = CastClass;

	Request->CastTransform.SetLocation(Owner->GetActorLocation());
	Request->CastTransform.SetRotation(FQuat::MakeFromRotator(Owner->GetActorRotation()));
	
	return Request;
}

const UObject* UNinjaCombatCastRequest::GetRequestSource() const
{
	return RequestSource;
}

AActor* UNinjaCombatCastRequest::GetRequestOwner() const
{
	return RequestOwner;
}

APawn* UNinjaCombatCastRequest::GetInstigator() const
{
	return Instigator;
}

FVector UNinjaCombatCastRequest::GetSourceLocation() const
{
	return RequestOwner->GetActorLocation();
}

FTransform UNinjaCombatCastRequest::GetCastTransform() const
{
	return CastTransform;
}

void UNinjaCombatCastRequest::SetInstigator(APawn* NewInstigator)
{
	Instigator = NewInstigator;
}

void UNinjaCombatCastRequest::SetCastTransform(const FTransform NewCastTransform)
{
	CastTransform = NewCastTransform;
}

void UNinjaCombatCastRequest::ReinforceCastClass(const TSubclassOf<AActor> NewCastClass)
{
	if (!IsValid(CastClass) && IsValid(NewCastClass) && NewCastClass->ImplementsInterface(UCombatCastInterface::StaticClass()))
	{
		CastClass = NewCastClass;
	}	
}

AActor* UNinjaCombatCastRequest::SpawnCastActor(const bool bAutoActivate) const
{
	checkf(IsValid(CastClass), TEXT("Invalid cast class provided to the request."));
	checkf(CastClass->ImplementsInterface(UCombatCastInterface::StaticClass()), TEXT("Cast class must implement the cast interface."));

	AActor* CastActor = UNinjaCombatActorPoolFunctionLibrary::TryGetActorFromPool(RequestOwner, CastClass, bAutoActivate);
	if (IsValid(CastActor))
	{
		CastActor->SetActorTransform(GetCastTransform());
	}
	else
	{
		UWorld* World = RequestOwner->GetWorld();
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Instigator = Instigator;
		SpawnParameters.Owner = RequestOwner;
		SpawnParameters.bDeferConstruction = !bAutoActivate;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		CastActor = World->SpawnActor<AActor>(CastClass, GetCastTransform(), SpawnParameters);
	}

	if (IsValid(CastActor))
	{
		ModifyCastActor(CastActor);
	}
	
	return CastActor;
}

void UNinjaCombatCastRequest::ModifyCastActor_Implementation(AActor* CastActor) const
{
}
