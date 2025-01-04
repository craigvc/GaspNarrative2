// Ninja Bear Studio Inc., all rights reserved.
#include "Components/NinjaCombatWeaponCosmeticsComponent.h"

#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraSystem.h"
#include "NinjaCombatTags.h"
#include "Camera/CameraShakeBase.h"
#include "Components/AudioComponent.h"
#include "Components/MeshComponent.h"
#include "Engine/AssetManager.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Interfaces/CombatMeleeInterface.h"
#include "Interfaces/CombatTargetCosmeticsModifierInterface.h"
#include "Sound/SoundBase.h"

UNinjaCombatCosmeticsComponent::UNinjaCombatCosmeticsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UNinjaCombatCosmeticsComponent::TickComponent(const float DeltaTime, const ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	UpdateMeleeScanTrails();
}

void UNinjaCombatCosmeticsComponent::StartMeleeScanCosmetics(const FCombatMeleeTrailsCosmetics& Parameters)
{
	if (!Parameters.NiagaraComponents.IsEmpty())
	{
		static constexpr bool bImmediately = true;
		StopMeleeScanCosmetics(bImmediately);
		
		MeleeTrailComponents = Parameters.NiagaraComponents;
		TrailSocketPrefix = Parameters.TrailSocketPrefix;
		TrailBeginParameterName = Parameters.TrailBeginParameterName;
		TrailEndParameterName = Parameters.TrailEndParameterName;
		ScanSourceMesh = FindScanSourceMesh(Parameters.Source);
		
		SetComponentTickEnabled(true);
	}

	if (IsValid(Parameters.AudioComponent))
	{
		Parameters.AudioComponent->Play();
	}
}

void UNinjaCombatCosmeticsComponent::StopMeleeScanCosmetics(const bool bImmediately)
{
	for (UNiagaraComponent* Component : MeleeTrailComponents)
	{
		if (bImmediately)
		{
			Component->DeactivateImmediate();
		}
		else
		{
			Component->Deactivate();
		}
	}

	MeleeTrailComponents.Empty();
	SetComponentTickEnabled(false);
}

void UNinjaCombatCosmeticsComponent::HandleImpactDamageCosmetics(const FCombatImpactCosmetics& Parameters)
{
	TArray<FSoftObjectPath> Cosmetics;

	if (Parameters.Sound.IsPending())
	{
		Cosmetics.Emplace(Parameters.Sound.ToSoftObjectPath());
	}

	if (Parameters.ImpactParticles.IsPending())
	{
		Cosmetics.Emplace(Parameters.ImpactParticles.ToSoftObjectPath());
	}

	if (Parameters.CameraShake.IsPending())
	{
		Cosmetics.Emplace(Parameters.CameraShake.ToSoftObjectPath());
	}
	
	if (Cosmetics.IsEmpty())
	{
		HandleImpactSound(Parameters.Sound.Get(), Parameters);
		HandleImpactParticles(Parameters.ImpactParticles.Get(), Parameters);
		HandleImpactCameraShake(Parameters.CameraShake.Get(), Parameters);
	}
	else
	{
		UAssetManager::GetStreamableManager().RequestAsyncLoad(Cosmetics, [this, Parameters]()
		{
			HandleImpactSound(Parameters.Sound.Get(), Parameters);
			HandleImpactParticles(Parameters.ImpactParticles.Get(), Parameters);
			HandleImpactCameraShake(Parameters.CameraShake.Get(), Parameters);
		});
	}
}

UMeshComponent* UNinjaCombatCosmeticsComponent::FindScanSourceMesh(const AActor* Source) const
{
	UMeshComponent* MeshComponent = nullptr;
	
	// First use the interface as may provide fast access to the component.
	if (Source->Implements<UCombatMeleeInterface>())
	{
		MeshComponent = ICombatMeleeInterface::Execute_GetMeleeMesh(Source);	
	}

	// As a fallback, try to find the component tagged with the melee scan source tag.
	if (MeshComponent == nullptr)
	{
		const FName Tag = Tag_Combat_Component_MeleeScanSource.GetTag().GetTagName();
		MeshComponent = Source->FindComponentByTag<UMeshComponent>(Tag);	
	}

	return MeshComponent;
}

void UNinjaCombatCosmeticsComponent::UpdateMeleeScanTrails_Implementation()
{
	if (!IsValid(ScanSourceMesh) || MeleeTrailComponents.IsEmpty())
	{
		return;
	}

	const TArray<FName>& Sockets = ScanSourceMesh->GetAllSocketNames().FilterByPredicate([this](const FName& SocketName)
	{
		const FString SocketString = SocketName.ToString();
		return SocketString.StartsWith(TrailSocketPrefix.ToString());
	});

	// We need at least 2 sockets to create a melee trail.
	if (Sockets.Num() < 2)
	{
		return;
	}

	const FName StartSocket = Sockets[0];
	const FName EndSocket = Sockets[Sockets.Num()- 1];

	const FVector BeginLocation = ScanSourceMesh->GetSocketLocation(StartSocket);
	const FVector EndLocation = ScanSourceMesh->GetSocketLocation(EndSocket);

	for (UNiagaraComponent* TrailComponent : MeleeTrailComponents)
	{
		TrailComponent->SetVectorParameter(TrailBeginParameterName, BeginLocation);
		TrailComponent->SetVectorParameter(TrailEndParameterName, EndLocation);

		// Only activate the system after setting the parameters!
		// Also make sure that the system is always activated as if it was jus attached.
		if (!TrailComponent->IsActive())
		{
			static constexpr bool bJustAttached = true;
			TrailComponent->ActivateSystem(bJustAttached);
		}				
	}
}

