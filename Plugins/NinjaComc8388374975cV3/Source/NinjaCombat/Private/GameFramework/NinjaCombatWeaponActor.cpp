// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatWeaponActor.h"

#include "NiagaraComponent.h"
#include "NinjaCombatFunctionLibrary.h"
#include "NinjaCombatTags.h"
#include "Components/AudioComponent.h"
#include "Components/MeshComponent.h"
#include "Components/NinjaCombatWeaponCosmeticsComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Net/UnrealNetwork.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Sound/SoundBase.h"

FName ANinjaCombatWeaponActor::WeaponCosmeticsName = TEXT("WeaponCosmetics");

ANinjaCombatWeaponActor::ANinjaCombatWeaponActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bReplicates = true;
	NetPriority = 2.f;

#if ENGINE_MINOR_VERSION < 5
	MinNetUpdateFrequency = 11.f;
	NetUpdateFrequency = 33.f;
#else
	SetMinNetUpdateFrequency(11.f);
	SetNetUpdateFrequency(33.f);
#endif

	bOverridesMeleeDamage = false;
	bOverridesPoisonConsumption = false;
	MeleeHitEffectLevel = 1.f;
	MeleeDamage = 0.f;
	PoiseConsumption = 0.f;
	WeaponTags = FGameplayTagContainer::EmptyContainer;

	USceneComponent* WeaponRoot = CreateDefaultSubobject<USceneComponent>("WeaponRoot");
	SetRootComponent(WeaponRoot);

	MeleeTrails = CreateDefaultSubobject<UNiagaraComponent>("MeleeTrails");
	MeleeTrails->ComponentTags.Add(Tag_Combat_Component_WeaponTrail.GetTag().GetTagName());
	MeleeTrails->SetAutoActivate(false);
	MeleeTrails->SetupAttachment(GetRootComponent());
		
	MeleeAttackAudio = CreateDefaultSubobject<UAudioComponent>("MeleeAttackAudio");
	MeleeAttackAudio->SetAutoActivate(false);
	MeleeAttackAudio->SetupAttachment(GetRootComponent());

	MeleeImpactHitAudio = CreateDefaultSubobject<UAudioComponent>("MeleeImpactHitAudio");
	MeleeImpactHitAudio->SetAutoActivate(false);
	MeleeImpactHitAudio->SetupAttachment(GetRootComponent());

	WeaponCosmetics = CreateDefaultSubobject<UNinjaCombatCosmeticsComponent>(WeaponCosmeticsName);
}

void ANinjaCombatWeaponActor::BeginPlay()
{
	Super::BeginPlay();

	const FName MeleeScanMeshTag = Tag_Combat_Component_MeleeScanSource.GetTag().GetTagName();
	MeleeScanMesh = FindComponentByTag<UMeshComponent>(MeleeScanMeshTag);
	
	const FName RangedMeshTag = Tag_Combat_Component_ProjectileSource.GetTag().GetTagName();
	ProjectileSourceMesh = FindComponentByTag<UMeshComponent>(RangedMeshTag);

	if (IsValid(MeleeImpactHitAudio))
	{
		MeleeImpactHitAudio->OnAudioFinished.AddUniqueDynamic(this, &ThisClass::OnImpactHitAudioFinished);
	}

	MeleeTrailsCache = FindMeleeTrailsByComponentTag();
}

void ANinjaCombatWeaponActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, WeaponTags);
}

AActor* ANinjaCombatWeaponActor::GetWeaponOwner_Implementation() const
{
	return GetAttachParentActor();
}

FGameplayTagContainer ANinjaCombatWeaponActor::GetWeaponTags_Implementation() const
{
	return WeaponTags;
}

UMeshComponent* ANinjaCombatWeaponActor::GetMeleeMesh_Implementation() const
{
	return MeleeScanMesh;
}

TSubclassOf<UGameplayEffect> ANinjaCombatWeaponActor::GetHitEffectClass_Implementation() const
{
	return MeleeHitEffectClass;
}

TArray<UNiagaraComponent*> ANinjaCombatWeaponActor::GetAttackTrails_Implementation() const
{
	return MeleeTrailsCache;
}

