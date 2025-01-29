// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventoryEditor/Private/NarrativeItemBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeItemBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UNarrativeItemBlueprint();
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UNarrativeItemBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventoryEditor();
// End Cross Module References

// Begin Class UNarrativeItemBlueprint
void UNarrativeItemBlueprint::StaticRegisterNativesUNarrativeItemBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeItemBlueprint);
UClass* Z_Construct_UClass_UNarrativeItemBlueprint_NoRegister()
{
	return UNarrativeItemBlueprint::StaticClass();
}
struct Z_Construct_UClass_UNarrativeItemBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Narrative Item blueprints are the base class for any items you want to create with Narrative Inventory.\n * In the details panel you can define all the items properties, and by overriding functions like OnUse and CanUse\n * you can define how the item should behave when used. \n */" },
		{ "IncludePath", "NarrativeItemBlueprint.h" },
		{ "ModuleRelativePath", "Private/NarrativeItemBlueprint.h" },
		{ "ToolTip", "Narrative Item blueprints are the base class for any items you want to create with Narrative Inventory.\nIn the details panel you can define all the items properties, and by overriding functions like OnUse and CanUse\nyou can define how the item should behave when used." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeItemBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeItemBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItemBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeItemBlueprint_Statics::ClassParams = {
	&UNarrativeItemBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItemBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeItemBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeItemBlueprint()
{
	if (!Z_Registration_Info_UClass_UNarrativeItemBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeItemBlueprint.OuterSingleton, Z_Construct_UClass_UNarrativeItemBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeItemBlueprint.OuterSingleton;
}
template<> NARRATIVEINVENTORYEDITOR_API UClass* StaticClass<UNarrativeItemBlueprint>()
{
	return UNarrativeItemBlueprint::StaticClass();
}
UNarrativeItemBlueprint::UNarrativeItemBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeItemBlueprint);
UNarrativeItemBlueprint::~UNarrativeItemBlueprint() {}
// End Class UNarrativeItemBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeItemBlueprint, UNarrativeItemBlueprint::StaticClass, TEXT("UNarrativeItemBlueprint"), &Z_Registration_Info_UClass_UNarrativeItemBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeItemBlueprint), 274345729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprint_h_2883672538(TEXT("/Script/NarrativeInventoryEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
