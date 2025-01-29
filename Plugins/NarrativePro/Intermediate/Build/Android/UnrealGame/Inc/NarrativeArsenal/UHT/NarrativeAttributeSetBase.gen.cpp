// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeAttributeSetBase.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAttributeSetBase() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAttributeSetBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeAttributeSetBase Function OnRep_Armor
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_Armor_Parms
	{
		FGameplayAttributeData OldArmor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldArmor_MetaData), NewProp_OldArmor_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::NewProp_OldArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_Armor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::NarrativeAttributeSetBase_eventOnRep_Armor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::NarrativeAttributeSetBase_eventOnRep_Armor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_Armor)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_Armor

// Begin Class UNarrativeAttributeSetBase Function OnRep_AttackDamage
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_AttackDamage_Parms
	{
		FGameplayAttributeData OldAttackDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage = { "OldAttackDamage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_AttackDamage_Parms, OldAttackDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackDamage_MetaData), NewProp_OldAttackDamage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::NewProp_OldAttackDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_AttackDamage", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::NarrativeAttributeSetBase_eventOnRep_AttackDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::NarrativeAttributeSetBase_eventOnRep_AttackDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_AttackDamage)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackDamage(Z_Param_Out_OldAttackDamage);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_AttackDamage

// Begin Class UNarrativeAttributeSetBase Function OnRep_AttackRating
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_AttackRating_Parms
	{
		FGameplayAttributeData OldAttackRating;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackRating_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackRating;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating = { "OldAttackRating", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_AttackRating_Parms, OldAttackRating), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldAttackRating_MetaData), NewProp_OldAttackRating_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::NewProp_OldAttackRating,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_AttackRating", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::NarrativeAttributeSetBase_eventOnRep_AttackRating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::NarrativeAttributeSetBase_eventOnRep_AttackRating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_AttackRating)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackRating);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AttackRating(Z_Param_Out_OldAttackRating);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_AttackRating

// Begin Class UNarrativeAttributeSetBase Function OnRep_Health
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::NarrativeAttributeSetBase_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::NarrativeAttributeSetBase_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_Health

// Begin Class UNarrativeAttributeSetBase Function OnRep_MaxHealth
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::NarrativeAttributeSetBase_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::NarrativeAttributeSetBase_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_MaxHealth

// Begin Class UNarrativeAttributeSetBase Function OnRep_MaxStamina
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_MaxStamina_Parms
	{
		FGameplayAttributeData OldMaxStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina = { "OldMaxStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_MaxStamina_Parms, OldMaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxStamina_MetaData), NewProp_OldMaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::NewProp_OldMaxStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_MaxStamina", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::NarrativeAttributeSetBase_eventOnRep_MaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::NarrativeAttributeSetBase_eventOnRep_MaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_MaxStamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxStamina(Z_Param_Out_OldMaxStamina);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_MaxStamina

// Begin Class UNarrativeAttributeSetBase Function OnRep_Stamina
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_Stamina_Parms
	{
		FGameplayAttributeData OldStamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStamina_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina = { "OldStamina", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_Stamina_Parms, OldStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStamina_MetaData), NewProp_OldStamina_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::NewProp_OldStamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_Stamina", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::NarrativeAttributeSetBase_eventOnRep_Stamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::NarrativeAttributeSetBase_eventOnRep_Stamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_Stamina)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Stamina(Z_Param_Out_OldStamina);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_Stamina

// Begin Class UNarrativeAttributeSetBase Function OnRep_StaminaRegenRate
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_StaminaRegenRate_Parms
	{
		FGameplayAttributeData OldStaminaRegenRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldStaminaRegenRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldStaminaRegenRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate = { "OldStaminaRegenRate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_StaminaRegenRate_Parms, OldStaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldStaminaRegenRate_MetaData), NewProp_OldStaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::NewProp_OldStaminaRegenRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_StaminaRegenRate", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::NarrativeAttributeSetBase_eventOnRep_StaminaRegenRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::NarrativeAttributeSetBase_eventOnRep_StaminaRegenRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_StaminaRegenRate)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldStaminaRegenRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_StaminaRegenRate(Z_Param_Out_OldStaminaRegenRate);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_StaminaRegenRate

// Begin Class UNarrativeAttributeSetBase Function OnRep_XP
struct Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics
{
	struct NarrativeAttributeSetBase_eventOnRep_XP_Parms
	{
		FGameplayAttributeData OldXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication\n\x09**/" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "ToolTip", "These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldXP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::NewProp_OldXP = { "OldXP", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeAttributeSetBase_eventOnRep_XP_Parms, OldXP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldXP_MetaData), NewProp_OldXP_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::NewProp_OldXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAttributeSetBase, nullptr, "OnRep_XP", nullptr, nullptr, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::NarrativeAttributeSetBase_eventOnRep_XP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::NarrativeAttributeSetBase_eventOnRep_XP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAttributeSetBase::execOnRep_XP)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_XP(Z_Param_Out_OldXP);
	P_NATIVE_END;
}
// End Class UNarrativeAttributeSetBase Function OnRep_XP

// Begin Class UNarrativeAttributeSetBase
void UNarrativeAttributeSetBase::StaticRegisterNativesUNarrativeAttributeSetBase()
{
	UClass* Class = UNarrativeAttributeSetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Armor", &UNarrativeAttributeSetBase::execOnRep_Armor },
		{ "OnRep_AttackDamage", &UNarrativeAttributeSetBase::execOnRep_AttackDamage },
		{ "OnRep_AttackRating", &UNarrativeAttributeSetBase::execOnRep_AttackRating },
		{ "OnRep_Health", &UNarrativeAttributeSetBase::execOnRep_Health },
		{ "OnRep_MaxHealth", &UNarrativeAttributeSetBase::execOnRep_MaxHealth },
		{ "OnRep_MaxStamina", &UNarrativeAttributeSetBase::execOnRep_MaxStamina },
		{ "OnRep_Stamina", &UNarrativeAttributeSetBase::execOnRep_Stamina },
		{ "OnRep_StaminaRegenRate", &UNarrativeAttributeSetBase::execOnRep_StaminaRegenRate },
		{ "OnRep_XP", &UNarrativeAttributeSetBase::execOnRep_XP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAttributeSetBase);
UClass* Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister()
{
	return UNarrativeAttributeSetBase::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAttributeSetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base attribute set for Narrative pro. We haven't seperated out attack and health values, however this may be nice if your game requires it. \n */" },
		{ "IncludePath", "GAS/NarrativeAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "ToolTip", "Base attribute set for Narrative pro. We haven't seperated out attack and health values, however this may be nice if your game requires it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "//Our XP points - we implement this as an attribute which may be overkill \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "NarrativeSaveAttribute", "" },
		{ "ToolTip", "Our XP points - we implement this as an attribute which may be overkill" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.\n// Positive changes can directly use this.\n// Negative changes to Health should go through Damage meta attribute.\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "NarrativeSaveAttribute", "" },
		{ "ToolTip", "Current Health, when 0 we expect owner to die unless prevented by an ability. Capped by MaxHealth.\nPositive changes can directly use this.\nNegative changes to Health should go through Damage meta attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// MaxHealth is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "NarrativeSaveAttribute", "" },
		{ "ToolTip", "MaxHealth is its own attribute since GameplayEffects may modify it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Current stamina, used to execute special abilities. Capped by MaxStamina.\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "NarrativeSaveAttribute", "" },
		{ "ToolTip", "Current stamina, used to execute special abilities. Capped by MaxStamina." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// MaxStamina is its own attribute since GameplayEffects may modify it\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "NarrativeSaveAttribute", "" },
		{ "ToolTip", "MaxStamina is its own attribute since GameplayEffects may modify it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "Comment", "// Stamina regen rate will passively increase Stamina every second\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "NarrativeSaveAttribute", "" },
		{ "ToolTip", "Stamina regen rate will passively increase Stamina every second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRating_MetaData[] = {
		{ "Category", "Armor" },
		{ "Comment", "//Attack rating acts as a multiplier for attack damage. Attack multiplier = AttackRating / 100.  Used by the damage calculation \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "ToolTip", "Attack rating acts as a multiplier for attack damage. Attack multiplier = AttackRating / 100.  Used by the damage calculation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "Armor" },
		{ "Comment", "// Armor reduces the amount of damage done by attackers\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "ToolTip", "Armor reduces the amount of damage done by attackers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "MeleeAttackDamage" },
		{ "Comment", "// MeleeAttackDamage is the amount of damage our melee attacks do. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "ToolTip", "MeleeAttackDamage is the amount of damage our melee attacks do." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// Doesn't need to be replicated, is just a meta attribute server uses to apply damage to players. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAttributeSetBase.h" },
		{ "ToolTip", "Doesn't need to be replicated, is just a meta attribute server uses to apply damage to players." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackRating;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Armor, "OnRep_Armor" }, // 2497629832
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackDamage, "OnRep_AttackDamage" }, // 1969338655
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_AttackRating, "OnRep_AttackRating" }, // 4222420704
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 497368218
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 233624431
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_MaxStamina, "OnRep_MaxStamina" }, // 1579594034
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_Stamina, "OnRep_Stamina" }, // 794026972
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_StaminaRegenRate, "OnRep_StaminaRegenRate" }, // 52684722
		{ &Z_Construct_UFunction_UNarrativeAttributeSetBase_OnRep_XP, "OnRep_XP" }, // 3801265829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAttributeSetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_XP = { "XP", "OnRep_XP", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, XP), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Stamina = { "Stamina", "OnRep_Stamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, Stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_MaxStamina = { "MaxStamina", "OnRep_MaxStamina", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, MaxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", "OnRep_StaminaRegenRate", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, StaminaRegenRate), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_AttackRating = { "AttackRating", "OnRep_AttackRating", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, AttackRating), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRating_MetaData), NewProp_AttackRating_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_AttackDamage = { "AttackDamage", "OnRep_AttackDamage", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, AttackDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAttributeSetBase, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_AttackRating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::ClassParams = {
	&UNarrativeAttributeSetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAttributeSetBase()
{
	if (!Z_Registration_Info_UClass_UNarrativeAttributeSetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAttributeSetBase.OuterSingleton, Z_Construct_UClass_UNarrativeAttributeSetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAttributeSetBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAttributeSetBase>()
{
	return UNarrativeAttributeSetBase::StaticClass();
}
void UNarrativeAttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_XP(TEXT("XP"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Stamina(TEXT("Stamina"));
	static const FName Name_MaxStamina(TEXT("MaxStamina"));
	static const FName Name_StaminaRegenRate(TEXT("StaminaRegenRate"));
	static const FName Name_AttackRating(TEXT("AttackRating"));
	static const FName Name_Armor(TEXT("Armor"));
	static const FName Name_AttackDamage(TEXT("AttackDamage"));
	const bool bIsValid = true
		&& Name_XP == ClassReps[(int32)ENetFields_Private::XP].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Stamina == ClassReps[(int32)ENetFields_Private::Stamina].Property->GetFName()
		&& Name_MaxStamina == ClassReps[(int32)ENetFields_Private::MaxStamina].Property->GetFName()
		&& Name_StaminaRegenRate == ClassReps[(int32)ENetFields_Private::StaminaRegenRate].Property->GetFName()
		&& Name_AttackRating == ClassReps[(int32)ENetFields_Private::AttackRating].Property->GetFName()
		&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
		&& Name_AttackDamage == ClassReps[(int32)ENetFields_Private::AttackDamage].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeAttributeSetBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAttributeSetBase);
UNarrativeAttributeSetBase::~UNarrativeAttributeSetBase() {}
// End Class UNarrativeAttributeSetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAttributeSetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAttributeSetBase, UNarrativeAttributeSetBase::StaticClass, TEXT("UNarrativeAttributeSetBase"), &Z_Registration_Info_UClass_UNarrativeAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAttributeSetBase), 37865446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAttributeSetBase_h_1489781332(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAttributeSetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
