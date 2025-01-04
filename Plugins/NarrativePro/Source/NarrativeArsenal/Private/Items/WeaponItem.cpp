// Copyright Narrative Tools 2024. 


#include "Items/WeaponItem.h"
#include "Items/AmmoItem.h"
#include <AbilitySystemComponent.h>
#include <AbilitySystemGlobals.h>
#include <GameplayTagContainer.h>
#include <GameFramework/Character.h>
#include "NarrativeGameplayTags.h"
#include "NarrativeItem.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "ArsenalSettings.h"

#define LOCTEXT_NAMESPACE "WeaponItem"

#define ItemStat_Damage "Damage"

UWeaponItem::UWeaponItem()
{
	EquippableSlot = EEquippableSlot::ES_Weapon;
	WeaponVisualAttachBone = FName("hand_r");
	WeaponVisualHolsteredAttachBone = FName("Socket_Holster");

	Stats.Add(FNarrativeItemStat(LOCTEXT("DamageStatDisplayText", "Base Damage"), ItemStat_Damage));
	TraceData.TraceDistance = 10000.f;

	BashTraceData.TraceDistance = 90.f;
	BashTraceData.TraceRadius = 50.f; 

	AttackDamage = 10.f;
}

FString UWeaponItem::GetStringVariable_Implementation(const FString& VariableName)
{
	if (VariableName == ItemStat_Damage)
	{
		if (AttackDamage > 0.f)
		{
			return FString::SanitizeFloat(AttackDamage);
		}
		else
		{
			return FString();
		}
	}

	return Super::GetStringVariable_Implementation(VariableName);
}

//void UWeaponItem::HandleHolster()
//{
//	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
//	{
//		CharacterOwner->AttachWeaponVisual(WeaponVisualHolsteredAttachBone, WeaponVisualHolsteredAttachOffset);
//		CharacterOwner->SetAnimBPOverride(nullptr);
//	}
//}
//
//void UWeaponItem::HandleUnholster()
//{
//	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
//	{
//		CharacterOwner->AttachWeaponVisual(WeaponVisualAttachBone, WeaponVisualAttachOffset);
//		CharacterOwner->SetAnimBPOverride(WeaponAnimLayer);
//	}
//}

void UWeaponItem::ModifyEquipmentEffectSpec(FGameplayEffectSpec* Spec)
{
	Super::ModifyEquipmentEffectSpec(Spec);

	//Weapon item overrides this to add Attack Damage modifier to weapon equipment
	if (Spec)
	{
		Spec->SetSetByCallerMagnitude(FNarrativeGameplayTags::Get().SetByCaller_AttackDamage, AttackDamage);
	}
}

bool UWeaponItem::ConsumeAmmo()
{
	if (OwningInventory && OwningInventory->GetOwnerRole() >= ROLE_Authority)
	{
		if (UNarrativeItem* Ammo = OwningInventory->FindItemByClass(RequiredAmmo))
		{
			OwningInventory->ConsumeItem(Ammo);
			--AmmoInClip;
			return true;
		}
	}
	return false;
}

bool UWeaponItem::Reload()
{
	if (!RequiredAmmo.IsNull())
	{
		if (OwningInventory)
		{
			if (UNarrativeItem* Ammo = OwningInventory->FindItemByClass(RequiredAmmo))
			{
				AmmoInClip = FMath::Min(Ammo->GetQuantity(), ClipSize);

				return true;
			}
		}
	}

	return false; 
}

bool UWeaponItem::IsHolstered() const
{
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		return CharacterOwner->IsWeaponHolstered();
	}

	return true; 
}

bool UWeaponItem::WantsReload() const
{
	if (RequiredAmmo.IsNull())
	{
		return false;
	} 

	return AmmoInClip <= 0;
}

bool UWeaponItem::HasAmmo() const
{
	if (RequiredAmmo.IsNull())
	{
		return true;
	} 

    return AmmoInClip > 0;
}

bool UWeaponItem::CanFire_Implementation() const
{
	//Dont check ammo in clip because ability still needs to activate 
	return HasAmmo() && !IsHolstered();
}

void UWeaponItem::HandleEquip_Implementation()
{
	Super::HandleEquip_Implementation();

	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		bool bShouldHolster = true;
		
		// Ask settings whether we should holster by default 
		if (const UArsenalSettings* Settings = GetDefault<UArsenalSettings>())
		{
			bShouldHolster = Settings->bHolsterWeaponOnEquip;
		}

		CharacterOwner->SetWeaponVisual(WeaponVisualClass, WeaponVisualHolsteredAttachBone, WeaponVisualHolsteredAttachOffset);

		CharacterOwner->SetWeaponHolstered(bShouldHolster);
	}
}

void UWeaponItem::HandleUnequip_Implementation()
{
	Super::HandleUnequip_Implementation();

	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		CharacterOwner->RemoveWeaponVisual();
	}
}

#undef LOCTEXT_NAMESPACE
