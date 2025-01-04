// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Consumable.h"
#include "GameplayAbilities/Public/AttributeSet.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Consumable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Consumable();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Consumable_NoRegister();
NINJAINVENTORYGAMEPLAY_API UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Enum EConsumableItemCharges
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsumableItemCharges;
static UEnum* EConsumableItemCharges_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConsumableItemCharges.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConsumableItemCharges.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("EConsumableItemCharges"));
	}
	return Z_Registration_Info_UEnum_EConsumableItemCharges.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UEnum* StaticEnum<EConsumableItemCharges>()
{
	return EConsumableItemCharges_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Determines how charges are determined for a consumable.\n */" },
		{ "GameplayAttribute.Comment", "/** A gameplay attribute will be used to determine charges. */" },
		{ "GameplayAttribute.Name", "EConsumableItemCharges::GameplayAttribute" },
		{ "GameplayAttribute.ToolTip", "A gameplay attribute will be used to determine charges." },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "None.Comment", "/** The framework won't track charges for this item. */" },
		{ "None.Name", "EConsumableItemCharges::None" },
		{ "None.ToolTip", "The framework won't track charges for this item." },
		{ "StackFragment.Comment", "/** The item stack will be used to determine consumption. */" },
		{ "StackFragment.Name", "EConsumableItemCharges::StackFragment" },
		{ "StackFragment.ToolTip", "The item stack will be used to determine consumption." },
		{ "ToolTip", "Determines how charges are determined for a consumable." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConsumableItemCharges::GameplayAttribute", (int64)EConsumableItemCharges::GameplayAttribute },
		{ "EConsumableItemCharges::StackFragment", (int64)EConsumableItemCharges::StackFragment },
		{ "EConsumableItemCharges::None", (int64)EConsumableItemCharges::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	nullptr,
	"EConsumableItemCharges",
	"EConsumableItemCharges",
	Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges()
{
	if (!Z_Registration_Info_UEnum_EConsumableItemCharges.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsumableItemCharges.InnerSingleton, Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConsumableItemCharges.InnerSingleton;
}
// End Enum EConsumableItemCharges

// Begin Class UItemFragment_Consumable Function Consume
struct Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics
{
	struct ItemFragment_Consumable_eventConsume_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Consumes the provided item by sending the appropriate Gameplay Event.\n\x09 *\n\x09 * Consuming an item is ultimately done by the Ability System, using the Consume Gameplay Ability,\n\x09 * which is also responsible for playing an animation related to the consumable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Consumes the provided item by sending the appropriate Gameplay Event.\n\nConsuming an item is ultimately done by the Ability System, using the Consume Gameplay Ability,\nwhich is also responsible for playing an animation related to the consumable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventConsume_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Consumable, nullptr, "Consume", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::ItemFragment_Consumable_eventConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::ItemFragment_Consumable_eventConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Consumable_Consume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Consumable_Consume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Consumable::execConsume)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Consume(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Consumable Function Consume

// Begin Class UItemFragment_Consumable Function GetCharges
struct Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics
{
	struct ItemFragment_Consumable_eventGetCharges_Parms
	{
		EConsumableItemCharges ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the strategy used by this consumable to track its charges.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Provides the strategy used by this consumable to track its charges." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetCharges_Parms, ReturnValue), Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges, METADATA_PARAMS(0, nullptr) }; // 419731972
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Consumable, nullptr, "GetCharges", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::ItemFragment_Consumable_eventGetCharges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::ItemFragment_Consumable_eventGetCharges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Consumable_GetCharges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Consumable_GetCharges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Consumable::execGetCharges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EConsumableItemCharges*)Z_Param__Result=P_THIS->GetCharges();
	P_NATIVE_END;
}
// End Class UItemFragment_Consumable Function GetCharges

// Begin Class UItemFragment_Consumable Function GetChargesAttribute
struct Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics
{
	struct ItemFragment_Consumable_eventGetChargesAttribute_Parms
	{
		FGameplayAttribute ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Attribute used to track this consumable's charges.\n\x09 * Only set if the charges are tracked via Gameplay Attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Provides the Gameplay Attribute used to track this consumable's charges.\nOnly set if the charges are tracked via Gameplay Attributes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetChargesAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Consumable, nullptr, "GetChargesAttribute", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::ItemFragment_Consumable_eventGetChargesAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::ItemFragment_Consumable_eventGetChargesAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Consumable::execGetChargesAttribute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAttribute*)Z_Param__Result=P_THIS->GetChargesAttribute();
	P_NATIVE_END;
}
// End Class UItemFragment_Consumable Function GetChargesAttribute

// Begin Class UItemFragment_Consumable Function GetCurrentCharges
struct Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics
{
	struct ItemFragment_Consumable_eventGetCurrentCharges_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Counts the amount of charges currently available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Counts the amount of charges currently available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetCurrentCharges_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetCurrentCharges_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Consumable, nullptr, "GetCurrentCharges", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::ItemFragment_Consumable_eventGetCurrentCharges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::ItemFragment_Consumable_eventGetCurrentCharges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Consumable::execGetCurrentCharges)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentCharges(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Consumable Function GetCurrentCharges

// Begin Class UItemFragment_Consumable Function GetEffectClass
struct Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics
{
	struct ItemFragment_Consumable_eventGetEffectClass_Parms
	{
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Effect class to be applied when the item is consumed.\n\x09 * Should always be valid for a consumable that has been properly configured.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Provides the Gameplay Effect class to be applied when the item is consumed.\nShould always be valid for a consumable that has been properly configured." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetEffectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Consumable, nullptr, "GetEffectClass", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::ItemFragment_Consumable_eventGetEffectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::ItemFragment_Consumable_eventGetEffectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Consumable::execGetEffectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetEffectClass();
	P_NATIVE_END;
}
// End Class UItemFragment_Consumable Function GetEffectClass

// Begin Class UItemFragment_Consumable Function GetEffectLevel
struct Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics
{
	struct ItemFragment_Consumable_eventGetEffectLevel_Parms
	{
		const UNinjaInventoryItem* Item;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the level at which the Gameplay Effect should be applied.\n\x09 *\n\x09 * This considers both the fragment settings and if necessary, tries to retrieve the level\n\x09 * from the appropriate fragment, instead of using the static value set directly in its properties.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Provides the level at which the Gameplay Effect should be applied.\n\nThis considers both the fragment settings and if necessary, tries to retrieve the level\nfrom the appropriate fragment, instead of using the static value set directly in its properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetEffectLevel_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Consumable_eventGetEffectLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Consumable, nullptr, "GetEffectLevel", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::ItemFragment_Consumable_eventGetEffectLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::ItemFragment_Consumable_eventGetEffectLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Consumable::execGetEffectLevel)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEffectLevel(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Consumable Function GetEffectLevel

// Begin Class UItemFragment_Consumable
void UItemFragment_Consumable::StaticRegisterNativesUItemFragment_Consumable()
{
	UClass* Class = UItemFragment_Consumable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Consume", &UItemFragment_Consumable::execConsume },
		{ "GetCharges", &UItemFragment_Consumable::execGetCharges },
		{ "GetChargesAttribute", &UItemFragment_Consumable::execGetChargesAttribute },
		{ "GetCurrentCharges", &UItemFragment_Consumable::execGetCurrentCharges },
		{ "GetEffectClass", &UItemFragment_Consumable::execGetEffectClass },
		{ "GetEffectLevel", &UItemFragment_Consumable::execGetEffectLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Consumable);
UClass* Z_Construct_UClass_UItemFragment_Consumable_NoRegister()
{
	return UItemFragment_Consumable::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Consumable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Enables the backing item to be consumed, via the Consume Gameplay Ability.\n *\n * Consuming the item applies the Gameplay Effect set in the Fragment and optionally handles charges,\n * as per the strategy also set in the fragment (Gameplay Attribute or Stack Fragment).\n *\n * The Consume Fragment supports the \"Consume\" operation, which just triggers the backing Gameplay\n * Ability, responsible for the GAS aspects and Animation.\n */" },
		{ "DisplayName", "Consumable" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Enables the backing item to be consumed, via the Consume Gameplay Ability.\n\nConsuming the item applies the Gameplay Effect set in the Fragment and optionally handles charges,\nas per the strategy also set in the fragment (Gameplay Attribute or Stack Fragment).\n\nThe Consume Fragment supports the \"Consume\" operation, which just triggers the backing Gameplay\nAbility, responsible for the GAS aspects and Animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charges_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** How charges are consumed for this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "How charges are consumed for this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargesAttribute_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Gameplay Attribute used to determine charges for this item.\n\x09 *\n\x09 * If set to GameplayAttribute, then make sure to reduce charges in the Effect Class\n\x09 * applied when the item is consumed (EffectClass).\n\x09 */" },
		{ "EditCondition", "Charges == EConsumableItemCharges::GameplayAttribute" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Gameplay Attribute used to determine charges for this item.\n\nIf set to GameplayAttribute, then make sure to reduce charges in the Effect Class\napplied when the item is consumed (EffectClass)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Gameplay effect applied when the item is consumed.\n\x09 *\n\x09 * Multiple consumable qualities or strengths can be reflected by multiple levels in\n\x09 * the same Gameplay Effect class, which is useful to represent more items with the\n\x09 * same Gameplay Effect configuration.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Gameplay effect applied when the item is consumed.\n\nMultiple consumable qualities or strengths can be reflected by multiple levels in\nthe same Gameplay Effect class, which is useful to represent more items with the\nsame Gameplay Effect configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseItemLevelAsEffectLevel_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/**\n\x09 * If set to true, uses the backing Item's level as the Effect Level.\n\x09 *\n\x09 * If the item does not have a Fragment that can produce an Item Level (implementations\n\x09 * of the Upgradeable Item interface, such as the Level Item Fragment), then the value\n\x09 * set for Effect Level is used instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "If set to true, uses the backing Item's level as the Effect Level.\n\nIf the item does not have a Fragment that can produce an Item Level (implementations\nof the Upgradeable Item interface, such as the Level Item Fragment), then the value\nset for Effect Level is used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Level used while applying the consumable Gameplay Effect.\n\x09 * Can be overriden by the Item Level, if the fragment is configured to do so.\n\x09 */" },
		{ "EditCondition", "!bUseItemLevelAsEffectLevel" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Level used while applying the consumable Gameplay Effect.\nCan be overriden by the Item Level, if the fragment is configured to do so." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeEventTag_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Tag that will trigger the proper consume gameplay event.\n\x09 *\n\x09 * This has to match the Gameplay Ability that will be triggered when the Consume\n\x09 * Operation is invoked, so the item can be properly consumed.\n\x09 *\n\x09 * The Consume Operation always happens via Gameplay Abilities, so make sure that\n\x09 * the appropriate Consume Gameplay Ability is assigned to the Inventory Avatar!\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Consumable.h" },
		{ "ToolTip", "Tag that will trigger the proper consume gameplay event.\n\nThis has to match the Gameplay Ability that will be triggered when the Consume\nOperation is invoked, so the item can be properly consumed.\n\nThe Consume Operation always happens via Gameplay Abilities, so make sure that\nthe appropriate Consume Gameplay Ability is assigned to the Inventory Avatar!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Charges_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Charges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChargesAttribute;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static void NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseItemLevelAsEffectLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumeEventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Consumable_Consume, "Consume" }, // 1406393252
		{ &Z_Construct_UFunction_UItemFragment_Consumable_GetCharges, "GetCharges" }, // 3010507964
		{ &Z_Construct_UFunction_UItemFragment_Consumable_GetChargesAttribute, "GetChargesAttribute" }, // 3045345250
		{ &Z_Construct_UFunction_UItemFragment_Consumable_GetCurrentCharges, "GetCurrentCharges" }, // 976231753
		{ &Z_Construct_UFunction_UItemFragment_Consumable_GetEffectClass, "GetEffectClass" }, // 3362834010
		{ &Z_Construct_UFunction_UItemFragment_Consumable_GetEffectLevel, "GetEffectLevel" }, // 4228471250
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Consumable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_Charges_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_Charges = { "Charges", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Consumable, Charges), Z_Construct_UEnum_NinjaInventoryGameplay_EConsumableItemCharges, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charges_MetaData), NewProp_Charges_MetaData) }; // 419731972
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_ChargesAttribute = { "ChargesAttribute", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Consumable, ChargesAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargesAttribute_MetaData), NewProp_ChargesAttribute_MetaData) }; // 2792951819
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Consumable, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
void Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit(void* Obj)
{
	((UItemFragment_Consumable*)Obj)->bUseItemLevelAsEffectLevel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_bUseItemLevelAsEffectLevel = { "bUseItemLevelAsEffectLevel", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Consumable), &Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_bUseItemLevelAsEffectLevel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseItemLevelAsEffectLevel_MetaData), NewProp_bUseItemLevelAsEffectLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Consumable, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_ConsumeEventTag = { "ConsumeEventTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Consumable, ConsumeEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeEventTag_MetaData), NewProp_ConsumeEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Consumable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_Charges_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_Charges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_ChargesAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_bUseItemLevelAsEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_EffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Consumable_Statics::NewProp_ConsumeEventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Consumable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Consumable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Consumable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Consumable_Statics::ClassParams = {
	&UItemFragment_Consumable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Consumable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Consumable_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Consumable_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Consumable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Consumable()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Consumable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Consumable.OuterSingleton, Z_Construct_UClass_UItemFragment_Consumable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Consumable.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Consumable>()
{
	return UItemFragment_Consumable::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Consumable);
UItemFragment_Consumable::~UItemFragment_Consumable() {}
// End Class UItemFragment_Consumable

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConsumableItemCharges_StaticEnum, TEXT("EConsumableItemCharges"), &Z_Registration_Info_UEnum_EConsumableItemCharges, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 419731972U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Consumable, UItemFragment_Consumable::StaticClass, TEXT("UItemFragment_Consumable"), &Z_Registration_Info_UClass_UItemFragment_Consumable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Consumable), 81657699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_763209285(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
