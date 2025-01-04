// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityInterruption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityInterruption() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityInterruption
void UInputHandler_AbilityInterruption::StaticRegisterNativesUInputHandler_AbilityInterruption()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityInterruption);
UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption_NoRegister()
{
	return UInputHandler_AbilityInterruption::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic Ability Interruption Handler.\n */" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityInterruption.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityInterruption.h" },
		{ "ToolTip", "Basic Ability Interruption Handler." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityInterruption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics::ClassParams = {
	&UInputHandler_AbilityInterruption::StaticClass,
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
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityInterruption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityInterruption.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityInterruption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityInterruption.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityInterruption>()
{
	return UInputHandler_AbilityInterruption::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityInterruption);
UInputHandler_AbilityInterruption::~UInputHandler_AbilityInterruption() {}
// End Class UInputHandler_AbilityInterruption

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInterruption_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityInterruption, UInputHandler_AbilityInterruption::StaticClass, TEXT("UInputHandler_AbilityInterruption"), &Z_Registration_Info_UClass_UInputHandler_AbilityInterruption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityInterruption), 3702971569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInterruption_h_440747538(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInterruption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInterruption_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
