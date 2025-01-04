// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Types/FDamageList.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "NinjaCombat/Public/Types/FDamageEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFDamageList() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageList();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FDamageList
static_assert(std::is_polymorphic<FDamageList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FDamageList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageList;
class UScriptStruct* FDamageList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageList, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("DamageList"));
	}
	return Z_Registration_Info_UScriptStruct_DamageList.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FDamageList>()
{
	return FDamageList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FDamageList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FDamageList);
#endif
struct Z_Construct_UScriptStruct_FDamageList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A list of replicated damage entries.\n */" },
		{ "ModuleRelativePath", "Public/Types/FDamageList.h" },
		{ "ToolTip", "A list of replicated damage entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageManager_MetaData[] = {
		{ "Comment", "/** Combat component that owns this list. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FDamageList.h" },
		{ "ToolTip", "Combat component that owns this list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Comment", "/** Entries that are maintained by this list. */" },
		{ "ModuleRelativePath", "Public/Types/FDamageList.h" },
		{ "ToolTip", "Entries that are maintained by this list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageList_Statics::NewProp_DamageManager = { "DamageManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageList, DamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageManager_MetaData), NewProp_DamageManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDamageList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDamageEntry, METADATA_PARAMS(0, nullptr) }; // 3044778572
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDamageList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3044778572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageList_Statics::NewProp_DamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageList_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"DamageList",
	Z_Construct_UScriptStruct_FDamageList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageList_Statics::PropPointers),
	sizeof(FDamageList),
	alignof(FDamageList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageList()
{
	if (!Z_Registration_Info_UScriptStruct_DamageList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageList.InnerSingleton, Z_Construct_UScriptStruct_FDamageList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageList.InnerSingleton;
}
// End ScriptStruct FDamageList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageList::StaticStruct, Z_Construct_UScriptStruct_FDamageList_Statics::NewStructOps, TEXT("DamageList"), &Z_Registration_Info_UScriptStruct_DamageList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageList), 4097610254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageList_h_2358728169(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_FDamageList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
