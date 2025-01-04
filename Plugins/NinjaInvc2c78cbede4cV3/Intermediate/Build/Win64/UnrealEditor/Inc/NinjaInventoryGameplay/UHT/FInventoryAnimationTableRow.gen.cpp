// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Types/FInventoryAnimationTableRow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFInventoryAnimationTableRow() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryAnimationTableRow();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin ScriptStruct FInventoryAnimationTableRow
static_assert(std::is_polymorphic<FInventoryAnimationTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventoryAnimationTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow;
class UScriptStruct* FInventoryAnimationTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryAnimationTableRow, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryAnimationTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryAnimationTableRow>()
{
	return FInventoryAnimationTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An animation that can be used by inventory/equipment events.\n */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryAnimationTableRow.h" },
		{ "ToolTip", "An animation that can be used by inventory/equipment events." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageQuery_MetaData[] = {
		{ "Category", "Inventory Animation" },
		{ "Comment", "/** A query that represents the entry's compatibility. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryAnimationTableRow.h" },
		{ "ToolTip", "A query that represents the entry's compatibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
		{ "Category", "Inventory Animation" },
		{ "Comment", "/** Montage asset used for this event. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryAnimationTableRow.h" },
		{ "ToolTip", "Montage asset used for this event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageSection_MetaData[] = {
		{ "Category", "Inventory Animation" },
		{ "Comment", "/** Montage section to use. */" },
		{ "ModuleRelativePath", "Public/Types/FInventoryAnimationTableRow.h" },
		{ "ToolTip", "Montage section to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageQuery;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MontageSection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryAnimationTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewProp_MontageQuery = { "MontageQuery", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryAnimationTableRow, MontageQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageQuery_MetaData), NewProp_MontageQuery_MetaData) }; // 572225232
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryAnimationTableRow, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewProp_MontageSection = { "MontageSection", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryAnimationTableRow, MontageSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageSection_MetaData), NewProp_MontageSection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewProp_MontageQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewProp_MontageSection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventoryAnimationTableRow",
	Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::PropPointers),
	sizeof(FInventoryAnimationTableRow),
	alignof(FInventoryAnimationTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryAnimationTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow.InnerSingleton, Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow.InnerSingleton;
}
// End ScriptStruct FInventoryAnimationTableRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FInventoryAnimationTableRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryAnimationTableRow::StaticStruct, Z_Construct_UScriptStruct_FInventoryAnimationTableRow_Statics::NewStructOps, TEXT("InventoryAnimationTableRow"), &Z_Registration_Info_UScriptStruct_InventoryAnimationTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryAnimationTableRow), 2468394068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FInventoryAnimationTableRow_h_116563220(TEXT("/Script/NinjaInventoryGameplay"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FInventoryAnimationTableRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FInventoryAnimationTableRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
