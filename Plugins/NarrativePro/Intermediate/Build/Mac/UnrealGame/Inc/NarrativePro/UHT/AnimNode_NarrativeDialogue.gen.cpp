// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativePro/Public/AnimNode_NarrativeDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_NarrativeDialogue() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt();
NARRATIVEPRO_API UEnum* Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend();
NARRATIVEPRO_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue();
UPackage* Z_Construct_UPackage__Script_NarrativePro();
// End Cross Module References

// Begin Enum EInterpolationDialogueBlend
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpolationDialogueBlend;
static UEnum* EInterpolationDialogueBlend_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterpolationDialogueBlend.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterpolationDialogueBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend, (UObject*)Z_Construct_UPackage__Script_NarrativePro(), TEXT("EInterpolationDialogueBlend"));
	}
	return Z_Registration_Info_UEnum_EInterpolationDialogueBlend.OuterSingleton;
}
template<> NARRATIVEPRO_API UEnum* StaticEnum<EInterpolationDialogueBlend::Type>()
{
	return EInterpolationDialogueBlend_StaticEnum();
}
struct Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Various ways to interpolate TAlphaBlend. */" },
		{ "Cubic.Name", "EInterpolationDialogueBlend::Cubic" },
		{ "EaseInOutExponent2.Name", "EInterpolationDialogueBlend::EaseInOutExponent2" },
		{ "EaseInOutExponent3.Name", "EInterpolationDialogueBlend::EaseInOutExponent3" },
		{ "EaseInOutExponent4.Name", "EInterpolationDialogueBlend::EaseInOutExponent4" },
		{ "EaseInOutExponent5.Name", "EInterpolationDialogueBlend::EaseInOutExponent5" },
		{ "Linear.Name", "EInterpolationDialogueBlend::Linear" },
		{ "MAX.Name", "EInterpolationDialogueBlend::MAX" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "Sinusoidal.Name", "EInterpolationDialogueBlend::Sinusoidal" },
		{ "ToolTip", "Various ways to interpolate TAlphaBlend." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterpolationDialogueBlend::Linear", (int64)EInterpolationDialogueBlend::Linear },
		{ "EInterpolationDialogueBlend::Cubic", (int64)EInterpolationDialogueBlend::Cubic },
		{ "EInterpolationDialogueBlend::Sinusoidal", (int64)EInterpolationDialogueBlend::Sinusoidal },
		{ "EInterpolationDialogueBlend::EaseInOutExponent2", (int64)EInterpolationDialogueBlend::EaseInOutExponent2 },
		{ "EInterpolationDialogueBlend::EaseInOutExponent3", (int64)EInterpolationDialogueBlend::EaseInOutExponent3 },
		{ "EInterpolationDialogueBlend::EaseInOutExponent4", (int64)EInterpolationDialogueBlend::EaseInOutExponent4 },
		{ "EInterpolationDialogueBlend::EaseInOutExponent5", (int64)EInterpolationDialogueBlend::EaseInOutExponent5 },
		{ "EInterpolationDialogueBlend::MAX", (int64)EInterpolationDialogueBlend::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativePro,
	nullptr,
	"EInterpolationDialogueBlend",
	"EInterpolationDialogueBlend::Type",
	Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend()
{
	if (!Z_Registration_Info_UEnum_EInterpolationDialogueBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpolationDialogueBlend.InnerSingleton, Z_Construct_UEnum_NarrativePro_EInterpolationDialogueBlend_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterpolationDialogueBlend.InnerSingleton;
}
// End Enum EInterpolationDialogueBlend

// Begin ScriptStruct FAnimNode_NarrativeDialogue
static_assert(std::is_polymorphic<FAnimNode_NarrativeDialogue>() == std::is_polymorphic<FAnimNode_LookAt>(), "USTRUCT FAnimNode_NarrativeDialogue cannot be polymorphic unless super FAnimNode_LookAt is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue;
class UScriptStruct* FAnimNode_NarrativeDialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue, (UObject*)Z_Construct_UPackage__Script_NarrativePro(), TEXT("AnimNode_NarrativeDialogue"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.OuterSingleton;
}
template<> NARRATIVEPRO_API UScriptStruct* StaticStruct<FAnimNode_NarrativeDialogue>()
{
	return FAnimNode_NarrativeDialogue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that make a bone to look at the point or another bone\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "ToolTip", "Simple controller that make a bone to look at the point or another bone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuatInterpSpeed_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_NarrativeDialogue.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_QuatInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_NarrativeDialogue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_QuatInterpSpeed = { "QuatInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_NarrativeDialogue, QuatInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuatInterpSpeed_MetaData), NewProp_QuatInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewProp_QuatInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativePro,
	Z_Construct_UScriptStruct_FAnimNode_LookAt,
	&NewStructOps,
	"AnimNode_NarrativeDialogue",
	Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::PropPointers),
	sizeof(FAnimNode_NarrativeDialogue),
	alignof(FAnimNode_NarrativeDialogue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue.InnerSingleton;
}
// End ScriptStruct FAnimNode_NarrativeDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativePro_Public_AnimNode_NarrativeDialogue_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterpolationDialogueBlend_StaticEnum, TEXT("EInterpolationDialogueBlend"), &Z_Registration_Info_UEnum_EInterpolationDialogueBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 316016599U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_NarrativeDialogue::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_NarrativeDialogue_Statics::NewStructOps, TEXT("AnimNode_NarrativeDialogue"), &Z_Registration_Info_UScriptStruct_AnimNode_NarrativeDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_NarrativeDialogue), 1906301433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativePro_Public_AnimNode_NarrativeDialogue_h_859989009(TEXT("/Script/NarrativePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativePro_Public_AnimNode_NarrativeDialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativePro_Public_AnimNode_NarrativeDialogue_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativePro_Public_AnimNode_NarrativeDialogue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativePro_Public_AnimNode_NarrativeDialogue_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
