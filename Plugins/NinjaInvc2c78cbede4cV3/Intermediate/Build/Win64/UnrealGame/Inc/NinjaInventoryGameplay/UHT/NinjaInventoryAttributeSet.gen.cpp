// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/NinjaInventoryAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryAttributeSet();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UNinjaInventoryAttributeSet Function OnRep_AverageEquipmentLevel
struct Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics
{
	struct NinjaInventoryAttributeSet_eventOnRep_AverageEquipmentLevel_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAttributeSet_eventOnRep_AverageEquipmentLevel_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAttributeSet, nullptr, "OnRep_AverageEquipmentLevel", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::NinjaInventoryAttributeSet_eventOnRep_AverageEquipmentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::NinjaInventoryAttributeSet_eventOnRep_AverageEquipmentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAttributeSet::execOnRep_AverageEquipmentLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AverageEquipmentLevel(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAttributeSet Function OnRep_AverageEquipmentLevel

// Begin Class UNinjaInventoryAttributeSet Function OnRep_BackpackSlots
struct Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics
{
	struct NinjaInventoryAttributeSet_eventOnRep_BackpackSlots_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAttributeSet_eventOnRep_BackpackSlots_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAttributeSet, nullptr, "OnRep_BackpackSlots", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::NinjaInventoryAttributeSet_eventOnRep_BackpackSlots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::NinjaInventoryAttributeSet_eventOnRep_BackpackSlots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAttributeSet::execOnRep_BackpackSlots)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BackpackSlots(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAttributeSet Function OnRep_BackpackSlots

// Begin Class UNinjaInventoryAttributeSet Function OnRep_Encumbrance
struct Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics
{
	struct NinjaInventoryAttributeSet_eventOnRep_Encumbrance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAttributeSet_eventOnRep_Encumbrance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAttributeSet, nullptr, "OnRep_Encumbrance", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::NinjaInventoryAttributeSet_eventOnRep_Encumbrance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::NinjaInventoryAttributeSet_eventOnRep_Encumbrance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAttributeSet::execOnRep_Encumbrance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Encumbrance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAttributeSet Function OnRep_Encumbrance

// Begin Class UNinjaInventoryAttributeSet Function OnRep_EquipmentLevel
struct Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics
{
	struct NinjaInventoryAttributeSet_eventOnRep_EquipmentLevel_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAttributeSet_eventOnRep_EquipmentLevel_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAttributeSet, nullptr, "OnRep_EquipmentLevel", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::NinjaInventoryAttributeSet_eventOnRep_EquipmentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::NinjaInventoryAttributeSet_eventOnRep_EquipmentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAttributeSet::execOnRep_EquipmentLevel)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EquipmentLevel(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAttributeSet Function OnRep_EquipmentLevel

// Begin Class UNinjaInventoryAttributeSet Function OnRep_Wealth
struct Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics
{
	struct NinjaInventoryAttributeSet_eventOnRep_Wealth_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End Attribute Set implementation\n" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "-- End Attribute Set implementation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAttributeSet_eventOnRep_Wealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAttributeSet, nullptr, "OnRep_Wealth", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::NinjaInventoryAttributeSet_eventOnRep_Wealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::NinjaInventoryAttributeSet_eventOnRep_Wealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAttributeSet::execOnRep_Wealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Wealth(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAttributeSet Function OnRep_Wealth

// Begin Class UNinjaInventoryAttributeSet Function OnRep_WeightLimit
struct Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics
{
	struct NinjaInventoryAttributeSet_eventOnRep_WeightLimit_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryAttributeSet_eventOnRep_WeightLimit_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAttributeSet, nullptr, "OnRep_WeightLimit", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::NinjaInventoryAttributeSet_eventOnRep_WeightLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::NinjaInventoryAttributeSet_eventOnRep_WeightLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAttributeSet::execOnRep_WeightLimit)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_WeightLimit(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaInventoryAttributeSet Function OnRep_WeightLimit

// Begin Class UNinjaInventoryAttributeSet
void UNinjaInventoryAttributeSet::StaticRegisterNativesUNinjaInventoryAttributeSet()
{
	UClass* Class = UNinjaInventoryAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_AverageEquipmentLevel", &UNinjaInventoryAttributeSet::execOnRep_AverageEquipmentLevel },
		{ "OnRep_BackpackSlots", &UNinjaInventoryAttributeSet::execOnRep_BackpackSlots },
		{ "OnRep_Encumbrance", &UNinjaInventoryAttributeSet::execOnRep_Encumbrance },
		{ "OnRep_EquipmentLevel", &UNinjaInventoryAttributeSet::execOnRep_EquipmentLevel },
		{ "OnRep_Wealth", &UNinjaInventoryAttributeSet::execOnRep_Wealth },
		{ "OnRep_WeightLimit", &UNinjaInventoryAttributeSet::execOnRep_WeightLimit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryAttributeSet);
UClass* Z_Construct_UClass_UNinjaInventoryAttributeSet_NoRegister()
{
	return UNinjaInventoryAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains attributes that are related to the Inventory System.\n *\n * You can add this Attribute Set directly or extend it in your own game. Regardless of the strategy\n * used to import these attributes into your project, this class must be present to handle some inventory\n * system mechanics such as Wealth, Encumbrance and Gear Level.\n *\n * If you are not using these features, then you can skip adding this Attribute Set.\n */" },
		{ "IncludePath", "AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Contains attributes that are related to the Inventory System.\n\nYou can add this Attribute Set directly or extend it in your own game. Regardless of the strategy\nused to import these attributes into your project, this class must be present to handle some inventory\nsystem mechanics such as Wealth, Encumbrance and Gear Level.\n\nIf you are not using these features, then you can skip adding this Attribute Set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wealth_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Current amount of wealth accumulated by the owner.\n\x09 *\n\x09 * This is an arbitrary value that can represent any type of currency such as\n\x09 * \"Money\", \"Credits\", \"Souls\", \"Points\", etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Current amount of wealth accumulated by the owner.\n\nThis is an arbitrary value that can represent any type of currency such as\n\"Money\", \"Credits\", \"Souls\", \"Points\", etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentLevel_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Aggregation of all equipment pieces in use.\n\x09 *\n\x09 * Changing this value automatically triggers a change in the Average Equipment\n\x09 * Level, which is most likely the value that will be mostly used by the game.\n\x09 *\n\x09 * If you initialize this value using a Data Table, then you need to make sure\n\x09 * that the Average Equipment Level is also initialized with a proper value.\n\x09 *\n\x09 * To avoid mismatches, it's recommended to always use Gameplay Effects from\n\x09 * assigned Equipment Pieces to manage the Equipment Level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Aggregation of all equipment pieces in use.\n\nChanging this value automatically triggers a change in the Average Equipment\nLevel, which is most likely the value that will be mostly used by the game.\n\nIf you initialize this value using a Data Table, then you need to make sure\nthat the Average Equipment Level is also initialized with a proper value.\n\nTo avoid mismatches, it's recommended to always use Gameplay Effects from\nassigned Equipment Pieces to manage the Equipment Level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageEquipmentLevel_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Average Equipment Level, being the Equipment Level Attribute / Equipment Level Effect Stack.\n\x09 *\n\x09 * This can be updated directly depending on the game setup, but by default it\n\x09 * gets updated when the Equipment Level is modified by a Gameplay Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Average Equipment Level, being the Equipment Level Attribute / Equipment Level Effect Stack.\n\nThis can be updated directly depending on the game setup, but by default it\ngets updated when the Equipment Level is modified by a Gameplay Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Encumbrance_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Weight currently carried by the avatar. It might affect some abilities. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Weight currently carried by the avatar. It might affect some abilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightLimit_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Maximum weight capacity for this inventory. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Maximum weight capacity for this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackpackSlots_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Amount of slots available in the Backpack container. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaInventoryAttributeSet.h" },
		{ "ToolTip", "Amount of slots available in the Backpack container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Wealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AverageEquipmentLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Encumbrance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackpackSlots;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_AverageEquipmentLevel, "OnRep_AverageEquipmentLevel" }, // 3768998749
		{ &Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_BackpackSlots, "OnRep_BackpackSlots" }, // 1136083235
		{ &Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Encumbrance, "OnRep_Encumbrance" }, // 3690419227
		{ &Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_EquipmentLevel, "OnRep_EquipmentLevel" }, // 3690189935
		{ &Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_Wealth, "OnRep_Wealth" }, // 481901091
		{ &Z_Construct_UFunction_UNinjaInventoryAttributeSet_OnRep_WeightLimit, "OnRep_WeightLimit" }, // 557193454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_Wealth = { "Wealth", "OnRep_Wealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAttributeSet, Wealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wealth_MetaData), NewProp_Wealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_EquipmentLevel = { "EquipmentLevel", "OnRep_EquipmentLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAttributeSet, EquipmentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentLevel_MetaData), NewProp_EquipmentLevel_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_AverageEquipmentLevel = { "AverageEquipmentLevel", "OnRep_AverageEquipmentLevel", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAttributeSet, AverageEquipmentLevel), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageEquipmentLevel_MetaData), NewProp_AverageEquipmentLevel_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_Encumbrance = { "Encumbrance", "OnRep_Encumbrance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAttributeSet, Encumbrance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Encumbrance_MetaData), NewProp_Encumbrance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_WeightLimit = { "WeightLimit", "OnRep_WeightLimit", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAttributeSet, WeightLimit), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightLimit_MetaData), NewProp_WeightLimit_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_BackpackSlots = { "BackpackSlots", "OnRep_BackpackSlots", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAttributeSet, BackpackSlots), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackpackSlots_MetaData), NewProp_BackpackSlots_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_Wealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_EquipmentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_AverageEquipmentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_Encumbrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_WeightLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::NewProp_BackpackSlots,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::ClassParams = {
	&UNinjaInventoryAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryAttributeSet()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryAttributeSet.OuterSingleton, Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryAttributeSet.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UNinjaInventoryAttributeSet>()
{
	return UNinjaInventoryAttributeSet::StaticClass();
}
void UNinjaInventoryAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Wealth(TEXT("Wealth"));
	static const FName Name_EquipmentLevel(TEXT("EquipmentLevel"));
	static const FName Name_AverageEquipmentLevel(TEXT("AverageEquipmentLevel"));
	static const FName Name_Encumbrance(TEXT("Encumbrance"));
	static const FName Name_WeightLimit(TEXT("WeightLimit"));
	static const FName Name_BackpackSlots(TEXT("BackpackSlots"));
	const bool bIsValid = true
		&& Name_Wealth == ClassReps[(int32)ENetFields_Private::Wealth].Property->GetFName()
		&& Name_EquipmentLevel == ClassReps[(int32)ENetFields_Private::EquipmentLevel].Property->GetFName()
		&& Name_AverageEquipmentLevel == ClassReps[(int32)ENetFields_Private::AverageEquipmentLevel].Property->GetFName()
		&& Name_Encumbrance == ClassReps[(int32)ENetFields_Private::Encumbrance].Property->GetFName()
		&& Name_WeightLimit == ClassReps[(int32)ENetFields_Private::WeightLimit].Property->GetFName()
		&& Name_BackpackSlots == ClassReps[(int32)ENetFields_Private::BackpackSlots].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaInventoryAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryAttributeSet);
UNinjaInventoryAttributeSet::~UNinjaInventoryAttributeSet() {}
// End Class UNinjaInventoryAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryAttributeSet, UNinjaInventoryAttributeSet::StaticClass, TEXT("UNinjaInventoryAttributeSet"), &Z_Registration_Info_UClass_UNinjaInventoryAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryAttributeSet), 3353452012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_2555995060(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
