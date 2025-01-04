// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeCharacter.h"
#include "Net/UnrealNetwork.h"
#include "GAS/NarrativeAttributeSetBase.h"
#include "GAS/NarrativeGameplayAbility.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "NavigationMarkerComponent.h"
#include <Components/SkeletalMeshComponent.h>
#include <Components/CapsuleComponent.h>
#include "Components/EquipmentComponent.h"
#include "Components/TeamMarkerComponent.h"
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/PlayerState.h>
#include <MotionWarpingComponent.h>
#include "Items/EquippableItem.h"
#include <GameplayEffectTypes.h>
#include <GameplayEffectExtension.h>
#include "NarrativeGameplayTags.h"
#include <AbilitySystemGlobals.h>
#include "Items/WeaponItem.h"
#include <Runtime/AIModule/Classes/Perception/AISense_Damage.h>
#include <UObject/ConstructorHelpers.h>
#include "Engine/World.h"
#include "CharacterAppearance.h"
#include <Engine/Texture2D.h>

// Sets default values
ANarrativeCharacter::ANarrativeCharacter(const class FObjectInitializer& ObjectInitializer)
{
	
	SetReplicates(true);

	//We use a Lyra style setup where we use a hidden mesh and leader pose the other meshes to follow it. So hide main mesh, its simply there to drive anims
	GetMesh()->SetVisibility(false);
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	
	if (UnarmedAnimBP && GetMesh())
	{
		GetMesh()->SetAnimClass(UnarmedAnimBP);
	}

	BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(GetMesh());
	BodyMesh->SetLeaderPoseComponent(GetMesh());

	TorsoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TorsoMesh"));
	TorsoMesh->SetupAttachment(GetMesh());
	TorsoMesh->SetLeaderPoseComponent(GetMesh());

	LegsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LegsMesh"));
	LegsMesh->SetupAttachment(GetMesh());
	LegsMesh->SetLeaderPoseComponent(GetMesh());

	FeetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FeetMesh"));
	FeetMesh->SetupAttachment(GetMesh());
	FeetMesh->SetLeaderPoseComponent(GetMesh());

	HelmetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HelmetMesh"));
	HelmetMesh->SetupAttachment(GetMesh());
	HelmetMesh->SetLeaderPoseComponent(GetMesh());

	GlovesMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GlovesMesh"));
	GlovesMesh->SetupAttachment(GetMesh());
	GlovesMesh->SetLeaderPoseComponent(GetMesh());

	FaceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceMesh"));
	FaceMesh->SetupAttachment(GetMesh());

	//Face mesh needs its own anim BP so it can blend facial anims 
	FaceMesh->SetLeaderPoseComponent(nullptr, true);

	//TODO - Tales dialogues need these for playing anims. Todo move to a cleaner setup, maybe just read directly from NarrativeCharacter 
	FaceMesh->ComponentTags.Add("Face");
	GetMesh()->ComponentTags.Add("Body");

	auto LocationIconFinder = ConstructorHelpers::FObjectFinder<UTexture2D>(TEXT("/Script/Engine.Texture2D'/NarrativePro/NarrativeNavigator/Assets/Icons/T_Marker_PlayerIcon.T_Marker_PlayerIcon'"));

	MarkerComponent = CreateDefaultSubobject<UTeamMarkerComponent>(TEXT("NavigationMarker"));
	MarkerComponent->DefaultMarkerSettings.bShowActorRotation = true;

	if (LocationIconFinder.Succeeded())
	{
		MarkerComponent->DefaultMarkerSettings.LocationIcon = LocationIconFinder.Object;
	}

	auto DefaultIconFinder = ConstructorHelpers::FObjectFinder<UTexture2D>(TEXT("/Script/Engine.Texture2D'/NarrativePro/NarrativeNavigator/Assets/Icons/T_Marker_Default.T_Marker_Default'"));

	if (DefaultIconFinder.Succeeded())
	{
		MarkerComponent->CompassOverrideSettings.bOverride_LocationIcon = true;
		MarkerComponent->CompassOverrideSettings.LocationIcon = DefaultIconFinder.Object;
	}

	EquipmentComp = CreateDefaultSubobject<UEquipmentComponent>("EquipmentComp");

	MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));

	//Nice default values for level scaling. 
	LevelExponentX = 0.07f;
	LevelExponentY = 2.f;
}

