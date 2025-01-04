// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/Types/FCombatPool.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCombatPool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister();
NINJACOMBATACTORPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolEntry();
NINJACOMBATACTORPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolList();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin ScriptStruct FCombatPoolEntry
static_assert(std::is_polymorphic<FCombatPoolEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FCombatPoolEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatPoolEntry;
class UScriptStruct* FCombatPoolEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPoolEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatPoolEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatPoolEntry, (UObject*)Z_Construct_UPackage__Script_NinjaCombatActorPool(), TEXT("CombatPoolEntry"));
	}
	return Z_Registration_Info_UScriptStruct_CombatPoolEntry.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UScriptStruct* StaticStruct<FCombatPoolEntry>()
{
	return FCombatPoolEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatPoolEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores an entry from an Actor Pool\n */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "Stores an entry from an Actor Pool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Comment", "/** The class for this actor. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "The class for this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledActorId_MetaData[] = {
		{ "Comment", "/** The unique identifier for this entry. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "The unique identifier for this entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "Comment", "/** Natural order for this entry. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "Natural order for this entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthActor_MetaData[] = {
		{ "Comment", "/** The authoritative instance. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "The authoritative instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientActor_MetaData[] = {
		{ "Comment", "/** The client instance. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "The client instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PooledActorId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Order;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AuthActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatPoolEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolEntry, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_PooledActorId = { "PooledActorId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolEntry, PooledActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledActorId_MetaData), NewProp_PooledActorId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolEntry, Order), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_AuthActor = { "AuthActor", nullptr, (EPropertyFlags)0x0114000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolEntry, AuthActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthActor_MetaData), NewProp_AuthActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_ClientActor = { "ClientActor", nullptr, (EPropertyFlags)0x0114000080000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolEntry, ClientActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientActor_MetaData), NewProp_ClientActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_PooledActorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_AuthActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewProp_ClientActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"CombatPoolEntry",
	Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::PropPointers),
	sizeof(FCombatPoolEntry),
	alignof(FCombatPoolEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolEntry()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPoolEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatPoolEntry.InnerSingleton, Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatPoolEntry.InnerSingleton;
}
// End ScriptStruct FCombatPoolEntry

// Begin ScriptStruct FCombatPoolList
static_assert(std::is_polymorphic<FCombatPoolList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FCombatPoolList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatPoolList;
class UScriptStruct* FCombatPoolList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPoolList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatPoolList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatPoolList, (UObject*)Z_Construct_UPackage__Script_NinjaCombatActorPool(), TEXT("CombatPoolList"));
	}
	return Z_Registration_Info_UScriptStruct_CombatPoolList.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UScriptStruct* StaticStruct<FCombatPoolList>()
{
	return FCombatPoolList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FCombatPoolList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FCombatPoolList);
#endif
struct Z_Construct_UScriptStruct_FCombatPoolList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The list of pooled actors.\n */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "The list of pooled actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPoolSize_MetaData[] = {
		{ "Comment", "/** Pool size for each class. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "Pool size for each class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolComponent_MetaData[] = {
		{ "Comment", "/** Component that owns this list. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "Component that owns this list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Comment", "/** Entries that are maintained by this list. */" },
		{ "ModuleRelativePath", "Public/Types/FCombatPool.h" },
		{ "ToolTip", "Entries that are maintained by this list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActorPoolSize_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorPoolSize_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorPoolSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatPoolList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_ActorPoolSize_ValueProp = { "ActorPoolSize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_ActorPoolSize_Key_KeyProp = { "ActorPoolSize_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_ActorPoolSize = { "ActorPoolSize", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolList, ActorPoolSize), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPoolSize_MetaData), NewProp_ActorPoolSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_PoolComponent = { "PoolComponent", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolList, PoolComponent), Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolComponent_MetaData), NewProp_PoolComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCombatPoolEntry, METADATA_PARAMS(0, nullptr) }; // 2067141010
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatPoolList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2067141010
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatPoolList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_ActorPoolSize_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_ActorPoolSize_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_ActorPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_PoolComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewProp_Entries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatPoolList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"CombatPoolList",
	Z_Construct_UScriptStruct_FCombatPoolList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolList_Statics::PropPointers),
	sizeof(FCombatPoolList),
	alignof(FCombatPoolList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatPoolList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatPoolList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatPoolList()
{
	if (!Z_Registration_Info_UScriptStruct_CombatPoolList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatPoolList.InnerSingleton, Z_Construct_UScriptStruct_FCombatPoolList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatPoolList.InnerSingleton;
}
// End ScriptStruct FCombatPoolList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatPoolEntry::StaticStruct, Z_Construct_UScriptStruct_FCombatPoolEntry_Statics::NewStructOps, TEXT("CombatPoolEntry"), &Z_Registration_Info_UScriptStruct_CombatPoolEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatPoolEntry), 2067141010U) },
		{ FCombatPoolList::StaticStruct, Z_Construct_UScriptStruct_FCombatPoolList_Statics::NewStructOps, TEXT("CombatPoolList"), &Z_Registration_Info_UScriptStruct_CombatPoolList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatPoolList), 2144696449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPool_h_3131788329(TEXT("/Script/NinjaCombatActorPool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_FCombatPool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
