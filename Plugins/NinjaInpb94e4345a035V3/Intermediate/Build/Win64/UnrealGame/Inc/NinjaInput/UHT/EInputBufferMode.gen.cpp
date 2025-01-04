// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Types/EInputBufferMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInputBufferMode() {}

// Begin Cross Module References
NINJAINPUT_API UEnum* Z_Construct_UEnum_NinjaInput_EInputBufferMode();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Enum EInputBufferMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputBufferMode;
static UEnum* EInputBufferMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputBufferMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputBufferMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInput_EInputBufferMode, (UObject*)Z_Construct_UPackage__Script_NinjaInput(), TEXT("EInputBufferMode"));
	}
	return Z_Registration_Info_UEnum_EInputBufferMode.OuterSingleton;
}
template<> NINJAINPUT_API UEnum* StaticEnum<EInputBufferMode>()
{
	return EInputBufferMode_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** The Input Buffer is disabled and cannot be opened. */" },
		{ "Disabled.Name", "EInputBufferMode::Disabled" },
		{ "Disabled.ToolTip", "The Input Buffer is disabled and cannot be opened." },
		{ "FirstCommand.Comment", "/** The Input Buffer is enabled and will store the first command received. */" },
		{ "FirstCommand.Name", "EInputBufferMode::FirstCommand" },
		{ "FirstCommand.ToolTip", "The Input Buffer is enabled and will store the first command received." },
		{ "LastCommand.Comment", "/** The Input Buffer is disabled and will execute the last command received before it's closed. */" },
		{ "LastCommand.Name", "EInputBufferMode::LastCommand" },
		{ "LastCommand.ToolTip", "The Input Buffer is disabled and will execute the last command received before it's closed." },
		{ "ModuleRelativePath", "Public/Types/EInputBufferMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputBufferMode::Disabled", (int64)EInputBufferMode::Disabled },
		{ "EInputBufferMode::FirstCommand", (int64)EInputBufferMode::FirstCommand },
		{ "EInputBufferMode::LastCommand", (int64)EInputBufferMode::LastCommand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInput,
	nullptr,
	"EInputBufferMode",
	"EInputBufferMode",
	Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInput_EInputBufferMode()
{
	if (!Z_Registration_Info_UEnum_EInputBufferMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputBufferMode.InnerSingleton, Z_Construct_UEnum_NinjaInput_EInputBufferMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputBufferMode.InnerSingleton;
}
// End Enum EInputBufferMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputBufferMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputBufferMode_StaticEnum, TEXT("EInputBufferMode"), &Z_Registration_Info_UEnum_EInputBufferMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 242582671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputBufferMode_h_716103089(TEXT("/Script/NinjaInput"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputBufferMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputBufferMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
