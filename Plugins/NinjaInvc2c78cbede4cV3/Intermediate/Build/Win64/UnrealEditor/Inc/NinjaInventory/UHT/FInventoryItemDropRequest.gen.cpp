// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryItemDropRequest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryItemDropRequest() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemDropRequest();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryItemDropRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemDropRequest;
class UScriptStruct* FInventoryItemDropRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemDropRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemDropRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemDropRequest, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemDropRequest"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemDropRequest.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemDropRequest>()
{
	return FInventoryItemDropRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a drop request in progress.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemDropRequest.h" },
		{ "ToolTip", "Represents a drop request in progress." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupItems_MetaData[] = {
		{ "Category", "Loot Request" },
		{ "Comment", "/** Defines if items should be grouped together. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemDropRequest.h" },
		{ "ToolTip", "Defines if items should be grouped together." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementQueryID_MetaData[] = {
		{ "Category", "Loot Request" },
		{ "Comment", "/** Identifier for the EQS Placement Query. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemDropRequest.h" },
		{ "ToolTip", "Identifier for the EQS Placement Query." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupActorClass_MetaData[] = {
		{ "Category", "Loot Request" },
		{ "Comment", "/**\n\x09 * Class that represents this item when placed in the world.\n\x09 * Only required if items are being grouped into a single pickup actor.\n\x09 */" },
		{ "EditCondition", "bGroupItems" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemDropRequest.h" },
		{ "MustImplement", "/Script/NinjaInventory.InventoryPickupInterface" },
		{ "ToolTip", "Class that represents this item when placed in the world.\nOnly required if items are being grouped into a single pickup actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Category", "Loot Request" },
		{ "Comment", "/** Inventory Manager that requested this drop. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemDropRequest.h" },
		{ "ToolTip", "Inventory Manager that requested this drop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemInstances_MetaData[] = {
		{ "Category", "Loot Request" },
		{ "Comment", "/** Item Instance being dropped. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemDropRequest.h" },
		{ "ToolTip", "Item Instance being dropped." },
	};
#endif // WITH_METADATA
	static void NewProp_bGroupItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlacementQueryID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickupActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemDropRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_bGroupItems_SetBit(void* Obj)
{
	((FInventoryItemDropRequest*)Obj)->bGroupItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_bGroupItems = { "bGroupItems", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemDropRequest), &Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_bGroupItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupItems_MetaData), NewProp_bGroupItems_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_PlacementQueryID = { "PlacementQueryID", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDropRequest, PlacementQueryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementQueryID_MetaData), NewProp_PlacementQueryID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_PickupActorClass = { "PickupActorClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDropRequest, PickupActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupActorClass_MetaData), NewProp_PickupActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDropRequest, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_ItemInstances_Inner = { "ItemInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_ItemInstances = { "ItemInstances", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemDropRequest, ItemInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemInstances_MetaData), NewProp_ItemInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_bGroupItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_PlacementQueryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_PickupActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_ItemInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewProp_ItemInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryItemDropRequest",
	Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::PropPointers),
	sizeof(FInventoryItemDropRequest),
	alignof(FInventoryItemDropRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemDropRequest()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemDropRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemDropRequest.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemDropRequest.InnerSingleton;
}
// End ScriptStruct FInventoryItemDropRequest

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemDropRequest_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemDropRequest::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemDropRequest_Statics::NewStructOps, TEXT("InventoryItemDropRequest"), &Z_Registration_Info_UScriptStruct_InventoryItemDropRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemDropRequest), 427445671U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemDropRequest_h_3227703443(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemDropRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemDropRequest_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
