// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/FCombatPhysicalAnimationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCombatPhysicalAnimationSettings() {}

// Begin Cross Module References
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FCombatPhysicalAnimationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings;
class UScriptStruct* FCombatPhysicalAnimationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("CombatPhysicalAnimationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FCombatPhysicalAnimationSettings>()
{
	return FCombatPhysicalAnimationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * General Settings for Physical Animations.\n */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "General Settings for Physical Animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStrength_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Strength applied when it can't be defined from the hit. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Strength applied when it can't be defined from the hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReactionTime_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Default reaction time when it can't be defined from the hit. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Default reaction time when it can't be defined from the hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBlendWeight_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Maximum weight applied for the simulation on top of kinematics. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Maximum weight applied for the simulation on top of kinematics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KinematicInterpSpeed_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Speed used to interpolate the blend weight back to full kinematics. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Speed used to interpolate the blend weight back to full kinematics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Name of the physics profile used for impacts. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Name of the physics profile used for impacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseBoneName_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Name of the bone where simulation starts. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Name of the bone where simulation starts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAllBoneImpacts_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Option to replace all bones hit for this one. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Option to replace all bones hit for this one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneReplacement_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** The \"Catch-All\" bone used for impacts. May be useful for scenarios where deep physical reaction is not necessary. */" },
		{ "EditCondition", "bOverrideAllBoneImpacts" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "The \"Catch-All\" bone used for impacts. May be useful for scenarios where deep physical reaction is not necessary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneReplacements_MetaData[] = {
		{ "Category", "Combat Physical Animation Settings" },
		{ "Comment", "/** Map of bones that should be replaced in case these are the ones being hit. */" },
		{ "EditCondition", "!bOverrideAllBoneImpacts" },
		{ "ModuleRelativePath", "Public/Types/FCombatPhysicalAnimationSettings.h" },
		{ "ToolTip", "Map of bones that should be replaced in case these are the ones being hit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultReactionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxBlendWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KinematicInterpSpeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BaseBoneName;
	static void NewProp_bOverrideAllBoneImpacts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAllBoneImpacts;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneReplacement;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneReplacements_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneReplacements_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneReplacements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatPhysicalAnimationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_DefaultStrength = { "DefaultStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, DefaultStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStrength_MetaData), NewProp_DefaultStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_DefaultReactionTime = { "DefaultReactionTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, DefaultReactionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultReactionTime_MetaData), NewProp_DefaultReactionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_MaxBlendWeight = { "MaxBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, MaxBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBlendWeight_MetaData), NewProp_MaxBlendWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_KinematicInterpSpeed = { "KinematicInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, KinematicInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KinematicInterpSpeed_MetaData), NewProp_KinematicInterpSpeed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, ProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileName_MetaData), NewProp_ProfileName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BaseBoneName = { "BaseBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, BaseBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseBoneName_MetaData), NewProp_BaseBoneName_MetaData) };
void Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_bOverrideAllBoneImpacts_SetBit(void* Obj)
{
	((FCombatPhysicalAnimationSettings*)Obj)->bOverrideAllBoneImpacts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_bOverrideAllBoneImpacts = { "bOverrideAllBoneImpacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCombatPhysicalAnimationSettings), &Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_bOverrideAllBoneImpacts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAllBoneImpacts_MetaData), NewProp_bOverrideAllBoneImpacts_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacement = { "BoneReplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, BoneReplacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneReplacement_MetaData), NewProp_BoneReplacement_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacements_ValueProp = { "BoneReplacements", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacements_Key_KeyProp = { "BoneReplacements_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacements = { "BoneReplacements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPhysicalAnimationSettings, BoneReplacements), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneReplacements_MetaData), NewProp_BoneReplacements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_DefaultStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_DefaultReactionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_MaxBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_KinematicInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_ProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BaseBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_bOverrideAllBoneImpacts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacements_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacements_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewProp_BoneReplacements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"CombatPhysicalAnimationSettings",
	Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::PropPointers),
	sizeof(FCombatPhysicalAnimationSettings),
	alignof(FCombatPhysicalAnimationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings.InnerSingleton, Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings.InnerSingleton;
}
// End ScriptStruct FCombatPhysicalAnimationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatPhysicalAnimationSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatPhysicalAnimationSettings::StaticStruct, Z_Construct_UScriptStruct_FCombatPhysicalAnimationSettings_Statics::NewStructOps, TEXT("CombatPhysicalAnimationSettings"), &Z_Registration_Info_UScriptStruct_CombatPhysicalAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatPhysicalAnimationSettings), 4045535615U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatPhysicalAnimationSettings_h_798421753(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatPhysicalAnimationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatPhysicalAnimationSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
