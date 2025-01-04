// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInputUI/Public/Input/NinjaInputCommonUIActionRouter.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputCommonUIActionRouter() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonUIActionRouterBase();
NINJAINPUTUI_API UClass* Z_Construct_UClass_UNinjaInputCommonUIActionRouter();
NINJAINPUTUI_API UClass* Z_Construct_UClass_UNinjaInputCommonUIActionRouter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInputUI();
// End Cross Module References

// Begin Class UNinjaInputCommonUIActionRouter
void UNinjaInputCommonUIActionRouter::StaticRegisterNativesUNinjaInputCommonUIActionRouter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputCommonUIActionRouter);
UClass* Z_Construct_UClass_UNinjaInputCommonUIActionRouter_NoRegister()
{
	return UNinjaInputCommonUIActionRouter::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An Action Router for Common UI that allows parameterization of certain aspects.\n * \n * Credits to Xist (Xi57) from the Forums for pointing out this class, its usage and the fact that\n * just by existing the system will automatically use it, replacing the default Router.\n */" },
		{ "IncludePath", "Input/NinjaInputCommonUIActionRouter.h" },
		{ "ModuleRelativePath", "Public/Input/NinjaInputCommonUIActionRouter.h" },
		{ "ToolTip", "An Action Router for Common UI that allows parameterization of certain aspects.\n\nCredits to Xist (Xi57) from the Forums for pointing out this class, its usage and the fact that\njust by existing the system will automatically use it, replacing the default Router." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputCommonUIActionRouter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUIActionRouterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInputUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics::ClassParams = {
	&UNinjaInputCommonUIActionRouter::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputCommonUIActionRouter()
{
	if (!Z_Registration_Info_UClass_UNinjaInputCommonUIActionRouter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputCommonUIActionRouter.OuterSingleton, Z_Construct_UClass_UNinjaInputCommonUIActionRouter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputCommonUIActionRouter.OuterSingleton;
}
template<> NINJAINPUTUI_API UClass* StaticClass<UNinjaInputCommonUIActionRouter>()
{
	return UNinjaInputCommonUIActionRouter::StaticClass();
}
UNinjaInputCommonUIActionRouter::UNinjaInputCommonUIActionRouter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputCommonUIActionRouter);
UNinjaInputCommonUIActionRouter::~UNinjaInputCommonUIActionRouter() {}
// End Class UNinjaInputCommonUIActionRouter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_Input_NinjaInputCommonUIActionRouter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputCommonUIActionRouter, UNinjaInputCommonUIActionRouter::StaticClass, TEXT("UNinjaInputCommonUIActionRouter"), &Z_Registration_Info_UClass_UNinjaInputCommonUIActionRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputCommonUIActionRouter), 1885057832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_Input_NinjaInputCommonUIActionRouter_h_3472290585(TEXT("/Script/NinjaInputUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_Input_NinjaInputCommonUIActionRouter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_Input_NinjaInputCommonUIActionRouter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
