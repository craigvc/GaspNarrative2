// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityConfirm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityConfirm() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityConfirm();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityConfirm_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityConfirm
void UInputHandler_AbilityConfirm::StaticRegisterNativesUInputHandler_AbilityConfirm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityConfirm);
UClass* Z_Construct_UClass_UInputHandler_AbilityConfirm_NoRegister()
{
	return UInputHandler_AbilityConfirm::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends a target confirm request to the Ability System.\n */" },
		{ "DisplayName", "GAS: Ability Target Confirm" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityConfirm.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityConfirm.h" },
		{ "ToolTip", "Sends a target confirm request to the Ability System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityConfirm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics::ClassParams = {
	&UInputHandler_AbilityConfirm::StaticClass,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityConfirm()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityConfirm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityConfirm.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityConfirm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityConfirm.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityConfirm>()
{
	return UInputHandler_AbilityConfirm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityConfirm);
UInputHandler_AbilityConfirm::~UInputHandler_AbilityConfirm() {}
// End Class UInputHandler_AbilityConfirm

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityConfirm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityConfirm, UInputHandler_AbilityConfirm::StaticClass, TEXT("UInputHandler_AbilityConfirm"), &Z_Registration_Info_UClass_UInputHandler_AbilityConfirm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityConfirm), 3900267043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityConfirm_h_3087227(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityConfirm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityConfirm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