bool ANinjaCombatWeaponActor::GetDamage_Implementation(float& OutDamage) const
{
	OutDamage = MeleeDamage;
	return bOverridesMeleeDamage;
}

bool ANinjaCombatWeaponActor::GetPoiseConsumption_Implementation(float& OutPoiseConsumption) const
{
	OutPoiseConsumption = PoiseConsumption;
	return bOverridesPoisonConsumption;
}

float ANinjaCombatWeaponActor::GetHitEffectLevel_Implementation() const
{
	return MeleeHitEffectLevel;
}

void ANinjaCombatWeaponActor::StartMeleeTrailsCosmetics_Implementation(const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags)
{
	FCombatMeleeTrailsCosmetics Parameters;
	Parameters.Source = this;
	Parameters.AudioComponent = MeleeAttackAudio;
	Parameters.NiagaraComponents = MeleeTrailsCache;
	Parameters.SourceTags = SourceTags;
	Parameters.TargetTags = TargetTags;
	WeaponCosmetics->StartMeleeScanCosmetics(Parameters);
}

void ANinjaCombatWeaponActor::StopMeleeTrailsCosmetics_Implementation(const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags)
{
	WeaponCosmetics->StopMeleeScanCosmetics();
}

UMeshComponent* ANinjaCombatWeaponActor::GetProjectileSourceMesh_Implementation(FName SocketName) const
{
	return ProjectileSourceMesh;
}

bool ANinjaCombatWeaponActor::GetProjectileClass_Implementation(TSubclassOf<AActor>& OutProjectileClass) const
{
	if (IsValid(ProjectileClass))
	{
		OutProjectileClass = ProjectileClass;
		return true;
	}

	return false;
}

void ANinjaCombatWeaponActor::HandleMeleeDamageCosmetics_Implementation(const FHitResult& HitResult,
	const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	FCombatImpactCosmetics CosmeticsParameters;
	CosmeticsParameters.Source = this;
	CosmeticsParameters.Instigator = Cast<APawn>(Execute_GetWeaponOwner(this));
	CosmeticsParameters.HitResult = HitResult;
	CosmeticsParameters.SourceTags = SourceTags;
	CosmeticsParameters.TargetTags = TargetTags;
	CosmeticsParameters.ImpactParticles = SelectMeleeImpactParticles(HitResult, SourceTags, TargetTags);
	CosmeticsParameters.Sound = SelectMeleeImpactSound(HitResult, SourceTags, TargetTags);
	CosmeticsParameters.CameraShake = SelectMeleeImpactCameraShake(HitResult, SourceTags, TargetTags);
	CosmeticsParameters.NiagaraComponent = nullptr;
	CosmeticsParameters.AudioComponent = MeleeImpactHitAudio;
	WeaponCosmetics->HandleImpactDamageCosmetics(CosmeticsParameters);
}

TArray<UNiagaraComponent*> ANinjaCombatWeaponActor::FindMeleeTrailsByComponentTag() const
{
	const FName Tag = Tag_Combat_Component_WeaponTrail.GetTag().GetTagName();
	const TInlineComponentArray<UNiagaraComponent*> Trails(this);
	return Trails.FilterByPredicate([Tag](const UNiagaraComponent* Component){ return Component->ComponentHasTag(Tag); });
}

TSoftObjectPtr<UNiagaraSystem> ANinjaCombatWeaponActor::SelectMeleeImpactParticles_Implementation(
	const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	return MeleeImpactParticles;
}

TSoftObjectPtr<USoundBase> ANinjaCombatWeaponActor::SelectMeleeImpactSound_Implementation(const FHitResult& HitResult,
	const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	return MeleeImpactSound;
}

TSoftClassPtr<UCameraShakeBase> ANinjaCombatWeaponActor::SelectMeleeImpactCameraShake_Implementation(
	const FHitResult& HitResult, const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& TargetTags) const
{
	return MeleeImpactShake;
}

// ReSharper disable once CppMemberFunctionMayBeConst
void ANinjaCombatWeaponActor::OnImpactHitAudioFinished()
{
	MeleeImpactHitAudio->SetUsingAbsoluteLocation(true);
	MeleeImpactHitAudio->SetWorldLocation(GetRootComponent()->GetComponentLocation());
}
