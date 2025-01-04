// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryFragmentMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryFragmentMemory() {}

// Begin Cross Module References
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryFragmentMemory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentMemory;
class UScriptStruct* FInventoryFragmentMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentMemory, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryFragmentMemory"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentMemory.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryFragmentMemory>()
{
	return FInventoryFragmentMemory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for Fragment Memories.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryFragmentMemory.h" },
		{ "ToolTip", "Base class for Fragment Memories." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentMemory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryFragmentMemory",
	nullptr,
	0,
	sizeof(FInventoryFragmentMemory),
	alignof(FInventoryFragmentMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentMemory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentMemory()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentMemory.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentMemory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentMemory.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentMemory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryFragmentMemory_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryFragmentMemory::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentMemory_Statics::NewStructOps, TEXT("InventoryFragmentMemory"), &Z_Registration_Info_UScriptStruct_InventoryFragmentMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentMemory), 3115251824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryFragmentMemory_h_3536212859(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryFragmentMemory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryFragmentMemory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
