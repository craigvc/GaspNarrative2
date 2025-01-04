// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/NinjaInventorySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventorySettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySettings();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventorySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventorySettings
void UNinjaInventorySettings::StaticRegisterNativesUNinjaInventorySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventorySettings);
UClass* Z_Construct_UClass_UNinjaInventorySettings_NoRegister()
{
	return UNinjaInventorySettings::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventorySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Developer settings for the Ninja Inventory module.\n */" },
		{ "DisplayName", "Ninja Inventory" },
		{ "IncludePath", "NinjaInventorySettings.h" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Developer settings for the Ninja Inventory module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContainerInstance_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Default class used for container instances. */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Default class used for container instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItemInstance_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Default class used for item instances. */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Default class used for item instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLootSelector_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Default Loot Selector assigned to Inventory Managers. */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Default Loot Selector assigned to Inventory Managers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityMappingTable_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09 * Maps Quality Tags to their appropriate color and Localized Text.\n\x09 * It expects FInventoryQualityMappingTableRow entries.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NinjaInventory.InventoryItemQualityMappingTableRow" },
		{ "ToolTip", "Maps Quality Tags to their appropriate color and Localized Text.\nIt expects FInventoryQualityMappingTableRow entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyMergeNewItems_MetaData[] = {
		{ "Category", "Item Management" },
		{ "Comment", "/**\n\x09 * Defines if new items are automatically merged with incomplete stacks.\n\x09 *\n\x09 * If set to true, the default Stack Configuration will attempt to retrieve all\n\x09 * incomplete stacks in the Inventory Manager and fill them to their capacity,\n\x09 * before creating new entries.\n\x09 *\n\x09 * Keep in mind that, at least in the default stack implementation, items are\n\x09 * compared by data alone. So if they have customizations in their memories,\n\x09 * those might get lost during the merge process.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Defines if new items are automatically merged with incomplete stacks.\n\nIf set to true, the default Stack Configuration will attempt to retrieve all\nincomplete stacks in the Inventory Manager and fill them to their capacity,\nbefore creating new entries.\n\nKeep in mind that, at least in the default stack implementation, items are\ncompared by data alone. So if they have customizations in their memories,\nthose might get lost during the merge process." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformStrictStackChecks_MetaData[] = {
		{ "Category", "Item Management" },
		{ "Comment", "/**\n\x09 * Defines how this fragment tests new items being added to the inventory.\n\x09 * \n\x09 * If set to true, will always check an entire stack before adding new items, so if\n\x09 * a stack of 30 items is being added, it will ensure that all 30 items can be added,\n\x09 * disregarding the possibility of breaking the stack.\n\x09 *\n\x09 * If set to false, it will add room to add at least one item from the entire stack,\n\x09 * meaning 1 item could be added/absorbed, and the remainder would be discarded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Defines how this fragment tests new items being added to the inventory.\n\nIf set to true, will always check an entire stack before adding new items, so if\na stack of 30 items is being added, it will ensure that all 30 items can be added,\ndisregarding the possibility of breaking the stack.\n\nIf set to false, it will add room to add at least one item from the entire stack,\nmeaning 1 item could be added/absorbed, and the remainder would be discarded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupDroppedItemInstances_MetaData[] = {
		{ "Category", "Item Management" },
		{ "Comment", "/** Defines if Item Instances should be grouped when dropped or not. */" },
		{ "ModuleRelativePath", "Public/NinjaInventorySettings.h" },
		{ "ToolTip", "Defines if Item Instances should be grouped when dropped or not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultContainerInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultItemInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultLootSelector;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QualityMappingTable;
	static void NewProp_bAutomaticallyMergeNewItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyMergeNewItems;
	static void NewProp_bPerformStrictStackChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformStrictStackChecks;
	static void NewProp_bGroupDroppedItemInstances_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupDroppedItemInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventorySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_DefaultContainerInstance = { "DefaultContainerInstance", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySettings, DefaultContainerInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContainerInstance_MetaData), NewProp_DefaultContainerInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_DefaultItemInstance = { "DefaultItemInstance", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySettings, DefaultItemInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItemInstance_MetaData), NewProp_DefaultItemInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_DefaultLootSelector = { "DefaultLootSelector", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySettings, DefaultLootSelector), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryLootSelector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLootSelector_MetaData), NewProp_DefaultLootSelector_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_QualityMappingTable = { "QualityMappingTable", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventorySettings, QualityMappingTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityMappingTable_MetaData), NewProp_QualityMappingTable_MetaData) };
void Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bAutomaticallyMergeNewItems_SetBit(void* Obj)
{
	((UNinjaInventorySettings*)Obj)->bAutomaticallyMergeNewItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bAutomaticallyMergeNewItems = { "bAutomaticallyMergeNewItems", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventorySettings), &Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bAutomaticallyMergeNewItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallyMergeNewItems_MetaData), NewProp_bAutomaticallyMergeNewItems_MetaData) };
void Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bPerformStrictStackChecks_SetBit(void* Obj)
{
	((UNinjaInventorySettings*)Obj)->bPerformStrictStackChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bPerformStrictStackChecks = { "bPerformStrictStackChecks", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventorySettings), &Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bPerformStrictStackChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformStrictStackChecks_MetaData), NewProp_bPerformStrictStackChecks_MetaData) };
void Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bGroupDroppedItemInstances_SetBit(void* Obj)
{
	((UNinjaInventorySettings*)Obj)->bGroupDroppedItemInstances = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bGroupDroppedItemInstances = { "bGroupDroppedItemInstances", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventorySettings), &Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bGroupDroppedItemInstances_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupDroppedItemInstances_MetaData), NewProp_bGroupDroppedItemInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventorySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_DefaultContainerInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_DefaultItemInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_DefaultLootSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_QualityMappingTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bAutomaticallyMergeNewItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bPerformStrictStackChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventorySettings_Statics::NewProp_bGroupDroppedItemInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventorySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventorySettings_Statics::ClassParams = {
	&UNinjaInventorySettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaInventorySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventorySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventorySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventorySettings()
{
	if (!Z_Registration_Info_UClass_UNinjaInventorySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventorySettings.OuterSingleton, Z_Construct_UClass_UNinjaInventorySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventorySettings.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventorySettings>()
{
	return UNinjaInventorySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventorySettings);
UNinjaInventorySettings::~UNinjaInventorySettings() {}
// End Class UNinjaInventorySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventorySettings, UNinjaInventorySettings::StaticClass, TEXT("UNinjaInventorySettings"), &Z_Registration_Info_UClass_UNinjaInventorySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventorySettings), 2785949640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySettings_h_1089314477(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventorySettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
