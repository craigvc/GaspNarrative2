// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatActorPoolComponent.h"

#include "NinjaCombatLog.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatPoolableActorInterface.h"
#include "Net/UnrealNetwork.h"

UNinjaCombatActorPoolComponent::UNinjaCombatActorPoolComponent()
	: Pool(this)
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
	SetIsReplicatedByDefault(true);
	
	CollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
}

void UNinjaCombatActorPoolComponent::InitializeComponent()
{
	Super::InitializeComponent();
	Pool.SetPoolManager(this);
}

void UNinjaCombatActorPoolComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, Pool);
}

void UNinjaCombatActorPoolComponent::BeginPlay()
{
	Super::BeginPlay();
	InitializePool();
}

void UNinjaCombatActorPoolComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Pool.Empty();
	Super::EndPlay(EndPlayReason);
}

void UNinjaCombatActorPoolComponent::InitializePool()
{
	for (const FCombatPoolableActorInfo& Info : PoolableActors)
	{
		Pool.SetActorPoolSize(Info.PoolableActorClass, Info.PoolSize);
	}

	Pool.Initialize();
}

AActor* UNinjaCombatActorPoolComponent::GetActorFromPool(const TSubclassOf<AActor>& ActorClass, const bool bActivate)
{
	AActor* Actor = Pool.GetActor(ActorClass);
	if (IsValid(Actor))
	{
		COMBAT_LOG_ARGS(Verbose, "Providing actor %s for class %s.", *GetNameSafe(Actor), *GetNameSafe(ActorClass));

		if (bActivate)
		{
			ICombatPoolableActorInterface::Execute_Activate(Actor);
		}
		else
		{
			ICombatPoolableActorInterface::Execute_Reserve(Actor);
		}
	}
	else
	{
		COMBAT_LOG_ARGS(Warning, "No actor instance available for class %s.", *GetNameSafe(ActorClass));
	}

	return Actor;
}

AActor* UNinjaCombatActorPoolComponent::SpawnActor(const TSubclassOf<AActor>& ActorClass, const FGuid& PoolableActorId)
{
	if (!IsValid(ActorClass) || !ActorClass->ImplementsInterface(UCombatPoolableActorInterface::StaticClass()))
	{
		COMBAT_LOG_ARGS(Warning, "Provided actor class (%s) is null or does not implement CombatPoolableActorInterface.", *GetNameSafe(ActorClass));
		return nullptr;
	}

	if (!PoolableActorId.IsValid())
	{
		COMBAT_LOG(Warning, "Invalid Poolable Actor ID.");
		return nullptr;
	}

	const AActor* DefaultActor = GetDefault<AActor>(ActorClass);
	if (DefaultActor->bOnlyRelevantToOwner && !OwnerIsLocallyControlled())
	{
		return nullptr;
	}
	
	FActorSpawnParameters SpawnParameters = BuildSpawnParameters(ActorClass, PoolableActorId);
	SpawnParameters.bDeferConstruction = true;
	
	AActor* NewActor = GetWorld()->SpawnActor<AActor>(ActorClass, SpawnParameters);
	if (IsValid(NewActor))
	{
		NewActor->bNetStartup = true;
		NewActor->bNetLoadOnClient = true;
		NewActor->SetNetAddressable();

		ICombatPoolableActorInterface::Execute_InitializedByPool(NewActor, this);
		InitializeActor(NewActor);
		
		const FTransform InitialTransform = BuildInitialTransform(NewActor);
		NewActor->FinishSpawning(InitialTransform);
		
		COMBAT_LOG_ARGS(Verbose, "Spawned actor %s from class %s.", *GetNameSafe(NewActor), *GetNameSafe(ActorClass));
	}	
	
	return NewActor;
}

FActorSpawnParameters UNinjaCombatActorPoolComponent::BuildSpawnParameters(const TSubclassOf<AActor>& ActorClass, const FGuid& PoolableActorId) const
{
	AActor* Owner = GetOwner();
	const FString NewName = BuildActorName(ActorClass, PoolableActorId);
	
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.bDeferConstruction = true;
	SpawnParameters.Name = FName(NewName);
	SpawnParameters.Owner = Owner;
	SpawnParameters.Instigator = GetInstigator();
	SpawnParameters.SpawnCollisionHandlingOverride = CollisionHandlingMethod;

	return SpawnParameters;
}

FString UNinjaCombatActorPoolComponent::BuildActorName(const TSubclassOf<AActor>& ActorClass, const FGuid& PoolableActorId) const
{
	return FString::Printf(TEXT("%ls_%ls"), *ActorClass->GetDefaultObjectName().ToString(), *PoolableActorId.ToString());
}

FTransform UNinjaCombatActorPoolComponent::BuildInitialTransform(const AActor* NewActor)
{
	return FTransform::Identity;
}

APawn* UNinjaCombatActorPoolComponent::GetInstigator() const
{
	return Cast<APawn>(GetOwner());	
}

void UNinjaCombatActorPoolComponent::InitializeActor(AActor* NewActor)
{
	check(IsValid(NewActor));
	NewActor->SetActorEnableCollision(false);
	NewActor->SetActorHiddenInGame(true);
	NewActor->SetActorTickEnabled(false);
}

bool UNinjaCombatActorPoolComponent::OwnerIsLocallyControlled() const
{
	const APawn* PawnOwner = Cast<APawn>(GetOwner());
	return PawnOwner && PawnOwner->IsLocallyControlled();
}
