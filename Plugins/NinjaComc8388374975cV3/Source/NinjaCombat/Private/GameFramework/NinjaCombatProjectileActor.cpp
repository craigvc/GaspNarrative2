// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatProjectileActor.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatSettings.h"
#include "Components/AudioComponent.h"
#include "Components/MeshComponent.h"
#include "Components/NinjaCombatWeaponCosmeticsComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/AssetManager.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Sound/SoundBase.h"
#include "TargetingSystem/TargetingPreset.h"
#include "TargetingSystem/TargetingSubsystem.h"

ANinjaCombatProjectileActor::ANinjaCombatProjectileActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	bReplicates = true;
	bEnableDebug = false;
	bUsesTargetingSystem = false;
	bExecuteAsync = true;
	bOverridesProjectileDamage = false;
	bOverridesPoisonConsumption = false;
	TargetIndex = 0;
	BounceCount = 0;
	MaxBounces = 5;
	ImpactStrength = 1000000.f;
	ProjectileDamage = 0.f;
	PoiseConsumption = 0.f;
	TraceChannel = GetDefault<UNinjaCombatSettings>()->ProjectileChannel;
	TargetingPreset = nullptr;
	AimingMode = EProjectileAimingMode::Forward;
	SetReplicatingMovement(true);

#if ENGINE_MINOR_VERSION < 5
	MinNetUpdateFrequency = 33.f;
	NetUpdateFrequency = 66.f;
#else
	SetMinNetUpdateFrequency(33.f);
	SetNetUpdateFrequency(66.f);
#endif
	
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetSphereRadius(25.f);
	SphereComponent->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	SphereComponent->SetCanEverAffectNavigation(false);
	SetRootComponent(SphereComponent);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->bShouldBounce = true;
	ProjectileMovement->bInterpMovement = true;
	ProjectileMovement->bInterpRotation = true;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->Friction = 0.f;
	ProjectileMovement->BounceVelocityStopSimulatingThreshold = 500.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
	ProjectileMovement->Bounciness = 1.f;
	ProjectileMovement->HomingAccelerationMagnitude = 100000.f;
	ProjectileMovement->SetIsReplicated(true);

	MeleeImpactHitAudio = CreateDefaultSubobject<UAudioComponent>("MeleeImpactHitAudio");
	MeleeImpactHitAudio->SetAutoActivate(false);
	MeleeImpactHitAudio->SetupAttachment(GetRootComponent());

	ImpactCosmetics = CreateDefaultSubobject<UNinjaCombatCosmeticsComponent>("ImpactCosmetics");	
}

void ANinjaCombatProjectileActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, LaunchVelocity);
}

FRotator ANinjaCombatProjectileActor::GetInitialRotation_Implementation() const
{
	return GetActorRotation();
}

void ANinjaCombatProjectileActor::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(ProjectileMovement))
	{
		// Bind the delegates to the internal Handlers, so we can always ensure internal state is correct.
		ProjectileMovement->OnProjectileStop.AddUniqueDynamic(this, &ThisClass::OnProjectileStop);
		ProjectileMovement->OnProjectileBounce.AddUniqueDynamic(this, &ThisClass::OnProjectileBounce);
	}

	if (IsValid(MeleeImpactHitAudio))
	{
		MeleeImpactHitAudio->OnAudioFinished.AddUniqueDynamic(this, &ThisClass::OnImpactHitAudioFinished);
	}
}

void ANinjaCombatProjectileActor::Launch_Implementation()
{
	Execute_PrepareLaunch(this);

	if (AimingMode == EProjectileAimingMode::TargetingSystem && TargetingPreset)
	{
		// If we are aiming and have a targeting preset, then we need to execute the
		// targeting first. This will provide the actor that we will aim at.
		//
		ExecuteTargeting();
	}
	else if (AimingMode == EProjectileAimingMode::Location)
	{
		LaunchToLocation(GetInitialLocation());
	}
	else
	{
		LaunchForward();
	}
}

