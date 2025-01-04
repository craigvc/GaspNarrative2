// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Types/EInputAnalogStickBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInputAnalogStickBehavior() {}

// Begin Cross Module References
NINJAINPUT_API UEnum* Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Enum EInputAnalogStickBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputAnalogStickBehavior;
static UEnum* EInputAnalogStickBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInputAnalogStickBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInputAnalogStickBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior, (UObject*)Z_Construct_UPackage__Script_NinjaInput(), TEXT("EInputAnalogStickBehavior"));
	}
	return Z_Registration_Info_UEnum_EInputAnalogStickBehavior.OuterSingleton;
}
template<> NINJAINPUT_API UEnum* StaticEnum<EInputAnalogStickBehavior>()
{
	return EInputAnalogStickBehavior_StaticEnum();
}
struct Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines support behaviors to adjust movement input from an analog stick.\n */" },
		{ "FixedSpeed_SingleGait.Comment", "/** Character will move at a fixed speed regardless of stick deflection. */" },
		{ "FixedSpeed_SingleGait.DisplayName", "Fixed Speed - Single Gait" },
		{ "FixedSpeed_SingleGait.Name", "EInputAnalogStickBehavior::FixedSpeed_SingleGait" },
		{ "FixedSpeed_SingleGait.ToolTip", "Character will move at a fixed speed regardless of stick deflection." },
		{ "FixedSpeed_WalkRun.Comment", "/** Character will move at a fixed walking speed with slight stick deflection, and a fixed running speed at full stick deflection. */" },
		{ "FixedSpeed_WalkRun.DisplayName", "Fixed Speed - Walk/Run" },
		{ "FixedSpeed_WalkRun.Name", "EInputAnalogStickBehavior::FixedSpeed_WalkRun" },
		{ "FixedSpeed_WalkRun.ToolTip", "Character will move at a fixed walking speed with slight stick deflection, and a fixed running speed at full stick deflection." },
		{ "ModuleRelativePath", "Public/Types/EInputAnalogStickBehavior.h" },
		{ "ToolTip", "Defines support behaviors to adjust movement input from an analog stick." },
		{ "VariableSpeed_SingleGait.Comment", "/** Full analog movement control with stick, character will remain walking or running based on gait input. */" },
		{ "VariableSpeed_SingleGait.DisplayName", "Variable Speed - Single Gait" },
		{ "VariableSpeed_SingleGait.Name", "EInputAnalogStickBehavior::VariableSpeed_SingleGait" },
		{ "VariableSpeed_SingleGait.ToolTip", "Full analog movement control with stick, character will remain walking or running based on gait input." },
		{ "VariableSpeed_WalkRun.Comment", "/** Full analog movement control with stick, character will switch from walk to run gait based on stick deflection. */" },
		{ "VariableSpeed_WalkRun.DisplayName", "Variable Speed - Walk/Run" },
		{ "VariableSpeed_WalkRun.Name", "EInputAnalogStickBehavior::VariableSpeed_WalkRun" },
		{ "VariableSpeed_WalkRun.ToolTip", "Full analog movement control with stick, character will switch from walk to run gait based on stick deflection." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInputAnalogStickBehavior::FixedSpeed_SingleGait", (int64)EInputAnalogStickBehavior::FixedSpeed_SingleGait },
		{ "EInputAnalogStickBehavior::FixedSpeed_WalkRun", (int64)EInputAnalogStickBehavior::FixedSpeed_WalkRun },
		{ "EInputAnalogStickBehavior::VariableSpeed_SingleGait", (int64)EInputAnalogStickBehavior::VariableSpeed_SingleGait },
		{ "EInputAnalogStickBehavior::VariableSpeed_WalkRun", (int64)EInputAnalogStickBehavior::VariableSpeed_WalkRun },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaInput,
	nullptr,
	"EInputAnalogStickBehavior",
	"EInputAnalogStickBehavior",
	Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior()
{
	if (!Z_Registration_Info_UEnum_EInputAnalogStickBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputAnalogStickBehavior.InnerSingleton, Z_Construct_UEnum_NinjaInput_EInputAnalogStickBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInputAnalogStickBehavior.InnerSingleton;
}
// End Enum EInputAnalogStickBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputAnalogStickBehavior_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInputAnalogStickBehavior_StaticEnum, TEXT("EInputAnalogStickBehavior"), &Z_Registration_Info_UEnum_EInputAnalogStickBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2877371527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputAnalogStickBehavior_h_3938268898(TEXT("/Script/NinjaInput"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputAnalogStickBehavior_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputAnalogStickBehavior_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
