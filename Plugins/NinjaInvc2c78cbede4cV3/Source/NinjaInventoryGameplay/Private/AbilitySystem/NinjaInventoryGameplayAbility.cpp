// Ninja Bear Studio Inc., all rights reserved.
#include "AbilitySystem/NinjaInventoryGameplayAbility.h"

#include "NinjaEquipmentFunctionLibrary.h"
#include "NinjaInventoryFunctionLibrary.h"
#include "GameFramework/NinjaEquipment.h"

UNinjaInventoryGameplayAbility::UNinjaInventoryGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

UNinjaEquipment* UNinjaInventoryGameplayAbility::GetEquipmentInstance() const
{
	const FGameplayAbilitySpec* Spec = GetCurrentAbilitySpec();
	if (Spec != nullptr)
	{
		return Cast<UNinjaEquipment>(Spec->SourceObject.Get());
	}

	return nullptr;	
}

UNinjaInventoryItem* UNinjaInventoryGameplayAbility::GetItemInstance() const
{
	const UNinjaEquipment* Equipment = GetEquipmentInstance();
	if (IsValid(Equipment))
	{
		return Equipment->GetItem();
	}
	
	return nullptr;
}

UNinjaInventoryManagerComponent* UNinjaInventoryGameplayAbility::GetInventoryManager() const
{
	const AActor* Avatar = GetAvatarActorFromActorInfo();
	return UNinjaInventoryFunctionLibrary::GetInventoryManager(Avatar);
}

UNinjaEquipmentManagerComponent* UNinjaInventoryGameplayAbility::GetEquipmentManager() const
{
	const AActor* Avatar = GetAvatarActorFromActorInfo();
	return UNinjaEquipmentFunctionLibrary::GetEquipmentManager(Avatar);
}

FGameplayEffectContextHandle UNinjaInventoryGameplayAbility::MakeEffectContext(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo) const
{
	FGameplayEffectContextHandle Context = Super::MakeEffectContext(Handle, ActorInfo);

	// Enhance the Context with the equipment-related information.
	const UNinjaEquipment* EquipmentInstance = GetEquipmentInstance();
	if (IsValid(EquipmentInstance))
	{
		AActor* EffectCauser = EquipmentInstance->GetEffectCauserActor();
		if (EffectCauser == nullptr)
		{
			// Keep the original avatar if we don't have a specific causer.
			EffectCauser = ActorInfo->AvatarActor.Get();
		}

		Context.AddSourceObject(EquipmentInstance);
		Context.AddInstigator(ActorInfo->OwnerActor.Get(), EffectCauser);
	}
	
	return Context;
}

void UNinjaInventoryGameplayAbility::AddEquipmentDetailsToCueParameters(FGameplayCueParameters& CueParameters) const
{
	const UNinjaEquipment* EquipmentInstance = GetEquipmentInstance();
	if (ensure(IsValid(EquipmentInstance)))
	{
		CueParameters.SourceObject = EquipmentInstance;
		CueParameters.EffectCauser = EquipmentInstance->GetEffectCauserActor(); 
	}

	CueParameters.Instigator = GetAvatarActorFromActorInfo();
}
