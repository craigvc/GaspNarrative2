// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/NinjaInputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSettings();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputSettings
void UNinjaInputSettings::StaticRegisterNativesUNinjaInputSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputSettings);
UClass* Z_Construct_UClass_UNinjaInputSettings_NoRegister()
{
	return UNinjaInputSettings::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Central location for system-wide settings related to the Ninja Input plugin.\n */" },
		{ "DisplayName", "Ninja Input" },
		{ "IncludePath", "NinjaInputSettings.h" },
		{ "ModuleRelativePath", "Public/NinjaInputSettings.h" },
		{ "ToolTip", "Central location for system-wide settings related to the Ninja Input plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedEvents_MetaData[] = {
		{ "Category", "Core Settings" },
		{ "Comment", "/** Input Events that are tracked by managers and delegated to registered Handlers. */" },
		{ "ModuleRelativePath", "Public/NinjaInputSettings.h" },
		{ "ToolTip", "Input Events that are tracked by managers and delegated to registered Handlers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowScreenDebugMessages_MetaData[] = {
		{ "Category", "Development" },
		{ "Comment", "/**\n     * Determines if debug messages show be added to screen for all input handlers.\n     *\n     * This option is only valid in the editor and won't be added to packaged builds.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaInputSettings.h" },
		{ "ToolTip", "Determines if debug messages show be added to screen for all input handlers.\n\nThis option is only valid in the editor and won't be added to packaged builds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessageDuration_MetaData[] = {
		{ "Category", "Development" },
		{ "Comment", "/** Duration for the Debug Message on screen. */" },
		{ "EditCondition", "bShowScreenDebugMessages" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NinjaInputSettings.h" },
		{ "ToolTip", "Duration for the Debug Message on screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessageColor_MetaData[] = {
		{ "Category", "Development" },
		{ "Comment", "/** Color used for the on-screen debug messages. */" },
		{ "EditCondition", "bShowScreenDebugMessages" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NinjaInputSettings.h" },
		{ "ToolTip", "Color used for the on-screen debug messages." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackedEvents_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedEvents;
	static void NewProp_bShowScreenDebugMessages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScreenDebugMessages;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugMessageDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugMessageColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_TrackedEvents_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_TrackedEvents_Inner = { "TrackedEvents", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_TrackedEvents = { "TrackedEvents", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputSettings, TrackedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedEvents_MetaData), NewProp_TrackedEvents_MetaData) }; // 3771639830
void Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_bShowScreenDebugMessages_SetBit(void* Obj)
{
	((UNinjaInputSettings*)Obj)->bShowScreenDebugMessages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_bShowScreenDebugMessages = { "bShowScreenDebugMessages", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInputSettings), &Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_bShowScreenDebugMessages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowScreenDebugMessages_MetaData), NewProp_bShowScreenDebugMessages_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_DebugMessageDuration = { "DebugMessageDuration", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputSettings, DebugMessageDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMessageDuration_MetaData), NewProp_DebugMessageDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_DebugMessageColor = { "DebugMessageColor", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputSettings, DebugMessageColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMessageColor_MetaData), NewProp_DebugMessageColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_TrackedEvents_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_TrackedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_TrackedEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_bShowScreenDebugMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_DebugMessageDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSettings_Statics::NewProp_DebugMessageColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInputSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputSettings_Statics::ClassParams = {
	&UNinjaInputSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaInputSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputSettings()
{
	if (!Z_Registration_Info_UClass_UNinjaInputSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputSettings.OuterSingleton, Z_Construct_UClass_UNinjaInputSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputSettings.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputSettings>()
{
	return UNinjaInputSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputSettings);
UNinjaInputSettings::~UNinjaInputSettings() {}
// End Class UNinjaInputSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputSettings, UNinjaInputSettings::StaticClass, TEXT("UNinjaInputSettings"), &Z_Registration_Info_UClass_UNinjaInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputSettings), 3910473953U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputSettings_h_2546258329(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
