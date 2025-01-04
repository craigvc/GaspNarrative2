// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/Notifies/AnimNotify_Cast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Cast() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Cast();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Cast_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotify_Cast
void UAnimNotify_Cast::StaticRegisterNativesUAnimNotify_Cast()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Cast);
UClass* Z_Construct_UClass_UAnimNotify_Cast_NoRegister()
{
	return UAnimNotify_Cast::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Cast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends a Gameplay Event to perform a cast.\n */" },
		{ "DisplayName", "Cast" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Notifies/AnimNotify_Cast.h" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_Cast.h" },
		{ "ToolTip", "Sends a Gameplay Event to perform a cast." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Cast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_Cast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Cast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Cast_Statics::ClassParams = {
	&UAnimNotify_Cast::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Cast_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Cast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Cast()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Cast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Cast.OuterSingleton, Z_Construct_UClass_UAnimNotify_Cast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Cast.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotify_Cast>()
{
	return UAnimNotify_Cast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Cast);
UAnimNotify_Cast::~UAnimNotify_Cast() {}
// End Class UAnimNotify_Cast

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Cast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Cast, UAnimNotify_Cast::StaticClass, TEXT("UAnimNotify_Cast"), &Z_Registration_Info_UClass_UAnimNotify_Cast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Cast), 1840079414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Cast_h_3779728006(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Cast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Cast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
