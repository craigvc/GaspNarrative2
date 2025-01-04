// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/LootSources/LootSource_DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootSource_DataTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSource();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ULootSource_DataTable();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_ULootSource_DataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class ULootSource_DataTable
void ULootSource_DataTable::StaticRegisterNativesULootSource_DataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULootSource_DataTable);
UClass* Z_Construct_UClass_ULootSource_DataTable_NoRegister()
{
	return ULootSource_DataTable::StaticClass();
}
struct Z_Construct_UClass_ULootSource_DataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Data Table" },
		{ "IncludePath", "GameFramework/LootSources/LootSource_DataTable.h" },
		{ "ModuleRelativePath", "Public/GameFramework/LootSources/LootSource_DataTable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootTable_MetaData[] = {
		{ "Category", "Loot Source" },
		{ "Comment", "/** Data table containing the loot available to this component. */" },
		{ "ModuleRelativePath", "Public/GameFramework/LootSources/LootSource_DataTable.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NinjaInventory.InventoryLoot" },
		{ "ToolTip", "Data table containing the loot available to this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LootTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULootSource_DataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULootSource_DataTable_Statics::NewProp_LootTable = { "LootTable", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULootSource_DataTable, LootTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootTable_MetaData), NewProp_LootTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULootSource_DataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULootSource_DataTable_Statics::NewProp_LootTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootSource_DataTable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULootSource_DataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryLootSource,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULootSource_DataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULootSource_DataTable_Statics::ClassParams = {
	&ULootSource_DataTable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULootSource_DataTable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULootSource_DataTable_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULootSource_DataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_ULootSource_DataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULootSource_DataTable()
{
	if (!Z_Registration_Info_UClass_ULootSource_DataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULootSource_DataTable.OuterSingleton, Z_Construct_UClass_ULootSource_DataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULootSource_DataTable.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<ULootSource_DataTable>()
{
	return ULootSource_DataTable::StaticClass();
}
ULootSource_DataTable::ULootSource_DataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULootSource_DataTable);
ULootSource_DataTable::~ULootSource_DataTable() {}
// End Class ULootSource_DataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_LootSources_LootSource_DataTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULootSource_DataTable, ULootSource_DataTable::StaticClass, TEXT("ULootSource_DataTable"), &Z_Registration_Info_UClass_ULootSource_DataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULootSource_DataTable), 400361317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_LootSources_LootSource_DataTable_h_431673953(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_LootSources_LootSource_DataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_LootSources_LootSource_DataTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