void ANinjaCombatProjectileActor::LaunchForward_Implementation()
{
	if (BounceCount == 0)
	{
		const FRotator InitialRotation = GetInitialRotation();
		const FVector RotationVector = UKismetMathLibrary::GetForwardVector(InitialRotation);
		const float Speed = Execute_GetSpeed(this);

		LaunchVelocity = Speed * RotationVector;
		OnRep_LaunchVelocity();
	}
}

void ANinjaCombatProjectileActor::LaunchToTarget_Implementation(const AActor* Target)
{
	checkf(IsValid(Target), TEXT("LaunchToTarget called without a target."));
	const FVector Location = Target->GetActorLocation();
	LaunchToLocation(Location);
}

void ANinjaCombatProjectileActor::LaunchToLocation_Implementation(const FVector Location)
{
	ProjectileMovement->StopMovementImmediately();
	
	const FRotator Direction = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Location);
	SetActorRotation(Direction);

	const float Speed = Execute_GetSpeed(this);
	LaunchVelocity = Speed * UKismetMathLibrary::GetForwardVector(GetActorRotation());
	OnRep_LaunchVelocity();	
}

float ANinjaCombatProjectileActor::GetSpeed_Implementation() const
{
	return (MaxBounces > 0 && BounceCount > 0) ? LastBounceVelocity.Size() : ProjectileMovement->InitialSpeed;
}

void ANinjaCombatProjectileActor::ExecuteTargeting()
{
	check(IsValid(TargetingPreset));
	
	UTargetingSubsystem* TargetingSubsystem = UTargetingSubsystem::Get(GetWorld());
	check(IsValid(TargetingSubsystem));
	
	FTargetingSourceContext SourceContext;
	SourceContext.SourceActor = this;
	SourceContext.SourceLocation = GetActorLocation();
	SourceContext.InstigatorActor = GetInstigator();

	const FTargetingRequestDelegate Delegate = FTargetingRequestDelegate::CreateWeakLambda(this, [this](const FTargetingRequestHandle& Handle){ HandleTargetReceived(Handle); });
	const FTargetingRequestHandle TargetingHandle = UTargetingSubsystem::MakeTargetRequestHandle(TargetingPreset, SourceContext);
	
	if (bExecuteAsync)
	{
		FTargetingAsyncTaskData& AsyncTaskData = FTargetingAsyncTaskData::FindOrAdd(TargetingHandle);
		AsyncTaskData.bReleaseOnCompletion = true;
		TargetingSubsystem->StartAsyncTargetingRequestWithHandle(TargetingHandle, Delegate);
	}
	else
	{
		FTargetingImmediateTaskData& ImmediateTaskData = FTargetingImmediateTaskData::FindOrAdd(TargetingHandle);
		ImmediateTaskData.bReleaseOnCompletion = true;
		TargetingSubsystem->ExecuteTargetingRequestWithHandle(TargetingHandle, Delegate);
	}	
}

void ANinjaCombatProjectileActor::HandleTargetReceived(const FTargetingRequestHandle& TargetingHandle)
{
	TArray<AActor*> TargetedActors;
	
	const UTargetingSubsystem* TargetingSubsystem = UTargetingSubsystem::Get(GetWorld());
	check(IsValid(TargetingSubsystem));

	TargetingSubsystem->GetTargetingResultsActors(TargetingHandle, TargetedActors);
	if (TargetedActors.IsEmpty())
	{
		CurrentTarget = nullptr;
		LaunchForward();
		return;
	}

	CurrentTarget = TargetedActors[0];
	LaunchToTarget(CurrentTarget);
}

void ANinjaCombatProjectileActor::HandleActorHit_Implementation(const FHitResult& ImpactResult)
{
	if (!HasAuthority() || !ImpactResult.HasValidHitObjectHandle() || !ImpactEffectHandle.IsValid())
	{
		return;
	}
	
	FGameplayAbilityTargetingLocationInfo TargetInfo;
	TargetInfo.LocationType = EGameplayAbilityTargetingLocationType::ActorTransform;
	TargetInfo.SourceActor = this;

	const FGameplayAbilityTargetDataHandle TargetData = TargetInfo.MakeTargetDataHandleFromHitResult(nullptr, ImpactResult);
	ApplyGameplayEffectToData(TargetData);
}