void UNinjaCombatCosmeticsComponent::HandleImpactCameraShake_Implementation(const TSubclassOf<UCameraShakeBase> CameraShakeClass, const FCombatImpactCosmetics& Parameters) const
{
	const APawn* Instigator = Parameters.Instigator;
	if (!IsValid(CameraShakeClass) || !IsValid(Instigator))
	{
		return;
	}

	APlayerController* PlayerController = Cast<APlayerController>(Instigator->GetController());
	if (IsValid(PlayerController))
	{
		const float Scale = GetImpactCameraShakeScale(Parameters);
		PlayerController->ClientStartCameraShake(CameraShakeClass, Scale);
	}
}

void UNinjaCombatCosmeticsComponent::HandleImpactParticles_Implementation(UNiagaraSystem* Particles, const FCombatImpactCosmetics& Parameters) const
{
	if (!IsValid(Particles))
	{
		return;
	}

	const UWorld* World = GetWorld();
	const FVector Location = Parameters.HitResult.Location;
	const FVector Scale = FVector::OneVector;
	const FRotator Rotation = FRotationMatrix::MakeFromZ(Parameters.HitResult.Normal).Rotator();

	UNiagaraComponent* NiagaraComponent;
	if (Parameters.NiagaraComponent)
	{
		NiagaraComponent = Parameters.NiagaraComponent;
		NiagaraComponent->SetAsset(Particles);
	}
	else
	{
		static constexpr bool bAutoDestroyParticles = true;
		static constexpr bool bAutoActivateParticles = false;
		
		NiagaraComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(World, Particles,
			Location, Rotation, Scale, bAutoDestroyParticles, bAutoActivateParticles);
	}

	if (!IsValid(NiagaraComponent))
	{
		return;
	}
	
	// Adds relevant parameters to the niagara component, before activating it.
	ModifyImpactParticleComponent(NiagaraComponent, Parameters);

	AActor* Target = Parameters.HitResult.GetActor();
	if (IsValid(Target) && Target->Implements<UCombatTargetCosmeticsModifierInterface>())
	{
		// Allows the target to further modify the niagara component.
		// Useful to handle things like different blood colors, flesh types, etc.
		//
		ICombatTargetCosmeticsModifierInterface::Execute_ModifyParticleEffect(Target, NiagaraComponent,
			Parameters.HitResult, Parameters.SourceTags, Parameters.TargetTags);
	}
	
	static constexpr bool bAsJustAttached = true;
	NiagaraComponent->ActivateSystem(bAsJustAttached);	
}

void UNinjaCombatCosmeticsComponent::HandleImpactSound_Implementation(USoundBase* Sound, const FCombatImpactCosmetics& Parameters) const
{
	if (!IsValid(Sound))
	{
		return;
	}

	UAudioComponent* AudioComponent = Parameters.AudioComponent;
	if (!IsValid(AudioComponent))
	{
		return;
	}

	const FVector HitLocation = Parameters.HitResult.Location;

	AudioComponent->SetUsingAbsoluteLocation(true);
	AudioComponent->SetWorldLocation(HitLocation);
	AudioComponent->SetSound(Sound);

	// Allows modification of the Sound Cue or MetaSound before playing the audio.
	ModifyImpactAudioComponent(AudioComponent, Parameters);

	AActor* Target = Parameters.HitResult.GetActor();
	if (IsValid(Target) && Target->Implements<UCombatTargetCosmeticsModifierInterface>())
	{
		// Allows the target to further modify the niagara component.
		// Useful to handle things like different blood colors, flesh types, etc.
		//
		ICombatTargetCosmeticsModifierInterface::Execute_ModifyAudioEffect(Target, AudioComponent,
			Parameters.HitResult, Parameters.SourceTags, Parameters.TargetTags);
	}

	AudioComponent->Play();		
}

void UNinjaCombatCosmeticsComponent::ModifyImpactParticleComponent_Implementation(UNiagaraComponent* NiagaraComponent, const FCombatImpactCosmetics& Parameters) const
{
	if (!IsValid(NiagaraComponent))
	{
		return;
	}
	
	const FVector HitLocation = Parameters.HitResult.Location;
	const FVector HitNormal = Parameters.HitResult.Normal;
	AActor* Target = Parameters.HitResult.GetActor();
	
	NiagaraComponent->SetVariableActor("user.Target", Target);
	NiagaraComponent->SetVariableVec3("user.HitLocation", HitLocation);
	NiagaraComponent->SetVariableVec3("user.HitNormal", HitNormal);	
}

void UNinjaCombatCosmeticsComponent::ModifyImpactAudioComponent_Implementation(UAudioComponent* AudioComponent, const FCombatImpactCosmetics& Parameters) const
{
	if (!IsValid(AudioComponent))
	{
		return;
	}
	
	AActor* Target = Parameters.HitResult.GetActor();
	AudioComponent->SetObjectParameter("Target", Target);	
}

float UNinjaCombatCosmeticsComponent::GetImpactCameraShakeScale_Implementation(const FCombatImpactCosmetics& Parameters) const
{
	return 1.f;
}