// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/ECombatAbilitySource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECombatAbilitySource() {}

// Begin Cross Module References
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum ECombatAbilitySource
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatAbilitySource;
static UEnum* ECombatAbilitySource_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatAbilitySource.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatAbilitySource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("ECombatAbilitySource"));
	}
	return Z_Registration_Info_UEnum_ECombatAbilitySource.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatAbilitySource>()
{
	return ECombatAbilitySource_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Determines from where an attack's melee scan or projectile should originate.\n */" },
		{ "ModuleRelativePath", "Public/Types/ECombatAbilitySource.h" },
		{ "Owner.Comment", "/** The Scan or Projectile will originate from the owner's mesh. */" },
		{ "Owner.Name", "ECombatAbilitySource::Owner" },
		{ "Owner.ToolTip", "The Scan or Projectile will originate from the owner's mesh." },
		{ "ToolTip", "Determines from where an attack's melee scan or projectile should originate." },
		{ "Weapon.Comment", "/** The Scan or Projectile will originate from a weapon's mesh. */" },
		{ "Weapon.Name", "ECombatAbilitySource::Weapon" },
		{ "Weapon.ToolTip", "The Scan or Projectile will originate from a weapon's mesh." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatAbilitySource::Owner", (int64)ECombatAbilitySource::Owner },
		{ "ECombatAbilitySource::Weapon", (int64)ECombatAbilitySource::Weapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"ECombatAbilitySource",
	"ECombatAbilitySource",
	Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource()
{
	if (!Z_Registration_Info_UEnum_ECombatAbilitySource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatAbilitySource.InnerSingleton, Z_Construct_UEnum_NinjaCombat_ECombatAbilitySource_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatAbilitySource.InnerSingleton;
}
// End Enum ECombatAbilitySource

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatAbilitySource_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatAbilitySource_StaticEnum, TEXT("ECombatAbilitySource"), &Z_Registration_Info_UEnum_ECombatAbilitySource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3452595870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatAbilitySource_h_3000948298(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatAbilitySource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatAbilitySource_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
