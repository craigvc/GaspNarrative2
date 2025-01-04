// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Types/FFactionMembershipList.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "NinjaFactions/Public/Types/FFactionMembership.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFFactionMembershipList() {}

// Begin Cross Module References
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembership();
NINJAFACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionMembershipList();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin ScriptStruct FFactionMembershipList
static_assert(std::is_polymorphic<FFactionMembershipList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FFactionMembershipList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionMembershipList;
class UScriptStruct* FFactionMembershipList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionMembershipList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionMembershipList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionMembershipList, (UObject*)Z_Construct_UPackage__Script_NinjaFactions(), TEXT("FactionMembershipList"));
	}
	return Z_Registration_Info_UScriptStruct_FactionMembershipList.OuterSingleton;
}
template<> NINJAFACTIONS_API UScriptStruct* StaticStruct<FFactionMembershipList>()
{
	return FFactionMembershipList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FFactionMembershipList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FFactionMembershipList);
#endif
struct Z_Construct_UScriptStruct_FFactionMembershipList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Replicated list of memberships assigned to an owner.\n */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembershipList.h" },
		{ "ToolTip", "Replicated list of memberships assigned to an owner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionComponent_MetaData[] = {
		{ "Comment", "/** Faction component that owns this membership. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembershipList.h" },
		{ "ToolTip", "Faction component that owns this membership." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Comment", "/** Entries that are maintained by this list. */" },
		{ "ModuleRelativePath", "Public/Types/FFactionMembershipList.h" },
		{ "ToolTip", "Entries that are maintained by this list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionMembershipList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewProp_FactionComponent = { "FactionComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembershipList, FactionComponent), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionComponent_MetaData), NewProp_FactionComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFactionMembership, METADATA_PARAMS(0, nullptr) }; // 2510799810
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionMembershipList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2510799810
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionMembershipList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewProp_FactionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembershipList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionMembershipList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"FactionMembershipList",
	Z_Construct_UScriptStruct_FFactionMembershipList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembershipList_Statics::PropPointers),
	sizeof(FFactionMembershipList),
	alignof(FFactionMembershipList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionMembershipList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionMembershipList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionMembershipList()
{
	if (!Z_Registration_Info_UScriptStruct_FactionMembershipList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionMembershipList.InnerSingleton, Z_Construct_UScriptStruct_FFactionMembershipList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionMembershipList.InnerSingleton;
}
// End ScriptStruct FFactionMembershipList

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembershipList_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionMembershipList::StaticStruct, Z_Construct_UScriptStruct_FFactionMembershipList_Statics::NewStructOps, TEXT("FactionMembershipList"), &Z_Registration_Info_UScriptStruct_FactionMembershipList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionMembershipList), 828088185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembershipList_h_3008013360(TEXT("/Script/NinjaFactions"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembershipList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Types_FFactionMembershipList_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
