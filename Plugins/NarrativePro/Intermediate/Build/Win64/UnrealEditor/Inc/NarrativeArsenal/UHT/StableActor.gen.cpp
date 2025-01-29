// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/StableActor/StableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStableActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FStableActor();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FStableActor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StableActor;
class UScriptStruct* FStableActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StableActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StableActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStableActor, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("StableActor"));
	}
	return Z_Registration_Info_UScriptStruct_StableActor.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FStableActor>()
{
	return FStableActor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Special type that can be used like any old actor reference, but persists through play sessions as it also caches the actors GUID. \n * Only works with actors that implement IStableActor and return a GUID via IStableActor.GetGUID()\n */" },
		{ "ModuleRelativePath", "Public/StableActor/StableActor.h" },
		{ "ToolTip", "Special type that can be used like any old actor reference, but persists through play sessions as it also caches the actors GUID.\nOnly works with actors that implement IStableActor and return a GUID via IStableActor.GetGUID()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StableActorGUID_MetaData[] = {
		{ "Category", "Stable Actor" },
		{ "ModuleRelativePath", "Public/StableActor/StableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StableActorGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStableActor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStableActor_Statics::NewProp_StableActorGUID = { "StableActorGUID", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStableActor, StableActorGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StableActorGUID_MetaData), NewProp_StableActorGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStableActor_Statics::NewProp_StableActorGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStableActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStableActor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"StableActor",
	Z_Construct_UScriptStruct_FStableActor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStableActor_Statics::PropPointers),
	sizeof(FStableActor),
	alignof(FStableActor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStableActor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStableActor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStableActor()
{
	if (!Z_Registration_Info_UScriptStruct_StableActor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StableActor.InnerSingleton, Z_Construct_UScriptStruct_FStableActor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StableActor.InnerSingleton;
}
// End ScriptStruct FStableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStableActor::StaticStruct, Z_Construct_UScriptStruct_FStableActor_Statics::NewStructOps, TEXT("StableActor"), &Z_Registration_Info_UScriptStruct_StableActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStableActor), 445850525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActor_h_1643521911(TEXT("/Script/NarrativeArsenal"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_StableActor_StableActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
