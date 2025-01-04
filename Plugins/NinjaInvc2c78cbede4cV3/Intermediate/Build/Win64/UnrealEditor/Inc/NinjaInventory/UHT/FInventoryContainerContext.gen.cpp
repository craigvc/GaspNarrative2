// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryContainerContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryContainerContext() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerContext();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryContainerContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryContainerContext;
class UScriptStruct* FInventoryContainerContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryContainerContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryContainerContext, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryContainerContext"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerContext.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryContainerContext>()
{
	return FInventoryContainerContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryContainerContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A context used to add a Container to the Inventory.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "ToolTip", "A context used to add a Container to the Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFailed_MetaData[] = {
		{ "Category", "Container Context" },
		{ "Comment", "/** Informs if this context has failed to execute, due to validations. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "ToolTip", "Informs if this context has failed to execute, due to validations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadOperation_MetaData[] = {
		{ "Category", "Container Context" },
		{ "Comment", "/** Informs if this context is used for a new entry or load operation. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "ToolTip", "Informs if this context is used for a new entry or load operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerId_MetaData[] = {
		{ "Category", "Container Context" },
		{ "Comment", "/** Pre-defined container ID that can be reused. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "ToolTip", "Pre-defined container ID that can be reused." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "Category", "Container Context" },
		{ "Comment", "/** Container data that will generate an instance. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Container data that will generate an instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Category", "Container Context" },
		{ "Comment", "/** The actual container to be added. Overrides the definition. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "ToolTip", "The actual container to be added. Overrides the definition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningItem_MetaData[] = {
		{ "Category", "Container Context" },
		{ "Comment", "/** Item that owns this container. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryContainerContext.h" },
		{ "ToolTip", "Item that owns this container." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsFailed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFailed;
	static void NewProp_bIsLoadOperation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadOperation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryContainerContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsFailed_SetBit(void* Obj)
{
	((FInventoryContainerContext*)Obj)->bIsFailed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsFailed = { "bIsFailed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryContainerContext), &Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsFailed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFailed_MetaData), NewProp_bIsFailed_MetaData) };
void Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsLoadOperation_SetBit(void* Obj)
{
	((FInventoryContainerContext*)Obj)->bIsLoadOperation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsLoadOperation = { "bIsLoadOperation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryContainerContext), &Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsLoadOperation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadOperation_MetaData), NewProp_bIsLoadOperation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_ContainerId = { "ContainerId", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerContext, ContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerId_MetaData), NewProp_ContainerId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerContext, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerContext, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_OwningItem = { "OwningItem", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryContainerContext, OwningItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningItem_MetaData), NewProp_OwningItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_bIsLoadOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_ContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewProp_OwningItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryContainerContext",
	Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::PropPointers),
	sizeof(FInventoryContainerContext),
	alignof(FInventoryContainerContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerContext()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryContainerContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryContainerContext.InnerSingleton, Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryContainerContext.InnerSingleton;
}
// End ScriptStruct FInventoryContainerContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainerContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryContainerContext::StaticStruct, Z_Construct_UScriptStruct_FInventoryContainerContext_Statics::NewStructOps, TEXT("InventoryContainerContext"), &Z_Registration_Info_UScriptStruct_InventoryContainerContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryContainerContext), 3032376117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainerContext_h_631351256(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainerContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryContainerContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
