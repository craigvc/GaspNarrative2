// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Types/FItemFragmentMemories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFItemFragmentMemories() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryFragmentMemory();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory();
NINJAINVENTORYGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin ScriptStruct FInventoryItemFragmentContainerMemory
static_assert(std::is_polymorphic<FInventoryItemFragmentContainerMemory>() == std::is_polymorphic<FInventoryFragmentMemory>(), "USTRUCT FInventoryItemFragmentContainerMemory cannot be polymorphic unless super FInventoryFragmentMemory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory;
class UScriptStruct* FInventoryItemFragmentContainerMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryItemFragmentContainerMemory"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryItemFragmentContainerMemory>()
{
	return FInventoryItemFragmentContainerMemory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores information related to the Container Fragment.\n */" },
		{ "DisplayName", "Container Memory" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores information related to the Container Fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultContainerData_MetaData[] = {
		{ "Category", "Container Memory" },
		{ "Comment", "/** Container where this item is initially stored, used only as a default value. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Container where this item is initially stored, used only as a default value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Container Memory" },
		{ "Comment", "/** The position this item occupies in the container. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "The position this item occupies in the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryContainers_MetaData[] = {
		{ "Category", "Container Memory" },
		{ "Comment", "/** Secondary containers for the stored item. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Secondary containers for the stored item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryContainerId_MetaData[] = {
		{ "Category", "Container Memory" },
		{ "Comment", "/** Actual container instance where the item is currently stored. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Actual container instance where the item is currently stored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPrimaryContainerId_MetaData[] = {
		{ "Comment", "/** Stores the primary container before replication, so it can be notified. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores the primary container before replication, so it can be notified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastPosition_MetaData[] = {
		{ "Comment", "/** Stores the position before replication, so it can be notified. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores the position before replication, so it can be notified." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultContainerData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryContainers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryContainers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryContainerId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastPrimaryContainerId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemFragmentContainerMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_DefaultContainerData = { "DefaultContainerData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentContainerMemory, DefaultContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultContainerData_MetaData), NewProp_DefaultContainerData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentContainerMemory, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_SecondaryContainers_Inner = { "SecondaryContainers", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_SecondaryContainers = { "SecondaryContainers", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentContainerMemory, SecondaryContainers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryContainers_MetaData), NewProp_SecondaryContainers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_PrimaryContainerId = { "PrimaryContainerId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentContainerMemory, PrimaryContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryContainerId_MetaData), NewProp_PrimaryContainerId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_LastPrimaryContainerId = { "LastPrimaryContainerId", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentContainerMemory, LastPrimaryContainerId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPrimaryContainerId_MetaData), NewProp_LastPrimaryContainerId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_LastPosition = { "LastPosition", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentContainerMemory, LastPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastPosition_MetaData), NewProp_LastPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_DefaultContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_SecondaryContainers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_SecondaryContainers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_PrimaryContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_LastPrimaryContainerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewProp_LastPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentMemory,
	&NewStructOps,
	"InventoryItemFragmentContainerMemory",
	Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::PropPointers),
	sizeof(FInventoryItemFragmentContainerMemory),
	alignof(FInventoryItemFragmentContainerMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory.InnerSingleton;
}
// End ScriptStruct FInventoryItemFragmentContainerMemory

// Begin ScriptStruct FInventoryItemFragmentDurabilityMemory
static_assert(std::is_polymorphic<FInventoryItemFragmentDurabilityMemory>() == std::is_polymorphic<FInventoryFragmentMemory>(), "USTRUCT FInventoryItemFragmentDurabilityMemory cannot be polymorphic unless super FInventoryFragmentMemory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory;
class UScriptStruct* FInventoryItemFragmentDurabilityMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryItemFragmentDurabilityMemory"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryItemFragmentDurabilityMemory>()
{
	return FInventoryItemFragmentDurabilityMemory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores information related to the Durability Fragment.\n */" },
		{ "DisplayName", "Durability Memory" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores information related to the Durability Fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDurability_MetaData[] = {
		{ "Category", "Durability Memory" },
		{ "Comment", "/** Current durability for the item. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Current durability for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDurability_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stores the durability before replication, so it can be notified.\n\x09 * This value must start at \"-1\" as an initial value of zero must be broadcast.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores the durability before replication, so it can be notified.\nThis value must start at \"-1\" as an initial value of zero must be broadcast." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentDurability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemFragmentDurabilityMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::NewProp_CurrentDurability = { "CurrentDurability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentDurabilityMemory, CurrentDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDurability_MetaData), NewProp_CurrentDurability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::NewProp_LastDurability = { "LastDurability", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentDurabilityMemory, LastDurability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDurability_MetaData), NewProp_LastDurability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::NewProp_CurrentDurability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::NewProp_LastDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentMemory,
	&NewStructOps,
	"InventoryItemFragmentDurabilityMemory",
	Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::PropPointers),
	sizeof(FInventoryItemFragmentDurabilityMemory),
	alignof(FInventoryItemFragmentDurabilityMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory.InnerSingleton;
}
// End ScriptStruct FInventoryItemFragmentDurabilityMemory

// Begin ScriptStruct FInventoryItemFragmentLevelMemory
static_assert(std::is_polymorphic<FInventoryItemFragmentLevelMemory>() == std::is_polymorphic<FInventoryFragmentMemory>(), "USTRUCT FInventoryItemFragmentLevelMemory cannot be polymorphic unless super FInventoryFragmentMemory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory;
class UScriptStruct* FInventoryItemFragmentLevelMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryItemFragmentLevelMemory"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryItemFragmentLevelMemory>()
{
	return FInventoryItemFragmentLevelMemory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores information related to the Level Fragment.\n */" },
		{ "DisplayName", "Level Memory" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores information related to the Level Fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Level Memory" },
		{ "Comment", "/** Current level for the item. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Current level for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastLevel_MetaData[] = {
		{ "Comment", "/** Stores the level before replication, so it can be notified. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores the level before replication, so it can be notified." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemFragmentLevelMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentLevelMemory, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::NewProp_LastLevel = { "LastLevel", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentLevelMemory, LastLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastLevel_MetaData), NewProp_LastLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::NewProp_LastLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentMemory,
	&NewStructOps,
	"InventoryItemFragmentLevelMemory",
	Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::PropPointers),
	sizeof(FInventoryItemFragmentLevelMemory),
	alignof(FInventoryItemFragmentLevelMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory.InnerSingleton;
}
// End ScriptStruct FInventoryItemFragmentLevelMemory

// Begin ScriptStruct FInventoryItemFragmentStackMemory
static_assert(std::is_polymorphic<FInventoryItemFragmentStackMemory>() == std::is_polymorphic<FInventoryFragmentMemory>(), "USTRUCT FInventoryItemFragmentStackMemory cannot be polymorphic unless super FInventoryFragmentMemory is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory;
class UScriptStruct* FInventoryItemFragmentStackMemory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory, (UObject*)Z_Construct_UPackage__Script_NinjaInventoryGameplay(), TEXT("InventoryItemFragmentStackMemory"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UScriptStruct* StaticStruct<FInventoryItemFragmentStackMemory>()
{
	return FInventoryItemFragmentStackMemory::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores the current stack size for a given Inventory Item.\n */" },
		{ "DisplayName", "Stack Memory" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores the current stack size for a given Inventory Item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "Stack Memory" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Current Stack Size for the item instance. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Current Stack Size for the item instance." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStackSize_MetaData[] = {
		{ "Comment", "/** Stores the stack size before replication, so it can be notified. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Stores the stack size before replication, so it can be notified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFromSplitOperation_MetaData[] = {
		{ "Comment", "/** Blocks the fragment from combining a stack that was created from a split operation. */" },
		{ "ModuleRelativePath", "Public/Types/FItemFragmentMemories.h" },
		{ "ToolTip", "Blocks the fragment from combining a stack that was created from a split operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastStackSize;
	static void NewProp_bIsFromSplitOperation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFromSplitOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemFragmentStackMemory>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentStackMemory, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_LastStackSize = { "LastStackSize", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventoryItemFragmentStackMemory, LastStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStackSize_MetaData), NewProp_LastStackSize_MetaData) };
void Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_bIsFromSplitOperation_SetBit(void* Obj)
{
	((FInventoryItemFragmentStackMemory*)Obj)->bIsFromSplitOperation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_bIsFromSplitOperation = { "bIsFromSplitOperation", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInventoryItemFragmentStackMemory), &Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_bIsFromSplitOperation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFromSplitOperation_MetaData), NewProp_bIsFromSplitOperation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_LastStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewProp_bIsFromSplitOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
	Z_Construct_UScriptStruct_FInventoryFragmentMemory,
	&NewStructOps,
	"InventoryItemFragmentStackMemory",
	Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::PropPointers),
	sizeof(FInventoryItemFragmentStackMemory),
	alignof(FInventoryItemFragmentStackMemory),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory.InnerSingleton;
}
// End ScriptStruct FInventoryItemFragmentStackMemory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentMemories_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemFragmentContainerMemory::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemFragmentContainerMemory_Statics::NewStructOps, TEXT("InventoryItemFragmentContainerMemory"), &Z_Registration_Info_UScriptStruct_InventoryItemFragmentContainerMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemFragmentContainerMemory), 1913932694U) },
		{ FInventoryItemFragmentDurabilityMemory::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemFragmentDurabilityMemory_Statics::NewStructOps, TEXT("InventoryItemFragmentDurabilityMemory"), &Z_Registration_Info_UScriptStruct_InventoryItemFragmentDurabilityMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemFragmentDurabilityMemory), 652937391U) },
		{ FInventoryItemFragmentLevelMemory::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemFragmentLevelMemory_Statics::NewStructOps, TEXT("InventoryItemFragmentLevelMemory"), &Z_Registration_Info_UScriptStruct_InventoryItemFragmentLevelMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemFragmentLevelMemory), 2916838754U) },
		{ FInventoryItemFragmentStackMemory::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemFragmentStackMemory_Statics::NewStructOps, TEXT("InventoryItemFragmentStackMemory"), &Z_Registration_Info_UScriptStruct_InventoryItemFragmentStackMemory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemFragmentStackMemory), 2288702513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentMemories_h_2622235389(TEXT("/Script/NinjaInventoryGameplay"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentMemories_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_FItemFragmentMemories_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
