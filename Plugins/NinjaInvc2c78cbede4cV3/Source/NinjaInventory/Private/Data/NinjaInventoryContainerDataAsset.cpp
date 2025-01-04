// Ninja Bear Studio Inc., all rights reserved.
#include "Data/NinjaInventoryContainerDataAsset.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"
#include "NinjaInventorySettings.h"
#include "NinjaInventoryTags.h"
#include "Components/NinjaInventoryManagerComponent.h"
#include "Data/NinjaInventoryItemDataAsset.h"
#include "GameFramework/NinjaInventoryContainer.h"
#include "GameFramework/NinjaInventoryItem.h"
#include "Kismet/KismetMathLibrary.h"

const FPrimaryAssetType	UNinjaInventoryContainerDataAsset::DataAssetType = INVENTORY_CONTAINER_DATA_ASSET_NAME;

UNinjaInventoryContainerDataAsset::UNinjaInventoryContainerDataAsset()
{
	ContainerClass = GetDefault<UNinjaInventorySettings>()->DefaultContainerInstance;
	DisplayName = NSLOCTEXT("ContainerData", "SampleName", "Container Name");
	
	GameplayTags = FGameplayTagContainer::EmptyContainer;
	Priority = 1;
	Slots = 1;

	DefaultStateTag = FGameplayTag::EmptyTag;
	SlotsAttribute = FGameplayAttribute();

	ItemCompatibilityQuery.Build(FGameplayTagQueryExpression()
		.AllTagsMatch()
		.AddTag(Tag_Inventory_Item), TEXT("Supports any item."));	
}

FPrimaryAssetId UNinjaInventoryContainerDataAsset::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(DataAssetType, GetFName());
}

TSubclassOf<UNinjaInventoryContainer> UNinjaInventoryContainerDataAsset::GetDefaultContainerClass() const
{
	return ContainerClass;
}

FGameplayTag UNinjaInventoryContainerDataAsset::GetDefaultStateTagOrElse(const FGameplayTag& ElseStateTag) const
{
	const FGameplayTag Tag = GetDefaultStateTag();
	return Tag.IsValid() ? Tag : ElseStateTag;
}

bool UNinjaInventoryContainerDataAsset::IsDefaultContainer() const
{
	return GameplayTags.HasTagExact(Tag_Inventory_Container_Default);
}

int32 UNinjaInventoryContainerDataAsset::GetSlots(const UNinjaInventoryManagerComponent* Inventory) const
{
	if (IsValid(Inventory) && SlotsAttribute.IsValid())
	{
		const AActor* AbilitiesOwner = Inventory->GetOwner();
		const UAbilitySystemComponent* Abilities = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(AbilitiesOwner);

		if (IsValid(Abilities) && Abilities->HasAttributeSetForAttribute(SlotsAttribute))
		{
			const float AttributeValue = Abilities->GetNumericAttribute(SlotsAttribute);
			if (AttributeValue > 0.f)
			{
				return UKismetMathLibrary::FFloor(AttributeValue);
			}
		}
	}

	return Slots;
}

bool UNinjaInventoryContainerDataAsset::SupportsItemData(const UNinjaInventoryItemDataAsset* ItemDefinition) const
{
	if (IsValid(ItemDefinition))
	{
		const FGameplayTagContainer ItemTags = ItemDefinition->GetGameplayTags();
		return ItemCompatibilityQuery.Matches(ItemTags);	
	}

	return false;
}

bool UNinjaInventoryContainerDataAsset::SupportsItem(const UNinjaInventoryItem* Item) const
{
	if (IsValid(Item))
	{
		return SupportsItemData(Item->GetData());	
	}

	return false;
}

#if WITH_EDITOR
bool UNinjaInventoryContainerDataAsset::CanEditChange(const FProperty* InProperty) const
{
	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UNinjaInventoryContainerDataAsset, Slots))
	{
		// Enable the "Slots" property if this is not an equipment container and has no slot attribute.
		return !(GameplayTags.HasTag(Tag_Inventory_Container_Equipment) || SlotsAttribute.IsValid());
	}

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UNinjaInventoryContainerDataAsset, SlotsAttribute))
	{
		// Enable the "Slots Attribute" property if this is not an equipment container.
		return !GameplayTags.HasTag(Tag_Inventory_Container_Equipment);
	}
	
	return Super::CanEditChange(InProperty);;
}

void UNinjaInventoryContainerDataAsset::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName PropertyName = PropertyChangedEvent.GetPropertyName();
	if (PropertyName == GET_MEMBER_NAME_CHECKED(UNinjaInventoryContainerDataAsset, GameplayTags))
	{
		if (GameplayTags.HasTag(Tag_Inventory_Container_Equipment))
		{
			Slots = 1;
			SlotsAttribute = FGameplayAttribute();
		}
	}
}
#endif
