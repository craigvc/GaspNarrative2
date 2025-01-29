// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/NarrativeArsenal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeArsenal() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum ENarrativeAbilityInputID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENarrativeAbilityInputID;
static UEnum* ENarrativeAbilityInputID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENarrativeAbilityInputID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENarrativeAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ENarrativeAbilityInputID"));
	}
	return Z_Registration_Info_UEnum_ENarrativeAbilityInputID.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeAbilityInputID>()
{
	return ENarrativeAbilityInputID_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ability1.Comment", "// 5 Q - Generic ability bound to ability1 slot\n" },
		{ "Ability1.DisplayName", "Ability1" },
		{ "Ability1.Name", "ENarrativeAbilityInputID::Ability1" },
		{ "Ability1.ToolTip", "5 Q - Generic ability bound to ability1 slot" },
		{ "Ability2.Comment", "// 6 E - Generic ability bound to ability2 slot\n" },
		{ "Ability2.DisplayName", "Ability2" },
		{ "Ability2.Name", "ENarrativeAbilityInputID::Ability2" },
		{ "Ability2.ToolTip", "6 E - Generic ability bound to ability2 slot" },
		{ "Ability3.Comment", "// 7 F - Generic ability bound to Ability3 slot\n" },
		{ "Ability3.DisplayName", "Ability3" },
		{ "Ability3.Name", "ENarrativeAbilityInputID::Ability3" },
		{ "Ability3.ToolTip", "7 F - Generic ability bound to Ability3 slot" },
		{ "AltAttack.Comment", "// 4 RMB - Generic ability bound to alt attack slot (aim for firearms, block for melee, etc)\n" },
		{ "AltAttack.DisplayName", "AltAttack" },
		{ "AltAttack.Name", "ENarrativeAbilityInputID::AltAttack" },
		{ "AltAttack.ToolTip", "4 RMB - Generic ability bound to alt attack slot (aim for firearms, block for melee, etc)" },
		{ "Attack.Comment", "// 3 LMB - Generic attack ability bound to attack slot \n" },
		{ "Attack.DisplayName", "Attack" },
		{ "Attack.Name", "ENarrativeAbilityInputID::Attack" },
		{ "Attack.ToolTip", "3 LMB - Generic attack ability bound to attack slot" },
		{ "BlueprintType", "true" },
		{ "Cancel.Comment", "// Cancel action for abilities \n" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "ENarrativeAbilityInputID::Cancel" },
		{ "Cancel.ToolTip", "Cancel action for abilities" },
		{ "Confirm.Comment", "// Confirm action for abilities\n" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "ENarrativeAbilityInputID::Confirm" },
		{ "Confirm.ToolTip", "Confirm action for abilities" },
		{ "Crouch.Comment", "// L-Ctrl - Crouch\n" },
		{ "Crouch.DisplayName", "Crouch" },
		{ "Crouch.Name", "ENarrativeAbilityInputID::Crouch" },
		{ "Crouch.ToolTip", "L-Ctrl - Crouch" },
		{ "Jump.Comment", "// Space bar - Jumps\n" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "ENarrativeAbilityInputID::Jump" },
		{ "Jump.ToolTip", "Space bar - Jumps" },
		{ "ModuleRelativePath", "Public/NarrativeArsenal.h" },
		{ "None.Comment", "// None - no input defined \n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ENarrativeAbilityInputID::None" },
		{ "None.ToolTip", "None - no input defined" },
		{ "Reload.Comment", "// 8 R - reloads if our weapon supports \n" },
		{ "Reload.DisplayName", "Reload" },
		{ "Reload.Name", "ENarrativeAbilityInputID::Reload" },
		{ "Reload.ToolTip", "8 R - reloads if our weapon supports" },
		{ "Sprint.Comment", "// Left shift - sprint\n" },
		{ "Sprint.DisplayName", "Sprint" },
		{ "Sprint.Name", "ENarrativeAbilityInputID::Sprint" },
		{ "Sprint.ToolTip", "Left shift - sprint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENarrativeAbilityInputID::None", (int64)ENarrativeAbilityInputID::None },
		{ "ENarrativeAbilityInputID::Confirm", (int64)ENarrativeAbilityInputID::Confirm },
		{ "ENarrativeAbilityInputID::Cancel", (int64)ENarrativeAbilityInputID::Cancel },
		{ "ENarrativeAbilityInputID::Attack", (int64)ENarrativeAbilityInputID::Attack },
		{ "ENarrativeAbilityInputID::AltAttack", (int64)ENarrativeAbilityInputID::AltAttack },
		{ "ENarrativeAbilityInputID::Ability1", (int64)ENarrativeAbilityInputID::Ability1 },
		{ "ENarrativeAbilityInputID::Ability2", (int64)ENarrativeAbilityInputID::Ability2 },
		{ "ENarrativeAbilityInputID::Ability3", (int64)ENarrativeAbilityInputID::Ability3 },
		{ "ENarrativeAbilityInputID::Reload", (int64)ENarrativeAbilityInputID::Reload },
		{ "ENarrativeAbilityInputID::Jump", (int64)ENarrativeAbilityInputID::Jump },
		{ "ENarrativeAbilityInputID::Crouch", (int64)ENarrativeAbilityInputID::Crouch },
		{ "ENarrativeAbilityInputID::Sprint", (int64)ENarrativeAbilityInputID::Sprint },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"ENarrativeAbilityInputID",
	"ENarrativeAbilityInputID",
	Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID()
{
	if (!Z_Registration_Info_UEnum_ENarrativeAbilityInputID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENarrativeAbilityInputID.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_ENarrativeAbilityInputID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENarrativeAbilityInputID.InnerSingleton;
}
// End Enum ENarrativeAbilityInputID

// Begin Enum ENarrativeFactionID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENarrativeFactionID;
static UEnum* ENarrativeFactionID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENarrativeFactionID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENarrativeFactionID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ENarrativeFactionID"));
	}
	return Z_Registration_Info_UEnum_ENarrativeFactionID.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeFactionID>()
{
	return ENarrativeFactionID_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bandits.Comment", "//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. \n" },
		{ "Bandits.Name", "ENarrativeFactionID::Bandits" },
		{ "Bandits.ToolTip", "Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more." },
		{ "BlueprintType", "true" },
		{ "Civilians.Comment", "//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. \n" },
		{ "Civilians.Name", "ENarrativeFactionID::Civilians" },
		{ "Civilians.ToolTip", "Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more." },
		{ "Comment", "/**A list of all affiliations in the game. Feel free to add more to this array as you require them. */" },
		{ "Heroes.Comment", "//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. \n" },
		{ "Heroes.Name", "ENarrativeFactionID::Heroes" },
		{ "Heroes.ToolTip", "Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more." },
		{ "ModuleRelativePath", "Public/NarrativeArsenal.h" },
		{ "None.Comment", "//This person doesn't have an affiliation. \n" },
		{ "None.Name", "ENarrativeFactionID::None" },
		{ "None.ToolTip", "This person doesn't have an affiliation." },
		{ "Soldiers.Comment", "//Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more. \n" },
		{ "Soldiers.Name", "ENarrativeFactionID::Soldiers" },
		{ "Soldiers.ToolTip", "Example Faction - edit Factions in NarrativeArsenal.h if you want to add custom ones - see documentation for more." },
		{ "ToolTip", "A list of all affiliations in the game. Feel free to add more to this array as you require them." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENarrativeFactionID::None", (int64)ENarrativeFactionID::None },
		{ "ENarrativeFactionID::Bandits", (int64)ENarrativeFactionID::Bandits },
		{ "ENarrativeFactionID::Heroes", (int64)ENarrativeFactionID::Heroes },
		{ "ENarrativeFactionID::Civilians", (int64)ENarrativeFactionID::Civilians },
		{ "ENarrativeFactionID::Soldiers", (int64)ENarrativeFactionID::Soldiers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"ENarrativeFactionID",
	"ENarrativeFactionID",
	Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID()
{
	if (!Z_Registration_Info_UEnum_ENarrativeFactionID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENarrativeFactionID.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENarrativeFactionID.InnerSingleton;
}
// End Enum ENarrativeFactionID

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeArsenal_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENarrativeAbilityInputID_StaticEnum, TEXT("ENarrativeAbilityInputID"), &Z_Registration_Info_UEnum_ENarrativeAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 818456468U) },
		{ ENarrativeFactionID_StaticEnum, TEXT("ENarrativeFactionID"), &Z_Registration_Info_UEnum_ENarrativeFactionID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 696033230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeArsenal_h_71269387(TEXT("/Script/NarrativeArsenal"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeArsenal_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeArsenal_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