class UAbilitySystemComponent* ANarrativeCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

bool ANarrativeCharacter::IsAlive() const
{
	if (AbilitySystemComponent)
	{
		return !AbilitySystemComponent->HasMatchingGameplayTag(FNarrativeGameplayTags::Get().State_IsDead);
	}

	return true; 
}

void ANarrativeCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	TMap<EEquippableSlot, USkeletalMeshComponent*> EquipmentMap;

	EquipmentMap.Add(EEquippableSlot::ES_Torso, TorsoMesh);
	EquipmentMap.Add(EEquippableSlot::ES_Legs, LegsMesh);
	EquipmentMap.Add(EEquippableSlot::ES_Feet, FeetMesh);
	EquipmentMap.Add(EEquippableSlot::ES_Helmet, HelmetMesh);

	if (EquipmentComp)
	{
		EquipmentComp->Initialize(EquipmentMap, GetMesh());
	}

}

void ANarrativeCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ANarrativeCharacter, bWeaponHolstered, COND_SkipOwner);
}

// Called when the game starts or when spawned
void ANarrativeCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AttributeSetBase)
	{
		AttributeSetBase->OnOutOfHealth.AddUObject(this, &ThisClass::HandleOutOfHealth);
	}
}

void ANarrativeCharacter::Destroyed()
{
	Super::Destroyed();

	RemoveWeaponVisual();
}

void ANarrativeCharacter::SetAppearance_Implementation(class UCharacterAppearance* CharacterAppearance)
{
	if (CharacterAppearance)
	{
		if (CharacterAppearance->BaseMeshOverride)
		{
			GetMesh()->SetSkeletalMesh(CharacterAppearance->BaseMeshOverride);
		}

		if (FeetMesh)
		{
			FeetMesh->SetSkeletalMesh(CharacterAppearance->FeetMesh);

			for (int32 i = 0; i <= CharacterAppearance->FeetMeshMaterials.Num() - 1; ++i)
			{
				if (CharacterAppearance->FeetMeshMaterials.IsValidIndex(i))
				{
					FeetMesh->SetMaterial(i, CharacterAppearance->FeetMeshMaterials[i]);
				}
			}
		}

		if (BodyMesh)
		{
			BodyMesh->SetSkeletalMesh(CharacterAppearance->BodyMesh);

			for (int32 i = 0; i <= CharacterAppearance->BodyMeshMaterials.Num() - 1; ++i)
			{
				if (CharacterAppearance->BodyMeshMaterials.IsValidIndex(i))
				{
					BodyMesh->SetMaterial(i, CharacterAppearance->BodyMeshMaterials[i]);
				}
			}
		}

		if (LegsMesh)
		{
			LegsMesh->SetSkeletalMesh(CharacterAppearance->LegsMesh);

			for (int32 i = 0; i <= CharacterAppearance->LegsMeshMaterials.Num() - 1; ++i)
			{
				if (CharacterAppearance->LegsMeshMaterials.IsValidIndex(i))
				{
					LegsMesh->SetMaterial(i, CharacterAppearance->LegsMeshMaterials[i]);
				}
			}
		}

		if (FaceMesh)
		{
			FaceMesh->SetSkeletalMesh(CharacterAppearance->HeadMesh);

			for (int32 i = 0; i <= CharacterAppearance->HeadMeshMaterials.Num() - 1; ++i)
			{
				if (CharacterAppearance->HeadMeshMaterials.IsValidIndex(i))
				{
					FaceMesh->SetMaterial(i, CharacterAppearance->HeadMeshMaterials[i]);
				}
			}
		}
		
		if (TorsoMesh)
		{
			TorsoMesh->SetSkeletalMesh(CharacterAppearance->TorsoMesh);

			for (int32 i = 0; i <= CharacterAppearance->TorsoMeshMaterials.Num() - 1; ++i)
			{
				if (CharacterAppearance->TorsoMeshMaterials.IsValidIndex(i))
				{
					TorsoMesh->SetMaterial(i, CharacterAppearance->TorsoMeshMaterials[i]);
				}
			}
		}

		if (HelmetMesh)
		{
			HelmetMesh->SetSkeletalMesh(CharacterAppearance->HelmetMesh);

			for (int32 i = 0; i <= CharacterAppearance->HelmetMeshMaterials.Num() - 1; ++i)
			{
				if (CharacterAppearance->HelmetMeshMaterials.IsValidIndex(i))
				{
					HelmetMesh->SetMaterial(i, CharacterAppearance->HelmetMeshMaterials[i]);
				}
			}
		}
	}
}

