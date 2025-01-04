// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/NinjaInventoryFunctionLibrary.h"
#include "NinjaInventory/Public/Types/FInventoryContainerContext.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
#include "NinjaInventory/Public/Types/FInventoryItemContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UDroppableItemInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_ULootableItemInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryFunctionLibrary();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryFunctionLibrary_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UStackableItemInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UStorableItemInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UUpgradeableItemInterface_NoRegister();
NINJAINVENTORY_API UEnum* Z_Construct_UEnum_NinjaInventory_EInventoryContextState();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryContainerContext();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemContext();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryFunctionLibrary Function CreateContainerContext
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics
{
	struct NinjaInventoryFunctionLibrary_eventCreateContainerContext_Parms
	{
		const UNinjaInventoryContainerDataAsset* ContainerData;
		UNinjaInventoryItem* SourceItem;
		FInventoryContainerContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Creates a container context used to grant a new container to the inventory.\n\x09 *\n\x09 * @param ContainerData\x09\x09\x09""Container Data used for the context.\n\x09 * @param SourceItem\x09\x09\x09""An optional item that is granting the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Container Context" },
		{ "ToolTip", "Creates a container context used to grant a new container to the inventory.\n\n@param ContainerData                 Container Data used for the context.\n@param SourceItem                    An optional item that is granting the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NewProp_ContainerData = { "ContainerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventCreateContainerContext_Parms, ContainerData), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerData_MetaData), NewProp_ContainerData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NewProp_SourceItem = { "SourceItem", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventCreateContainerContext_Parms, SourceItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventCreateContainerContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryContainerContext, METADATA_PARAMS(0, nullptr) }; // 3032376117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NewProp_ContainerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NewProp_SourceItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "CreateContainerContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NinjaInventoryFunctionLibrary_eventCreateContainerContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::NinjaInventoryFunctionLibrary_eventCreateContainerContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execCreateContainerContext)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_ContainerData);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_SourceItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryContainerContext*)Z_Param__Result=UNinjaInventoryFunctionLibrary::CreateContainerContext(Z_Param_ContainerData,Z_Param_SourceItem);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function CreateContainerContext

// Begin Class UNinjaInventoryFunctionLibrary Function CreateItemContext
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics
{
	struct NinjaInventoryFunctionLibrary_eventCreateItemContext_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TArray<FInventoryDefaultItemMemory> DefaultMemories;
		FInventoryItemContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Creates an item context used to grant a new item to the inventory.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09\x09Item Data used for the context entry.\n\x09 * @param DefaultMemories\x09\x09""All memories applied by default to the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Item Context" },
		{ "ToolTip", "Creates an item context used to grant a new item to the inventory.\n\n@param ItemData                              Item Data used for the context entry.\n@param DefaultMemories               All memories applied by default to the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMemories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMemories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventCreateItemContext_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_DefaultMemories_Inner = { "DefaultMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_DefaultMemories = { "DefaultMemories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventCreateItemContext_Parms, DefaultMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMemories_MetaData), NewProp_DefaultMemories_MetaData) }; // 3775202926
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventCreateItemContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(0, nullptr) }; // 305387301
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_DefaultMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_DefaultMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "CreateItemContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NinjaInventoryFunctionLibrary_eventCreateItemContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::NinjaInventoryFunctionLibrary_eventCreateItemContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execCreateItemContext)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_DefaultMemories);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryItemContext*)Z_Param__Result=UNinjaInventoryFunctionLibrary::CreateItemContext(Z_Param_ItemData,Z_Param_Out_DefaultMemories);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function CreateItemContext

// Begin Class UNinjaInventoryFunctionLibrary Function GetContainerContextState
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetContainerContextState_Parms
	{
		FInventoryContainerContext ContainerContext;
		EInventoryContextState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context was fully executed.\n\x09 *\n\x09 * @param ContainerContext\x09The container context to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09State for the context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "State" },
		{ "ToolTip", "Checks if the provided context was fully executed.\n\n@param ContainerContext      The container context to be evaluated.\n@return                                      State for the context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NewProp_ContainerContext = { "ContainerContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetContainerContextState_Parms, ContainerContext), Z_Construct_UScriptStruct_FInventoryContainerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerContext_MetaData), NewProp_ContainerContext_MetaData) }; // 3032376117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetContainerContextState_Parms, ReturnValue), Z_Construct_UEnum_NinjaInventory_EInventoryContextState, METADATA_PARAMS(0, nullptr) }; // 3442089183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NewProp_ContainerContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetContainerContextState", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NinjaInventoryFunctionLibrary_eventGetContainerContextState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::NinjaInventoryFunctionLibrary_eventGetContainerContextState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetContainerContextState)
{
	P_GET_STRUCT_REF(FInventoryContainerContext,Z_Param_Out_ContainerContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInventoryContextState*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetContainerContextState(Z_Param_Out_ContainerContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetContainerContextState

// Begin Class UNinjaInventoryFunctionLibrary Function GetDroppableItemAspect
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetDroppableItemAspect_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TScriptInterface<IDroppableItemInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides a pointer to a Droppable Item abstraction.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09The data asset for the item providing the fragment. Must be valid.\n\x09 * @return\x09\x09\x09\x09\x09Interface abstracting a Droppable Item fragment.\n\x09 */" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Droppable Item" },
		{ "ToolTip", "Provides a pointer to a Droppable Item abstraction.\n\n@param ItemData                      The data asset for the item providing the fragment. Must be valid.\n@return                                      Interface abstracting a Droppable Item fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetDroppableItemAspect_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetDroppableItemAspect_Parms, ReturnValue), Z_Construct_UClass_UDroppableItemInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetDroppableItemAspect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetDroppableItemAspect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetDroppableItemAspect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetDroppableItemAspect)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IDroppableItemInterface>*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetDroppableItemAspect(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetDroppableItemAspect

// Begin Class UNinjaInventoryFunctionLibrary Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetInventoryManager_Parms
	{
		const UObject* Context;
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager assigned to an actor.\n\x09 * \n\x09 * It will evaluate the context against multiple common object types and\n\x09 * try to obtain the Inventory Manager in the best way possible.\n\x09 */" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Inventory Manager" },
		{ "ToolTip", "Provides the Inventory Manager assigned to an actor.\n\nIt will evaluate the context against multiple common object types and\ntry to obtain the Inventory Manager in the best way possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetInventoryManager_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::NinjaInventoryFunctionLibrary_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::NinjaInventoryFunctionLibrary_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetInventoryManager)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetInventoryManager(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetInventoryManager

// Begin Class UNinjaInventoryFunctionLibrary Function GetItemContextState
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetItemContextState_Parms
	{
		FInventoryItemContext ItemContext;
		EInventoryContextState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context was fully executed.\n\x09 *\n\x09 * @param ItemContext\x09\x09The item context to be evaluated.\n\x09 * @return\x09\x09\x09\x09\x09State for the context.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "State" },
		{ "ToolTip", "Checks if the provided context was fully executed.\n\n@param ItemContext           The item context to be evaluated.\n@return                                      State for the context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetItemContextState_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetItemContextState_Parms, ReturnValue), Z_Construct_UEnum_NinjaInventory_EInventoryContextState, METADATA_PARAMS(0, nullptr) }; // 3442089183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetItemContextState", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NinjaInventoryFunctionLibrary_eventGetItemContextState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::NinjaInventoryFunctionLibrary_eventGetItemContextState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetItemContextState)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EInventoryContextState*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetItemContextState(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetItemContextState

// Begin Class UNinjaInventoryFunctionLibrary Function GetLootableItemAspect
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetLootableItemAspect_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TScriptInterface<ILootableItemInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides a pointer to a Lootable Item abstraction.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09The data asset for the item providing the fragment. Must be valid.\n\x09 * @return\x09\x09\x09\x09\x09Interface abstracting a Lootable Item fragment.\n\x09 */" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Lootable Item" },
		{ "ToolTip", "Provides a pointer to a Lootable Item abstraction.\n\n@param ItemData                      The data asset for the item providing the fragment. Must be valid.\n@return                                      Interface abstracting a Lootable Item fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetLootableItemAspect_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetLootableItemAspect_Parms, ReturnValue), Z_Construct_UClass_ULootableItemInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetLootableItemAspect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetLootableItemAspect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetLootableItemAspect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetLootableItemAspect)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<ILootableItemInterface>*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetLootableItemAspect(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetLootableItemAspect

// Begin Class UNinjaInventoryFunctionLibrary Function GetStackableItemAspect
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetStackableItemAspect_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TScriptInterface<IStackableItemInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides a pointer to a Stackable Item abstraction.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09The data asset for the item providing the fragment. Must be valid.\n\x09 * @return\x09\x09\x09\x09\x09Interface abstracting a Stackable Item fragment.\n\x09 */" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Stackable Item" },
		{ "ToolTip", "Provides a pointer to a Stackable Item abstraction.\n\n@param ItemData                      The data asset for the item providing the fragment. Must be valid.\n@return                                      Interface abstracting a Stackable Item fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetStackableItemAspect_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetStackableItemAspect_Parms, ReturnValue), Z_Construct_UClass_UStackableItemInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetStackableItemAspect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetStackableItemAspect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetStackableItemAspect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetStackableItemAspect)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IStackableItemInterface>*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetStackableItemAspect(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetStackableItemAspect

// Begin Class UNinjaInventoryFunctionLibrary Function GetStorableItemAspect
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetStorableItemAspect_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TScriptInterface<IStorableItemInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides a pointer to a Storable Item abstraction.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09The data asset for the item providing the fragment. Must be valid.\n\x09 * @return\x09\x09\x09\x09\x09Interface abstracting a Storable Item fragment.\n\x09 */" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Storable Item" },
		{ "ToolTip", "Provides a pointer to a Storable Item abstraction.\n\n@param ItemData                      The data asset for the item providing the fragment. Must be valid.\n@return                                      Interface abstracting a Storable Item fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetStorableItemAspect_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetStorableItemAspect_Parms, ReturnValue), Z_Construct_UClass_UStorableItemInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetStorableItemAspect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetStorableItemAspect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetStorableItemAspect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetStorableItemAspect)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IStorableItemInterface>*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetStorableItemAspect(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetStorableItemAspect

// Begin Class UNinjaInventoryFunctionLibrary Function GetUpgradeableItemAspect
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics
{
	struct NinjaInventoryFunctionLibrary_eventGetUpgradeableItemAspect_Parms
	{
		const UNinjaInventoryItemDataAsset* ItemData;
		TScriptInterface<IUpgradeableItemInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Provides a pointer to an Upgradeable Item abstraction.\n\x09 *\n\x09 * @param ItemData\x09\x09\x09The data asset for the item providing the fragment. Must be valid.\n\x09 * @return\x09\x09\x09\x09\x09Interface abstracting an Upgradeable Item fragment.\n\x09 */" },
		{ "DefaultToSelf", "Context" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Upgradeable Item" },
		{ "ToolTip", "Provides a pointer to an Upgradeable Item abstraction.\n\n@param ItemData                      The data asset for the item providing the fragment. Must be valid.\n@return                                      Interface abstracting an Upgradeable Item fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetUpgradeableItemAspect_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventGetUpgradeableItemAspect_Parms, ReturnValue), Z_Construct_UClass_UUpgradeableItemInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "GetUpgradeableItemAspect", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetUpgradeableItemAspect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::NinjaInventoryFunctionLibrary_eventGetUpgradeableItemAspect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execGetUpgradeableItemAspect)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IUpgradeableItemInterface>*)Z_Param__Result=UNinjaInventoryFunctionLibrary::GetUpgradeableItemAspect(Z_Param_ItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function GetUpgradeableItemAspect

// Begin Class UNinjaInventoryFunctionLibrary Function HasCreatedItems
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics
{
	struct NinjaInventoryFunctionLibrary_eventHasCreatedItems_Parms
	{
		FInventoryItemContext ItemContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context created new items.\n\x09 *\n\x09 * @param ItemContext\x09\x09The item context to be queried.\n\x09 * @return\x09\x09\x09\x09\x09True if the context resulted in new items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Created Items" },
		{ "ToolTip", "Checks if the provided context created new items.\n\n@param ItemContext           The item context to be queried.\n@return                                      True if the context resulted in new items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventHasCreatedItems_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
void Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryFunctionLibrary_eventHasCreatedItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryFunctionLibrary_eventHasCreatedItems_Parms), &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "HasCreatedItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NinjaInventoryFunctionLibrary_eventHasCreatedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::NinjaInventoryFunctionLibrary_eventHasCreatedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execHasCreatedItems)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryFunctionLibrary::HasCreatedItems(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function HasCreatedItems

// Begin Class UNinjaInventoryFunctionLibrary Function HasCreatedOrUpdatedItems
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics
{
	struct NinjaInventoryFunctionLibrary_eventHasCreatedOrUpdatedItems_Parms
	{
		FInventoryItemContext ItemContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context created or updated items.\n\x09 *\n\x09 * @param ItemContext\x09\x09The item context to be queried.\n\x09 * @return\x09\x09\x09\x09\x09True if the context resulted in created or updated items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Any Items" },
		{ "ToolTip", "Checks if the provided context created or updated items.\n\n@param ItemContext           The item context to be queried.\n@return                                      True if the context resulted in created or updated items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventHasCreatedOrUpdatedItems_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
void Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryFunctionLibrary_eventHasCreatedOrUpdatedItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryFunctionLibrary_eventHasCreatedOrUpdatedItems_Parms), &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "HasCreatedOrUpdatedItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NinjaInventoryFunctionLibrary_eventHasCreatedOrUpdatedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::NinjaInventoryFunctionLibrary_eventHasCreatedOrUpdatedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execHasCreatedOrUpdatedItems)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryFunctionLibrary::HasCreatedOrUpdatedItems(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function HasCreatedOrUpdatedItems

// Begin Class UNinjaInventoryFunctionLibrary Function HasDroppedItems
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics
{
	struct NinjaInventoryFunctionLibrary_eventHasDroppedItems_Parms
	{
		FInventoryItemContext ItemContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context updated items.\n\x09 *\n\x09 * @param ItemContext\x09\x09The item context to be queried.\n\x09 * @return\x09\x09\x09\x09\x09True if the context resulted in dropped items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Dropped Items" },
		{ "ToolTip", "Checks if the provided context updated items.\n\n@param ItemContext           The item context to be queried.\n@return                                      True if the context resulted in dropped items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventHasDroppedItems_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
void Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryFunctionLibrary_eventHasDroppedItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryFunctionLibrary_eventHasDroppedItems_Parms), &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "HasDroppedItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NinjaInventoryFunctionLibrary_eventHasDroppedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::NinjaInventoryFunctionLibrary_eventHasDroppedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execHasDroppedItems)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryFunctionLibrary::HasDroppedItems(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function HasDroppedItems

// Begin Class UNinjaInventoryFunctionLibrary Function HasUpdatedItems
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics
{
	struct NinjaInventoryFunctionLibrary_eventHasUpdatedItems_Parms
	{
		FInventoryItemContext ItemContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context updated items.\n\x09 *\n\x09 * @param ItemContext\x09\x09The item context to be queried.\n\x09 * @return\x09\x09\x09\x09\x09True if the context resulted in updated items.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Updated Items" },
		{ "ToolTip", "Checks if the provided context updated items.\n\n@param ItemContext           The item context to be queried.\n@return                                      True if the context resulted in updated items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventHasUpdatedItems_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
void Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryFunctionLibrary_eventHasUpdatedItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryFunctionLibrary_eventHasUpdatedItems_Parms), &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "HasUpdatedItems", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NinjaInventoryFunctionLibrary_eventHasUpdatedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::NinjaInventoryFunctionLibrary_eventHasUpdatedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execHasUpdatedItems)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryFunctionLibrary::HasUpdatedItems(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function HasUpdatedItems

// Begin Class UNinjaInventoryFunctionLibrary Function OnContainerContextResult
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics
{
	struct NinjaInventoryFunctionLibrary_eventOnContainerContextResult_Parms
	{
		FInventoryContainerContext ContainerContext;
		EInventoryContextState OutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Allows a blueprint to perform a control flow based on the state of a container context.\n\x09 */" },
		{ "ExpandEnumAsExecs", "OutState" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ToolTip", "Allows a blueprint to perform a control flow based on the state of a container context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NewProp_ContainerContext = { "ContainerContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventOnContainerContextResult_Parms, ContainerContext), Z_Construct_UScriptStruct_FInventoryContainerContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerContext_MetaData), NewProp_ContainerContext_MetaData) }; // 3032376117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NewProp_OutState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventOnContainerContextResult_Parms, OutState), Z_Construct_UEnum_NinjaInventory_EInventoryContextState, METADATA_PARAMS(0, nullptr) }; // 3442089183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NewProp_ContainerContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NewProp_OutState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NewProp_OutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "OnContainerContextResult", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NinjaInventoryFunctionLibrary_eventOnContainerContextResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::NinjaInventoryFunctionLibrary_eventOnContainerContextResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execOnContainerContextResult)
{
	P_GET_STRUCT_REF(FInventoryContainerContext,Z_Param_Out_ContainerContext);
	P_GET_ENUM_REF(EInventoryContextState,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaInventoryFunctionLibrary::OnContainerContextResult(Z_Param_Out_ContainerContext,(EInventoryContextState&)(Z_Param_Out_OutState));
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function OnContainerContextResult

// Begin Class UNinjaInventoryFunctionLibrary Function OnItemContextResult
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics
{
	struct NinjaInventoryFunctionLibrary_eventOnItemContextResult_Parms
	{
		FInventoryItemContext ItemContext;
		EInventoryContextState OutState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Allows a blueprint to perform a control flow based on the state of an item context.\n\x09 */" },
		{ "ExpandEnumAsExecs", "OutState" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ToolTip", "Allows a blueprint to perform a control flow based on the state of an item context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventOnItemContextResult_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NewProp_OutState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NewProp_OutState = { "OutState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventOnItemContextResult_Parms, OutState), Z_Construct_UEnum_NinjaInventory_EInventoryContextState, METADATA_PARAMS(0, nullptr) }; // 3442089183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NewProp_OutState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NewProp_OutState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "OnItemContextResult", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NinjaInventoryFunctionLibrary_eventOnItemContextResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::NinjaInventoryFunctionLibrary_eventOnItemContextResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execOnItemContextResult)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_GET_ENUM_REF(EInventoryContextState,Z_Param_Out_OutState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaInventoryFunctionLibrary::OnItemContextResult(Z_Param_Out_ItemContext,(EInventoryContextState&)(Z_Param_Out_OutState));
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function OnItemContextResult

// Begin Class UNinjaInventoryFunctionLibrary Function WasFullyProcessed
struct Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics
{
	struct NinjaInventoryFunctionLibrary_eventWasFullyProcessed_Parms
	{
		FInventoryItemContext ItemContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory" },
		{ "Comment", "/**\n\x09 * Checks if the provided context was fully processed, meaning it has added, updated or dropped items.\n\x09 *\n\x09 * @param ItemContext\x09\x09The item context to be queried.\n\x09 * @return\x09\x09\x09\x09\x09True if the context has been processed, regardless of result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ReturnDisplayName", "Any Items" },
		{ "ToolTip", "Checks if the provided context was fully processed, meaning it has added, updated or dropped items.\n\n@param ItemContext           The item context to be queried.\n@return                                      True if the context has been processed, regardless of result." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NewProp_ItemContext = { "ItemContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryFunctionLibrary_eventWasFullyProcessed_Parms, ItemContext), Z_Construct_UScriptStruct_FInventoryItemContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemContext_MetaData), NewProp_ItemContext_MetaData) }; // 305387301
void Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryFunctionLibrary_eventWasFullyProcessed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryFunctionLibrary_eventWasFullyProcessed_Parms), &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NewProp_ItemContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryFunctionLibrary, nullptr, "WasFullyProcessed", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NinjaInventoryFunctionLibrary_eventWasFullyProcessed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::NinjaInventoryFunctionLibrary_eventWasFullyProcessed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryFunctionLibrary::execWasFullyProcessed)
{
	P_GET_STRUCT_REF(FInventoryItemContext,Z_Param_Out_ItemContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryFunctionLibrary::WasFullyProcessed(Z_Param_Out_ItemContext);
	P_NATIVE_END;
}
// End Class UNinjaInventoryFunctionLibrary Function WasFullyProcessed

// Begin Class UNinjaInventoryFunctionLibrary
void UNinjaInventoryFunctionLibrary::StaticRegisterNativesUNinjaInventoryFunctionLibrary()
{
	UClass* Class = UNinjaInventoryFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateContainerContext", &UNinjaInventoryFunctionLibrary::execCreateContainerContext },
		{ "CreateItemContext", &UNinjaInventoryFunctionLibrary::execCreateItemContext },
		{ "GetContainerContextState", &UNinjaInventoryFunctionLibrary::execGetContainerContextState },
		{ "GetDroppableItemAspect", &UNinjaInventoryFunctionLibrary::execGetDroppableItemAspect },
		{ "GetInventoryManager", &UNinjaInventoryFunctionLibrary::execGetInventoryManager },
		{ "GetItemContextState", &UNinjaInventoryFunctionLibrary::execGetItemContextState },
		{ "GetLootableItemAspect", &UNinjaInventoryFunctionLibrary::execGetLootableItemAspect },
		{ "GetStackableItemAspect", &UNinjaInventoryFunctionLibrary::execGetStackableItemAspect },
		{ "GetStorableItemAspect", &UNinjaInventoryFunctionLibrary::execGetStorableItemAspect },
		{ "GetUpgradeableItemAspect", &UNinjaInventoryFunctionLibrary::execGetUpgradeableItemAspect },
		{ "HasCreatedItems", &UNinjaInventoryFunctionLibrary::execHasCreatedItems },
		{ "HasCreatedOrUpdatedItems", &UNinjaInventoryFunctionLibrary::execHasCreatedOrUpdatedItems },
		{ "HasDroppedItems", &UNinjaInventoryFunctionLibrary::execHasDroppedItems },
		{ "HasUpdatedItems", &UNinjaInventoryFunctionLibrary::execHasUpdatedItems },
		{ "OnContainerContextResult", &UNinjaInventoryFunctionLibrary::execOnContainerContextResult },
		{ "OnItemContextResult", &UNinjaInventoryFunctionLibrary::execOnItemContextResult },
		{ "WasFullyProcessed", &UNinjaInventoryFunctionLibrary::execWasFullyProcessed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaInventoryFunctionLibrary_NoRegister()
{
	return UNinjaInventoryFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Support functions for the Inventory System. \n */" },
		{ "IncludePath", "NinjaInventoryFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaInventoryFunctionLibrary.h" },
		{ "ToolTip", "Support functions for the Inventory System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateContainerContext, "CreateContainerContext" }, // 271835305
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_CreateItemContext, "CreateItemContext" }, // 3383413147
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetContainerContextState, "GetContainerContextState" }, // 2077176898
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetDroppableItemAspect, "GetDroppableItemAspect" }, // 1404550073
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetInventoryManager, "GetInventoryManager" }, // 1501904285
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetItemContextState, "GetItemContextState" }, // 4165143039
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetLootableItemAspect, "GetLootableItemAspect" }, // 2803620273
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStackableItemAspect, "GetStackableItemAspect" }, // 31134099
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetStorableItemAspect, "GetStorableItemAspect" }, // 3627971599
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_GetUpgradeableItemAspect, "GetUpgradeableItemAspect" }, // 1666578917
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedItems, "HasCreatedItems" }, // 2496906931
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasCreatedOrUpdatedItems, "HasCreatedOrUpdatedItems" }, // 602027034
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasDroppedItems, "HasDroppedItems" }, // 1799382964
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_HasUpdatedItems, "HasUpdatedItems" }, // 2857106158
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnContainerContextResult, "OnContainerContextResult" }, // 1268094659
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_OnItemContextResult, "OnItemContextResult" }, // 2704069613
		{ &Z_Construct_UFunction_UNinjaInventoryFunctionLibrary_WasFullyProcessed, "WasFullyProcessed" }, // 3618848279
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics::ClassParams = {
	&UNinjaInventoryFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaInventoryFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryFunctionLibrary.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryFunctionLibrary>()
{
	return UNinjaInventoryFunctionLibrary::StaticClass();
}
UNinjaInventoryFunctionLibrary::UNinjaInventoryFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryFunctionLibrary);
UNinjaInventoryFunctionLibrary::~UNinjaInventoryFunctionLibrary() {}
// End Class UNinjaInventoryFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryFunctionLibrary, UNinjaInventoryFunctionLibrary::StaticClass, TEXT("UNinjaInventoryFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaInventoryFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryFunctionLibrary), 2366500683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_1584030946(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_NinjaInventoryFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
