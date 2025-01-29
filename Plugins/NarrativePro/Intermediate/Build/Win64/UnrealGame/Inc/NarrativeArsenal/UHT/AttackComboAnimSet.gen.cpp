// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/AttackComboAnimSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackComboAnimSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeAnimSet
void UNarrativeAnimSet::StaticRegisterNativesUNarrativeAnimSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAnimSet);
UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister()
{
	return UNarrativeAnimSet::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAnimSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores a set of animations to make them easily re-usable. Used for combos and flinches in the base tool. \n */" },
		{ "IncludePath", "GAS/AttackComboAnimSet.h" },
		{ "ModuleRelativePath", "Public/GAS/AttackComboAnimSet.h" },
		{ "ToolTip", "Stores a set of animations to make them easily re-usable. Used for combos and flinches in the base tool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Attack montages for the melee attack\n" },
		{ "ModuleRelativePath", "Public/GAS/AttackComboAnimSet.h" },
		{ "ToolTip", "Attack montages for the melee attack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Montages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAnimSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeAnimSet_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAnimSet_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAnimSet, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Montages_MetaData), NewProp_Montages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAnimSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimSet_Statics::NewProp_Montages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAnimSet_Statics::NewProp_Montages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAnimSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAnimSet_Statics::ClassParams = {
	&UNarrativeAnimSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeAnimSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimSet_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAnimSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAnimSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAnimSet()
{
	if (!Z_Registration_Info_UClass_UNarrativeAnimSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAnimSet.OuterSingleton, Z_Construct_UClass_UNarrativeAnimSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAnimSet.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAnimSet>()
{
	return UNarrativeAnimSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAnimSet);
UNarrativeAnimSet::~UNarrativeAnimSet() {}
// End Class UNarrativeAnimSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AttackComboAnimSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAnimSet, UNarrativeAnimSet::StaticClass, TEXT("UNarrativeAnimSet"), &Z_Registration_Info_UClass_UNarrativeAnimSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAnimSet), 569881121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AttackComboAnimSet_h_3868351030(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AttackComboAnimSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_AttackComboAnimSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
