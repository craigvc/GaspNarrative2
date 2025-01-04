// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryDefaultItemMemory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryDefaultItemMemory
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory;
class UScriptStruct* FInventoryDefaultItemMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryDefaultItemMemory"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryDefaultItemMemory>()
{
	return FInventoryDefaultItemMemory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Default memory information for item fragments.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryDefaultItemMemory.h" },
		{ "ToolTip", "Default memory information for item fragments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClass_MetaData[] = {
		{ "Category", "Default Item Memory" },
		{ "Comment", "/** The fragment class that will use this memory. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryDefaultItemMemory.h" },
		{ "ToolTip", "The fragment class that will use this memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
		{ "Category", "Default Item Memory" },
		{ "Comment", "/** The generic struct used as memory. */" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/Types/FInventoryDefaultItemMemory.h" },
		{ "ToolTip", "The generic struct used as memory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryDefaultItemMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDefaultItemMemory, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentClass_MetaData), NewProp_FragmentClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryDefaultItemMemory, Memory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::NewProp_Memory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryDefaultItemMemory",
	Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::PropPointers),
	sizeof(FInventoryDefaultItemMemory),
	alignof(FInventoryDefaultItemMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory.InnerSingleton, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory.InnerSingleton;
}
// End ScriptStruct FInventoryDefaultItemMemory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItemMemory_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryDefaultItemMemory::StaticStruct, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory_Statics::NewStructOps, TEXT("InventoryDefaultItemMemory"), &Z_Registration_Info_UScriptStruct_InventoryDefaultItemMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryDefaultItemMemory), 3775202926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItemMemory_h_2509505994(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItemMemory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryDefaultItemMemory_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
