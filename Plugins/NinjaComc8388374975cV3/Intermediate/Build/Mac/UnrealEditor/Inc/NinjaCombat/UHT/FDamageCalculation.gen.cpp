// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/FDamageCalculation.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDamageCalculation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationInput();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationOutput();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FDamageCalculationInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageCalculationInput;
class UScriptStruct* FDamageCalculationInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageCalculationInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageCalculationInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageCalculationInput, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("DamageCalculationInput"));
	}
	return Z_Registration_Info_UScriptStruct_DamageCalculationInput.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FDamageCalculationInput>()
{
	return FDamageCalculationInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageCalculationInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transfer object for the damage calculation input.\n */" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
		{ "ToolTip", "Transfer object for the damage calculation input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageInstigator_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStamina_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockChance_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockMitigation_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockLimit_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaCostRate_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseChance_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseMitigation_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseLimit_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseStaminaCostRate_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorReduction_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "Category", "Damage Calculation Input" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DamageInstigator;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockMitigation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockStaminaCostRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseMitigation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseStaminaCostRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmorReduction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageCalculationInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DamageInstigator = { "DamageInstigator", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, DamageInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageInstigator_MetaData), NewProp_DamageInstigator_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_CurrentStamina = { "CurrentStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, CurrentStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStamina_MetaData), NewProp_CurrentStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockChance = { "BlockChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, BlockChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockChance_MetaData), NewProp_BlockChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockMitigation = { "BlockMitigation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, BlockMitigation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockMitigation_MetaData), NewProp_BlockMitigation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockLimit = { "BlockLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, BlockLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockLimit_MetaData), NewProp_BlockLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockStaminaCostRate = { "BlockStaminaCostRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, BlockStaminaCostRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockStaminaCostRate_MetaData), NewProp_BlockStaminaCostRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseChance = { "DefenseChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, DefenseChance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseChance_MetaData), NewProp_DefenseChance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseMitigation = { "DefenseMitigation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, DefenseMitigation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseMitigation_MetaData), NewProp_DefenseMitigation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseLimit = { "DefenseLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, DefenseLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseLimit_MetaData), NewProp_DefenseLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseStaminaCostRate = { "DefenseStaminaCostRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, DefenseStaminaCostRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseStaminaCostRate_MetaData), NewProp_DefenseStaminaCostRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_ArmorReduction = { "ArmorReduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, ArmorReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorReduction_MetaData), NewProp_ArmorReduction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationInput, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DamageInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_CurrentStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockMitigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_BlockStaminaCostRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseMitigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_DefenseStaminaCostRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_ArmorReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"DamageCalculationInput",
	Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::PropPointers),
	sizeof(FDamageCalculationInput),
	alignof(FDamageCalculationInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationInput()
{
	if (!Z_Registration_Info_UScriptStruct_DamageCalculationInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageCalculationInput.InnerSingleton, Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageCalculationInput.InnerSingleton;
}
// End ScriptStruct FDamageCalculationInput

// Begin ScriptStruct FDamageCalculationOutput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageCalculationOutput;
class UScriptStruct* FDamageCalculationOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageCalculationOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageCalculationOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageCalculationOutput, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("DamageCalculationOutput"));
	}
	return Z_Registration_Info_UScriptStruct_DamageCalculationOutput.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FDamageCalculationOutput>()
{
	return FDamageCalculationOutput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transfer object for the damage calculation output.\n */" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
		{ "ToolTip", "Transfer object for the damage calculation output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalDamage_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedDamage_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMitigatedFromArmor_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMitigatedFromBlocking_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMitigatedFromDefense_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockStaminaCost_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseStaminaCost_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCancelled_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvulnerable_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsModified_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocked_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefended_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBreaker_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFatal_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLastStand_MetaData[] = {
		{ "Category", "Damage Calculation Output" },
		{ "ModuleRelativePath", "Public/Types/FDamageCalculation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifiedDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMitigatedFromArmor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMitigatedFromBlocking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMitigatedFromDefense;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefenseStaminaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static void NewProp_bIsCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCancelled;
	static void NewProp_bInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvulnerable;
	static void NewProp_bIsModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsModified;
	static void NewProp_bIsBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
	static void NewProp_bIsDefended_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefended;
	static void NewProp_bIsBreaker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBreaker;
	static void NewProp_bIsFatal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFatal;
	static void NewProp_bIsLastStand_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLastStand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageCalculationOutput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_OriginalDamage = { "OriginalDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, OriginalDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalDamage_MetaData), NewProp_OriginalDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_ModifiedDamage = { "ModifiedDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, ModifiedDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedDamage_MetaData), NewProp_ModifiedDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DamageMitigatedFromArmor = { "DamageMitigatedFromArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, DamageMitigatedFromArmor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMitigatedFromArmor_MetaData), NewProp_DamageMitigatedFromArmor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DamageMitigatedFromBlocking = { "DamageMitigatedFromBlocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, DamageMitigatedFromBlocking), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMitigatedFromBlocking_MetaData), NewProp_DamageMitigatedFromBlocking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DamageMitigatedFromDefense = { "DamageMitigatedFromDefense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, DamageMitigatedFromDefense), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMitigatedFromDefense_MetaData), NewProp_DamageMitigatedFromDefense_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_BlockStaminaCost = { "BlockStaminaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, BlockStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockStaminaCost_MetaData), NewProp_BlockStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DefenseStaminaCost = { "DefenseStaminaCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, DefenseStaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseStaminaCost_MetaData), NewProp_DefenseStaminaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageCalculationOutput, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsCancelled_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsCancelled = { "bIsCancelled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsCancelled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCancelled_MetaData), NewProp_bIsCancelled_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bInvulnerable_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bInvulnerable = { "bInvulnerable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bInvulnerable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvulnerable_MetaData), NewProp_bInvulnerable_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsModified_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsModified = { "bIsModified", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsModified_MetaData), NewProp_bIsModified_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocked_MetaData), NewProp_bIsBlocked_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsDefended_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsDefended = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsDefended = { "bIsDefended", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsDefended_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefended_MetaData), NewProp_bIsDefended_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBreaker_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsBreaker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBreaker = { "bIsBreaker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBreaker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBreaker_MetaData), NewProp_bIsBreaker_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsFatal_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsFatal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsFatal = { "bIsFatal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsFatal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFatal_MetaData), NewProp_bIsFatal_MetaData) };
void Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsLastStand_SetBit(void* Obj)
{
	((FDamageCalculationOutput*)Obj)->bIsLastStand = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsLastStand = { "bIsLastStand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDamageCalculationOutput), &Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsLastStand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLastStand_MetaData), NewProp_bIsLastStand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_OriginalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_ModifiedDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DamageMitigatedFromArmor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DamageMitigatedFromBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DamageMitigatedFromDefense,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_BlockStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_DefenseStaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bInvulnerable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsDefended,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsBreaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsFatal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewProp_bIsLastStand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"DamageCalculationOutput",
	Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::PropPointers),
	sizeof(FDamageCalculationOutput),
	alignof(FDamageCalculationOutput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageCalculationOutput()
{
	if (!Z_Registration_Info_UScriptStruct_DamageCalculationOutput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageCalculationOutput.InnerSingleton, Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageCalculationOutput.InnerSingleton;
}
// End ScriptStruct FDamageCalculationOutput

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageCalculation_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageCalculationInput::StaticStruct, Z_Construct_UScriptStruct_FDamageCalculationInput_Statics::NewStructOps, TEXT("DamageCalculationInput"), &Z_Registration_Info_UScriptStruct_DamageCalculationInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageCalculationInput), 2300810286U) },
		{ FDamageCalculationOutput::StaticStruct, Z_Construct_UScriptStruct_FDamageCalculationOutput_Statics::NewStructOps, TEXT("DamageCalculationOutput"), &Z_Registration_Info_UScriptStruct_DamageCalculationOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageCalculationOutput), 3411789563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageCalculation_h_3367946903(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageCalculation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageCalculation_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
