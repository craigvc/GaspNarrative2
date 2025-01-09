// Copyright Narrative Tools 2022. 

#include "Items/EquippableItem.h"
#include "Components/EquipmentComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Pawn.h"
#include <GameFramework/Character.h>
#include "Engine/SkinnedAssetCommon.h"
#include <AbilitySystemGlobals.h>
#include <GameplayTagContainer.h>
#include <AbilitySystemComponent.h>
#include "NarrativeGameplayTags.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include <UObject/ConstructorHelpers.h>

#define LOCTEXT_NAMESPACE "EquippableItem"

#define ItemStat_Armor "Armor"
#define ItemStat_AttackRating "AttackRating"

UEquippableItem::UEquippableItem()
{
	UseActionText = LOCTEXT("UseActionText_Equippable", "Equip");
	bStackable = false;
	bCanActivate = true;
	bToggleActiveOnUse = true;
	Weight = 1.f;

	Stats.Add(FNarrativeItemStat(LOCTEXT("ArmorStatDisplayText", "Armor"), ItemStat_Armor, LOCTEXT("ArmorStatTooltip", "The Armor rating - reduces damage taken.")));
	Stats.Add(FNarrativeItemStat(LOCTEXT("AttackRatingStatDisplayText", "Attack Rating"), ItemStat_AttackRating, LOCTEXT("AttackRatingStatTooltip", "The Attack Rating - increases damage dealt.")));

	auto EquipmentModGEClass = ConstructorHelpers::FClassFinder<UGameplayEffect>(TEXT("/Script/Engine.Blueprint'/NarrativePro/Abilities/GameplayEffects/GE_EquipmentMod.GE_EquipmentMod_C'"));

	if (EquipmentModGEClass.Succeeded())
	{
		EquipmentModGE = EquipmentModGEClass.Class;
	}

}

void UEquippableItem::HandleEquip_Implementation()
{
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		CharacterOwner->GrantAbilities(Abilities);
	}
}

void UEquippableItem::HandleUnequip_Implementation()
{
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		CharacterOwner->RemoveAbilities(Abilities);
	}
}

void UEquippableItem::ApplyEquipmentAttributes()
{
	if (HasAuthority())
	{
		if (APawn* PawnOwner = GetOwningPawn())
		{
			if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PawnOwner))
			{
				// Can run on Server and Client
				FGameplayEffectContextHandle EffectContext = ASC->MakeEffectContext();
				EffectContext.AddSourceObject(this);

				FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(EquipmentModGE, 1.f, EffectContext);

				if (FGameplayEffectSpec* Spec = SpecHandle.Data.Get())
				{
					ModifyEquipmentEffectSpec(Spec);

					if (SpecHandle.IsValid())
					{
						EquipmentGEHandle = ASC->ApplyGameplayEffectSpecToTarget(*Spec, ASC);
					}
				}
			}
		}
	}
}

void UEquippableItem::RemoveEquipmentAttributes()
{
	if (HasAuthority())
	{
		if (UAbilitySystemComponent* ASC = EquipmentGEHandle.GetOwningAbilitySystemComponent())
		{
			ASC->RemoveActiveGameplayEffect(EquipmentGEHandle);
		}
	}
}

void UEquippableItem::ModifyEquipmentEffectSpec(FGameplayEffectSpec* Spec)
{
	if (Spec)
	{
		Spec->SetSetByCallerMagnitude(FNarrativeGameplayTags::Get().SetByCaller_Armor, ArmorRating);
		Spec->SetSetByCallerMagnitude(FNarrativeGameplayTags::Get().SetByCaller_AttackRating, AttackRating);
	}
}

bool UEquippableItem::ShouldUseOnAdd_Implementation() const
{
	if (APawn* PawnOwner = GetOwningPawn())
	{	
		//Auto equip items if we dont have any item at that slot
		if (UEquipmentComponent* EquipmentComponent = Cast<UEquipmentComponent>(PawnOwner->GetComponentByClass(UEquipmentComponent::StaticClass())))
		{
			if (!EquipmentComponent->GetEquippedItemAtSlot(EquippableSlot))
			{
				return true; 
			}
		}
	}

	return false;
}

FString UEquippableItem::GetStringVariable_Implementation(const FString& VariableName)
{
	if (VariableName == ItemStat_AttackRating)
	{
		if (AttackRating > 0.f)
		{
			return "+" + FString::SanitizeFloat(AttackRating);
		}
		else
		{
			return FString::SanitizeFloat(AttackRating);
		}

	}
	else if (VariableName == ItemStat_Armor)
	{
		if (ArmorRating > 0.f)
		{
			return "+" + FString::SanitizeFloat(ArmorRating);
		}
		else
		{
			return FString::SanitizeFloat(ArmorRating);
		}
	}

	return Super::GetStringVariable_Implementation(VariableName);
}

void UEquippableItem::Deactivated_Implementation()
{
	if (GetOwningPawn())
	{
		UseActionText = LOCTEXT("EquipText", "Equip");

		if (UEquipmentComponent* EquipmentComponent = Cast<UEquipmentComponent>(GetOwningPawn()->GetComponentByClass(UEquipmentComponent::StaticClass())))
		{
			EquipmentComponent->UnequipItem(this);
		}

		RemoveEquipmentAttributes();
	}
}

void UEquippableItem::Activated_Implementation()
{
	if (GetOwningPawn())
	{
		UseActionText = LOCTEXT("UnequipText", "Unequip");

		if (UEquipmentComponent* EquipmentComponent = Cast<UEquipmentComponent>(GetOwningPawn()->GetComponentByClass(UEquipmentComponent::StaticClass())))
		{
			EquipmentComponent->EquipItem(this);
		}

		ApplyEquipmentAttributes();
	}
}

UEquippableItem_Clothing::UEquippableItem_Clothing()
{

}

#if WITH_EDITOR
void UEquippableItem_Clothing::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	//Make sure all our meshes have materials set on them automatically 
	if (!ClothingMeshData.MeshMaterials.Num())
	{
		for (auto& MeshMat : ClothingMeshData.Mesh->GetMaterials())
		{
			FCreatorMeshMaterial NewMeshMat;
			NewMeshMat.Material = MeshMat.MaterialInterface;

			ClothingMeshData.MeshMaterials.Add(NewMeshMat);
		}
	}
}
#endif

void UEquippableItem_Clothing::HandleEquip_Implementation()
{
	if (UEquipmentComponent* EquipmentComponent = Cast<UEquipmentComponent>(GetOwningPawn()->GetComponentByClass(UEquipmentComponent::StaticClass())))
	{
		
		if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
		{
			CharacterOwner->SetMeshAppearance(EquippableSlot, ClothingMeshData);
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Narrative Equipment tried putting an item on, but your pawn doesn't have an Equipment Component added. Please add one."));
	}
}

void UEquippableItem_Clothing::HandleUnequip_Implementation()
{
	if (UEquipmentComponent* EquipmentComponent = Cast<UEquipmentComponent>(GetOwningPawn()->GetComponentByClass(UEquipmentComponent::StaticClass())))
	{
		if (EquipmentComponent->EquippableComponents.Contains(EquippableSlot))
		{
			//Set the clothing back to its default mesh and materials
			if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
			{	
				CharacterOwner->SetMeshToBaseAppearance(EquippableSlot);
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Narrative Equipment tried unequipping item but the Equipment Component doesn't have a skeletal mesh component added. Have you called initialize?"), *GetNameSafe(this));
		}

	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Narrative Equipment tried unequipping your item, but your pawn doesn't have an Equipment Component added. Please add one."));
	}
}

#undef LOCTEXT_NAMESPACE