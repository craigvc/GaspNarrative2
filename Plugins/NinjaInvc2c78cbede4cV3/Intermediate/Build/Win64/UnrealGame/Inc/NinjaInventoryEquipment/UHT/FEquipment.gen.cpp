// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipment.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "NinjaInventoryEquipment/Public/Types/FEquipmentAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEquipment() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAbilityHandles();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentEntry();
NINJAINVENTORYEQUIPMENT_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentList();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin ScriptStruct FEquipmentEntry
static_assert(std::is_polymorphic<FEquipmentEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FEquipmentEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentEntry;
class UScriptStruct* FEquipmentEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentEntry, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentEntry"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentEntry.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentEntry>()
{
	return FEquipmentEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEquipmentEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Representation of an equipment piece stored in the inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Representation of an equipment piece stored in the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/** Item backing this equipment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Item backing this equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/** Instance spawned for this equipment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Instance spawned for this equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentData_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/** Definition for the equipment. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Definition for the equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTag_MetaData[] = {
		{ "Category", "Equipment" },
		{ "Comment", "/** Current State this equipment is in. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Current State this equipment is in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityHandles_MetaData[] = {
		{ "Comment", "/** Gameplay elements granted. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Gameplay elements granted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousStateTag_MetaData[] = {
		{ "Comment", "/** Previous State this equipment was in, before replication. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Previous State this equipment was in, before replication." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousStateTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentEntry, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentEntry, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_EquipmentData = { "EquipmentData", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentEntry, EquipmentData), Z_Construct_UClass_UNinjaEquipmentDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentData_MetaData), NewProp_EquipmentData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_StateTag = { "StateTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentEntry, StateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTag_MetaData), NewProp_StateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_AbilityHandles = { "AbilityHandles", nullptr, (EPropertyFlags)0x0010008080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentEntry, AbilityHandles), Z_Construct_UScriptStruct_FEquipmentAbilityHandles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityHandles_MetaData), NewProp_AbilityHandles_MetaData) }; // 1361679655
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_PreviousStateTag = { "PreviousStateTag", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentEntry, PreviousStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousStateTag_MetaData), NewProp_PreviousStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_EquipmentData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_StateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_AbilityHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewProp_PreviousStateTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"EquipmentEntry",
	Z_Construct_UScriptStruct_FEquipmentEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentEntry_Statics::PropPointers),
	sizeof(FEquipmentEntry),
	alignof(FEquipmentEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentEntry()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentEntry.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentEntry.InnerSingleton;
}
// End ScriptStruct FEquipmentEntry

// Begin ScriptStruct FEquipmentList
static_assert(std::is_polymorphic<FEquipmentList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FEquipmentList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentList;
class UScriptStruct* FEquipmentList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentList, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryEquipment(), TEXT("EquipmentList"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentList.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UScriptStruct* StaticStruct<FEquipmentList>()
{
	return FEquipmentList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FEquipmentList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FEquipmentList);
#endif
struct Z_Construct_UScriptStruct_FEquipmentList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of pieces of equipment stored in an inventory. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "List of pieces of equipment stored in an inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "Comment", "/** Replicated list of stored equipment entries. */" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Replicated list of stored equipment entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentManager_MetaData[] = {
		{ "Comment", "/** Equipment component that owns this list. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FEquipment.h" },
		{ "ToolTip", "Equipment component that owns this list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentEntry, METADATA_PARAMS(0, nullptr) }; // 2366279841
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 2366279841
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_EquipmentManager = { "EquipmentManager", nullptr, (EPropertyFlags)0x0144000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentList, EquipmentManager), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentManager_MetaData), NewProp_EquipmentManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentList_Statics::NewProp_EquipmentManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"EquipmentList",
	Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentList_Statics::PropPointers),
	sizeof(FEquipmentList),
	alignof(FEquipmentList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEquipmentList()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentList.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EquipmentList.InnerSingleton;
}
// End ScriptStruct FEquipmentList

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipment_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEquipmentEntry::StaticStruct, Z_Construct_UScriptStruct_FEquipmentEntry_Statics::NewStructOps, TEXT("EquipmentEntry"), &Z_Registration_Info_UScriptStruct_EquipmentEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentEntry), 2366279841U) },
		{ FEquipmentList::StaticStruct, Z_Construct_UScriptStruct_FEquipmentList_Statics::NewStructOps, TEXT("EquipmentList"), &Z_Registration_Info_UScriptStruct_EquipmentList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentList), 983259081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipment_h_668877388(TEXT("/Script/NinjaInventoryEquipment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_Types_FEquipment_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
