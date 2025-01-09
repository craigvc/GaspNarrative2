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
#include "Character/NarrativeCharacterMovement.h"
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
#include <Engine/Texture2D.h>
#include "Character/CharacterAppearance.h"
#include <GroomComponent.h>
#include "Character/CharacterDefinition.h"
#include "NarrativeCollisionChannels.h"
#include <Materials/MaterialInstanceDynamic.h>

// Sets default values
ANarrativeCharacter::ANarrativeCharacter(const class FObjectInitializer& ObjectInitializer) : 
	Super(ObjectInitializer.SetDefaultSubobjectClass<UNarrativeCharacterMovement>(ACharacter::CharacterMovementComponentName))
{
	
	SetReplicates(true);

	//We use a Lyra style setup where we use a hidden mesh and leader pose the other meshes to follow it. So hide main mesh, its simply there to drive anims
	GetMesh()->SetVisibility(false);
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	
	if (UnarmedAnimBP && GetMesh())
	{
		GetMesh()->SetAnimInstanceClass(UnarmedAnimBP);
	}

	BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BodyMesh"));
	BodyMesh->SetupAttachment(GetMesh());
	BodyMesh->SetReceivesDecals(false);
	BodyMesh->SetLeaderPoseComponent(GetMesh());

	TorsoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TorsoMesh"));
	TorsoMesh->SetupAttachment(GetMesh());
	TorsoMesh->SetReceivesDecals(false);
	TorsoMesh->SetLeaderPoseComponent(GetMesh());

	LegsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LegsMesh"));
	LegsMesh->SetupAttachment(GetMesh());
	LegsMesh->SetReceivesDecals(false);
	LegsMesh->SetLeaderPoseComponent(GetMesh());

	FeetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FeetMesh"));
	FeetMesh->SetupAttachment(GetMesh());
	FeetMesh->SetReceivesDecals(false);
	FeetMesh->SetLeaderPoseComponent(GetMesh());

	HelmetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HelmetMesh"));
	HelmetMesh->SetupAttachment(GetMesh());
	HelmetMesh->SetReceivesDecals(false);
	HelmetMesh->SetLeaderPoseComponent(GetMesh());

	GlovesMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GlovesMesh"));
	GlovesMesh->SetupAttachment(GetMesh());
	GlovesMesh->SetReceivesDecals(false);
	GlovesMesh->SetLeaderPoseComponent(GetMesh());

	BeardMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BeardMesh"));
	BeardMesh->SetupAttachment(GetMesh());
	BeardMesh->SetReceivesDecals(false);
	BeardMesh->SetLeaderPoseComponent(GetMesh());

	MoustacheMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MoustacheMesh"));
	MoustacheMesh->SetupAttachment(GetMesh());
	MoustacheMesh->SetReceivesDecals(false);
	MoustacheMesh->SetLeaderPoseComponent(GetMesh());

	HairMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMesh"));
	HairMesh->SetupAttachment(GetMesh());
	HairMesh->SetReceivesDecals(false);
	HairMesh->SetLeaderPoseComponent(GetMesh());

	FaceMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FaceMesh"));
	FaceMesh->SetReceivesDecals(false);
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

	UnarmedAttackDamage = 10.f;
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

FVector ANarrativeCharacter::GetFloorLocation(const float ZOffset) const
{
	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		return GetActorLocation() - FVector(0.f, 0.f, Capsule->GetScaledCapsuleHalfHeight()) + FVector(0.f, 0.f, ZOffset);
	}
	return GetActorLocation();
}

UCharacterDefinition* ANarrativeCharacter::GetCharacterDefinition() const
{
	return nullptr;
}

class UNarrativeInteractionComponent* ANarrativeCharacter::GetInteractionComponent() const
{
	return nullptr; 
}

void ANarrativeCharacter::OnDefinitionSet_Implementation(UCharacterDefinition* NewDefinition)
{

}

void ANarrativeCharacter::LoadNewCharacter_Implementation()
{

}

void ANarrativeCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	InitializeEquipmentComponent();
}

void ANarrativeCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANarrativeCharacter, EquippedWeapon);
}

// Called when the game starts or when spawned
void ANarrativeCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void ANarrativeCharacter::Destroyed()
{
	Super::Destroyed();

	TArray<FGameplayTag> VisualSlots;
	SpawnedWeaponVisuals.GenerateKeyArray(VisualSlots);

	for (auto& Slot : VisualSlots)
	{
		RemoveWeaponVisual(Slot);
	}
}

