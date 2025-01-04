// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Data/NinjaInventoryLayoutDataAsset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryLayoutDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLayoutDataAsset();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryLayoutDataAsset
void UNinjaInventoryLayoutDataAsset::StaticRegisterNativesUNinjaInventoryLayoutDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryLayoutDataAsset);
UClass* Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_NoRegister()
{
	return UNinjaInventoryLayoutDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the base layout of an Inventory.\n */" },
		{ "IncludePath", "Data/NinjaInventoryLayoutDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryLayoutDataAsset.h" },
		{ "ToolTip", "Defines the base layout of an Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Inventory Layout" },
		{ "Comment", "/** A name that can be used when the inventory using this layout is exposed to the UI. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryLayoutDataAsset.h" },
		{ "ToolTip", "A name that can be used when the inventory using this layout is exposed to the UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContainerQuery_MetaData[] = {
		{ "Category", "Inventory Layout" },
		{ "Comment", "/** Tag Query used to retrieve default items in this inventory. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryLayoutDataAsset.h" },
		{ "ToolTip", "Tag Query used to retrieve default items in this inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Containers_MetaData[] = {
		{ "Category", "Inventory Layout" },
		{ "Comment", "/** All container definitions used by an inventory component. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryLayoutDataAsset.h" },
		{ "ToolTip", "All container definitions used by an inventory component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultContainerQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Containers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Containers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryLayoutDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLayoutDataAsset, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_DefaultContainerQuery = { "DefaultContainerQuery", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLayoutDataAsset, DefaultContainerQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContainerQuery_MetaData), NewProp_DefaultContainerQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_Containers_Inner = { "Containers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_Containers = { "Containers", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryLayoutDataAsset, Containers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Containers_MetaData), NewProp_Containers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_DefaultContainerQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_Containers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::NewProp_Containers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::ClassParams = {
	&UNinjaInventoryLayoutDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryLayoutDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryLayoutDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryLayoutDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaInventoryLayoutDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryLayoutDataAsset.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryLayoutDataAsset>()
{
	return UNinjaInventoryLayoutDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryLayoutDataAsset);
UNinjaInventoryLayoutDataAsset::~UNinjaInventoryLayoutDataAsset() {}
// End Class UNinjaInventoryLayoutDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryLayoutDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryLayoutDataAsset, UNinjaInventoryLayoutDataAsset::StaticClass, TEXT("UNinjaInventoryLayoutDataAsset"), &Z_Registration_Info_UClass_UNinjaInventoryLayoutDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryLayoutDataAsset), 2231514427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryLayoutDataAsset_h_4146149113(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryLayoutDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryLayoutDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
