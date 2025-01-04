// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Types/FInventoryItemQualityMappingTableRow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryItemQualityMappingTableRow() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryItemQualityMappingTableRow
static_assert(std::is_polymorphic<FInventoryItemQualityMappingTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryItemQualityMappingTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow;
class UScriptStruct* FInventoryItemQualityMappingTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryItemQualityMappingTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryItemQualityMappingTableRow>()
{
	return FInventoryItemQualityMappingTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Maps a quality tag to a proper color and name.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemQualityMappingTableRow.h" },
		{ "ToolTip", "Maps a quality tag to a proper color and name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityTag_MetaData[] = {
		{ "Categories", "Inventory.Item.Quality" },
		{ "Category", "Item Quality Mapping" },
		{ "Comment", "/** Gameplay Tag that represents the quality. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemQualityMappingTableRow.h" },
		{ "ToolTip", "Gameplay Tag that represents the quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityText_MetaData[] = {
		{ "Category", "Item Quality Mapping" },
		{ "Comment", "/** A localized name for the quality. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemQualityMappingTableRow.h" },
		{ "ToolTip", "A localized name for the quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityColor_MetaData[] = {
		{ "Category", "Item Quality Mapping" },
		{ "Comment", "/** Color applied for this quality. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryItemQualityMappingTableRow.h" },
		{ "ToolTip", "Color applied for this quality." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QualityText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QualityColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemQualityMappingTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewProp_QualityTag = { "QualityTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemQualityMappingTableRow, QualityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityTag_MetaData), NewProp_QualityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewProp_QualityText = { "QualityText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemQualityMappingTableRow, QualityText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityText_MetaData), NewProp_QualityText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewProp_QualityColor = { "QualityColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemQualityMappingTableRow, QualityColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityColor_MetaData), NewProp_QualityColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewProp_QualityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewProp_QualityText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewProp_QualityColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryItemQualityMappingTableRow",
	Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::PropPointers),
	sizeof(FInventoryItemQualityMappingTableRow),
	alignof(FInventoryItemQualityMappingTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow.InnerSingleton;
}
// End ScriptStruct FInventoryItemQualityMappingTableRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemQualityMappingTableRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemQualityMappingTableRow::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemQualityMappingTableRow_Statics::NewStructOps, TEXT("InventoryItemQualityMappingTableRow"), &Z_Registration_Info_UScriptStruct_InventoryItemQualityMappingTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemQualityMappingTableRow), 3472914665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemQualityMappingTableRow_h_2740190220(TEXT("/Script/NinjaInventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemQualityMappingTableRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemQualityMappingTableRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
