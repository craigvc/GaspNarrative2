// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Types/FItemFragmentOperationPayload.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFItemFragmentOperationPayload() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin ScriptStruct FInventoryFragmentConsumeOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentConsumeOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentConsumeOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload;
class UScriptStruct* FInventoryFragmentConsumeOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentConsumeOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentConsumeOperationPayload>()
{
	return FInventoryFragmentConsumeOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about consume operations.\n */" },
		{ "DisplayName", "Consume Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about consume operations." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentConsumeOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentConsumeOperationPayload",
	nullptr,
	0,
	sizeof(FInventoryFragmentConsumeOperationPayload),
	alignof(FInventoryFragmentConsumeOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentConsumeOperationPayload

// Begin ScriptStruct FInventoryFragmentStorageOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentStorageOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentStorageOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload;
class UScriptStruct* FInventoryFragmentStorageOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentStorageOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentStorageOperationPayload>()
{
	return FInventoryFragmentStorageOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about storage operations.\n */" },
		{ "DisplayName", "Container Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about storage operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToSwap_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Another item to swap positions with. Prioritized over the container/position data. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Another item to swap positions with. Prioritized over the container/position data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** New Container to store an item. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "New Container to store an item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** New position to store an item, in the current or new container. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "New position to store an item, in the current or new container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToSwap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentStorageOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewProp_ItemToSwap = { "ItemToSwap", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentStorageOperationPayload, ItemToSwap), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToSwap_MetaData), NewProp_ItemToSwap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentStorageOperationPayload, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentStorageOperationPayload, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewProp_ItemToSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentStorageOperationPayload",
	Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::PropPointers),
	sizeof(FInventoryFragmentStorageOperationPayload),
	alignof(FInventoryFragmentStorageOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentStorageOperationPayload

// Begin ScriptStruct FInventoryFragmentDurabilityOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentDurabilityOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentDurabilityOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload;
class UScriptStruct* FInventoryFragmentDurabilityOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentDurabilityOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentDurabilityOperationPayload>()
{
	return FInventoryFragmentDurabilityOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about durability operations.\n */" },
		{ "DisplayName", "Durability Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about durability operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WearAmount_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** How much wear will be applied to the item's durability. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "How much wear will be applied to the item's durability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_WearAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentDurabilityOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::NewProp_WearAmount = { "WearAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentDurabilityOperationPayload, WearAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WearAmount_MetaData), NewProp_WearAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::NewProp_WearAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentDurabilityOperationPayload",
	Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::PropPointers),
	sizeof(FInventoryFragmentDurabilityOperationPayload),
	alignof(FInventoryFragmentDurabilityOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentDurabilityOperationPayload

// Begin ScriptStruct FInventoryFragmentEquipmentOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentEquipmentOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentEquipmentOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload;
class UScriptStruct* FInventoryFragmentEquipmentOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentEquipmentOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentEquipmentOperationPayload>()
{
	return FInventoryFragmentEquipmentOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about equipment operations.\n */" },
		{ "DisplayName", "Equipment Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about equipment operations." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentEquipmentOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentEquipmentOperationPayload",
	nullptr,
	0,
	sizeof(FInventoryFragmentEquipmentOperationPayload),
	alignof(FInventoryFragmentEquipmentOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentEquipmentOperationPayload

// Begin ScriptStruct FInventoryFragmentLevelOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentLevelOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentLevelOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload;
class UScriptStruct* FInventoryFragmentLevelOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentLevelOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentLevelOperationPayload>()
{
	return FInventoryFragmentLevelOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about level operations.\n */" },
		{ "DisplayName", "Level Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about level operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Value to be used as the actual level or increment. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Value to be used as the actual level or increment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIncremental_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Informs how the value should be used. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Informs how the value should be used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_bIsIncremental_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIncremental;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentLevelOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentLevelOperationPayload, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewProp_bIsIncremental_SetBit(void* Obj)
{
	((FInventoryFragmentLevelOperationPayload*)Obj)->bIsIncremental = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewProp_bIsIncremental = { "bIsIncremental", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryFragmentLevelOperationPayload), &Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewProp_bIsIncremental_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIncremental_MetaData), NewProp_bIsIncremental_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewProp_bIsIncremental,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentLevelOperationPayload",
	Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::PropPointers),
	sizeof(FInventoryFragmentLevelOperationPayload),
	alignof(FInventoryFragmentLevelOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentLevelOperationPayload

// Begin ScriptStruct FInventoryFragmentPickupOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentPickupOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentPickupOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload;
class UScriptStruct* FInventoryFragmentPickupOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentPickupOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentPickupOperationPayload>()
{
	return FInventoryFragmentPickupOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about pickup operations.\n */" },
		{ "DisplayName", "Pickup Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about pickup operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Source generating this payload. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Source generating this payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Item data to drop. Only used if the original item is not provided. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Item data to drop. Only used if the original item is not provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memories_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Memories used when granting the item. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Memories used when granting the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/**\n\x09 * Location in the world where the item will be dropped.\n\x09 * \n\x09 * This could be the Mouse Location (from UI Drag/Drop), a location obtained from an\n\x09 * Environment Query, or any other means. Regardless, the fragment will consider the\n\x09 * location valid and use it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Location in the world where the item will be dropped.\n\nThis could be the Mouse Location (from UI Drag/Drop), a location obtained from an\nEnvironment Query, or any other means. Regardless, the fragment will consider the\nlocation valid and use it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalOnly_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/**\n\x09 * Determines if this drop is only meant for the local player or all players.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Determines if this drop is only meant for the local player or all players." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Memories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bIsLocalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentPickupOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentPickupOperationPayload, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentPickupOperationPayload, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Memories_Inner = { "Memories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Memories = { "Memories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentPickupOperationPayload, Memories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memories_MetaData), NewProp_Memories_MetaData) }; // 3775202926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentPickupOperationPayload, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
void Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_bIsLocalOnly_SetBit(void* Obj)
{
	((FInventoryFragmentPickupOperationPayload*)Obj)->bIsLocalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_bIsLocalOnly = { "bIsLocalOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryFragmentPickupOperationPayload), &Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_bIsLocalOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocalOnly_MetaData), NewProp_bIsLocalOnly_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Memories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Memories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewProp_bIsLocalOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentPickupOperationPayload",
	Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::PropPointers),
	sizeof(FInventoryFragmentPickupOperationPayload),
	alignof(FInventoryFragmentPickupOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentPickupOperationPayload

// Begin ScriptStruct FInventoryFragmentStackOperationPayload
static_assert(std::is_polymorphic<FInventoryFragmentStackOperationPayload>() == std::is_polymorphic<FInventoryFragmentPayload>(), "USTRUCT FInventoryFragmentStackOperationPayload cannot be polymorphic unless super FInventoryFragmentPayload is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload;
class UScriptStruct* FInventoryFragmentStackOperationPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryFragmentStackOperationPayload"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryFragmentStackOperationPayload>()
{
	return FInventoryFragmentStackOperationPayload::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Details about stack operations.\n */" },
		{ "DisplayName", "Stack Payload" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Details about stack operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToCombine_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** Another item to combine stacks with. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "Another item to combine stacks with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplitSize_MetaData[] = {
		{ "Category", "Fragment Operation Payload" },
		{ "Comment", "/** A stack size for split. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentOperationPayload.h" },
		{ "ToolTip", "A stack size for split." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToCombine;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryFragmentStackOperationPayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::NewProp_ItemToCombine = { "ItemToCombine", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentStackOperationPayload, ItemToCombine), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToCombine_MetaData), NewProp_ItemToCombine_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::NewProp_SplitSize = { "SplitSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryFragmentStackOperationPayload, SplitSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplitSize_MetaData), NewProp_SplitSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::NewProp_ItemToCombine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::NewProp_SplitSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentPayload,
	&NewStructOps,
	"InventoryFragmentStackOperationPayload",
	Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::PropPointers),
	sizeof(FInventoryFragmentStackOperationPayload),
	alignof(FInventoryFragmentStackOperationPayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload.InnerSingleton, Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload.InnerSingleton;
}
// End ScriptStruct FInventoryFragmentStackOperationPayload

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentOperationPayload_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryFragmentConsumeOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentConsumeOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentConsumeOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentConsumeOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentConsumeOperationPayload), 1016620996U) },
		{ FInventoryFragmentStorageOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentStorageOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentStorageOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentStorageOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentStorageOperationPayload), 3312949258U) },
		{ FInventoryFragmentDurabilityOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentDurabilityOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentDurabilityOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentDurabilityOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentDurabilityOperationPayload), 3326828420U) },
		{ FInventoryFragmentEquipmentOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentEquipmentOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentEquipmentOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentEquipmentOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentEquipmentOperationPayload), 776783458U) },
		{ FInventoryFragmentLevelOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentLevelOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentLevelOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentLevelOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentLevelOperationPayload), 3248051582U) },
		{ FInventoryFragmentPickupOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentPickupOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentPickupOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentPickupOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentPickupOperationPayload), 3464693443U) },
		{ FInventoryFragmentStackOperationPayload::StaticStruct, Z_Construct_UScriptStruct_FInventoryFragmentStackOperationPayload_Statics::NewStructOps, TEXT("InventoryFragmentStackOperationPayload"), &Z_Registration_Info_UScriptStruct_InventoryFragmentStackOperationPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryFragmentStackOperationPayload), 423807752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentOperationPayload_h_2842097437(TEXT("/Script/NinjaInventoryGameplay"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentOperationPayload_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentOperationPayload_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
