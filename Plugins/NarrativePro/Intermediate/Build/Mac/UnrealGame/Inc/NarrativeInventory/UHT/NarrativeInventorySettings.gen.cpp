// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/NarrativeInventorySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeInventorySettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventorySettings();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventorySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin Class UNarrativeInventorySettings
void UNarrativeInventorySettings::StaticRegisterNativesUNarrativeInventorySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeInventorySettings);
UClass* Z_Construct_UClass_UNarrativeInventorySettings_NoRegister()
{
	return UNarrativeInventorySettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeInventorySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines configuration settings for the Narrative Inventory plugin. \n */" },
		{ "IncludePath", "NarrativeInventorySettings.h" },
		{ "ModuleRelativePath", "Public/NarrativeInventorySettings.h" },
		{ "ToolTip", "Defines configuration settings for the Narrative Inventory plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleStacks_MetaData[] = {
		{ "Category", "Inventory Settings" },
		{ "Comment", "//Are we allowed to carry multiple stacks of an item? \n" },
		{ "ModuleRelativePath", "Public/NarrativeInventorySettings.h" },
		{ "ToolTip", "Are we allowed to carry multiple stacks of an item?" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowMultipleStacks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleStacks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInventorySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeInventorySettings_Statics::NewProp_bAllowMultipleStacks_SetBit(void* Obj)
{
	((UNarrativeInventorySettings*)Obj)->bAllowMultipleStacks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeInventorySettings_Statics::NewProp_bAllowMultipleStacks = { "bAllowMultipleStacks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeInventorySettings), &Z_Construct_UClass_UNarrativeInventorySettings_Statics::NewProp_bAllowMultipleStacks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowMultipleStacks_MetaData), NewProp_bAllowMultipleStacks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInventorySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventorySettings_Statics::NewProp_bAllowMultipleStacks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventorySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInventorySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventorySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInventorySettings_Statics::ClassParams = {
	&UNarrativeInventorySettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativeInventorySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventorySettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventorySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeInventorySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeInventorySettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeInventorySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeInventorySettings.OuterSingleton, Z_Construct_UClass_UNarrativeInventorySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeInventorySettings.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UNarrativeInventorySettings>()
{
	return UNarrativeInventorySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInventorySettings);
UNarrativeInventorySettings::~UNarrativeInventorySettings() {}
// End Class UNarrativeInventorySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeInventorySettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeInventorySettings, UNarrativeInventorySettings::StaticClass, TEXT("UNarrativeInventorySettings"), &Z_Registration_Info_UClass_UNarrativeInventorySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInventorySettings), 4129043746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeInventorySettings_h_2484511340(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeInventorySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeInventorySettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
