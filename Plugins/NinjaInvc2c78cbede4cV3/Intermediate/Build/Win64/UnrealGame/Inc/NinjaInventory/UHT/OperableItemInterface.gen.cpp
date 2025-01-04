// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Interfaces/Aspects/OperableItemInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperableItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UOperableItemInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UOperableItemInterface_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentPayload();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin ScriptStruct FInventoryFragmentPayload
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentPayload;
class UScriptStruct* FInventoryFragmentPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventory(), TEXT("InventoryFragmentPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentPayload.OuterSingleton;
}
template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<FInventoryFragmentPayload>()
{
	return FInventoryFragmentPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A base payload for operations executed by fragments.\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/OperableItemInterface.h" },
		{ "ToolTip", "A base payload for operations executed by fragments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationTag_MetaData[] = {
		{ "Categories", "Inventory.Item.Fragment.Operation" },
		{ "Category", "Fragment Payload" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/OperableItemInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Fragment Payload" },
		{ "Comment", "/** Main item receiving the operation. */" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/OperableItemInterface.h" },
		{ "ToolTip", "Main item receiving the operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperationTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::NewProp_OperationTag = { "OperationTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentPayload, OperationTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationTag_MetaData), NewProp_OperationTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentPayload, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::NewProp_OperationTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
	nullptr,
	&NewStructOps,
	"InventoryFragmentPayload",
	Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::PropPointers),
	sizeof(FInventoryFragmentPayload),
	alignof(FInventoryFragmentPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentPayload

// Begin Interface UOperableItemInterface
void UOperableItemInterface::StaticRegisterNativesUOperableItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOperableItemInterface);
UClass* Z_Construct_UClass_UOperableItemInterface_NoRegister()
{
	return UOperableItemInterface::StaticClass();
}
struct Z_Construct_UClass_UOperableItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interfaces/Aspects/OperableItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOperableItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOperableItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOperableItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOperableItemInterface_Statics::ClassParams = {
	&UOperableItemInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOperableItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UOperableItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOperableItemInterface()
{
	if (!Z_Registration_Info_UClass_UOperableItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOperableItemInterface.OuterSingleton, Z_Construct_UClass_UOperableItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOperableItemInterface.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UOperableItemInterface>()
{
	return UOperableItemInterface::StaticClass();
}
UOperableItemInterface::UOperableItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOperableItemInterface);
UOperableItemInterface::~UOperableItemInterface() {}
// End Interface UOperableItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_OperableItemInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryFragmentPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentPayload_Statics::NewStructOps, TEXT("InventoryFragmentPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentPayload), 2383424170U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOperableItemInterface, UOperableItemInterface::StaticClass, TEXT("UOperableItemInterface"), &Z_Registration_Info_UClass_UOperableItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOperableItemInterface), 1843980662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_OperableItemInterface_h_3393570503(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_OperableItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_OperableItemInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_OperableItemInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Interfaces_Aspects_OperableItemInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
