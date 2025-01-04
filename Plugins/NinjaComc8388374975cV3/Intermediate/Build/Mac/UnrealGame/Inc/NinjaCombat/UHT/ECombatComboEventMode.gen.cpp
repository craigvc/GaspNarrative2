// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/ECombatComboEventMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECombatComboEventMode() {}

// Begin Cross Module References
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum ECombatComboEventMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatComboEventMode;
static UEnum* ECombatComboEventMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatComboEventMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatComboEventMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("ECombatComboEventMode"));
	}
	return Z_Registration_Info_UEnum_ECombatComboEventMode.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatComboEventMode>()
{
	return ECombatComboEventMode_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Determines how combo events are processed.\n */" },
		{ "GameplayTag.Comment", "/** Gameplay Events are forwarded as-is. */" },
		{ "GameplayTag.Name", "ECombatComboEventMode::GameplayTag" },
		{ "GameplayTag.ToolTip", "Gameplay Events are forwarded as-is." },
		{ "InputAction.Comment", "/** State Tree Events are mapped from Input Actions. */" },
		{ "InputAction.Name", "ECombatComboEventMode::InputAction" },
		{ "InputAction.ToolTip", "State Tree Events are mapped from Input Actions." },
		{ "ModuleRelativePath", "Public/Types/ECombatComboEventMode.h" },
		{ "ToolTip", "Determines how combo events are processed." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatComboEventMode::InputAction", (int64)ECombatComboEventMode::InputAction },
		{ "ECombatComboEventMode::GameplayTag", (int64)ECombatComboEventMode::GameplayTag },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"ECombatComboEventMode",
	"ECombatComboEventMode",
	Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode()
{
	if (!Z_Registration_Info_UEnum_ECombatComboEventMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatComboEventMode.InnerSingleton, Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatComboEventMode.InnerSingleton;
}
// End Enum ECombatComboEventMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatComboEventMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatComboEventMode_StaticEnum, TEXT("ECombatComboEventMode"), &Z_Registration_Info_UEnum_ECombatComboEventMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1120850582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatComboEventMode_h_2722777812(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatComboEventMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatComboEventMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
