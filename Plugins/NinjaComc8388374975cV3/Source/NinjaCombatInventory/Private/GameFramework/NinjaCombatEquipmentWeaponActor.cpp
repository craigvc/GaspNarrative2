// Ninja Bear Studio Inc., all rights reserved.
#include "GameFramework/NinjaCombatEquipmentWeaponActor.h"

#if NBS_WITH_INVENTORY
#include "Components/NinjaEquipmentManagerComponent.h"
#include "Components/NinjaEquipmentReceiverComponent.h"
#include "GameFramework/NinjaEquipment.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "GameFramework/ItemFragments/ItemFragment_Level.h"
#endif

ANinjaCombatEquipmentWeaponActor::ANinjaCombatEquipmentWeaponActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bUseItemLevelAsEffectLevel = true;

#if NBS_WITH_INVENTORY
	
	static const FName EquipmentReceiverName = TEXT("EquipmentReceiver");
	EquipmentReceiver = CreateDefaultSubobject<UNinjaEquipmentReceiverComponent>(EquipmentReceiverName);
	
#endif
}

float ANinjaCombatEquipmentWeaponActor::GetHitEffectLevel_Implementation() const
{
	// Consider the fallback level as the default effect set in the class.
	float ItemLevel = Super::GetHitEffectLevel_Implementation();

	if (!bUseItemLevelAsEffectLevel)
	{
		return ItemLevel;
	}

#if NBS_WITH_INVENTORY

	if (IsValid(EquipmentReceiver) && EquipmentReceiver->Implements<UEquipmentActorInterface>())
	{
		const UNinjaEquipment* Equipment = IEquipmentActorInterface::Execute_GetEquipment(EquipmentReceiver);
		if (!IsValid(Equipment))
		{
			return ItemLevel;
		}

		const UNinjaInventoryItem* Item = Equipment->GetItem();
		check(IsValid(Item));

		const UItemFragment_Level* LevelFragment = Item->FindFragment<UItemFragment_Level>();
		if (IsValid(LevelFragment))
		{
			ItemLevel = LevelFragment->GetLevel(Item);
		}
	}

#endif
	
	return ItemLevel;
}

AActor* ANinjaCombatEquipmentWeaponActor::GetWeaponOwner_Implementation() const
{
#if NBS_WITH_INVENTORY

	if (IsValid(EquipmentReceiver) && EquipmentReceiver->Implements<UEquipmentActorInterface>())
	{
		const UNinjaEquipment* Equipment = IEquipmentActorInterface::Execute_GetEquipment(EquipmentReceiver);
		if (IsValid(Equipment))
		{
			return Equipment->GetEquipmentManager()->GetOwner();
		}
	}
	
#endif

	// No integration or no receiver/equipment. Use the default weapon method.
	// It will most likely attempt to find the actor to which this one is attached to.
	//
	return Super::GetWeaponOwner_Implementation();
}