void ANarrativeCharacter::SetAppearanceFromCreatorData_Implementation(const FCharacterCreatorAttributeSet& CreatorAttributes)
{
	AppearanceAttributeSet = CreatorAttributes;

	//Store the form ID - this lets NPCs check whether we're female, male, orc, etc. 
	if (IsValid(AbilitySystemComponent) && CreatorAttributes.FormTag.IsValid())
	{
		AbilitySystemComponent->AddLooseGameplayTag(CreatorAttributes.FormTag);
	}

	//Bugfix: Make this empty as we're about to set the animBP and it appearance setting needs to know 
	GetMesh()->SetAnimInstanceClass(nullptr);

	//Initialize our meshes
	for (auto& MeshDataKVP : CreatorAttributes.Meshes)
	{
		SetMeshToBaseAppearance(MeshDataKVP.Key);
	}

	//Initialize our grooms 
	for (auto& GroomDataKVP : CreatorAttributes.Grooms)
	{
		SetGroomAtSlotToBaseAppearance(GroomDataKVP.Key);
	}
}

void ANarrativeCharacter::SetMeshToBaseAppearance(FGameplayTag Slot)
{
	if (AppearanceAttributeSet.Meshes.Contains(Slot))
	{
		if (USkeletalMeshComponent* MeshComp = EquipmentComp->GetMeshComponentAtSlot(Slot))
		{
			FCharacterCreatorAttribute_Mesh MeshData = AppearanceAttributeSet.Meshes[Slot];

			SetMeshAppearance(Slot, MeshData);
		}
	}
	else //No attribute data exists for this slot, just clear it to empty 
	{
		if (USkeletalMeshComponent* MeshComp = EquipmentComp->GetMeshComponentAtSlot(Slot))
		{
			MeshComp->SetSkeletalMesh(nullptr);
		}
	}
}

void ANarrativeCharacter::SetMeshAppearance(FGameplayTag Slot, const FCharacterCreatorAttribute_Mesh& MeshData)
{
	//if (AppearanceAttributeSet.Meshes.Contains(Slot))
	{
		if (USkeletalMeshComponent* MeshComp = EquipmentComp->GetMeshComponentAtSlot(Slot))
		{
			USkeletalMesh* MeshAsset = MeshData.Mesh;
			TSubclassOf<UAnimInstance> OldAnimInstance = nullptr;
			
			if (MeshComp->GetAnimInstance())
			{
				OldAnimInstance = MeshComp->GetAnimInstance()->GetClass();
			}

			MeshComp->SetSkeletalMesh(MeshAsset);
			
			if (MeshComp != GetMesh())
			{
				if (MeshData.bUseLeaderPose)
				{
					MeshComp->SetLeaderPoseComponent(GetMesh());
				}
				else
				{
					MeshComp->SetLeaderPoseComponent(nullptr);
					MeshComp->SetAnimInstanceClass(MeshData.MeshAnimBP);
				}
			}
			else
			{	
				//Changing leader mesh requires you to set the anim class again or we'll T pose 
				if (IsValid(OldAnimInstance))
				{
					MeshComp->SetAnimInstanceClass(OldAnimInstance);
				}
				else
				{
					MeshComp->SetAnimInstanceClass(AppearanceAttributeSet.UnarmedAnimBP);
				}
			}

			if (IsValid(MeshAsset))
			{
				//Check if we have any custom materials to apply the newly created mesh
				for (int32 i = 0; i < MeshAsset->GetMaterials().Num(); ++i)
				{
					if (MeshData.MeshMaterials.IsValidIndex(i))
					{
						FCreatorMeshMaterial MeshMat = MeshData.MeshMaterials[i];

						//Set the material and apply parameters if required 
						if (MeshMat.VectorParams.Num() <= 0 && MeshMat.ScalarParams.Num() <= 0)
						{
							MeshComp->SetMaterial(i, MeshMat.Material);
						}
						else
						{
							UMaterialInstanceDynamic* MID = MeshComp->CreateDynamicMaterialInstance(i, MeshMat.Material);

							for (auto& VParam : MeshMat.VectorParams)
							{
								if (VParam.VectorTagID.IsValid())
								{
									const FLinearColor ParameterValue = AppearanceAttributeSet.GetVectorValue(VParam.VectorTagID);

									for (auto& VParamName : VParam.ParameterNames)
									{
										MID->SetVectorParameterValue(VParamName, ParameterValue);
									}
								}
							}

							for (auto& SParam : MeshMat.ScalarParams)
							{
								if (SParam.ScalarTagID.IsValid())
								{
									const float ParameterValue = AppearanceAttributeSet.GetScalarValue(SParam.ScalarTagID);

									for (auto& SParamName : SParam.ParameterNames)
									{
										MID->SetScalarParameterValue(SParamName, ParameterValue);
									}
								}
							}
						}
					}
				}

				//Set the morphs
				for (auto& Morph : MeshData.Morphs)
				{
					if (Morph.ScalarTag.IsValid())
					{
						const float MorphVal = AppearanceAttributeSet.GetScalarValue(Morph.ScalarTag);

						for (auto& MorphName : Morph.MorphNames)
						{
							MeshComp->SetMorphTarget(MorphName, MorphVal);
						}
					}
				}
			}
		}
	}
}

