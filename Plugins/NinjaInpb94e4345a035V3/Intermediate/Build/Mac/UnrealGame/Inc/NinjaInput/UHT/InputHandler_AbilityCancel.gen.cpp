// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityCancel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityCancel() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityCancel();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityCancel_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityCancel
void UInputHandler_AbilityCancel::StaticRegisterNativesUInputHandler_AbilityCancel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityCancel);
UClass* Z_Construct_UClass_UInputHandler_AbilityCancel_NoRegister()
{
	return UInputHandler_AbilityCancel::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends a target cancel request to the Ability System.\n */" },
		{ "DisplayName", "GAS: Ability Target Cancel" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityCancel.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityCancel.h" },
		{ "ToolTip", "Sends a target cancel request to the Ability System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityCancel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityCancel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityCancel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityCancel_Statics::ClassParams = {
	&UInputHandler_AbilityCancel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityCancel_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityCancel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityCancel()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityCancel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityCancel.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityCancel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityCancel.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityCancel>()
{
	return UInputHandler_AbilityCancel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityCancel);
UInputHandler_AbilityCancel::~UInputHandler_AbilityCancel() {}
// End Class UInputHandler_AbilityCancel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityCancel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityCancel, UInputHandler_AbilityCancel::StaticClass, TEXT("UInputHandler_AbilityCancel"), &Z_Registration_Info_UClass_UInputHandler_AbilityCancel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityCancel), 701446608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityCancel_h_2432696538(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityCancel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityCancel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