void ANinjaCombatProjectileActor::ApplyGameplayEffectToData(const FGameplayAbilityTargetDataHandle& TargetData)
{
	// Apply Data is a proxy that can be overriden for a specific cast actor.
	//
	// But by default, we want to apply a detached GE Spec to a target. This means we won't rely
	// on the owner's ASC since the owner might not be available anymore.
	//
	const FGameplayTagContainer DynamicTags = GetDynamicGameplayTags();
	const TMap<FGameplayTag, float>& SetByCallerMagnitudes = GetAdditionalSetByCallerMagnitudes();
	UNinjaCombatFunctionLibrary::ApplyDetachedGameplayEffectSpecToTarget(ImpactEffectHandle, TargetData, this, DynamicTags, SetByCallerMagnitudes);	
}

FGameplayTagContainer ANinjaCombatProjectileActor::GetDynamicGameplayTags_Implementation() const
{
	return FGameplayTagContainer::EmptyContainer;
}

TMap<FGameplayTag, float> ANinjaCombatProjectileActor::GetAdditionalSetByCallerMagnitudes_Implementation() const
{
	return TMap<FGameplayTag, float>();
}

void ANinjaCombatProjectileActor::SetupIgnoredActors_Implementation()
{
	TArray<AActor*> AttachedActors;
	GetInstigator()->GetAttachedActors(AttachedActors);
	GetInstigator()->MoveIgnoreActorAdd(this);

	SphereComponent->MoveIgnoreActors.Append(AttachedActors);
	SphereComponent->MoveIgnoreActors.Add(GetInstigator());

	const TInlineComponentArray<UPrimitiveComponent*> SceneComponents(GetInstigator());
	SphereComponent->MoveIgnoreComponents.Append(SceneComponents);
}

// ReSharper disable once CppMemberFunctionMayBeConst
void ANinjaCombatProjectileActor::OnImpactHitAudioFinished()
{
	MeleeImpactHitAudio->SetUsingAbsoluteLocation(true);
	MeleeImpactHitAudio->SetWorldLocation(GetRootComponent()->GetComponentLocation());
}

void ANinjaCombatProjectileActor::ActivateNiagaraComponents()
{
	if (!UKismetSystemLibrary::IsDedicatedServer(GetWorld()))
	{
		TInlineComponentArray<UNiagaraComponent*> NiagaraComponents(this);
		for (UNiagaraComponent* NiagaraComponent : NiagaraComponents)
		{
			NiagaraComponent->Activate();
		}	
	}
}

void ANinjaCombatProjectileActor::DeactivateNiagaraComponents()
{
	if (!UKismetSystemLibrary::IsDedicatedServer(GetWorld()))
	{
		TInlineComponentArray<UNiagaraComponent*> NiagaraComponents(this);
		for (UNiagaraComponent* NiagaraComponent : NiagaraComponents)
		{
			NiagaraComponent->Deactivate();
		}	
	}
}

void ANinjaCombatProjectileActor::OnRep_LaunchVelocity()
{
	ProjectileMovement->Velocity = LaunchVelocity;
}

void ANinjaCombatProjectileActor::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity)
{
	BounceCount++;
	LastBounceVelocity = ImpactVelocity;

	if (ImpactResult.HasValidHitObjectHandle())
	{
		HandleActorHit(ImpactResult);
	}
	
	if (BounceCount == MaxBounces)
	{
		// We can't hit anything else.
		HandleProjectileExhausted();
	}
	else if (bUsesTargetingSystem)
	{
		// Find a new target to launch towards.
		ExecuteTargeting();
	}
	else
	{
		// Keep bouncing aimlessly.
		LaunchForward();
	}
}

void ANinjaCombatProjectileActor::OnProjectileStop(const FHitResult& ImpactResult)
{
	if (ImpactResult.HasValidHitObjectHandle())
	{
		HandleActorHit(ImpactResult);
		HandleProjectileExhausted();
	}
}