void ANarrativeCharacter::SetGroomAtSlotToBaseAppearance(FGameplayTag Slot)
{
	if (UGroomComponent* GroomComp = EquipmentComp->GetGroomComponentAtSlot(Slot))
	{
		if (AppearanceAttributeSet.Grooms.Contains(Slot))
		{
			FCharacterCreatorAttribute_Groom GroomData = AppearanceAttributeSet.Grooms[Slot];

			GroomComp->SetGroomAsset(GroomData.GroomAsset, GroomData.GroomBindingAsset);
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
		GetMesh()->SetAnimInstanceClass(AppearanceAttributeSet.UnarmedAnimBP);
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

		for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
		{
			if ((Spec.SourceObject == this) && Spec.Ability->GetClass() == Ability)
			{
				UE_LOG(LogTemp, Warning, TEXT("tried granting ability %s that was already granted"), *GetNameSafe(Ability));
				return;
			}
		}

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

void ANarrativeCharacter::InitializeEquipmentComponent()
{
	TMap<FGameplayTag, USkeletalMeshComponent*> EquipmentMap;

	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_BaseBody, GetMesh());
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Torso, TorsoMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Legs, LegsMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Feet, FeetMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Helmet, HelmetMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Body, BodyMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Hands, GlovesMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Face, FaceMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Beard, BeardMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Moustache, MoustacheMesh);
	EquipmentMap.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Hair, HairMesh);

	if (EquipmentComp)
	{
		EquipmentComp->Initialize(EquipmentMap, GetMesh());
	}
}

class UNarrativeCharacterMovement* ANarrativeCharacter::GetNarrativeCharacterMovement() const
{
	return Cast<UNarrativeCharacterMovement>(GetCharacterMovement());
}

bool ANarrativeCharacter::AddWeaponVisual(class UWeaponItem* WeaponItem)
{
	if (IsValid(WeaponItem))
	{
		const FGameplayTag WeaponSlot = WeaponItem->EquippableSlot;

		RemoveWeaponVisual(WeaponSlot);

		if (AActor* SpawnedWeaponVisual = GetWorld()->SpawnActorDeferred<AActor>(WeaponItem->WeaponVisualClass, FTransform::Identity, this))
		{
			SpawnedWeaponVisual->FinishSpawning(FTransform::Identity, /*bIsDefaultTransform=*/ true);

			SpawnedWeaponVisuals.Add(WeaponSlot, SpawnedWeaponVisual);
			AttachWeaponVisual(WeaponItem, true);
		
			return true;
		}
	}

	return false; 
}

void ANarrativeCharacter::AttachWeaponVisual(class UWeaponItem* WeaponItem, const bool bHolster)
{
	if (WeaponItem)
	{
		if (AActor* WeaponVisual = GetWeaponVisual(WeaponItem->EquippableSlot))
		{
			const FTransform AttachOffset = bHolster ? WeaponItem->WeaponVisualHolsteredAttachOffset : WeaponItem->WeaponVisualAttachOffset;
			const FName AttachSocket = bHolster ? WeaponItem->WeaponVisualHolsteredAttachBone : WeaponItem->WeaponVisualAttachBone;

			WeaponVisual->SetActorRelativeTransform(AttachOffset);
			WeaponVisual->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, AttachSocket);
		}
	}
}

void ANarrativeCharacter::RemoveWeaponVisual(const FGameplayTag& WeaponSlot)
{
	if (SpawnedWeaponVisuals.Contains(WeaponSlot))
	{
		SpawnedWeaponVisuals[WeaponSlot]->Destroy();
	}

	SpawnedWeaponVisuals.Remove(WeaponSlot);
}

void ANarrativeCharacter::SetWeaponHolstered(const bool bHolster)
{
	if (bWeaponHolstered != bHolster)
	{
		bWeaponHolstered = bHolster;
		//OnRep_bWeaponHolstered();

		if (AbilitySystemComponent)
		{

		}
	}
}

void ANarrativeCharacter::SetEquippedWeapon(class UWeaponItem* WeaponToEquip)
{	
	UWeaponItem* OldWeapon = EquippedWeapon;
	EquippedWeapon = WeaponToEquip;
	OnRep_EquippedWeapon(OldWeapon);
}

