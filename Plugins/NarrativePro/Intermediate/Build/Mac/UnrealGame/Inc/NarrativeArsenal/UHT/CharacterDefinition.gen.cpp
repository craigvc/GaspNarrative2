// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Character/CharacterDefinition.h"
#include "NarrativeInventory/Public/InventoryComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetType();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearanceBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRoll();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterDefinition
void UCharacterDefinition::StaticRegisterNativesUCharacterDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterDefinition);
UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister()
{
	return UCharacterDefinition::StaticClass();
}
struct Z_Construct_UClass_UCharacterDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Data asset containing character data - the characters default appearance, etc.\n */" },
		{ "IncludePath", "Character/CharacterDefinition.h" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "Data asset containing character data - the characters default appearance, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAppearance_MetaData[] = {
		{ "AssetBundles", "SpawnedData" },
		{ "Category", "Appearance" },
		{ "Comment", "/**The characters default appearance*/" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "The characters default appearance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCurrency_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Default currency this character should have in their inventory */" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "Default currency this character should have in their inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItemLoadout_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The items we should grant the character by default. */" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "The items we should grant the character by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOwnedTags_MetaData[] = {
		{ "Categories", "Narrative.State" },
		{ "Category", "Factions" },
		{ "Comment", "/** Add any custom tags the character needs in here, for example State.Invulnerable if you want the character to never take damage. */" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "Add any custom tags the character needs in here, for example State.Invulnerable if you want the character to never take damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFactions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "Category", "Factions" },
		{ "Comment", "/**The factions this character will be in by default - you can set the characters faction to something else later if desired. */" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "The factions this character will be in by default - you can set the characters faction to something else later if desired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPriority_MetaData[] = {
		{ "Category", "Attack Priority" },
		{ "Comment", "/** Bots use this in their EQS query when looking for targets. Higher values make bots more drawn to us. */" },
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
		{ "ToolTip", "Bots use this in their EQS query when looking for targets. Higher values make bots more drawn to us." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Character/CharacterDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAppearance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultCurrency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultItemLoadout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItemLoadout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOwnedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFactions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultAppearance = { "DefaultAppearance", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, DefaultAppearance), Z_Construct_UClass_UCharacterAppearanceBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAppearance_MetaData), NewProp_DefaultAppearance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultCurrency = { "DefaultCurrency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, DefaultCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCurrency_MetaData), NewProp_DefaultCurrency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultItemLoadout_Inner = { "DefaultItemLoadout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootTableRoll, METADATA_PARAMS(0, nullptr) }; // 2828341262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultItemLoadout = { "DefaultItemLoadout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, DefaultItemLoadout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItemLoadout_MetaData), NewProp_DefaultItemLoadout_MetaData) }; // 2828341262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultOwnedTags = { "DefaultOwnedTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, DefaultOwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOwnedTags_MetaData), NewProp_DefaultOwnedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultFactions = { "DefaultFactions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, DefaultFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFactions_MetaData), NewProp_DefaultFactions_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_AttackPriority = { "AttackPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, AttackPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPriority_MetaData), NewProp_AttackPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_AssetType = { "AssetType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDefinition, AssetType), Z_Construct_UScriptStruct_FPrimaryAssetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetType_MetaData), NewProp_AssetType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultAppearance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultItemLoadout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultItemLoadout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_DefaultFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_AttackPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDefinition_Statics::NewProp_AssetType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterDefinition_Statics::ClassParams = {
	&UCharacterDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterDefinition()
{
	if (!Z_Registration_Info_UClass_UCharacterDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterDefinition.OuterSingleton, Z_Construct_UClass_UCharacterDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterDefinition.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterDefinition>()
{
	return UCharacterDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterDefinition);
UCharacterDefinition::~UCharacterDefinition() {}
// End Class UCharacterDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterDefinition, UCharacterDefinition::StaticClass, TEXT("UCharacterDefinition"), &Z_Registration_Info_UClass_UCharacterDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterDefinition), 753855351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterDefinition_h_225480941(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
