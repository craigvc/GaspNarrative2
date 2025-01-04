// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatProjectileRequest.h"

#include "NinjaCombatActorPoolFunctionLibrary.h"
#include "Components/MeshComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatProjectileInterface.h"
#include "Kismet/KismetMathLibrary.h"

DEFINE_LOG_CATEGORY(LogNinjaCombatProjectileRequest);

UNinjaCombatProjectileRequest::UNinjaCombatProjectileRequest()
{
	bHasTargetLocation = false;
	TargetLocation = FVector::ZeroVector;
	SocketName = TEXT("sProjectile");
}

UNinjaCombatProjectileRequest* UNinjaCombatProjectileRequest::NewInstance(const TSubclassOf<UNinjaCombatProjectileRequest> RequestClass,
	const UObject* Source, AActor* Owner, AActor* Instigator, UMeshComponent* SourceMesh, const FName SocketName, const TSubclassOf<AActor> ProjectileClass)
{
	UNinjaCombatProjectileRequest* Request = NewObject<UNinjaCombatProjectileRequest>(Owner, RequestClass);
	Request->RequestSource = Source;
	Request->RequestOwner = Owner;
	Request->Instigator = Cast<APawn>(Instigator);
	Request->SourceMesh = SourceMesh;
	Request->SocketName = SocketName;
	Request->ProjectileClass = ProjectileClass;
	return Request;
}

const UObject* UNinjaCombatProjectileRequest::GetRequestSource() const
{
	return RequestSource;
}

FVector UNinjaCombatProjectileRequest::GetSourceLocation() const
{
	if (IsValid(SourceMesh) && SourceMesh->DoesSocketExist(SocketName))
	{
		return SourceMesh->GetSocketLocation(SocketName);
	}
	
	return RequestOwner->GetActorLocation();
}

FRotator UNinjaCombatProjectileRequest::GetSourceRotation() const
{
	if (bHasTargetLocation)
	{
		const FVector SourceLocation = GetSourceLocation();
		return UKismetMathLibrary::FindLookAtRotation(SourceLocation, TargetLocation);	
	}
	
	return RequestOwner->GetActorRotation();
}

void UNinjaCombatProjectileRequest::SetInstigator(APawn* NewInstigator)
{
	Instigator = NewInstigator;
}

void UNinjaCombatProjectileRequest::SetTargetLocation(const FVector& NewTargetLocation)
{
	bHasTargetLocation = true;
	TargetLocation = NewTargetLocation;
}

void UNinjaCombatProjectileRequest::ReinforceProjectileClass(const TSubclassOf<AActor> NewProjectileClass)
{
	if (!IsValid(ProjectileClass) && IsValid(NewProjectileClass) && NewProjectileClass->ImplementsInterface(UCombatProjectileInterface::StaticClass()))
	{
		ProjectileClass = NewProjectileClass;
	}
}

AActor* UNinjaCombatProjectileRequest::SpawnProjectileActor() const
{
	checkf(IsValid(ProjectileClass), TEXT("Invalid projectile class provided to the request."));
	checkf(ProjectileClass->ImplementsInterface(UCombatProjectileInterface::StaticClass()), TEXT("Projectile class must implement the projectile interface."));

	FTransform ProjectileTransform;
	ProjectileTransform.SetLocation(GetSourceLocation());
	ProjectileTransform.SetRotation(FQuat::MakeFromRotator(GetSourceRotation()));

	AActor* Projectile = UNinjaCombatActorPoolFunctionLibrary::TryGetActorFromPool(RequestOwner, ProjectileClass);
	if (IsValid(Projectile))
	{
		Projectile->SetActorTransform(ProjectileTransform);
	}
	else
	{
		UWorld* World = RequestOwner->GetWorld();

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Instigator = Instigator;
		SpawnParameters.Owner = RequestOwner;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		Projectile = World->SpawnActor<AActor>(ProjectileClass, ProjectileTransform, SpawnParameters);
	}

	if (IsValid(Projectile))
	{
		ModifyProjectileActor(Projectile);
	}
	
	return Projectile;
}

void UNinjaCombatProjectileRequest::ModifyProjectileActor_Implementation(AActor* ProjectileActor) const
{
}

bool UNinjaCombatProjectileRequest::HasValidRequestData() const
{
	if (RequestOwner == nullptr)
	{
		UE_LOG(LogNinjaCombatProjectileRequest, Warning, TEXT("Projectile Request requires a valid Owner."));
		return false;
	}

	if (Instigator == nullptr)
	{
		UE_LOG(LogNinjaCombatProjectileRequest, Warning, TEXT("Projectile Request requires a valid Instigator."));
		return false;
	}
	
	if (SourceMesh == nullptr || !SourceMesh->DoesSocketExist(SocketName))
	{
		UE_LOG(LogNinjaCombatProjectileRequest, Warning, TEXT("Projectile Request requires a valid Mesh Component with the provided socket."));
		return false;
	}

	if (ProjectileClass == nullptr)
	{
		UE_LOG(LogNinjaCombatProjectileRequest, Warning, TEXT("Projectile Request requires a valid Projectile Class."));
		return false;
	}
	
	return true;
}

AActor* UNinjaCombatProjectileRequest::GetRequestOwner() const
{
	return RequestOwner;
}

APawn* UNinjaCombatProjectileRequest::GetInstigator() const
{
	return Instigator;
}

FName UNinjaCombatProjectileRequest::GetSocketName() const
{
	return SocketName;
}
