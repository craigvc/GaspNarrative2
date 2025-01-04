// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/FCombatAnimationDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCombatAnimationDirection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FCombatAnimationDirection();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FCombatAnimationDirection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatAnimationDirection;
class UScriptStruct* FCombatAnimationDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatAnimationDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatAnimationDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatAnimationDirection, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("CombatAnimationDirection"));
	}
	return Z_Registration_Info_UScriptStruct_CombatAnimationDirection.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FCombatAnimationDirection>()
{
	return FCombatAnimationDirection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Configuration Class for the Evade Direction.\n */" },
		{ "ModuleRelativePath", "Public/Types/FCombatAnimationDirection.h" },
		{ "ToolTip", "Configuration Class for the Evade Direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "Animation Direction" },
		{ "Comment", "/** Range for this direction Represented in degrees, in the [-180, 180] range. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatAnimationDirection.h" },
		{ "ToolTip", "Range for this direction Represented in degrees, in the [-180, 180] range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "Category", "Animation Direction" },
		{ "Comment", "/** Name of the montage section for the current animation direction. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatAnimationDirection.h" },
		{ "ToolTip", "Name of the montage section for the current animation direction." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatAnimationDirection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatAnimationDirection, Range), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatAnimationDirection, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::NewProp_SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"CombatAnimationDirection",
	Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::PropPointers),
	sizeof(FCombatAnimationDirection),
	alignof(FCombatAnimationDirection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatAnimationDirection()
{
	if (!Z_Registration_Info_UScriptStruct_CombatAnimationDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatAnimationDirection.InnerSingleton, Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatAnimationDirection.InnerSingleton;
}
// End ScriptStruct FCombatAnimationDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatAnimationDirection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatAnimationDirection::StaticStruct, Z_Construct_UScriptStruct_FCombatAnimationDirection_Statics::NewStructOps, TEXT("CombatAnimationDirection"), &Z_Registration_Info_UScriptStruct_CombatAnimationDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatAnimationDirection), 2014871048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatAnimationDirection_h_4184542903(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatAnimationDirection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FCombatAnimationDirection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