void ANarrativeCharacter::DamagedBy(AController* DamagerController, const float Damage)
{
	BPDamagedBy(DamagerController, Damage);
}

void ANarrativeCharacter::SetAnimBPOverride(TSubclassOf<class UAnimInstance> NewAnimBP)
{
	if (IsValid(NewAnimBP))
	{
		GetMesh()->SetAnimInstanceClass(NewAnimBP);
	}
	else
	{
		GetMesh()->SetAnimInstanceClass(UnarmedAnimBP);
	}
}

void ANarrativeCharacter::ClearAnimBPOverride()
{
	SetAnimBPOverride(nullptr);
}

void ANarrativeCharacter::AddAbility(TSubclassOf<class UNarrativeGameplayAbility> Ability)
{
	// Grant abilities, but only on the server	
	if (IsValid(Ability) && HasAuthority() && AbilitySystemComponent)
	{
		const int32 Level = GetCharacterLevel();
		const int32 InputID = static_cast<int32>(Ability.GetDefaultObject()->InputID);

		if (InputID != static_cast<int32>(ENarrativeAbilityInputID::None))
		{
			//Clear any existing abilities with the InputID 
			AbilitySystemComponent->ClearAllAbilitiesWithInputID(InputID);
			
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability, Level, InputID, this));
		}
		else
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability, Level, -1, this));
		}
	}
}

void ANarrativeCharacter::GrantAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities)
{
	for (TSubclassOf<UNarrativeGameplayAbility>& Ability : Abilities)
	{
		AddAbility(Ability);
	}
}

void ANarrativeCharacter::RemoveAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities)
{
	// Grant abilities, but only on the server	
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent)
	{
		return;
	}

	TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
	TArray<TSubclassOf<class UNarrativeGameplayAbility>> AbilitiesToRestore;

	for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
	{
		if ((Spec.SourceObject == this) && Abilities.Contains(Spec.Ability->GetClass()))
		{
			AbilitiesToRemove.Add(Spec.Handle);
		}
	}

	for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
	{
		AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
	}

	//TODO look into this further, may be better to only grant previously removed default abilities
	GrantAbilities(DefaultAbilities);
}

void ANarrativeCharacter::SetWeaponVisual(const TSubclassOf<class AActor>& WeaponVisualClass, const FName& WeaponVisualAttachBone, const FTransform& WeaponVisualAttachOffset)
{
	RemoveWeaponVisual();

	SpawnedWeaponVisual = GetWorld()->SpawnActorDeferred<AActor>(WeaponVisualClass, FTransform::Identity, this);

	
	if (SpawnedWeaponVisual)
	{
		SpawnedWeaponVisual->FinishSpawning(FTransform::Identity, /*bIsDefaultTransform=*/ true);
	}

	AttachWeaponVisual(WeaponVisualAttachBone, WeaponVisualAttachOffset);
}

