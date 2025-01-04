// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AI/Types/EAgentAbilityActivationMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAgentAbilityActivationMode() {}

// Begin Cross Module References
NINJAGAS_API UEnum* Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Enum EAgentAbilityActivationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgentAbilityActivationMode;
static UEnum* EAgentAbilityActivationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAgentAbilityActivationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAgentAbilityActivationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode, (UObject*)Z_Construct_UPackage__Script_NinjaGAS(), TEXT("EAgentAbilityActivationMode"));
	}
	return Z_Registration_Info_UEnum_EAgentAbilityActivationMode.OuterSingleton;
}
template<> NINJAGAS_API UEnum* StaticEnum<EAgentAbilityActivationMode>()
{
	return EAgentAbilityActivationMode_StaticEnum();
}
struct Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbilityClass.Comment", "/** Attempt to activate the ability by its class. */" },
		{ "AbilityClass.Name", "EAgentAbilityActivationMode::AbilityClass" },
		{ "AbilityClass.ToolTip", "Attempt to activate the ability by its class." },
		{ "BlackboardClass.Comment", "/** Attempt to activate the ability by its class, retrieved by the blackboard. */" },
		{ "BlackboardClass.Name", "EAgentAbilityActivationMode::BlackboardClass" },
		{ "BlackboardClass.ToolTip", "Attempt to activate the ability by its class, retrieved by the blackboard." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Determines how an AI Agent will try to activate an Ability.\n */" },
		{ "GameplayTags.Comment", "/** Activates the ability by gameplay tags. */" },
		{ "GameplayTags.Name", "EAgentAbilityActivationMode::GameplayTags" },
		{ "GameplayTags.ToolTip", "Activates the ability by gameplay tags." },
		{ "ModuleRelativePath", "Public/AI/Types/EAgentAbilityActivationMode.h" },
		{ "ToolTip", "Determines how an AI Agent will try to activate an Ability." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAgentAbilityActivationMode::AbilityClass", (int64)EAgentAbilityActivationMode::AbilityClass },
		{ "EAgentAbilityActivationMode::BlackboardClass", (int64)EAgentAbilityActivationMode::BlackboardClass },
		{ "EAgentAbilityActivationMode::GameplayTags", (int64)EAgentAbilityActivationMode::GameplayTags },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaGAS,
	nullptr,
	"EAgentAbilityActivationMode",
	"EAgentAbilityActivationMode",
	Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode()
{
	if (!Z_Registration_Info_UEnum_EAgentAbilityActivationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgentAbilityActivationMode.InnerSingleton, Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAgentAbilityActivationMode.InnerSingleton;
}
// End Enum EAgentAbilityActivationMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_Types_EAgentAbilityActivationMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAgentAbilityActivationMode_StaticEnum, TEXT("EAgentAbilityActivationMode"), &Z_Registration_Info_UEnum_EAgentAbilityActivationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3428651183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_Types_EAgentAbilityActivationMode_h_429592170(TEXT("/Script/NinjaGAS"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_Types_EAgentAbilityActivationMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_Types_EAgentAbilityActivationMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
