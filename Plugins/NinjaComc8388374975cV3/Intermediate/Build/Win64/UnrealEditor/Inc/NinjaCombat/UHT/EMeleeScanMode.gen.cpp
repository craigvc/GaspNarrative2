// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/EMeleeScanMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMeleeScanMode() {}

// Begin Cross Module References
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EMeleeScanMode();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum EMeleeScanMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeleeScanMode;
static UEnum* EMeleeScanMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMeleeScanMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMeleeScanMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_EMeleeScanMode, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("EMeleeScanMode"));
	}
	return Z_Registration_Info_UEnum_EMeleeScanMode.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<EMeleeScanMode>()
{
	return EMeleeScanMode_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoxSweep.Name", "EMeleeScanMode::BoxSweep" },
		{ "CapsuleSweep.Name", "EMeleeScanMode::CapsuleSweep" },
		{ "Comment", "/**\n * Scan styles to allow more control over target detection.\n */" },
		{ "LineTrace.Name", "EMeleeScanMode::LineTrace" },
		{ "ModuleRelativePath", "Public/Types/EMeleeScanMode.h" },
		{ "SphereSweep.Name", "EMeleeScanMode::SphereSweep" },
		{ "ToolTip", "Scan styles to allow more control over target detection." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeleeScanMode::LineTrace", (int64)EMeleeScanMode::LineTrace },
		{ "EMeleeScanMode::BoxSweep", (int64)EMeleeScanMode::BoxSweep },
		{ "EMeleeScanMode::CapsuleSweep", (int64)EMeleeScanMode::CapsuleSweep },
		{ "EMeleeScanMode::SphereSweep", (int64)EMeleeScanMode::SphereSweep },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"EMeleeScanMode",
	"EMeleeScanMode",
	Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_EMeleeScanMode()
{
	if (!Z_Registration_Info_UEnum_EMeleeScanMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeleeScanMode.InnerSingleton, Z_Construct_UEnum_NinjaCombat_EMeleeScanMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMeleeScanMode.InnerSingleton;
}
// End Enum EMeleeScanMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_EMeleeScanMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMeleeScanMode_StaticEnum, TEXT("EMeleeScanMode"), &Z_Registration_Info_UEnum_EMeleeScanMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4155429208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_EMeleeScanMode_h_1301309434(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_EMeleeScanMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_EMeleeScanMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