void ANarrativeCharacter::AttachWeaponVisual(const FName& WeaponVisualAttachBone, const FTransform& WeaponVisualAttachOffset)
{
	if (SpawnedWeaponVisual)
	{
		SpawnedWeaponVisual->SetActorRelativeTransform(WeaponVisualAttachOffset);
		SpawnedWeaponVisual->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, WeaponVisualAttachBone);
	}
}

void ANarrativeCharacter::RemoveWeaponVisual()
{
	if (SpawnedWeaponVisual)
	{
		SpawnedWeaponVisual->Destroy();
	}

	ClearAnimBPOverride();
}

void ANarrativeCharacter::SetWeaponHolstered(const bool bHolster)
{
	bWeaponHolstered = bHolster;
	OnRep_bWeaponHolstered();
}

void ANarrativeCharacter::OnRep_bWeaponHolstered()
{
	const UWeaponItem* WeaponItem = GetWeapon();

	//Holster can only be done with a weapon item 
	if (bWeaponHolstered)
	{
		if (WeaponItem)
		{
			AttachWeaponVisual(WeaponItem->WeaponVisualHolsteredAttachBone, WeaponItem->WeaponVisualHolsteredAttachOffset);
		}

		ClearAnimBPOverride();
	}
	else if(WeaponItem) //Unholstering only makes sense if you have a weapon
	{
		AttachWeaponVisual(WeaponItem->WeaponVisualAttachBone, WeaponItem->WeaponVisualAttachOffset);
		SetAnimBPOverride(WeaponItem->WeaponAnimLayer);
	}
}

class AActor* ANarrativeCharacter::GetWeaponVisual() const
{
	return SpawnedWeaponVisual;
}

class UWeaponItem* ANarrativeCharacter::GetWeapon() const
{
	if (EquipmentComp)
	{
		if (UWeaponItem* EquippedWeapon = Cast<UWeaponItem>(EquipmentComp->GetEquippedItemAtSlot(EEquippableSlot::ES_Weapon)))
		{
			return EquippedWeapon;
		}
	}

	return nullptr;
}

void ANarrativeCharacter::SetGenericTeamId(const FGenericTeamId& TeamID)
{
	if (APlayerState* PS = GetPlayerState())
	{
		if (INarrativeTeamAgentInterface* TeamInterface = Cast<INarrativeTeamAgentInterface>(PS))
		{
			return TeamInterface->SetGenericTeamId(TeamID);
		}
	}
}

FGenericTeamId ANarrativeCharacter::GetGenericTeamId() const
{
	if (APlayerState* PS = GetPlayerState())
	{
		if (INarrativeTeamAgentInterface* TeamInterface = Cast<INarrativeTeamAgentInterface>(PS))
		{
			return TeamInterface->GetGenericTeamId();
		}
	}
	return FGenericTeamId::NoTeam;
}


ETeamAttitude::Type ANarrativeCharacter::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (APlayerState* PS = GetPlayerState())
	{
		if (INarrativeTeamAgentInterface* TeamInterface = Cast<INarrativeTeamAgentInterface>(PS))
		{
			return TeamInterface->GetTeamAttitudeTowards(Other);
		}
	}

	return ETeamAttitude::Neutral;
}

void ANarrativeCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->GetOwnedGameplayTags(TagContainer);
	}
}

bool ANarrativeCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		return ASC->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool ANarrativeCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		return ASC->HasAllMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool ANarrativeCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		return ASC->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}

//void ANarrativeCharacter::SetupAbilitySystemComponent(class UNarrativeAbilitySystemComponent* ASC)
//{	
//	check(ASC);
//
//	if (ASC)
//	{
//		AbilitySystemComponent = ASC;
//	}
//
//}

void ANarrativeCharacter::AddDefaultAbilities()
{
	GrantAbilities(DefaultAbilities);
}

