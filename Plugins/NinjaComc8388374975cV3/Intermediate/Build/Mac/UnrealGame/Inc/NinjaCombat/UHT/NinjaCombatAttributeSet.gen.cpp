// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/NinjaCombatAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAttributeSet();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAttributeSet Function GetAbsoluteMaxHealth
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics
{
	struct NinjaCombatAttributeSet_eventGetAbsoluteMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Attributes" },
		{ "Comment", "/**\n\x09 * Calculates the absolute max health.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Calculates the absolute max health." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventGetAbsoluteMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "GetAbsoluteMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::NinjaCombatAttributeSet_eventGetAbsoluteMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::NinjaCombatAttributeSet_eventGetAbsoluteMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execGetAbsoluteMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbsoluteMaxHealth();
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function GetAbsoluteMaxHealth

// Begin Class UNinjaCombatAttributeSet Function GetAbsoluteMaxMagic
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics
{
	struct NinjaCombatAttributeSet_eventGetAbsoluteMaxMagic_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Attributes" },
		{ "Comment", "/**\n\x09 * Calculates the absolute max magic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Calculates the absolute max magic." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventGetAbsoluteMaxMagic_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "GetAbsoluteMaxMagic", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::NinjaCombatAttributeSet_eventGetAbsoluteMaxMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::NinjaCombatAttributeSet_eventGetAbsoluteMaxMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execGetAbsoluteMaxMagic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbsoluteMaxMagic();
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function GetAbsoluteMaxMagic

// Begin Class UNinjaCombatAttributeSet Function GetAbsoluteMaxStamina
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics
{
	struct NinjaCombatAttributeSet_eventGetAbsoluteMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Attributes" },
		{ "Comment", "/**\n\x09 * Calculates the absolute max stamina.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Calculates the absolute max stamina." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventGetAbsoluteMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "GetAbsoluteMaxStamina", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::NinjaCombatAttributeSet_eventGetAbsoluteMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::NinjaCombatAttributeSet_eventGetAbsoluteMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execGetAbsoluteMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbsoluteMaxStamina();
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function GetAbsoluteMaxStamina

// Begin Class UNinjaCombatAttributeSet Function OnRep_ArmorReduction
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_ArmorReduction_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_ArmorReduction_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_ArmorReduction", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::NinjaCombatAttributeSet_eventOnRep_ArmorReduction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::NinjaCombatAttributeSet_eventOnRep_ArmorReduction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_ArmorReduction)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ArmorReduction(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_ArmorReduction

// Begin Class UNinjaCombatAttributeSet Function OnRep_BaseDamage
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BaseDamage_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BaseDamage_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BaseDamage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::NinjaCombatAttributeSet_eventOnRep_BaseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::NinjaCombatAttributeSet_eventOnRep_BaseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BaseDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BaseDamage(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BaseDamage

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockAngle
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockAngle_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockAngle_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockAngle", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::NinjaCombatAttributeSet_eventOnRep_BlockAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::NinjaCombatAttributeSet_eventOnRep_BlockAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockAngle)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockAngle(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockAngle

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockChance
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockChance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockChance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockChance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::NinjaCombatAttributeSet_eventOnRep_BlockChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::NinjaCombatAttributeSet_eventOnRep_BlockChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockChance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockChance

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockCooldown
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockCooldown_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockCooldown_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockCooldown", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::NinjaCombatAttributeSet_eventOnRep_BlockCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::NinjaCombatAttributeSet_eventOnRep_BlockCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockCooldown)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockCooldown(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockCooldown

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockLimit
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockLimit_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockLimit_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockLimit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::NinjaCombatAttributeSet_eventOnRep_BlockLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::NinjaCombatAttributeSet_eventOnRep_BlockLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockLimit)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockLimit(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockLimit

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockMitigation
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockMitigation_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockMitigation_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockMitigation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::NinjaCombatAttributeSet_eventOnRep_BlockMitigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::NinjaCombatAttributeSet_eventOnRep_BlockMitigation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockMitigation)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockMitigation(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockMitigation

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockStaminaCost
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockStaminaCost_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockStaminaCost_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockStaminaCost", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::NinjaCombatAttributeSet_eventOnRep_BlockStaminaCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::NinjaCombatAttributeSet_eventOnRep_BlockStaminaCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockStaminaCost)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockStaminaCost(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockStaminaCost

// Begin Class UNinjaCombatAttributeSet Function OnRep_BlockStaminaCostRate
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_BlockStaminaCostRate_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_BlockStaminaCostRate_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_BlockStaminaCostRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::NinjaCombatAttributeSet_eventOnRep_BlockStaminaCostRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::NinjaCombatAttributeSet_eventOnRep_BlockStaminaCostRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_BlockStaminaCostRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BlockStaminaCostRate(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_BlockStaminaCostRate

// Begin Class UNinjaCombatAttributeSet Function OnRep_CriticalHitChance
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_CriticalHitChance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_CriticalHitChance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_CriticalHitChance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::NinjaCombatAttributeSet_eventOnRep_CriticalHitChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::NinjaCombatAttributeSet_eventOnRep_CriticalHitChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_CriticalHitChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitChance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_CriticalHitChance

// Begin Class UNinjaCombatAttributeSet Function OnRep_CriticalHitMultiplier
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_CriticalHitMultiplier_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_CriticalHitMultiplier_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_CriticalHitMultiplier", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::NinjaCombatAttributeSet_eventOnRep_CriticalHitMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::NinjaCombatAttributeSet_eventOnRep_CriticalHitMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_CriticalHitMultiplier)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CriticalHitMultiplier(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_CriticalHitMultiplier

// Begin Class UNinjaCombatAttributeSet Function OnRep_DefenseChance
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_DefenseChance_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_DefenseChance_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_DefenseChance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseChance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseChance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_DefenseChance)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DefenseChance(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_DefenseChance

// Begin Class UNinjaCombatAttributeSet Function OnRep_DefenseLimit
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_DefenseLimit_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_DefenseLimit_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_DefenseLimit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseLimit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_DefenseLimit)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DefenseLimit(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_DefenseLimit

// Begin Class UNinjaCombatAttributeSet Function OnRep_DefenseMitigation
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_DefenseMitigation_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_DefenseMitigation_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_DefenseMitigation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseMitigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseMitigation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_DefenseMitigation)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DefenseMitigation(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_DefenseMitigation

// Begin Class UNinjaCombatAttributeSet Function OnRep_DefenseStaminaCostRate
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_DefenseStaminaCostRate_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_DefenseStaminaCostRate_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_DefenseStaminaCostRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseStaminaCostRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::NinjaCombatAttributeSet_eventOnRep_DefenseStaminaCostRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_DefenseStaminaCostRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DefenseStaminaCostRate(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_DefenseStaminaCostRate

// Begin Class UNinjaCombatAttributeSet Function OnRep_EvadeCooldown
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_EvadeCooldown_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_EvadeCooldown_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_EvadeCooldown", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::NinjaCombatAttributeSet_eventOnRep_EvadeCooldown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::NinjaCombatAttributeSet_eventOnRep_EvadeCooldown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_EvadeCooldown)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EvadeCooldown(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_EvadeCooldown

// Begin Class UNinjaCombatAttributeSet Function OnRep_EvadeStaminaCost
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_EvadeStaminaCost_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_EvadeStaminaCost_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_EvadeStaminaCost", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::NinjaCombatAttributeSet_eventOnRep_EvadeStaminaCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::NinjaCombatAttributeSet_eventOnRep_EvadeStaminaCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_EvadeStaminaCost)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_EvadeStaminaCost(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_EvadeStaminaCost

// Begin Class UNinjaCombatAttributeSet Function OnRep_Health
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_Health_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::NinjaCombatAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::NinjaCombatAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_Health

// Begin Class UNinjaCombatAttributeSet Function OnRep_HealthRegenRate
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_HealthRegenRate_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_HealthRegenRate_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_HealthRegenRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::NinjaCombatAttributeSet_eventOnRep_HealthRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::NinjaCombatAttributeSet_eventOnRep_HealthRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_HealthRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_HealthRegenRate(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_HealthRegenRate

// Begin Class UNinjaCombatAttributeSet Function OnRep_LastStandCount
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_LastStandCount_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_LastStandCount_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_LastStandCount", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::NinjaCombatAttributeSet_eventOnRep_LastStandCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::NinjaCombatAttributeSet_eventOnRep_LastStandCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_LastStandCount)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LastStandCount(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_LastStandCount

// Begin Class UNinjaCombatAttributeSet Function OnRep_LastStandHealthPercent
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_LastStandHealthPercent_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_LastStandHealthPercent_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_LastStandHealthPercent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::NinjaCombatAttributeSet_eventOnRep_LastStandHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::NinjaCombatAttributeSet_eventOnRep_LastStandHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_LastStandHealthPercent)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LastStandHealthPercent(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_LastStandHealthPercent

// Begin Class UNinjaCombatAttributeSet Function OnRep_Magic
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_Magic_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_Magic_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_Magic", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::NinjaCombatAttributeSet_eventOnRep_Magic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::NinjaCombatAttributeSet_eventOnRep_Magic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_Magic)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Magic(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_Magic

// Begin Class UNinjaCombatAttributeSet Function OnRep_MagicRegenDelay
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MagicRegenDelay_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MagicRegenDelay_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MagicRegenDelay", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::NinjaCombatAttributeSet_eventOnRep_MagicRegenDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::NinjaCombatAttributeSet_eventOnRep_MagicRegenDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MagicRegenDelay)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MagicRegenDelay(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MagicRegenDelay

// Begin Class UNinjaCombatAttributeSet Function OnRep_MagicRegenRate
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MagicRegenRate_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MagicRegenRate_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MagicRegenRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::NinjaCombatAttributeSet_eventOnRep_MagicRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::NinjaCombatAttributeSet_eventOnRep_MagicRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MagicRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MagicRegenRate(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MagicRegenRate

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxHealth
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxHealth_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::NinjaCombatAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::NinjaCombatAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxHealth

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxHealthAdd
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxHealthAdd_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxHealthAdd_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxHealthAdd", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::NinjaCombatAttributeSet_eventOnRep_MaxHealthAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::NinjaCombatAttributeSet_eventOnRep_MaxHealthAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxHealthAdd)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealthAdd(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxHealthAdd

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxHealthPercent
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxHealthPercent_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxHealthPercent_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxHealthPercent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::NinjaCombatAttributeSet_eventOnRep_MaxHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::NinjaCombatAttributeSet_eventOnRep_MaxHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxHealthPercent)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealthPercent(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxHealthPercent

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxMagic
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxMagic_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxMagic_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxMagic", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::NinjaCombatAttributeSet_eventOnRep_MaxMagic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::NinjaCombatAttributeSet_eventOnRep_MaxMagic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxMagic)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMagic(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxMagic

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxMagicAdd
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxMagicAdd_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxMagicAdd_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxMagicAdd", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::NinjaCombatAttributeSet_eventOnRep_MaxMagicAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::NinjaCombatAttributeSet_eventOnRep_MaxMagicAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxMagicAdd)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMagicAdd(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxMagicAdd

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxMagicPercent
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxMagicPercent_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxMagicPercent_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxMagicPercent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::NinjaCombatAttributeSet_eventOnRep_MaxMagicPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::NinjaCombatAttributeSet_eventOnRep_MaxMagicPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxMagicPercent)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMagicPercent(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxMagicPercent

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxStamina
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxStamina_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::NinjaCombatAttributeSet_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::NinjaCombatAttributeSet_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxStamina

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxStaminaAdd
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxStaminaAdd_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxStaminaAdd_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxStaminaAdd", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::NinjaCombatAttributeSet_eventOnRep_MaxStaminaAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::NinjaCombatAttributeSet_eventOnRep_MaxStaminaAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxStaminaAdd)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStaminaAdd(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxStaminaAdd

// Begin Class UNinjaCombatAttributeSet Function OnRep_MaxStaminaPercent
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_MaxStaminaPercent_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_MaxStaminaPercent_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_MaxStaminaPercent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::NinjaCombatAttributeSet_eventOnRep_MaxStaminaPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::NinjaCombatAttributeSet_eventOnRep_MaxStaminaPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_MaxStaminaPercent)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStaminaPercent(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_MaxStaminaPercent

// Begin Class UNinjaCombatAttributeSet Function OnRep_Poise
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_Poise_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_Poise_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_Poise", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::NinjaCombatAttributeSet_eventOnRep_Poise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::NinjaCombatAttributeSet_eventOnRep_Poise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_Poise)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Poise(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_Poise

// Begin Class UNinjaCombatAttributeSet Function OnRep_PoiseDamage
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_PoiseDamage_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_PoiseDamage_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_PoiseDamage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::NinjaCombatAttributeSet_eventOnRep_PoiseDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::NinjaCombatAttributeSet_eventOnRep_PoiseDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_PoiseDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PoiseDamage(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_PoiseDamage

// Begin Class UNinjaCombatAttributeSet Function OnRep_PoiseRecovery
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_PoiseRecovery_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_PoiseRecovery_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_PoiseRecovery", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::NinjaCombatAttributeSet_eventOnRep_PoiseRecovery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::NinjaCombatAttributeSet_eventOnRep_PoiseRecovery_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_PoiseRecovery)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PoiseRecovery(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_PoiseRecovery

// Begin Class UNinjaCombatAttributeSet Function OnRep_PoiseRecoveryInterval
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_PoiseRecoveryInterval_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_PoiseRecoveryInterval_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_PoiseRecoveryInterval", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::NinjaCombatAttributeSet_eventOnRep_PoiseRecoveryInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::NinjaCombatAttributeSet_eventOnRep_PoiseRecoveryInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_PoiseRecoveryInterval)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PoiseRecoveryInterval(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_PoiseRecoveryInterval

// Begin Class UNinjaCombatAttributeSet Function OnRep_StaggerDuration
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_StaggerDuration_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_StaggerDuration_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_StaggerDuration", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::NinjaCombatAttributeSet_eventOnRep_StaggerDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::NinjaCombatAttributeSet_eventOnRep_StaggerDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_StaggerDuration)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaggerDuration(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_StaggerDuration

// Begin Class UNinjaCombatAttributeSet Function OnRep_Stamina
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_Stamina_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::NinjaCombatAttributeSet_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::NinjaCombatAttributeSet_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_Stamina

// Begin Class UNinjaCombatAttributeSet Function OnRep_StaminaRegenDelay
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_StaminaRegenDelay_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_StaminaRegenDelay_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_StaminaRegenDelay", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::NinjaCombatAttributeSet_eventOnRep_StaminaRegenDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::NinjaCombatAttributeSet_eventOnRep_StaminaRegenDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_StaminaRegenDelay)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaminaRegenDelay(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_StaminaRegenDelay

// Begin Class UNinjaCombatAttributeSet Function OnRep_StaminaRegenRate
struct Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics
{
	struct NinjaCombatAttributeSet_eventOnRep_StaminaRegenRate_Parms
	{
		FGameplayAttributeData OldValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAttributeSet_eventOnRep_StaminaRegenRate_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldValue_MetaData), NewProp_OldValue_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::NewProp_OldValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAttributeSet, nullptr, "OnRep_StaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::NinjaCombatAttributeSet_eventOnRep_StaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::NinjaCombatAttributeSet_eventOnRep_StaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAttributeSet::execOnRep_StaminaRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaminaRegenRate(Z_Param_Out_OldValue);
	P_NATIVE_END;
}
// End Class UNinjaCombatAttributeSet Function OnRep_StaminaRegenRate

// Begin Class UNinjaCombatAttributeSet
void UNinjaCombatAttributeSet::StaticRegisterNativesUNinjaCombatAttributeSet()
{
	UClass* Class = UNinjaCombatAttributeSet::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbsoluteMaxHealth", &UNinjaCombatAttributeSet::execGetAbsoluteMaxHealth },
		{ "GetAbsoluteMaxMagic", &UNinjaCombatAttributeSet::execGetAbsoluteMaxMagic },
		{ "GetAbsoluteMaxStamina", &UNinjaCombatAttributeSet::execGetAbsoluteMaxStamina },
		{ "OnRep_ArmorReduction", &UNinjaCombatAttributeSet::execOnRep_ArmorReduction },
		{ "OnRep_BaseDamage", &UNinjaCombatAttributeSet::execOnRep_BaseDamage },
		{ "OnRep_BlockAngle", &UNinjaCombatAttributeSet::execOnRep_BlockAngle },
		{ "OnRep_BlockChance", &UNinjaCombatAttributeSet::execOnRep_BlockChance },
		{ "OnRep_BlockCooldown", &UNinjaCombatAttributeSet::execOnRep_BlockCooldown },
		{ "OnRep_BlockLimit", &UNinjaCombatAttributeSet::execOnRep_BlockLimit },
		{ "OnRep_BlockMitigation", &UNinjaCombatAttributeSet::execOnRep_BlockMitigation },
		{ "OnRep_BlockStaminaCost", &UNinjaCombatAttributeSet::execOnRep_BlockStaminaCost },
		{ "OnRep_BlockStaminaCostRate", &UNinjaCombatAttributeSet::execOnRep_BlockStaminaCostRate },
		{ "OnRep_CriticalHitChance", &UNinjaCombatAttributeSet::execOnRep_CriticalHitChance },
		{ "OnRep_CriticalHitMultiplier", &UNinjaCombatAttributeSet::execOnRep_CriticalHitMultiplier },
		{ "OnRep_DefenseChance", &UNinjaCombatAttributeSet::execOnRep_DefenseChance },
		{ "OnRep_DefenseLimit", &UNinjaCombatAttributeSet::execOnRep_DefenseLimit },
		{ "OnRep_DefenseMitigation", &UNinjaCombatAttributeSet::execOnRep_DefenseMitigation },
		{ "OnRep_DefenseStaminaCostRate", &UNinjaCombatAttributeSet::execOnRep_DefenseStaminaCostRate },
		{ "OnRep_EvadeCooldown", &UNinjaCombatAttributeSet::execOnRep_EvadeCooldown },
		{ "OnRep_EvadeStaminaCost", &UNinjaCombatAttributeSet::execOnRep_EvadeStaminaCost },
		{ "OnRep_Health", &UNinjaCombatAttributeSet::execOnRep_Health },
		{ "OnRep_HealthRegenRate", &UNinjaCombatAttributeSet::execOnRep_HealthRegenRate },
		{ "OnRep_LastStandCount", &UNinjaCombatAttributeSet::execOnRep_LastStandCount },
		{ "OnRep_LastStandHealthPercent", &UNinjaCombatAttributeSet::execOnRep_LastStandHealthPercent },
		{ "OnRep_Magic", &UNinjaCombatAttributeSet::execOnRep_Magic },
		{ "OnRep_MagicRegenDelay", &UNinjaCombatAttributeSet::execOnRep_MagicRegenDelay },
		{ "OnRep_MagicRegenRate", &UNinjaCombatAttributeSet::execOnRep_MagicRegenRate },
		{ "OnRep_MaxHealth", &UNinjaCombatAttributeSet::execOnRep_MaxHealth },
		{ "OnRep_MaxHealthAdd", &UNinjaCombatAttributeSet::execOnRep_MaxHealthAdd },
		{ "OnRep_MaxHealthPercent", &UNinjaCombatAttributeSet::execOnRep_MaxHealthPercent },
		{ "OnRep_MaxMagic", &UNinjaCombatAttributeSet::execOnRep_MaxMagic },
		{ "OnRep_MaxMagicAdd", &UNinjaCombatAttributeSet::execOnRep_MaxMagicAdd },
		{ "OnRep_MaxMagicPercent", &UNinjaCombatAttributeSet::execOnRep_MaxMagicPercent },
		{ "OnRep_MaxStamina", &UNinjaCombatAttributeSet::execOnRep_MaxStamina },
		{ "OnRep_MaxStaminaAdd", &UNinjaCombatAttributeSet::execOnRep_MaxStaminaAdd },
		{ "OnRep_MaxStaminaPercent", &UNinjaCombatAttributeSet::execOnRep_MaxStaminaPercent },
		{ "OnRep_Poise", &UNinjaCombatAttributeSet::execOnRep_Poise },
		{ "OnRep_PoiseDamage", &UNinjaCombatAttributeSet::execOnRep_PoiseDamage },
		{ "OnRep_PoiseRecovery", &UNinjaCombatAttributeSet::execOnRep_PoiseRecovery },
		{ "OnRep_PoiseRecoveryInterval", &UNinjaCombatAttributeSet::execOnRep_PoiseRecoveryInterval },
		{ "OnRep_StaggerDuration", &UNinjaCombatAttributeSet::execOnRep_StaggerDuration },
		{ "OnRep_Stamina", &UNinjaCombatAttributeSet::execOnRep_Stamina },
		{ "OnRep_StaminaRegenDelay", &UNinjaCombatAttributeSet::execOnRep_StaminaRegenDelay },
		{ "OnRep_StaminaRegenRate", &UNinjaCombatAttributeSet::execOnRep_StaminaRegenRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAttributeSet);
UClass* Z_Construct_UClass_UNinjaCombatAttributeSet_NoRegister()
{
	return UNinjaCombatAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains the minimum attributes required by the Combat System.\n *\n * You can add this Attribute Set directly or extend it in your own game. Regardless of the strategy\n * used to import these attributes into your project, this class must be present to handle the combat\n * system core mechanics such as damage replication and routing to the damage component.\n *\n * Of course, you can replicate this Attribute Set's behavior in your project if you feel comfortable\n * to do so, but this is not a recommended/supported practice as things could get... complicated.\n */" },
		{ "IncludePath", "AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Contains the minimum attributes required by the Combat System.\n\nYou can add this Attribute Set directly or extend it in your own game. Regardless of the strategy\nused to import these attributes into your project, this class must be present to handle the combat\nsystem core mechanics such as damage replication and routing to the damage component.\n\nOf course, you can replicate this Attribute Set's behavior in your project if you feel comfortable\nto do so, but this is not a recommended/supported practice as things could get... complicated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingDamage_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "Comment", "/** Damage received that must be processed and applied. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Damage received that must be processed and applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingMitigationCost_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "Comment", "/** Mitigation cost to damage that was avoided. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Mitigation cost to damage that was avoided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthTotal_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "Comment", "/**\n\x09 * Total max health available to the character.\n\x09 *\n\x09 * <pre>\n\x09 * Actual Max Health = (Max Health + Max Health Add) * Max Health Percent;\n\x09 * </pre>\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Total max health available to the character.\n\n<pre>\nActual Max Health = (Max Health + Max Health Add) * Max Health Percent;\n</pre>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaTotal_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "Comment", "/**\n\x09 * Total total max stamina available to the character.\n\x09 *\n\x09 * <pre>\n\x09 * Actual Max Stamina = (Max Stamina + Max Stamina Add) + Max Stamina Percent;\n\x09 * </pre>\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Total total max stamina available to the character.\n\n<pre>\nActual Max Stamina = (Max Stamina + Max Stamina Add) + Max Stamina Percent;\n</pre>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagicTotal_MetaData[] = {
		{ "Category", "Meta Attributes" },
		{ "Comment", "/**\n\x09 * Total max magic available to the character.\n\x09 *\n\x09 * <pre>\n\x09 * Actual Max Stamina = (Max Magic + Max Magic Add) + Max Magic Percent;\n\x09 * </pre>\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Total max magic available to the character.\n\n<pre>\nActual Max Stamina = (Max Magic + Max Magic Add) + Max Magic Percent;\n</pre>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Current health available to the character. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Current health available to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Maximum health available to the character. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Maximum health available to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthAdd_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Flat amount of health added to the maximum health. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Flat amount of health added to the maximum health." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealthPercent_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Percent of health added to the maximum health. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Percent of health added to the maximum health." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenRate_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "/** Amount of health regenerated per second. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Amount of health regenerated per second." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Current stamina available to the character. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Current stamina available to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Maximum stamina available to the character. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Maximum stamina available to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaAdd_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Flat amount of health added to the maximum stamina. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Flat amount of health added to the maximum stamina." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStaminaPercent_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Percent of health added to the maximum stamina. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Percent of health added to the maximum stamina." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Amount of stamina regenerated per second. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Amount of stamina regenerated per second." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenDelay_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "/** Base delay for stamina to resume regenerating. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Base delay for stamina to resume regenerating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Current magic available to the character. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Current magic available to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagic_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Maximum magic available to the character. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Maximum magic available to the character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagicAdd_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Flat amount of health added to the maximum magic. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Flat amount of health added to the maximum magic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMagicPercent_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Percent of health added to the maximum magic. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Percent of health added to the maximum magic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicRegenRate_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Amount of magic regenerated per second. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Amount of magic regenerated per second." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicRegenDelay_MetaData[] = {
		{ "Category", "Magic" },
		{ "Comment", "/** Base delay for magic to resume regenerating. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Base delay for magic to resume regenerating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/**\n\x09 * Base damage that the owning character can inflict.\n\x09 *\n\x09 * Damage can be set on a base level, by this attribute, or per each attack or projectile directly.\n\x09 * Both are equally valid and each game can decide what's the best approach for their combat system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Base damage that the owning character can inflict.\n\nDamage can be set on a base level, by this attribute, or per each attack or projectile directly.\nBoth are equally valid and each game can decide what's the best approach for their combat system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitChance_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/**\n\x09 * Chance to apply critical damage, in [0, 1] range.\n\x09 *\n\x09 * Same as the base damage, this attribute can be set at a base level or per attack or projectile.\n\x09 * Both are equally valid and each game can decide what's the best approach for their combat system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Chance to apply critical damage, in [0, 1] range.\n\nSame as the base damage, this attribute can be set at a base level or per attack or projectile.\nBoth are equally valid and each game can decide what's the best approach for their combat system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CriticalHitMultiplier_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/**\n\x09 * Modifier applied when critical damage occurs.\n\x09 *\n\x09 * This modifier is applied to the base damage. For example: setting the base damage value to 100,\n\x09 * with a critical hit multiplier of 1.5 will generate total incoming damage value of 150.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Modifier applied when critical damage occurs.\n\nThis modifier is applied to the base damage. For example: setting the base damage value to 100,\nwith a critical hit multiplier of 1.5 will generate total incoming damage value of 150." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/** Chance to block with a weapon, shield or any other means, in [0, 1] range. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Chance to block with a weapon, shield or any other means, in [0, 1] range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockMitigation_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/** Amount of mitigation provided by blocking, in [0, 1] range. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Amount of mitigation provided by blocking, in [0, 1] range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockAngle_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/**\n\x09 * The angle used to determine if blocking is possible.\n\x09 *\n\x09 * It can be modified by specific pieces of equipment such as shields, providing the\n\x09 * functionality of \"broader\" or \"smaller\" types.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "The angle used to determine if blocking is possible.\n\nIt can be modified by specific pieces of equipment such as shields, providing the\nfunctionality of \"broader\" or \"smaller\" types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockLimit_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/** A limit of how much damage block can actually mitigate, regardless of cost. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "A limit of how much damage block can actually mitigate, regardless of cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaCostRate_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/** How efficient blocking is in terms of Stamina Cost. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "How efficient blocking is in terms of Stamina Cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaCost_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/** Minimum stamina cost to start blocking. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Minimum stamina cost to start blocking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockCooldown_MetaData[] = {
		{ "Category", "Block" },
		{ "Comment", "/** A cooldown applied from blocking, usually as penalty from a breaker hit. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "A cooldown applied from blocking, usually as penalty from a breaker hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvadeStaminaCost_MetaData[] = {
		{ "Category", "Evade" },
		{ "Comment", "/** Stamina cost to perform an evade. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Stamina cost to perform an evade." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvadeCooldown_MetaData[] = {
		{ "Category", "Evade" },
		{ "Comment", "/** Cooldown applied before a new evade can be performed. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Cooldown applied before a new evade can be performed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseChance_MetaData[] = {
		{ "Category", "Defense" },
		{ "Comment", "/**\n\x09 * Chance to defend incoming damage, in [0, 1] range.\n\x09 *\n\x09 * This is the effective chance to mitigate damage received. Defense is an umbrella stat, it can be\n\x09 * granted from any reason that is not \"passive armor\" or \"blocking\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Chance to defend incoming damage, in [0, 1] range.\n\nThis is the effective chance to mitigate damage received. Defense is an umbrella stat, it can be\ngranted from any reason that is not \"passive armor\" or \"blocking\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseMitigation_MetaData[] = {
		{ "Category", "Defense" },
		{ "Comment", "/**\n\x09 * Mitigation applied to incoming damage that has been defended, in [0, 1] range.\n\x09 *\n\x09 * This modifier is applied to incoming damage, to determine how much of it can be mitigated.\n\x09 * For example, a damage value of 100 with a 0.2 mitigation results in a damage value of 80.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Mitigation applied to incoming damage that has been defended, in [0, 1] range.\n\nThis modifier is applied to incoming damage, to determine how much of it can be mitigated.\nFor example, a damage value of 100 with a 0.2 mitigation results in a damage value of 80." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseLimit_MetaData[] = {
		{ "Category", "Defense" },
		{ "Comment", "/**\n\x09 * A limit of how much damage the extra defense can actually mitigate, regardless of cost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "A limit of how much damage the extra defense can actually mitigate, regardless of cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseStaminaCostRate_MetaData[] = {
		{ "Category", "Defense" },
		{ "Comment", "/**\n\x09 * The Stamina Cost for each point of defense mitigated, if any.\n\x09 *\n\x09 * Each game must decide if this cost makes sense. Using stamina to soak incoming damage is very\n\x09 * common in Souls-like games when you are blocking, but not necessarily common in an adventure game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "The Stamina Cost for each point of defense mitigated, if any.\n\nEach game must decide if this cost makes sense. Using stamina to soak incoming damage is very\ncommon in Souls-like games when you are blocking, but not necessarily common in an adventure game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorReduction_MetaData[] = {
		{ "Category", "Armor" },
		{ "Comment", "/**\n\x09 * A flat reduction of damage. Absolute value, for flat, non-relative mitigation.\n\x09 *\n\x09 * This value is applied regardless of any defense change. This is just \"base armor\" and it's\n\x09 * the final layer of damage mitigation, after blocking and defense.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "A flat reduction of damage. Absolute value, for flat, non-relative mitigation.\n\nThis value is applied regardless of any defense change. This is just \"base armor\" and it's\nthe final layer of damage mitigation, after blocking and defense." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStandCount_MetaData[] = {
		{ "Category", "Last Stand" },
		{ "Comment", "/**\n\x09 * How many times the character can perform a Last Stand.\n\x09 *\n\x09 * Abilities, perks, items can modify this as necessary, which will result in the character\n\x09 * surviving fatal damage and reverting to a certain amount of health.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "How many times the character can perform a Last Stand.\n\nAbilities, perks, items can modify this as necessary, which will result in the character\nsurviving fatal damage and reverting to a certain amount of health." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStandHealthPercent_MetaData[] = {
		{ "Category", "Last Stand" },
		{ "Comment", "/**\n\x09 * Amount of health assigned to the character when the Last Stand triggers.\n\x09 *\n\x09 * This is an amount from the owner's max health that gets assigned to health, that now is\n\x09 * most likely zero, due to a fatal damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Amount of health assigned to the character when the Last Stand triggers.\n\nThis is an amount from the owner's max health that gets assigned to health, that now is\nmost likely zero, due to a fatal damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Poise_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Poise the character has. When poise damage reaches this value, the character is staggered. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Poise the character has. When poise damage reaches this value, the character is staggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseDamage_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Current amount of damage applied to the character's poise. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Current amount of damage applied to the character's poise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseRecovery_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** How much poise is recovered when the replenish effect ticks. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "How much poise is recovered when the replenish effect ticks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseRecoveryInterval_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** How fast recovery will happen, after a hit was received. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "How fast recovery will happen, after a hit was received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaggerDuration_MetaData[] = {
		{ "Category", "Poise and Stagger" },
		{ "Comment", "/** Duration of the stagger state. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatAttributeSet.h" },
		{ "ToolTip", "Duration of the stagger state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingMitigationCost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealthTotal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStaminaTotal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMagicTotal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealthAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealthPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealthRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStaminaAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStaminaPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Magic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMagic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMagicAdd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMagicPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicRegenDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CriticalHitMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockMitigation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockStaminaCostRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockStaminaCost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockCooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvadeStaminaCost;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EvadeCooldown;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseMitigation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefenseStaminaCostRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorReduction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastStandCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastStandHealthPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Poise;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoiseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoiseRecovery;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoiseRecoveryInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaggerDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxHealth, "GetAbsoluteMaxHealth" }, // 4128487126
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxMagic, "GetAbsoluteMaxMagic" }, // 1243630768
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_GetAbsoluteMaxStamina, "GetAbsoluteMaxStamina" }, // 2062285620
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_ArmorReduction, "OnRep_ArmorReduction" }, // 1884386391
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BaseDamage, "OnRep_BaseDamage" }, // 1124838797
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockAngle, "OnRep_BlockAngle" }, // 3919509708
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockChance, "OnRep_BlockChance" }, // 2145827872
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockCooldown, "OnRep_BlockCooldown" }, // 1587589380
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockLimit, "OnRep_BlockLimit" }, // 3383098629
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockMitigation, "OnRep_BlockMitigation" }, // 175686573
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCost, "OnRep_BlockStaminaCost" }, // 2176203499
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_BlockStaminaCostRate, "OnRep_BlockStaminaCostRate" }, // 4213085398
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitChance, "OnRep_CriticalHitChance" }, // 209365527
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_CriticalHitMultiplier, "OnRep_CriticalHitMultiplier" }, // 893485125
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseChance, "OnRep_DefenseChance" }, // 2675501979
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseLimit, "OnRep_DefenseLimit" }, // 2833079068
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseMitigation, "OnRep_DefenseMitigation" }, // 592499209
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_DefenseStaminaCostRate, "OnRep_DefenseStaminaCostRate" }, // 3316573364
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeCooldown, "OnRep_EvadeCooldown" }, // 3386852886
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_EvadeStaminaCost, "OnRep_EvadeStaminaCost" }, // 1579093433
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Health, "OnRep_Health" }, // 255031433
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_HealthRegenRate, "OnRep_HealthRegenRate" }, // 1989516704
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandCount, "OnRep_LastStandCount" }, // 1360988765
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_LastStandHealthPercent, "OnRep_LastStandHealthPercent" }, // 2720696754
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Magic, "OnRep_Magic" }, // 3435756319
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenDelay, "OnRep_MagicRegenDelay" }, // 3344390769
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MagicRegenRate, "OnRep_MagicRegenRate" }, // 4056991381
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3122547524
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthAdd, "OnRep_MaxHealthAdd" }, // 519575475
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxHealthPercent, "OnRep_MaxHealthPercent" }, // 536186975
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagic, "OnRep_MaxMagic" }, // 1402648783
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicAdd, "OnRep_MaxMagicAdd" }, // 70308771
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxMagicPercent, "OnRep_MaxMagicPercent" }, // 3868586373
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 1497153335
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaAdd, "OnRep_MaxStaminaAdd" }, // 188767004
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_MaxStaminaPercent, "OnRep_MaxStaminaPercent" }, // 2548871744
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Poise, "OnRep_Poise" }, // 3213551603
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseDamage, "OnRep_PoiseDamage" }, // 1824974511
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecovery, "OnRep_PoiseRecovery" }, // 3154639312
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_PoiseRecoveryInterval, "OnRep_PoiseRecoveryInterval" }, // 435432321
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaggerDuration, "OnRep_StaggerDuration" }, // 2981836993
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_Stamina, "OnRep_Stamina" }, // 1939158237
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenDelay, "OnRep_StaminaRegenDelay" }, // 2482789688
		{ &Z_Construct_UFunction_UNinjaCombatAttributeSet_OnRep_StaminaRegenRate, "OnRep_StaminaRegenRate" }, // 2520458068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PendingDamage = { "PendingDamage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, PendingDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingDamage_MetaData), NewProp_PendingDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PendingMitigationCost = { "PendingMitigationCost", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, PendingMitigationCost), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingMitigationCost_MetaData), NewProp_PendingMitigationCost_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealthTotal = { "MaxHealthTotal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxHealthTotal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthTotal_MetaData), NewProp_MaxHealthTotal_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStaminaTotal = { "MaxStaminaTotal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxStaminaTotal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStaminaTotal_MetaData), NewProp_MaxStaminaTotal_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagicTotal = { "MaxMagicTotal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxMagicTotal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagicTotal_MetaData), NewProp_MaxMagicTotal_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealthAdd = { "MaxHealthAdd", "OnRep_MaxHealthAdd", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxHealthAdd), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthAdd_MetaData), NewProp_MaxHealthAdd_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealthPercent = { "MaxHealthPercent", "OnRep_MaxHealthPercent", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxHealthPercent), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealthPercent_MetaData), NewProp_MaxHealthPercent_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_HealthRegenRate = { "HealthRegenRate", "OnRep_HealthRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, HealthRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenRate_MetaData), NewProp_HealthRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStaminaAdd = { "MaxStaminaAdd", "OnRep_MaxStaminaAdd", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxStaminaAdd), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStaminaAdd_MetaData), NewProp_MaxStaminaAdd_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStaminaPercent = { "MaxStaminaPercent", "OnRep_MaxStaminaPercent", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxStaminaPercent), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStaminaPercent_MetaData), NewProp_MaxStaminaPercent_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", "OnRep_StaminaRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, StaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_StaminaRegenDelay = { "StaminaRegenDelay", "OnRep_StaminaRegenDelay", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, StaminaRegenDelay), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenDelay_MetaData), NewProp_StaminaRegenDelay_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Magic = { "Magic", "OnRep_Magic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, Magic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magic_MetaData), NewProp_Magic_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagic = { "MaxMagic", "OnRep_MaxMagic", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxMagic), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagic_MetaData), NewProp_MaxMagic_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagicAdd = { "MaxMagicAdd", "OnRep_MaxMagicAdd", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxMagicAdd), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagicAdd_MetaData), NewProp_MaxMagicAdd_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagicPercent = { "MaxMagicPercent", "OnRep_MaxMagicPercent", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MaxMagicPercent), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMagicPercent_MetaData), NewProp_MaxMagicPercent_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MagicRegenRate = { "MagicRegenRate", "OnRep_MagicRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MagicRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicRegenRate_MetaData), NewProp_MagicRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MagicRegenDelay = { "MagicRegenDelay", "OnRep_MagicRegenDelay", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, MagicRegenDelay), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicRegenDelay_MetaData), NewProp_MagicRegenDelay_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BaseDamage = { "BaseDamage", "OnRep_BaseDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BaseDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_CriticalHitChance = { "CriticalHitChance", "OnRep_CriticalHitChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, CriticalHitChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitChance_MetaData), NewProp_CriticalHitChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_CriticalHitMultiplier = { "CriticalHitMultiplier", "OnRep_CriticalHitMultiplier", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, CriticalHitMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CriticalHitMultiplier_MetaData), NewProp_CriticalHitMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockChance = { "BlockChance", "OnRep_BlockChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChance_MetaData), NewProp_BlockChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockMitigation = { "BlockMitigation", "OnRep_BlockMitigation", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockMitigation), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockMitigation_MetaData), NewProp_BlockMitigation_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockAngle = { "BlockAngle", "OnRep_BlockAngle", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockAngle), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockAngle_MetaData), NewProp_BlockAngle_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockLimit = { "BlockLimit", "OnRep_BlockLimit", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockLimit), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockLimit_MetaData), NewProp_BlockLimit_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockStaminaCostRate = { "BlockStaminaCostRate", "OnRep_BlockStaminaCostRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockStaminaCostRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockStaminaCostRate_MetaData), NewProp_BlockStaminaCostRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockStaminaCost = { "BlockStaminaCost", "OnRep_BlockStaminaCost", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockStaminaCost), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockStaminaCost_MetaData), NewProp_BlockStaminaCost_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockCooldown = { "BlockCooldown", "OnRep_BlockCooldown", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, BlockCooldown), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockCooldown_MetaData), NewProp_BlockCooldown_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_EvadeStaminaCost = { "EvadeStaminaCost", "OnRep_EvadeStaminaCost", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, EvadeStaminaCost), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvadeStaminaCost_MetaData), NewProp_EvadeStaminaCost_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_EvadeCooldown = { "EvadeCooldown", "OnRep_EvadeCooldown", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, EvadeCooldown), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvadeCooldown_MetaData), NewProp_EvadeCooldown_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseChance = { "DefenseChance", "OnRep_DefenseChance", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, DefenseChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseChance_MetaData), NewProp_DefenseChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseMitigation = { "DefenseMitigation", "OnRep_DefenseMitigation", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, DefenseMitigation), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseMitigation_MetaData), NewProp_DefenseMitigation_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseLimit = { "DefenseLimit", "OnRep_DefenseLimit", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, DefenseLimit), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseLimit_MetaData), NewProp_DefenseLimit_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseStaminaCostRate = { "DefenseStaminaCostRate", "OnRep_DefenseStaminaCostRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, DefenseStaminaCostRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseStaminaCostRate_MetaData), NewProp_DefenseStaminaCostRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_ArmorReduction = { "ArmorReduction", "OnRep_ArmorReduction", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, ArmorReduction), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorReduction_MetaData), NewProp_ArmorReduction_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_LastStandCount = { "LastStandCount", "OnRep_LastStandCount", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, LastStandCount), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStandCount_MetaData), NewProp_LastStandCount_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_LastStandHealthPercent = { "LastStandHealthPercent", "OnRep_LastStandHealthPercent", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, LastStandHealthPercent), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStandHealthPercent_MetaData), NewProp_LastStandHealthPercent_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Poise = { "Poise", "OnRep_Poise", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, Poise), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Poise_MetaData), NewProp_Poise_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PoiseDamage = { "PoiseDamage", "OnRep_PoiseDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, PoiseDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseDamage_MetaData), NewProp_PoiseDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PoiseRecovery = { "PoiseRecovery", "OnRep_PoiseRecovery", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, PoiseRecovery), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseRecovery_MetaData), NewProp_PoiseRecovery_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PoiseRecoveryInterval = { "PoiseRecoveryInterval", "OnRep_PoiseRecoveryInterval", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, PoiseRecoveryInterval), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseRecoveryInterval_MetaData), NewProp_PoiseRecoveryInterval_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_StaggerDuration = { "StaggerDuration", "OnRep_StaggerDuration", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAttributeSet, StaggerDuration), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaggerDuration_MetaData), NewProp_StaggerDuration_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PendingDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PendingMitigationCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealthTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStaminaTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagicTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealthAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxHealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_HealthRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStaminaAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxStaminaPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_StaminaRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Magic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagicAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MaxMagicPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MagicRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_MagicRegenDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_CriticalHitChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_CriticalHitMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockMitigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockStaminaCostRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_BlockCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_EvadeStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_EvadeCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseMitigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_DefenseStaminaCostRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_ArmorReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_LastStandCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_LastStandHealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_Poise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PoiseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PoiseRecovery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_PoiseRecoveryInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::NewProp_StaggerDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::ClassParams = {
	&UNinjaCombatAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAttributeSet()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAttributeSet.OuterSingleton, Z_Construct_UClass_UNinjaCombatAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAttributeSet.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAttributeSet>()
{
	return UNinjaCombatAttributeSet::StaticClass();
}
void UNinjaCombatAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_MaxHealthAdd(TEXT("MaxHealthAdd"));
	static const FName Name_MaxHealthPercent(TEXT("MaxHealthPercent"));
	static const FName Name_HealthRegenRate(TEXT("HealthRegenRate"));
	static const FName Name_Stamina(TEXT("Stamina"));
	static const FName Name_MaxStamina(TEXT("MaxStamina"));
	static const FName Name_MaxStaminaAdd(TEXT("MaxStaminaAdd"));
	static const FName Name_MaxStaminaPercent(TEXT("MaxStaminaPercent"));
	static const FName Name_StaminaRegenRate(TEXT("StaminaRegenRate"));
	static const FName Name_StaminaRegenDelay(TEXT("StaminaRegenDelay"));
	static const FName Name_Magic(TEXT("Magic"));
	static const FName Name_MaxMagic(TEXT("MaxMagic"));
	static const FName Name_MaxMagicAdd(TEXT("MaxMagicAdd"));
	static const FName Name_MaxMagicPercent(TEXT("MaxMagicPercent"));
	static const FName Name_MagicRegenRate(TEXT("MagicRegenRate"));
	static const FName Name_MagicRegenDelay(TEXT("MagicRegenDelay"));
	static const FName Name_BaseDamage(TEXT("BaseDamage"));
	static const FName Name_CriticalHitChance(TEXT("CriticalHitChance"));
	static const FName Name_CriticalHitMultiplier(TEXT("CriticalHitMultiplier"));
	static const FName Name_BlockChance(TEXT("BlockChance"));
	static const FName Name_BlockMitigation(TEXT("BlockMitigation"));
	static const FName Name_BlockAngle(TEXT("BlockAngle"));
	static const FName Name_BlockLimit(TEXT("BlockLimit"));
	static const FName Name_BlockStaminaCostRate(TEXT("BlockStaminaCostRate"));
	static const FName Name_BlockStaminaCost(TEXT("BlockStaminaCost"));
	static const FName Name_BlockCooldown(TEXT("BlockCooldown"));
	static const FName Name_EvadeStaminaCost(TEXT("EvadeStaminaCost"));
	static const FName Name_EvadeCooldown(TEXT("EvadeCooldown"));
	static const FName Name_DefenseChance(TEXT("DefenseChance"));
	static const FName Name_DefenseMitigation(TEXT("DefenseMitigation"));
	static const FName Name_DefenseLimit(TEXT("DefenseLimit"));
	static const FName Name_DefenseStaminaCostRate(TEXT("DefenseStaminaCostRate"));
	static const FName Name_ArmorReduction(TEXT("ArmorReduction"));
	static const FName Name_LastStandCount(TEXT("LastStandCount"));
	static const FName Name_LastStandHealthPercent(TEXT("LastStandHealthPercent"));
	static const FName Name_Poise(TEXT("Poise"));
	static const FName Name_PoiseDamage(TEXT("PoiseDamage"));
	static const FName Name_PoiseRecovery(TEXT("PoiseRecovery"));
	static const FName Name_PoiseRecoveryInterval(TEXT("PoiseRecoveryInterval"));
	static const FName Name_StaggerDuration(TEXT("StaggerDuration"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_MaxHealthAdd == ClassReps[(int32)ENetFields_Private::MaxHealthAdd].Property->GetFName()
		&& Name_MaxHealthPercent == ClassReps[(int32)ENetFields_Private::MaxHealthPercent].Property->GetFName()
		&& Name_HealthRegenRate == ClassReps[(int32)ENetFields_Private::HealthRegenRate].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
		&& Name_MaxStaminaAdd == ClassReps[(int32)ENetFields_Private::MaxStaminaAdd].Property->GetFName()
		&& Name_MaxStaminaPercent == ClassReps[(int32)ENetFields_Private::MaxStaminaPercent].Property->GetFName()
		&& Name_StaminaRegenRate == ClassReps[(int32)ENetFields_Private::StaminaRegenRate].Property->GetFName()
		&& Name_StaminaRegenDelay == ClassReps[(int32)ENetFields_Private::StaminaRegenDelay].Property->GetFName()
		&& Name_Magic == ClassReps[(int32)ENetFields_Private::Magic].Property->GetFName()
		&& Name_MaxMagic == ClassReps[(int32)ENetFields_Private::MaxMagic].Property->GetFName()
		&& Name_MaxMagicAdd == ClassReps[(int32)ENetFields_Private::MaxMagicAdd].Property->GetFName()
		&& Name_MaxMagicPercent == ClassReps[(int32)ENetFields_Private::MaxMagicPercent].Property->GetFName()
		&& Name_MagicRegenRate == ClassReps[(int32)ENetFields_Private::MagicRegenRate].Property->GetFName()
		&& Name_MagicRegenDelay == ClassReps[(int32)ENetFields_Private::MagicRegenDelay].Property->GetFName()
		&& Name_BaseDamage == ClassReps[(int32)ENetFields_Private::BaseDamage].Property->GetFName()
		&& Name_CriticalHitChance == ClassReps[(int32)ENetFields_Private::CriticalHitChance].Property->GetFName()
		&& Name_CriticalHitMultiplier == ClassReps[(int32)ENetFields_Private::CriticalHitMultiplier].Property->GetFName()
		&& Name_BlockChance == ClassReps[(int32)ENetFields_Private::BlockChance].Property->GetFName()
		&& Name_BlockMitigation == ClassReps[(int32)ENetFields_Private::BlockMitigation].Property->GetFName()
		&& Name_BlockAngle == ClassReps[(int32)ENetFields_Private::BlockAngle].Property->GetFName()
		&& Name_BlockLimit == ClassReps[(int32)ENetFields_Private::BlockLimit].Property->GetFName()
		&& Name_BlockStaminaCostRate == ClassReps[(int32)ENetFields_Private::BlockStaminaCostRate].Property->GetFName()
		&& Name_BlockStaminaCost == ClassReps[(int32)ENetFields_Private::BlockStaminaCost].Property->GetFName()
		&& Name_BlockCooldown == ClassReps[(int32)ENetFields_Private::BlockCooldown].Property->GetFName()
		&& Name_EvadeStaminaCost == ClassReps[(int32)ENetFields_Private::EvadeStaminaCost].Property->GetFName()
		&& Name_EvadeCooldown == ClassReps[(int32)ENetFields_Private::EvadeCooldown].Property->GetFName()
		&& Name_DefenseChance == ClassReps[(int32)ENetFields_Private::DefenseChance].Property->GetFName()
		&& Name_DefenseMitigation == ClassReps[(int32)ENetFields_Private::DefenseMitigation].Property->GetFName()
		&& Name_DefenseLimit == ClassReps[(int32)ENetFields_Private::DefenseLimit].Property->GetFName()
		&& Name_DefenseStaminaCostRate == ClassReps[(int32)ENetFields_Private::DefenseStaminaCostRate].Property->GetFName()
		&& Name_ArmorReduction == ClassReps[(int32)ENetFields_Private::ArmorReduction].Property->GetFName()
		&& Name_LastStandCount == ClassReps[(int32)ENetFields_Private::LastStandCount].Property->GetFName()
		&& Name_LastStandHealthPercent == ClassReps[(int32)ENetFields_Private::LastStandHealthPercent].Property->GetFName()
		&& Name_Poise == ClassReps[(int32)ENetFields_Private::Poise].Property->GetFName()
		&& Name_PoiseDamage == ClassReps[(int32)ENetFields_Private::PoiseDamage].Property->GetFName()
		&& Name_PoiseRecovery == ClassReps[(int32)ENetFields_Private::PoiseRecovery].Property->GetFName()
		&& Name_PoiseRecoveryInterval == ClassReps[(int32)ENetFields_Private::PoiseRecoveryInterval].Property->GetFName()
		&& Name_StaggerDuration == ClassReps[(int32)ENetFields_Private::StaggerDuration].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaCombatAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAttributeSet);
UNinjaCombatAttributeSet::~UNinjaCombatAttributeSet() {}
// End Class UNinjaCombatAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAttributeSet, UNinjaCombatAttributeSet::StaticClass, TEXT("UNinjaCombatAttributeSet"), &Z_Registration_Info_UClass_UNinjaCombatAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAttributeSet), 4073495511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_302468786(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
