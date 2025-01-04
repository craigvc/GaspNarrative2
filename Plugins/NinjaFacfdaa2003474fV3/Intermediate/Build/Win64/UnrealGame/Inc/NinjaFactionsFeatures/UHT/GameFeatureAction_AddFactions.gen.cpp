// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactionsFeatures/Public/GameFeatures/GameFeatureAction_AddFactions.h"
#include "NinjaFactions/Public/Types/FFactionMembership.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddFactions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembership();
NINJAFACTIONSFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddFactions();
NINJAFACTIONSFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddFactions_NoRegister();
NINJAFACTIONSFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FFactionFeatureEntry();
UPackage* Z_Construct_UPackage__Script_NinjaFactionsFeatures();
// End Cross Module References

// Begin ScriptStruct FFactionFeatureEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionFeatureEntry;
class UScriptStruct* FFactionFeatureEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionFeatureEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionFeatureEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionFeatureEntry, (UObject*)Z_Construct_UPackage__Script_NinjaFactionsFeatures(), TEXT("FactionFeatureEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FactionFeatureEntry.OuterSingleton;
}
template<> NINJAFACTIONSFEATURES_API UScriptStruct* StaticStruct<FFactionFeatureEntry>()
{
	return FFactionFeatureEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddFactions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Faction Setup" },
		{ "Comment", "/** Base actor that will receive the faction. */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddFactions.h" },
		{ "ToolTip", "Base actor that will receive the faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memberships_MetaData[] = {
		{ "Category", "Faction Setup" },
		{ "Comment", "/** Factions assigned to the actor. */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddFactions.h" },
		{ "TitleProperty", "FactionData" },
		{ "ToolTip", "Factions assigned to the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memberships_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Memberships;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionFeatureEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionFeatureEntry, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewProp_Memberships_Inner = { "Memberships", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(0, nullptr) }; // 2510799810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewProp_Memberships = { "Memberships", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionFeatureEntry, Memberships), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memberships_MetaData), NewProp_Memberships_MetaData) }; // 2510799810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewProp_Memberships_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewProp_Memberships,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsFeatures,
	nullptr,
	&NewStructOps,
	"FactionFeatureEntry",
	Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::PropPointers),
	sizeof(FFactionFeatureEntry),
	alignof(FFactionFeatureEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionFeatureEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FactionFeatureEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionFeatureEntry.InnerSingleton, Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionFeatureEntry.InnerSingleton;
}
// End ScriptStruct FFactionFeatureEntry

// Begin Class UGameFeatureAction_AddFactions
void UGameFeatureAction_AddFactions::StaticRegisterNativesUGameFeatureAction_AddFactions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddFactions);
UClass* Z_Construct_UClass_UGameFeatureAction_AddFactions_NoRegister()
{
	return UGameFeatureAction_AddFactions::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds Factions to a selected Faction Members.\n *\n * Make sure to add the component first, either via code or the \"Add Component\" action.\n */" },
		{ "DisplayName", "Add Factions" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddFactions.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddFactions.h" },
		{ "ToolTip", "Adds Factions to a selected Faction Members.\n\nMake sure to add the component first, either via code or the \"Add Component\" action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionSetup_MetaData[] = {
		{ "Category", "Faction Setup" },
		{ "Comment", "/** List of items being granted to an actor. */" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddFactions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "ActorClass" },
		{ "ToolTip", "List of items being granted to an actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionSetup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FactionSetup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddFactions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::NewProp_FactionSetup_Inner = { "FactionSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionFeatureEntry, METADATA_PARAMS(0, nullptr) }; // 927033050
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::NewProp_FactionSetup = { "FactionSetup", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddFactions, FactionSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionSetup_MetaData), NewProp_FactionSetup_MetaData) }; // 927033050
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::NewProp_FactionSetup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::NewProp_FactionSetup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactionsFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::ClassParams = {
	&UGameFeatureAction_AddFactions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddFactions()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddFactions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddFactions.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddFactions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddFactions.OuterSingleton;
}
template<> NINJAFACTIONSFEATURES_API UClass* StaticClass<UGameFeatureAction_AddFactions>()
{
	return UGameFeatureAction_AddFactions::StaticClass();
}
UGameFeatureAction_AddFactions::UGameFeatureAction_AddFactions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddFactions);
UGameFeatureAction_AddFactions::~UGameFeatureAction_AddFactions() {}
// End Class UGameFeatureAction_AddFactions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsFeatures_Public_GameFeatures_GameFeatureAction_AddFactions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionFeatureEntry::StaticStruct, Z_Construct_UScriptStruct_FFactionFeatureEntry_Statics::NewStructOps, TEXT("FactionFeatureEntry"), &Z_Registration_Info_UScriptStruct_FactionFeatureEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionFeatureEntry), 927033050U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddFactions, UGameFeatureAction_AddFactions::StaticClass, TEXT("UGameFeatureAction_AddFactions"), &Z_Registration_Info_UClass_UGameFeatureAction_AddFactions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddFactions), 3687943010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsFeatures_Public_GameFeatures_GameFeatureAction_AddFactions_h_2312538065(TEXT("/Script/NinjaFactionsFeatures"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsFeatures_Public_GameFeatures_GameFeatureAction_AddFactions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsFeatures_Public_GameFeatures_GameFeatureAction_AddFactions_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsFeatures_Public_GameFeatures_GameFeatureAction_AddFactions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactionsFeatures_Public_GameFeatures_GameFeatureAction_AddFactions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
