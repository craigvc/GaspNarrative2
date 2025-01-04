// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AbilitySystem/Types/FNinjaAbilityDefaults.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNinjaAbilityDefaults() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultAttributeSet();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultGameplayAbility();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultGameplayEffect();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin ScriptStruct FDefaultAttributeSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultAttributeSet;
class UScriptStruct* FDefaultAttributeSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultAttributeSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultAttributeSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultAttributeSet, (UObject*)Z_Construct_UPackage__Script_NinjaGAS(), TEXT("DefaultAttributeSet"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultAttributeSet.OuterSingleton;
}
template<> NINJAGAS_API UScriptStruct* StaticStruct<FDefaultAttributeSet>()
{
	return FDefaultAttributeSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Default Attribute Set, with initialization data.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Default Attribute Set, with initialization data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetClass_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/** Attribute set class to grant. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Attribute set class to grant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeTable_MetaData[] = {
		{ "Category", "Attribute Set" },
		{ "Comment", "/** Data table with default attribute values. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "NativeConstTemplateArg", "" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/GameplayAbilities.AttributeMetaData" },
		{ "ToolTip", "Data table with default attribute values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttributeSetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultAttributeSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::NewProp_AttributeSetClass = { "AttributeSetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultAttributeSet, AttributeSetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetClass_MetaData), NewProp_AttributeSetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::NewProp_AttributeTable = { "AttributeTable", nullptr, (EPropertyFlags)0x0114000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultAttributeSet, AttributeTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeTable_MetaData), NewProp_AttributeTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::NewProp_AttributeSetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::NewProp_AttributeTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
	nullptr,
	&NewStructOps,
	"DefaultAttributeSet",
	Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::PropPointers),
	sizeof(FDefaultAttributeSet),
	alignof(FDefaultAttributeSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultAttributeSet()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultAttributeSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultAttributeSet.InnerSingleton, Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultAttributeSet.InnerSingleton;
}
// End ScriptStruct FDefaultAttributeSet

// Begin ScriptStruct FDefaultGameplayEffect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultGameplayEffect;
class UScriptStruct* FDefaultGameplayEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultGameplayEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultGameplayEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultGameplayEffect, (UObject*)Z_Construct_UPackage__Script_NinjaGAS(), TEXT("DefaultGameplayEffect"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultGameplayEffect.OuterSingleton;
}
template<> NINJAGAS_API UScriptStruct* StaticStruct<FDefaultGameplayEffect>()
{
	return FDefaultGameplayEffect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Default Gameplay Effect.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Default Gameplay Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClass_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Gameplay Effect class to grant. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Gameplay Effect class to grant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Initial level. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Initial level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultGameplayEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultGameplayEffect, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectClass_MetaData), NewProp_GameplayEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultGameplayEffect, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::NewProp_GameplayEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
	nullptr,
	&NewStructOps,
	"DefaultGameplayEffect",
	Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::PropPointers),
	sizeof(FDefaultGameplayEffect),
	alignof(FDefaultGameplayEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultGameplayEffect()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultGameplayEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultGameplayEffect.InnerSingleton, Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultGameplayEffect.InnerSingleton;
}
// End ScriptStruct FDefaultGameplayEffect

// Begin ScriptStruct FDefaultGameplayAbility
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultGameplayAbility;
class UScriptStruct* FDefaultGameplayAbility::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultGameplayAbility.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultGameplayAbility.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultGameplayAbility, (UObject*)Z_Construct_UPackage__Script_NinjaGAS(), TEXT("DefaultGameplayAbility"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultGameplayAbility.OuterSingleton;
}
template<> NINJAGAS_API UScriptStruct* StaticStruct<FDefaultGameplayAbility>()
{
	return FDefaultGameplayAbility::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Default Gameplay Ability.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Default Gameplay Ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilityClass_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** Gameplay Ability class to grant. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Gameplay Ability class to grant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** Initial level. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Initial level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "Category", "Gameplay Ability" },
		{ "Comment", "/** Input assigned to this ability. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaAbilityDefaults.h" },
		{ "ToolTip", "Input assigned to this ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayAbilityClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultGameplayAbility>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewProp_GameplayAbilityClass = { "GameplayAbilityClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultGameplayAbility, GameplayAbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayAbilityClass_MetaData), NewProp_GameplayAbilityClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultGameplayAbility, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultGameplayAbility, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewProp_GameplayAbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
	nullptr,
	&NewStructOps,
	"DefaultGameplayAbility",
	Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::PropPointers),
	sizeof(FDefaultGameplayAbility),
	alignof(FDefaultGameplayAbility),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultGameplayAbility()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultGameplayAbility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultGameplayAbility.InnerSingleton, Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultGameplayAbility.InnerSingleton;
}
// End ScriptStruct FDefaultGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_Types_FNinjaAbilityDefaults_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDefaultAttributeSet::StaticStruct, Z_Construct_UScriptStruct_FDefaultAttributeSet_Statics::NewStructOps, TEXT("DefaultAttributeSet"), &Z_Registration_Info_UScriptStruct_DefaultAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultAttributeSet), 4229569025U) },
		{ FDefaultGameplayEffect::StaticStruct, Z_Construct_UScriptStruct_FDefaultGameplayEffect_Statics::NewStructOps, TEXT("DefaultGameplayEffect"), &Z_Registration_Info_UScriptStruct_DefaultGameplayEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultGameplayEffect), 2237283769U) },
		{ FDefaultGameplayAbility::StaticStruct, Z_Construct_UScriptStruct_FDefaultGameplayAbility_Statics::NewStructOps, TEXT("DefaultGameplayAbility"), &Z_Registration_Info_UScriptStruct_DefaultGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultGameplayAbility), 1671757573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_Types_FNinjaAbilityDefaults_h_3149397837(TEXT("/Script/NinjaGAS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_Types_FNinjaAbilityDefaults_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_Types_FNinjaAbilityDefaults_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
