// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativePhysicalMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativePhysicalMaterial() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativePhysicalMaterial();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativePhysicalMaterial_NoRegister();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativePhysicalMaterial
void UNarrativePhysicalMaterial::StaticRegisterNativesUNarrativePhysicalMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativePhysicalMaterial);
UClass* Z_Construct_UClass_UNarrativePhysicalMaterial_NoRegister()
{
	return UNarrativePhysicalMaterial::StaticClass();
}
struct Z_Construct_UClass_UNarrativePhysicalMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom physical material for Narrative Pro. \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "UnrealFramework/NarrativePhysicalMaterial.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePhysicalMaterial.h" },
		{ "ToolTip", "Custom physical material for Narrative Pro." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Narrative Physical Material" },
		{ "Comment", "//Special damage multiplier we'll apply if the damage calculation sees we've hit this material. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativePhysicalMaterial.h" },
		{ "ToolTip", "Special damage multiplier we'll apply if the damage calculation sees we've hit this material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativePhysicalMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativePhysicalMaterial, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::NewProp_DamageMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicalMaterial,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::ClassParams = {
	&UNarrativePhysicalMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::PropPointers),
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativePhysicalMaterial()
{
	if (!Z_Registration_Info_UClass_UNarrativePhysicalMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativePhysicalMaterial.OuterSingleton, Z_Construct_UClass_UNarrativePhysicalMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativePhysicalMaterial.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativePhysicalMaterial>()
{
	return UNarrativePhysicalMaterial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativePhysicalMaterial);
UNarrativePhysicalMaterial::~UNarrativePhysicalMaterial() {}
// End Class UNarrativePhysicalMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePhysicalMaterial_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativePhysicalMaterial, UNarrativePhysicalMaterial::StaticClass, TEXT("UNarrativePhysicalMaterial"), &Z_Registration_Info_UClass_UNarrativePhysicalMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativePhysicalMaterial), 2837972524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePhysicalMaterial_h_2558166790(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePhysicalMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativePhysicalMaterial_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