void ANarrativeCharacter::OnRep_EquippedWeapon(class UWeaponItem* OldEquippedWeapon)
{
	//Once the player has an equipped weapon, we need to attach it to the player, update our anims, and grant tags. 
	if (OldEquippedWeapon)
	{
		OldEquippedWeapon->HandleUnWield();
	}

	if (EquippedWeapon)
	{
		EquippedWeapon->HandleWield();
	}
}

void ANarrativeCharacter::WieldWeapon(class UWeaponItem* Weapon)
{
	if (Weapon)
	{
		AttachWeaponVisual(Weapon, false);
		SetAnimBPOverride(Weapon->WeaponAnimLayer);

		//Bots should not have their controller rot yaw affected for now as they need to use AIFocus 
		if (IsPlayerControlled())
		{
			bUseControllerRotationYaw = Weapon->bPawnFollowsControlRotation;
		}

		if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
		{
			MoveComp->bOrientRotationToMovement = Weapon->bPawnOrientsRotationToMovement;
		}

		GrantAbilities(Weapon->Abilities);
		AbilitySystemComponent->AddLooseGameplayTag(FNarrativeGameplayTags::Get().State_Weapon_Equipped);
	}
}

void ANarrativeCharacter::UnWieldWeapon(class UWeaponItem* Weapon)
{
	if (Weapon)
	{
		AttachWeaponVisual(Weapon, true);
		ClearAnimBPOverride();

		if (ANarrativeCharacter* DefaultChar = GetClass()->GetDefaultObject<ANarrativeCharacter>())
		{
			bUseControllerRotationYaw = DefaultChar->bUseControllerRotationYaw;

			if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
			{
				if (UCharacterMovementComponent* DefaultMovement = DefaultChar->GetCharacterMovement())
				{
					MoveComp->bOrientRotationToMovement = DefaultMovement->bOrientRotationToMovement;
				}
			}
		}

		RemoveAbilities(Weapon->Abilities);
		AbilitySystemComponent->SetLooseGameplayTagCount(FNarrativeGameplayTags::Get().State_Weapon_Equipped, 0);
	}
}

class AActor* ANarrativeCharacter::GetEquippedWeaponVisual() const
{
	if (EquippedWeapon)
	{
		return GetWeaponVisual(EquippedWeapon->EquippableSlot);
	}

	return nullptr;
}

class AActor* ANarrativeCharacter::GetWeaponVisual(const FGameplayTag& WeaponSlot) const
{
	if (SpawnedWeaponVisuals.Contains(WeaponSlot))
	{
		return SpawnedWeaponVisuals[WeaponSlot];
	}

	return nullptr; 
}

class UWeaponItem* ANarrativeCharacter::GetWeapon() const
{
	return EquippedWeapon;
}

float ANarrativeCharacter::GetAttackRange() const
{
	
	if (UWeaponItem* Weapon = GetWeapon())
	{
		return Weapon->GetAttackRange();
	}

	return UnarmedCombatData.TraceDistance;
}

FCombatTraceData ANarrativeCharacter::GetAttackTraceData() const
{
	if (UWeaponItem* Weapon = GetWeapon())
	{
		return Weapon->GetTraceData();
	}

	return UnarmedCombatData;
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

	AbilitySystemComponent->OnDied.AddDynamic(this, &ANarrativeCharacter::HandleDeath);
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

void ANarrativeCharacter::HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	FString Rolestring = HasAuthority() ? "Server" : "Client";
	UE_LOG(LogTemp, Warning, TEXT("%s playing death logic"), *Rolestring);

	//We do a nice generic death implementation in here - if NPro users need more than this they can simply override this function in C++/BP
	
	/**Destroy child actors, stop movement, disable collision except for interaction for looting, disable our map marker.*/
	TArray<AActor*> ChildrenActors;
	GetAllChildActors(ChildrenActors);

	for (auto& Child : ChildrenActors)
	{
		if (Child)
		{
			Child->Destroy();
		}
	}

	if (UNarrativeCharacterMovement* CharMov = GetNarrativeCharacterMovement())
	{
		CharMov->DisableMovement();
		CharMov->StopMovementImmediately();
		CharMov->GravityScale = 0.f;
	}

	if (USkeletalMeshComponent* LeaderMesh = GetMesh())
	{
		LeaderMesh->SetSimulatePhysics(true);
		LeaderMesh->SetCollisionObjectType(ECC_PhysicsBody);
		LeaderMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		LeaderMesh->SetCollisionResponseToChannel(Narrative_TraceChannel_Interaction, ECR_Block);
	}

	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (MarkerComponent)
	{
		MarkerComponent->Deactivate();
	}

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AddLooseGameplayTag(FNarrativeGameplayTags::Get().State_IsDead);
	}
}
