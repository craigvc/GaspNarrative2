// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryGameplayEffectItemFragment() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function ApplyEffect
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics
{
	struct NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms
	{
		UNinjaInventoryItem* Item;
		float EffectLevelOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|GameplayFragments" },
		{ "Comment", "/**\n\x09 * Applies the Gameplay Effect to the Item's Ability System.\n\x09 *\n\x09 * @param Item\n\x09 *\x09\x09Item related to an owner that can provide an Ability System. May provide data\n\x09 *\x09\x09will be injected into the Gameplay Effect via \"Set By Caller Magnitudes\".\n\x09 * \n\x09 * @param EffectLevelOverride\n\x09 *\x09\x09Optional parameter that overrides the level. Useful in situations where you want\n\x09 *\x09\x09to avoid extra memory lookups since a dynamic value is already available. If set to\n\x09 *\x09\x09the default value (-1), then the internal level lookup is executed.\n\x09 *\x09\x09\n\x09 * @return\n\x09 *\x09\x09True if the Gameplay Effect was successfully. It does not mean that the Out Handle\n\x09 *\x09\x09will be valid, as Instant Gameplay Effects won't have an Active Handle.\n\x09 */" },
		{ "CPP_Default_EffectLevelOverride", "-1.000000" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Applies the Gameplay Effect to the Item's Ability System.\n\n@param Item\n             Item related to an owner that can provide an Ability System. May provide data\n             will be injected into the Gameplay Effect via \"Set By Caller Magnitudes\".\n\n@param EffectLevelOverride\n             Optional parameter that overrides the level. Useful in situations where you want\n             to avoid extra memory lookups since a dynamic value is already available. If set to\n             the default value (-1), then the internal level lookup is executed.\n\n@return\n             True if the Gameplay Effect was successfully. It does not mean that the Out Handle\n             will be valid, as Instant Gameplay Effects won't have an Active Handle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevelOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_EffectLevelOverride = { "EffectLevelOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms, EffectLevelOverride), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_EffectLevelOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "ApplyEffect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventApplyEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execApplyEffect)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EffectLevelOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyEffect(Z_Param_Item,Z_Param_EffectLevelOverride);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function ApplyEffect

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function CanApplyEffect
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics
{
	struct NinjaInventoryGameplayEffectItemFragment_eventCanApplyEffect_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|GameplayFragments" },
		{ "Comment", "/**\n\x09 * Checks if the Effect can be applied.\n\x09 *\n\x09 * By default, checks if the item is valid and if the effect has not been applied yet.\n\x09 * Extend (or fully override) this behavior to create different checks in subclasses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Checks if the Effect can be applied.\n\nBy default, checks if the item is valid and if the effect has not been applied yet.\nExtend (or fully override) this behavior to create different checks in subclasses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventCanApplyEffect_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayEffectItemFragment_eventCanApplyEffect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayEffectItemFragment_eventCanApplyEffect_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "CanApplyEffect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventCanApplyEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventCanApplyEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execCanApplyEffect)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanApplyEffect(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function CanApplyEffect

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function DetermineEffectLevel
struct NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms
{
	const UNinjaInventoryItem* Item;
	float OutEffectLevel;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel = FName(TEXT("DetermineEffectLevel"));
bool UNinjaInventoryGameplayEffectItemFragment::DetermineEffectLevel(const UNinjaInventoryItem* Item, float& OutEffectLevel) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms Parms;
		Parms.Item=Item;
		Parms.OutEffectLevel=OutEffectLevel;
		const_cast<UNinjaInventoryGameplayEffectItemFragment*>(this)->ProcessEvent(Func,&Parms);
		OutEffectLevel=Parms.OutEffectLevel;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryGameplayEffectItemFragment*>(this)->DetermineEffectLevel_Implementation(Item, OutEffectLevel);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Determines an effect level to be used.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09Item optionally used to determine the level to be applied.\n\x09 * @param OutEffectLevel\x09Output Parameter with the level override.\n\x09 * @return\x09\x09\x09\x09\x09""Boolean informing if the value was overriden or not.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Determines an effect level to be used.\n\n@param Item                          Item optionally used to determine the level to be applied.\n@param OutEffectLevel        Output Parameter with the level override.\n@return                                      Boolean informing if the value was overriden or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutEffectLevel_MetaData[] = {
		{ "DisplayName", "Effect Level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutEffectLevel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_OutEffectLevel = { "OutEffectLevel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms, OutEffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutEffectLevel_MetaData), NewProp_OutEffectLevel_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_OutEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "DetermineEffectLevel", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::PropPointers), sizeof(NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryGameplayEffectItemFragment_eventDetermineEffectLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execDetermineEffectLevel)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutEffectLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DetermineEffectLevel_Implementation(Z_Param_Item,Z_Param_Out_OutEffectLevel);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function DetermineEffectLevel

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function GetEffectLevel
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics
{
	struct NinjaInventoryGameplayEffectItemFragment_eventGetEffectLevel_Parms
	{
		const UNinjaInventoryItem* Item;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|GameplayFragments" },
		{ "Comment", "/**\n\x09 * Provides the Effect Level that will be applied for a certain item.\n\x09 * \n\x09 * Classes can determine if this will return something different from the value set\n\x09 * in this Fragment's configuration, by implementing the \"Determine Effect Level\" function. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Provides the Effect Level that will be applied for a certain item.\n\nClasses can determine if this will return something different from the value set\nin this Fragment's configuration, by implementing the \"Determine Effect Level\" function." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventGetEffectLevel_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventGetEffectLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "GetEffectLevel", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::NinjaInventoryGameplayEffectItemFragment_eventGetEffectLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::NinjaInventoryGameplayEffectItemFragment_eventGetEffectLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execGetEffectLevel)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEffectLevel(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function GetEffectLevel

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function GetMagnitudes
struct NinjaInventoryGameplayEffectItemFragment_eventGetMagnitudes_Parms
{
	const UNinjaInventoryItem* Item;
	TMap<FGameplayTag,float> OutMagnitudes;
};
static const FName NAME_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes = FName(TEXT("GetMagnitudes"));
void UNinjaInventoryGameplayEffectItemFragment::GetMagnitudes(const UNinjaInventoryItem* Item, TMap<FGameplayTag,float>& OutMagnitudes) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryGameplayEffectItemFragment_eventGetMagnitudes_Parms Parms;
		Parms.Item=Item;
		Parms.OutMagnitudes=OutMagnitudes;
		const_cast<UNinjaInventoryGameplayEffectItemFragment*>(this)->ProcessEvent(Func,&Parms);
		OutMagnitudes=Parms.OutMagnitudes;
	}
	else
	{
		const_cast<UNinjaInventoryGameplayEffectItemFragment*>(this)->GetMagnitudes_Implementation(Item, OutMagnitudes);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Provides Magnitudes that should be applied to the Spec, via data tags.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Provides Magnitudes that should be applied to the Spec, via data tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMagnitudes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMagnitudes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMagnitudes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventGetMagnitudes_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_OutMagnitudes_ValueProp = { "OutMagnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_OutMagnitudes_Key_KeyProp = { "OutMagnitudes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_OutMagnitudes = { "OutMagnitudes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventGetMagnitudes_Parms, OutMagnitudes), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_OutMagnitudes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_OutMagnitudes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::NewProp_OutMagnitudes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "GetMagnitudes", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::PropPointers), sizeof(NinjaInventoryGameplayEffectItemFragment_eventGetMagnitudes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryGameplayEffectItemFragment_eventGetMagnitudes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execGetMagnitudes)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_TMAP_REF(FGameplayTag,float,Z_Param_Out_OutMagnitudes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMagnitudes_Implementation(Z_Param_Item,Z_Param_Out_OutMagnitudes);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function GetMagnitudes

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function HasAppliedEffect
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics
{
	struct NinjaInventoryGameplayEffectItemFragment_eventHasAppliedEffect_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|GameplayFragments" },
		{ "Comment", "/**\n\x09 * Checks if the memory related to this fragment denotes an applied effect.\n\x09 *\n\x09 * @param Item\x09\x09Item that has the memory stored. Must be provided.\n\x09 * @return\x09\x09\x09True if the memory indicates that the effect was applied, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Checks if the memory related to this fragment denotes an applied effect.\n\n@param Item          Item that has the memory stored. Must be provided.\n@return                      True if the memory indicates that the effect was applied, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventHasAppliedEffect_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayEffectItemFragment_eventHasAppliedEffect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayEffectItemFragment_eventHasAppliedEffect_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "HasAppliedEffect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventHasAppliedEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventHasAppliedEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execHasAppliedEffect)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAppliedEffect(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function HasAppliedEffect

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function RemoveEffect
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics
{
	struct NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms
	{
		UNinjaInventoryItem* Item;
		int32 StacksToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|GameplayFragments" },
		{ "Comment", "/**\n\x09 * Removes the Gameplay Effect from the Item's Ability System.\n\x09 *\n\x09 * Attempts to remove the Gameplay Effect from an Active Handle stored in the item.\n\x09 * \n\x09 * @param Item\x09\x09\x09\x09Item related to an owner that can provide an Ability System.\n\x09 * @param StacksToRemove\x09""Effect Stacks to remove. Defaults to 1. A value of -1 removes all stacks.\n\x09 * @return\x09\x09\x09\x09\x09True if an effect was removed, false otherwise.\n\x09 */" },
		{ "CPP_Default_StacksToRemove", "1" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Removes the Gameplay Effect from the Item's Ability System.\n\nAttempts to remove the Gameplay Effect from an Active Handle stored in the item.\n\n@param Item                          Item related to an owner that can provide an Ability System.\n@param StacksToRemove        Effect Stacks to remove. Defaults to 1. A value of -1 removes all stacks.\n@return                                      True if an effect was removed, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StacksToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_StacksToRemove = { "StacksToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms, StacksToRemove), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_StacksToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "RemoveEffect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::NinjaInventoryGameplayEffectItemFragment_eventRemoveEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execRemoveEffect)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_StacksToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveEffect(Z_Param_Item,Z_Param_StacksToRemove);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function RemoveEffect

// Begin Class UNinjaInventoryGameplayEffectItemFragment Function RemoveEffectByClass
struct Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics
{
	struct NinjaInventoryGameplayEffectItemFragment_eventRemoveEffectByClass_Parms
	{
		UNinjaInventoryItem* Item;
		int32 StacksToRemove;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|GameplayFragments" },
		{ "Comment", "/**\n\x09 * Removes the Gameplay Effect from the Item's Ability System.\n\x09 *\n\x09 * Attempts to remove the Gameplay Effect by the class set in this fragment. You should\n\x09 * not call this without knowing for sure that this Item/Fragment applied the Gameplay Effect,\n\x09 * otherwise you might remove an effect of the same class that was applied somewhere else!\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09Item related to an owner that can provide an Ability System.\n\x09 * @param StacksToRemove\x09""Effect Stacks to remove. Defaults to 1. A value of -1 removes all stacks.\n\x09 * @return\x09\x09\x09\x09\x09""Effects that were removed by the Effect Query.\n\x09 */" },
		{ "CPP_Default_StacksToRemove", "1" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Removes the Gameplay Effect from the Item's Ability System.\n\nAttempts to remove the Gameplay Effect by the class set in this fragment. You should\nnot call this without knowing for sure that this Item/Fragment applied the Gameplay Effect,\notherwise you might remove an effect of the same class that was applied somewhere else!\n\n@param Item                          Item related to an owner that can provide an Ability System.\n@param StacksToRemove        Effect Stacks to remove. Defaults to 1. A value of -1 removes all stacks.\n@return                                      Effects that were removed by the Effect Query." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StacksToRemove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventRemoveEffectByClass_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NewProp_StacksToRemove = { "StacksToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventRemoveEffectByClass_Parms, StacksToRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayEffectItemFragment_eventRemoveEffectByClass_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NewProp_StacksToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, nullptr, "RemoveEffectByClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NinjaInventoryGameplayEffectItemFragment_eventRemoveEffectByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::NinjaInventoryGameplayEffectItemFragment_eventRemoveEffectByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayEffectItemFragment::execRemoveEffectByClass)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_StacksToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveEffectByClass(Z_Param_Item,Z_Param_StacksToRemove);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayEffectItemFragment Function RemoveEffectByClass

// Begin Class UNinjaInventoryGameplayEffectItemFragment
void UNinjaInventoryGameplayEffectItemFragment::StaticRegisterNativesUNinjaInventoryGameplayEffectItemFragment()
{
	UClass* Class = UNinjaInventoryGameplayEffectItemFragment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEffect", &UNinjaInventoryGameplayEffectItemFragment::execApplyEffect },
		{ "CanApplyEffect", &UNinjaInventoryGameplayEffectItemFragment::execCanApplyEffect },
		{ "DetermineEffectLevel", &UNinjaInventoryGameplayEffectItemFragment::execDetermineEffectLevel },
		{ "GetEffectLevel", &UNinjaInventoryGameplayEffectItemFragment::execGetEffectLevel },
		{ "GetMagnitudes", &UNinjaInventoryGameplayEffectItemFragment::execGetMagnitudes },
		{ "HasAppliedEffect", &UNinjaInventoryGameplayEffectItemFragment::execHasAppliedEffect },
		{ "RemoveEffect", &UNinjaInventoryGameplayEffectItemFragment::execRemoveEffect },
		{ "RemoveEffectByClass", &UNinjaInventoryGameplayEffectItemFragment::execRemoveEffectByClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryGameplayEffectItemFragment);
UClass* Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_NoRegister()
{
	return UNinjaInventoryGameplayEffectItemFragment::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Fragment that handles Gameplay Effects.\n *\n * This class does not handle any lifecycle events, meaning it won't apply or remove any effects,\n * during Initialize, Apply or Revert events. Subclasses are responsible for doing so.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "A Fragment that handles Gameplay Effects.\n\nThis class does not handle any lifecycle events, meaning it won't apply or remove any effects,\nduring Initialize, Apply or Revert events. Subclasses are responsible for doing so." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectClass_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Gameplay effect applied and removed along with the Item Instance. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Gameplay effect applied and removed along with the Item Instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectLevel_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Level used to apply the effect. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryGameplayEffectItemFragment.h" },
		{ "ToolTip", "Level used to apply the effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_ApplyEffect, "ApplyEffect" }, // 3593260076
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_CanApplyEffect, "CanApplyEffect" }, // 4128895994
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_DetermineEffectLevel, "DetermineEffectLevel" }, // 3001400744
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetEffectLevel, "GetEffectLevel" }, // 766779471
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_GetMagnitudes, "GetMagnitudes" }, // 1539561186
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_HasAppliedEffect, "HasAppliedEffect" }, // 3665304997
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffect, "RemoveEffect" }, // 3229136823
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayEffectItemFragment_RemoveEffectByClass, "RemoveEffectByClass" }, // 2397591634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryGameplayEffectItemFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0024080002010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryGameplayEffectItemFragment, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectClass_MetaData), NewProp_EffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::NewProp_EffectLevel = { "EffectLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryGameplayEffectItemFragment, EffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectLevel_MetaData), NewProp_EffectLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::NewProp_EffectLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::ClassParams = {
	&UNinjaInventoryGameplayEffectItemFragment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryGameplayEffectItemFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryGameplayEffectItemFragment.OuterSingleton, Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryGameplayEffectItemFragment.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryGameplayEffectItemFragment>()
{
	return UNinjaInventoryGameplayEffectItemFragment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryGameplayEffectItemFragment);
UNinjaInventoryGameplayEffectItemFragment::~UNinjaInventoryGameplayEffectItemFragment() {}
// End Class UNinjaInventoryGameplayEffectItemFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment, UNinjaInventoryGameplayEffectItemFragment::StaticClass, TEXT("UNinjaInventoryGameplayEffectItemFragment"), &Z_Registration_Info_UClass_UNinjaInventoryGameplayEffectItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryGameplayEffectItemFragment), 930336746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_1898743830(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