void ANinjaCombatProjectileActor::AdjustHitResult_Implementation(const FHitResult& ImpactResult, FHitResult& AdjustedResult)
{
	if (ImpactResult.IsValidBlockingHit() && ImpactResult.GetComponent()->IsA(UMeshComponent::StaticClass()))
	{
		// This impact already contains a valid Mesh Component. Use it as-is.
		AdjustedResult = ImpactResult;
		DrawNewTarget(ImpactResult, FColor::Cyan);
		return;
	}

	const AActor* Target = ImpactResult.GetActor();

	FCollisionQueryParams TraceParams = FCollisionQueryParams(SCENE_QUERY_STAT(AdjustProjectileHit));
	TraceParams.TraceTag = TEXT("ProjectileHitTrace");
	TraceParams.bReturnPhysicalMaterial = true;
	TraceParams.bTraceComplex = true;
	TraceParams.AddIgnoredActor(this);
	TraceParams.AddIgnoredActor(GetInstigator());
	TraceParams.AddIgnoredComponent(ImpactResult.GetComponent());
	
	const FVector Start = ImpactResult.TraceStart;
	const FRotator Direction = UKismetMathLibrary::FindLookAtRotation(Start, Target->GetActorLocation());
	const FVector End = Start + UKismetMathLibrary::GetForwardVector(Direction) * 500.f;

	FHitResult Hit;
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, TraceChannel, TraceParams))
	{
		AdjustedResult = Hit;
		DrawNewTarget(Hit, FColor::Green);
	}
	else
	{
		AdjustedResult = ImpactResult;
		DrawNewTarget(Hit, FColor::Yellow);
	}

	DrawScanLine(Hit);
}

void ANinjaCombatProjectileActor::HandleProjectileExhausted_Implementation()
{
	Execute_HandleDestructionCosmetics(this);
	Execute_Deactivate(this);
}

void ANinjaCombatProjectileActor::HandleImpactCosmetics_Implementation(const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	if (HitResult.HasValidHitObjectHandle())
	{
		FCombatImpactCosmetics CosmeticsParameters;
		CosmeticsParameters.Source = this;
		CosmeticsParameters.HitResult = HitResult;
		CosmeticsParameters.SourceTags = SourceTags;
		CosmeticsParameters.TargetTags = TargetTags;
		CosmeticsParameters.ImpactParticles = SelectHitImpactParticles(HitResult, SourceTags, TargetTags);
		CosmeticsParameters.Sound = SelectHitImpactSound(HitResult, SourceTags, TargetTags);;
		CosmeticsParameters.NiagaraComponent = nullptr;
		CosmeticsParameters.CameraShake = nullptr;
		CosmeticsParameters.AudioComponent = MeleeImpactHitAudio;
		ImpactCosmetics->HandleImpactDamageCosmetics(CosmeticsParameters);
	}
}

TSoftObjectPtr<UNiagaraSystem> ANinjaCombatProjectileActor::SelectHitImpactParticles_Implementation(
	const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	return ImpactFX;
}

TSoftObjectPtr<USoundBase> ANinjaCombatProjectileActor::SelectHitImpactSound_Implementation(const FHitResult& HitResult,
	const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	return ImpactSound;	
}

void ANinjaCombatProjectileActor::HandleDestructionCosmetics_Implementation() const
{
	TArray<FSoftObjectPath> EffectPaths;
	
	if (DestructionFX.Get() == nullptr && !DestructionFX.IsNull())
	{
		EffectPaths.Emplace(DestructionFX.ToSoftObjectPath());
	}

	if (EffectPaths.IsEmpty())
	{
		PlayNiagaraSystem(GetWorld(), DestructionFX.Get(), GetActorLocation(), GetActorRotation());
	}
	else
	{
		UAssetManager::GetStreamableManager().RequestAsyncLoad(EffectPaths, [this]()
			{ PlayNiagaraSystem(GetWorld(), DestructionFX.Get(), GetActorLocation(), GetActorRotation()); });
	}
}

void ANinjaCombatProjectileActor::SetInitialLocation(const FVector NewInitialLocation)
{
	InitialLocation = NewInitialLocation;
}

