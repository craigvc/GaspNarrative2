// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputActions/InputTriggerDoubleTap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTriggerDoubleTap() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTimedBase();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputTriggerDoubleTap();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputTriggerDoubleTap_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputTriggerDoubleTap
void UInputTriggerDoubleTap::StaticRegisterNativesUInputTriggerDoubleTap()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerDoubleTap);
UClass* Z_Construct_UClass_UInputTriggerDoubleTap_NoRegister()
{
	return UInputTriggerDoubleTap::StaticClass();
}
struct Z_Construct_UClass_UInputTriggerDoubleTap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Double Tap: Press/Release/Press.\n * \n * Input must be actuated then released within TapReleaseTimeThreshold seconds to trigger.\n * Then a second input must be actuated within the TapIntervalThreshold.\n */" },
		{ "DisplayName", "Double Tap" },
		{ "IncludePath", "InputActions/InputTriggerDoubleTap.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputActions/InputTriggerDoubleTap.h" },
		{ "ToolTip", "Double Tap: Press/Release/Press.\n\nInput must be actuated then released within TapReleaseTimeThreshold seconds to trigger.\nThen a second input must be actuated within the TapIntervalThreshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TapReleaseTimeThreshold_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Release within this time-frame to trigger a tap.\n" },
		{ "ModuleRelativePath", "Public/InputActions/InputTriggerDoubleTap.h" },
		{ "ToolTip", "Release within this time-frame to trigger a tap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TapIntervalThreshold_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Time limit between taps.\n" },
		{ "ModuleRelativePath", "Public/InputActions/InputTriggerDoubleTap.h" },
		{ "ToolTip", "Time limit between taps." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TapReleaseTimeThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TapIntervalThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerDoubleTap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerDoubleTap_Statics::NewProp_TapReleaseTimeThreshold = { "TapReleaseTimeThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputTriggerDoubleTap, TapReleaseTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TapReleaseTimeThreshold_MetaData), NewProp_TapReleaseTimeThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerDoubleTap_Statics::NewProp_TapIntervalThreshold = { "TapIntervalThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputTriggerDoubleTap, TapIntervalThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TapIntervalThreshold_MetaData), NewProp_TapIntervalThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerDoubleTap_Statics::NewProp_TapReleaseTimeThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerDoubleTap_Statics::NewProp_TapIntervalThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputTriggerDoubleTap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputTriggerTimedBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerDoubleTap_Statics::ClassParams = {
	&UInputTriggerDoubleTap::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::PropPointers),
	0,
	0x400830A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDoubleTap_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputTriggerDoubleTap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputTriggerDoubleTap()
{
	if (!Z_Registration_Info_UClass_UInputTriggerDoubleTap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerDoubleTap.OuterSingleton, Z_Construct_UClass_UInputTriggerDoubleTap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputTriggerDoubleTap.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputTriggerDoubleTap>()
{
	return UInputTriggerDoubleTap::StaticClass();
}
UInputTriggerDoubleTap::UInputTriggerDoubleTap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerDoubleTap);
UInputTriggerDoubleTap::~UInputTriggerDoubleTap() {}
// End Class UInputTriggerDoubleTap

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputActions_InputTriggerDoubleTap_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputTriggerDoubleTap, UInputTriggerDoubleTap::StaticClass, TEXT("UInputTriggerDoubleTap"), &Z_Registration_Info_UClass_UInputTriggerDoubleTap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerDoubleTap), 1832841129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputActions_InputTriggerDoubleTap_h_538568118(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputActions_InputTriggerDoubleTap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputActions_InputTriggerDoubleTap_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
