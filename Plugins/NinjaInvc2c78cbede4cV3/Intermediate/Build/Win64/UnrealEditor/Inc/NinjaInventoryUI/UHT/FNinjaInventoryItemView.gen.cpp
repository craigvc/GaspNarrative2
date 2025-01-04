// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Types/FNinjaInventoryItemView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNinjaInventoryItemView() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYUI_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin ScriptStruct FNinjaInventoryItemView
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NinjaInventoryItemView;
class UScriptStruct* FNinjaInventoryItemView::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NinjaInventoryItemView.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NinjaInventoryItemView.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNinjaInventoryItemView, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryUI(), TEXT("NinjaInventoryItemView"));
	}
	return Z_Registration_Info_UScriptStruct_NinjaInventoryItemView.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UScriptStruct* StaticStruct<FNinjaInventoryItemView>()
{
	return FNinjaInventoryItemView::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A consolidated view of an item, with all relevant information readily available.\n */" },
		{ "ModuleRelativePath", "Public/UI/Types/FNinjaInventoryItemView.h" },
		{ "ToolTip", "A consolidated view of an item, with all relevant information readily available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item View" },
		{ "Comment", "/** Actual item represented by this view. */" },
		{ "ModuleRelativePath", "Public/UI/Types/FNinjaInventoryItemView.h" },
		{ "ToolTip", "Actual item represented by this view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Category", "Item View" },
		{ "Comment", "/** Container storing the item. */" },
		{ "ModuleRelativePath", "Public/UI/Types/FNinjaInventoryItemView.h" },
		{ "ToolTip", "Container storing the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "Category", "Item View" },
		{ "Comment", "/** Equipment representing this item. */" },
		{ "ModuleRelativePath", "Public/UI/Types/FNinjaInventoryItemView.h" },
		{ "ToolTip", "Equipment representing this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Item View" },
		{ "Comment", "/** Position occupied by the item in the container. */" },
		{ "ModuleRelativePath", "Public/UI/Types/FNinjaInventoryItemView.h" },
		{ "ToolTip", "Position occupied by the item in the container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNinjaInventoryItemView>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaInventoryItemView, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaInventoryItemView, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaInventoryItemView, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaInventoryItemView, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
	nullptr,
	&NewStructOps,
	"NinjaInventoryItemView",
	Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::PropPointers),
	sizeof(FNinjaInventoryItemView),
	alignof(FNinjaInventoryItemView),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView()
{
	if (!Z_Registration_Info_UScriptStruct_NinjaInventoryItemView.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NinjaInventoryItemView.InnerSingleton, Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NinjaInventoryItemView.InnerSingleton;
}
// End ScriptStruct FNinjaInventoryItemView

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Types_FNinjaInventoryItemView_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNinjaInventoryItemView::StaticStruct, Z_Construct_UScriptStruct_FNinjaInventoryItemView_Statics::NewStructOps, TEXT("NinjaInventoryItemView"), &Z_Registration_Info_UScriptStruct_NinjaInventoryItemView, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNinjaInventoryItemView), 1671698782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Types_FNinjaInventoryItemView_h_868615098(TEXT("/Script/NinjaInventoryUI"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Types_FNinjaInventoryItemView_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Types_FNinjaInventoryItemView_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