void ANinjaCombatProjectileActor::OnActivation_Implementation()
{
	Super::OnActivation_Implementation();

	bHasExhausted = false;
	TargetIndex = 0;
	BounceCount = 0;
	LastBounceVelocity = FVector::ZeroVector;
	CurrentTarget = nullptr;
	ActorsHit.Empty();

	ProjectileMovement->SetUpdatedComponent(GetRootComponent());
	ProjectileMovement->Activate(true);
	ProjectileMovement->Velocity = LaunchVelocity;	
}

void ANinjaCombatProjectileActor::OnDeactivation_Implementation()
{
	Super::OnDeactivation_Implementation();

	SphereComponent->MoveIgnoreActors.Empty();
	
	ProjectileMovement->StopMovementImmediately();
	ProjectileMovement->Deactivate();

	GetInstigator()->MoveIgnoreActorRemove(this);
	DeactivateNiagaraComponents();
}

TSubclassOf<UGameplayEffect> ANinjaCombatProjectileActor::GetImpactEffectClass_Implementation() const
{
	return ImpactEffectClass;
}

void ANinjaCombatProjectileActor::SetImpactEffectHandle_Implementation(FGameplayEffectSpecHandle& Handle)
{
	ImpactEffectHandle = Handle;
}

void ANinjaCombatProjectileActor::PrepareLaunch_Implementation()
{
	SetupIgnoredActors();
	ActivateNiagaraComponents();
}

TArray<AActor*> ANinjaCombatProjectileActor::GetActorsHit_Implementation() const
{
	TArray<AActor*> Result;
	Result.Reserve(ActorsHit.Num());
	
	for (const TWeakObjectPtr<AActor>& ActorPtr : ActorsHit)
	{
		if (ActorPtr.IsValid() && ActorPtr->IsValidLowLevelFast())
		{
			Result.Add(ActorPtr.Get());
		}
	}

	return Result;
}

bool ANinjaCombatProjectileActor::GetDamage_Implementation(float& OutDamage) const
{
	OutDamage = ProjectileDamage;
	return bOverridesProjectileDamage;
}

bool ANinjaCombatProjectileActor::GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const
{
	OutPoiseConsumption = PoiseConsumption;
	return bOverridesPoisonConsumption;
}

float ANinjaCombatProjectileActor::GetProjectileImpactStrength_Implementation() const
{
	return ImpactStrength;
}

void ANinjaCombatProjectileActor::PlayNiagaraSystem(const UWorld* World, UNiagaraSystem* System,
	const FVector& Location, const FRotator& Rotation)
{
	if (IsValid(World) && !World->bIsTearingDown && IsValid(System))
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(World, System, Location, Rotation, FVector::One(),
			true, true, ENCPoolMethod::AutoRelease, true);		
	}
}

void ANinjaCombatProjectileActor::PlaySound(const UWorld* World, USoundBase* Sound,
	const FVector& Location, const FRotator& Rotation)
{
	if (IsValid(World) && !World->bIsTearingDown && IsValid(Sound))
	{
		UGameplayStatics::PlaySoundAtLocation(World, Sound, Location, Rotation);
	}
}

void ANinjaCombatProjectileActor::PrintMessage(const FString& Message) const
{
#if WITH_EDITOR
	if (bEnableDebug && IsValid(GEngine))
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, 3.f, FColor::Emerald, Message);
	}
#endif	
}

void ANinjaCombatProjectileActor::DrawScanLine(const FHitResult& NewHit) const
{
#if WITH_EDITOR
	if (bEnableDebug)
	{
		const FColor Color = NewHit.IsValidBlockingHit() ? FColor::Green : FColor::Red; 
		::DrawDebugLine(GetWorld(), NewHit.TraceStart, NewHit.TraceEnd, Color, false, 2.f);
	}
#endif
}

void ANinjaCombatProjectileActor::DrawNewTarget(const FHitResult& NewHit, const FColor& Color) const
{
#if WITH_EDITOR
	if (bEnableDebug)
	{
		const FVector StartPosition = NewHit.Location;
		DrawDebugSphere(GetWorld(), StartPosition, 24.f, 12.f, Color, false, 2.f);
	}
#endif	
}
