// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/Types/FCombatPoolableActorInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCombatPoolableActorInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBATACTORPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolableActorInfo();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin ScriptStruct FCombatPoolableActorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo;
class UScriptStruct* FCombatPoolableActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatPoolableActorInfo, (UObject*)Z_Construct_UPackage__Script_NinjaCombatActorPool(), TEXT("CombatPoolableActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UScriptStruct* StaticStruct<FCombatPoolableActorInfo>()
{
	return FCombatPoolableActorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a poolable actor.\n */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPoolableActorInfo.h" },
		{ "ToolTip", "Information about a poolable actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableActorClass_MetaData[] = {
		{ "Category", "Poolable Actor Info" },
		{ "Comment", "/** Class that will be pooled. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPoolableActorInfo.h" },
		{ "MustImplement", "/Script/NinjaCombatActorPool.CombatPoolableActorInterface" },
		{ "ToolTip", "Class that will be pooled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[] = {
		{ "Category", "Poolable Actor Info" },
		{ "Comment", "/** Size of this pool. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPoolableActorInfo.h" },
		{ "ToolTip", "Size of this pool." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PoolableActorClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoolSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatPoolableActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::NewProp_PoolableActorClass = { "PoolableActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolableActorInfo, PoolableActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableActorClass_MetaData), NewProp_PoolableActorClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolableActorInfo, PoolSize), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSize_MetaData), NewProp_PoolSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::NewProp_PoolableActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::NewProp_PoolSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
	nullptr,
	&NewStructOps,
	"CombatPoolableActorInfo",
	Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::PropPointers),
	sizeof(FCombatPoolableActorInfo),
	alignof(FCombatPoolableActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolableActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo.InnerSingleton;
}
// End ScriptStruct FCombatPoolableActorInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPoolableActorInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatPoolableActorInfo::StaticStruct, Z_Construct_UScriptStruct_FCombatPoolableActorInfo_Statics::NewStructOps, TEXT("CombatPoolableActorInfo"), &Z_Registration_Info_UScriptStruct_CombatPoolableActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatPoolableActorInfo), 4127248187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPoolableActorInfo_h_2664897477(TEXT("/Script/NinjaCombatActorPool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPoolableActorInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPoolableActorInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
