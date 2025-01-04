// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/Data/NinjaGASDataAsset.h"
#include "NinjaGAS/Public/AbilitySystem/Types/FNinjaAbilityDefaults.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASDataAsset();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASDataAsset_NoRegister();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultAttributeSet();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultGameplayAbility();
NINJAGAS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultGameplayEffect();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UNinjaGASDataAsset
void UNinjaGASDataAsset::StaticRegisterNativesUNinjaGASDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASDataAsset);
UClass* Z_Construct_UClass_UNinjaGASDataAsset_NoRegister()
{
	return UNinjaGASDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configures abilities that can be assigned to an avatar.\n */" },
		{ "IncludePath", "Data/NinjaGASDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaGASDataAsset.h" },
		{ "ToolTip", "Configures abilities that can be assigned to an avatar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributeSets_MetaData[] = {
		{ "AssetBundles", "Abilities" },
		{ "Category", "Abilities" },
		{ "Comment", "/** List of Attribute Sets assigned to an avatar. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaGASDataAsset.h" },
		{ "TitleProperty", "AttributeSetClass" },
		{ "ToolTip", "List of Attribute Sets assigned to an avatar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayEffects_MetaData[] = {
		{ "AssetBundles", "Abilities" },
		{ "Category", "Abilities" },
		{ "Comment", "/** List of Gameplay Effects assigned to an avatar. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaGASDataAsset.h" },
		{ "TitleProperty", "GameplayEffectClass" },
		{ "ToolTip", "List of Gameplay Effects assigned to an avatar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayAbilities_MetaData[] = {
		{ "AssetBundles", "Abilities" },
		{ "Category", "Abilities" },
		{ "Comment", "/** List of Gameplay Abilities assigned to an avatar. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaGASDataAsset.h" },
		{ "TitleProperty", "GameplayAbilityClass" },
		{ "ToolTip", "List of Gameplay Abilities assigned to an avatar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialGameplayTags_MetaData[] = {
		{ "Category", "Abilities" },
		{ "Comment", "/** Gameplay tags that are added by default to the owner's ASC. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaGASDataAsset.h" },
		{ "ToolTip", "Gameplay tags that are added by default to the owner's ASC." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAttributeSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAttributeSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultGameplayEffects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGameplayAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultGameplayAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultAttributeSets_Inner = { "DefaultAttributeSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultAttributeSet, METADATA_PARAMS(0, nullptr) }; // 4229569025
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultAttributeSets = { "DefaultAttributeSets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASDataAsset, DefaultAttributeSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributeSets_MetaData), NewProp_DefaultAttributeSets_MetaData) }; // 4229569025
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayEffects_Inner = { "DefaultGameplayEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 2237283769
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayEffects = { "DefaultGameplayEffects", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASDataAsset, DefaultGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayEffects_MetaData), NewProp_DefaultGameplayEffects_MetaData) }; // 2237283769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayAbilities_Inner = { "DefaultGameplayAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDefaultGameplayAbility, METADATA_PARAMS(0, nullptr) }; // 1671757573
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayAbilities = { "DefaultGameplayAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASDataAsset, DefaultGameplayAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayAbilities_MetaData), NewProp_DefaultGameplayAbilities_MetaData) }; // 1671757573
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_InitialGameplayTags = { "InitialGameplayTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASDataAsset, InitialGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialGameplayTags_MetaData), NewProp_InitialGameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaGASDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultAttributeSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultAttributeSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_DefaultGameplayAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASDataAsset_Statics::NewProp_InitialGameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaGASDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASDataAsset_Statics::ClassParams = {
	&UNinjaGASDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaGASDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaGASDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaGASDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASDataAsset.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASDataAsset>()
{
	return UNinjaGASDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASDataAsset);
UNinjaGASDataAsset::~UNinjaGASDataAsset() {}
// End Class UNinjaGASDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Data_NinjaGASDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASDataAsset, UNinjaGASDataAsset::StaticClass, TEXT("UNinjaGASDataAsset"), &Z_Registration_Info_UClass_UNinjaGASDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASDataAsset), 557286695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Data_NinjaGASDataAsset_h_2257106858(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Data_NinjaGASDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Data_NinjaGASDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