void ANarrativeCharacter::RemoveCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent)
	{
		return;
	}

	AbilitySystemComponent->ClearAllAbilities();
}

void ANarrativeCharacter::InitializeAttributes()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	if (!DefaultAttributes)
	{
		UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAttributes for %s. Please fill in the character's Blueprint."), *FString(__FUNCTION__), *GetName());
		return;
	}

	// Can run on Server and Client
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributes, GetCharacterLevel(), EffectContext);
	if (NewHandle.IsValid())
	{
		FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
	}
}

void ANarrativeCharacter::AddStartupEffects()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent || AbilitySystemComponent->bStartupEffectsApplied)
	{
		return;
	}

	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	for (TSubclassOf<UGameplayEffect> GameplayEffect : StartupEffects)
	{
		FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
		if (NewHandle.IsValid())
		{
			FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
		}
	}

	AbilitySystemComponent->bStartupEffectsApplied = true;
}

void ANarrativeCharacter::InitASC()
{
	
}

void ANarrativeCharacter::SetHealth(float Health)
{
	if (AttributeSetBase)
	{
		AttributeSetBase->SetHealth(Health);
	}
}

void ANarrativeCharacter::SetStamina(float Stamina)
{
	if (AttributeSetBase)
	{
		AttributeSetBase->SetStamina(Stamina);
	}
}


int32 ANarrativeCharacter::XPToLevel(const float XP) const 
{
	return FMath::TruncToInt(LevelExponentX * FMath::Sqrt(XP)) + 1;
}

float ANarrativeCharacter::LevelToXP(const int32 Level) const
{
	return FMath::Pow((Level - 1) / LevelExponentX, LevelExponentY);
}

float ANarrativeCharacter::GetPercentToNextLevel() const
{
	float XP = GetXP();
	const int32 OurLevel = GetCharacterLevel();

	const float XPForOurLevel = LevelToXP(OurLevel);
	const float XPForNextLevel = LevelToXP(OurLevel + 1);

	const float OurProgressFromLevelStart = XP - XPForOurLevel;
	const float DiffBetweenLevels = XPForNextLevel - XPForOurLevel;

	return OurProgressFromLevelStart / DiffBetweenLevels;

}

int32 ANarrativeCharacter::GetCharacterLevel() const
{
	return XPToLevel(GetXP());
}

float ANarrativeCharacter::GetXP() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetXP();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetHealth() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetHealth();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetMaxHealth() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetMaxHealth();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetStamina() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetStamina();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetMaxStamina() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetMaxStamina();
	}

	return 0.0f;
}

void ANarrativeCharacter::HandleOutOfHealth(AActor* DamageInstigator, AActor* DamageCauser, const FGameplayEffectSpec& DamageEffectSpec, float DamageMagnitude)
{
	if (HasAuthority() && AbilitySystemComponent)
	{
		const FGameplayTag DeadTag = FNarrativeGameplayTags::Get().State_IsDead;

		if (!AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
		{
		
			FGameplayEventData Payload;
			Payload.EventTag = FNarrativeGameplayTags::Get().GameplayEvent_Death;
			Payload.Instigator = DamageInstigator;
			Payload.Target = AbilitySystemComponent->GetAvatarActor();
			Payload.OptionalObject = DamageEffectSpec.Def;
			Payload.ContextHandle = DamageEffectSpec.GetEffectContext();
			Payload.InstigatorTags = *DamageEffectSpec.CapturedSourceTags.GetAggregatedTags();
			Payload.TargetTags = *DamageEffectSpec.CapturedTargetTags.GetAggregatedTags();
			Payload.EventMagnitude = DamageMagnitude;

			FScopedPredictionWindow NewScopedWindow(AbilitySystemComponent, true);
			AbilitySystemComponent->HandleGameplayEvent(Payload.EventTag, &Payload);

			//AbilitySystemComponent->AddLooseGameplayTag(DeadTag);
		}
	}
}

