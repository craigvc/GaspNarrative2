// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/NinjaInventoryGameplayFunctionLibrary.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryGameplayFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateActivatePayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateActivatePayload_Parms
	{
		UNinjaInventoryItem* Item;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for an Activate operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Activate operation.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Activate Payload" },
		{ "ToolTip", "Creates a payload that can be used for an Activate operation.\n\n@param Item                                  Item targeted for the Activate operation.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateActivatePayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateActivatePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateActivatePayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateActivatePayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateActivatePayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateActivatePayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateActivatePayload(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateActivatePayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateCombinePayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateCombinePayload_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryItem* ItemToCombine;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Combine operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Combine operation.\n\x09 * @param ItemToCombine\x09\x09\x09Item to combine with.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Combine Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Combine operation.\n\n@param Item                                  Item targeted for the Combine operation.\n@param ItemToCombine                 Item to combine with.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToCombine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateCombinePayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NewProp_ItemToCombine = { "ItemToCombine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateCombinePayload_Parms, ItemToCombine), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateCombinePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NewProp_ItemToCombine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateCombinePayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateCombinePayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateCombinePayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateCombinePayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemToCombine);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateCombinePayload(Z_Param_Item,Z_Param_ItemToCombine);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateCombinePayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateConsumePayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateConsumePayload_Parms
	{
		UNinjaInventoryItem* Item;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Consume operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Consume operation.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Consume Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Consume operation.\n\n@param Item                                  Item targeted for the Consume operation.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateConsumePayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateConsumePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateConsumePayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateConsumePayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateConsumePayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateConsumePayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateConsumePayload(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateConsumePayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateContainerMemory
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateContainerMemory_Parms
	{
		const UNinjaInventoryContainerDataAsset* PrimaryContainer;
		int32 Position;
		FInventoryDefaultItemMemory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a default memory that can be used by a Container Fragment.\n\x09 *\n\x09 * @param PrimaryContainer\x09\x09""Default container used as a primary container.\n\x09 * @param Position\x09\x09\x09\x09Position to place the item in the container.\n\x09 * @return\x09\x09\x09\x09\x09\x09""A default Item Memory that can be used with the Container Fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Container Memory" },
		{ "ToolTip", "Creates a default memory that can be used by a Container Fragment.\n\n@param PrimaryContainer              Default container used as a primary container.\n@param Position                              Position to place the item in the container.\n@return                                              A default Item Memory that can be used with the Container Fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryContainer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NewProp_PrimaryContainer = { "PrimaryContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateContainerMemory_Parms, PrimaryContainer), Z_Construct_UClass_UNinjaInventoryContainerDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryContainer_MetaData), NewProp_PrimaryContainer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateContainerMemory_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateContainerMemory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NewProp_PrimaryContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateContainerMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateContainerMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateContainerMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateContainerMemory)
{
	P_GET_OBJECT(UNinjaInventoryContainerDataAsset,Z_Param_PrimaryContainer);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryDefaultItemMemory*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateContainerMemory(Z_Param_PrimaryContainer,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateContainerMemory

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateDeactivatePayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateDeactivatePayload_Parms
	{
		UNinjaInventoryItem* Item;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Deactivate operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Deactivate operation.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Deactivate Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Deactivate operation.\n\n@param Item                                  Item targeted for the Deactivate operation.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDeactivatePayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDeactivatePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateDeactivatePayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateDeactivatePayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateDeactivatePayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateDeactivatePayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateDeactivatePayload(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateDeactivatePayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateDropPayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms
	{
		UNinjaInventoryItem* Item;
		FVector Location;
		bool bIsLocalOnly;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Drop operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Drop operation.\n\x09 * @param Location\x09\x09\x09\x09Location where the item will be dropped.\n\x09 * @param bIsLocalOnly\x09\x09\x09""Drops the item only for the local player.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Drop Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Drop operation.\n\n@param Item                                  Item targeted for the Drop operation.\n@param Location                              Location where the item will be dropped.\n@param bIsLocalOnly                  Drops the item only for the local player.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bIsLocalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalOnly;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_bIsLocalOnly_SetBit(void* Obj)
{
	((NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms*)Obj)->bIsLocalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_bIsLocalOnly = { "bIsLocalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_bIsLocalOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_bIsLocalOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateDropPayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateDropPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateDropPayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_UBOOL(Z_Param_bIsLocalOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateDropPayload(Z_Param_Item,Z_Param_Out_Location,Z_Param_bIsLocalOnly);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateDropPayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateDurabilityMemory
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateDurabilityMemory_Parms
	{
		float Durability;
		FInventoryDefaultItemMemory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a default memory that can be used by a Durability Fragment.\n\x09 *\n\x09 * @param Durability\x09\x09\x09""Current durability for an item.\n\x09 * @return\x09\x09\x09\x09\x09\x09""A default Item Memory that can be used with the Durability Fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Durability Memory" },
		{ "ToolTip", "Creates a default memory that can be used by a Durability Fragment.\n\n@param Durability                    Current durability for an item.\n@return                                              A default Item Memory that can be used with the Durability Fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDurabilityMemory_Parms, Durability), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateDurabilityMemory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::NewProp_Durability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateDurabilityMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateDurabilityMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateDurabilityMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateDurabilityMemory)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Durability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryDefaultItemMemory*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateDurabilityMemory(Z_Param_Durability);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateDurabilityMemory

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateLevelMemory
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateLevelMemory_Parms
	{
		float Level;
		FInventoryDefaultItemMemory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a default memory that can be used by a Level Fragment.\n\x09 *\n\x09 * @param Level\x09\x09\x09\x09\x09Level that will be assigned to the item.\n\x09 * @return\x09\x09\x09\x09\x09\x09""A default Item Memory that can be used with the Level Fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Level Memory" },
		{ "ToolTip", "Creates a default memory that can be used by a Level Fragment.\n\n@param Level                                 Level that will be assigned to the item.\n@return                                              A default Item Memory that can be used with the Level Fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateLevelMemory_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateLevelMemory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateLevelMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateLevelMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateLevelMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateLevelMemory)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryDefaultItemMemory*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateLevelMemory(Z_Param_Level);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateLevelMemory

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateMovePayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
		int32 Position;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Move operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Move operation.\n\x09 * @param Container\x09\x09\x09\x09""Container where the item will be moved to.\n\x09 * @param Position\x09\x09\x09\x09Position in the container.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Move Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Move operation.\n\n@param Item                                  Item targeted for the Move operation.\n@param Container                             Container where the item will be moved to.\n@param Position                              Position in the container.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateMovePayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateMovePayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateMovePayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateMovePayload(Z_Param_Item,Z_Param_Container,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateMovePayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateRepairPayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateRepairPayload_Parms
	{
		UNinjaInventoryItem* Item;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Repair operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Repair operation.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Repair Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Repair operation.\n\n@param Item                                  Item targeted for the Repair operation.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateRepairPayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateRepairPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateRepairPayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateRepairPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateRepairPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateRepairPayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateRepairPayload(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateRepairPayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateSplitPayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateSplitPayload_Parms
	{
		UNinjaInventoryItem* Item;
		int32 SplitSize;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Split operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Split operation.\n\x09 * @param SplitSize\x09\x09\x09\x09Size for the new stack\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Split Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Split operation.\n\n@param Item                                  Item targeted for the Split operation.\n@param SplitSize                             Size for the new stack\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SplitSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateSplitPayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NewProp_SplitSize = { "SplitSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateSplitPayload_Parms, SplitSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateSplitPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NewProp_SplitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateSplitPayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateSplitPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateSplitPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateSplitPayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_SplitSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateSplitPayload(Z_Param_Item,Z_Param_SplitSize);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateSplitPayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateStackMemory
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateStackMemory_Parms
	{
		int32 StackSize;
		FInventoryDefaultItemMemory ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a default memory that can be used by a Stack Fragment.\n\x09 *\n\x09 * @param StackSize\x09\x09\x09\x09Size of the stack to be assigned to the item.\n\x09 * @return\x09\x09\x09\x09\x09\x09""A default Item Memory that can be used with the Stack Fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Stack Memory" },
		{ "ToolTip", "Creates a default memory that can be used by a Stack Fragment.\n\n@param StackSize                             Size of the stack to be assigned to the item.\n@return                                              A default Item Memory that can be used with the Stack Fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateStackMemory_Parms, StackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateStackMemory_Parms, ReturnValue), Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateStackMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateStackMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateStackMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateStackMemory)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInventoryDefaultItemMemory*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateStackMemory(Z_Param_StackSize);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateStackMemory

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateSwapPayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateSwapPayload_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryItem* ItemToSwap;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Swap operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Swap operation.\n\x09 * @param ItemToSwap\x09\x09\x09Item to be swapped.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Swap Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Swap operation.\n\n@param Item                                  Item targeted for the Swap operation.\n@param ItemToSwap                    Item to be swapped.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToSwap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateSwapPayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NewProp_ItemToSwap = { "ItemToSwap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateSwapPayload_Parms, ItemToSwap), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateSwapPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NewProp_ItemToSwap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateSwapPayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateSwapPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateSwapPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateSwapPayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_ItemToSwap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateSwapPayload(Z_Param_Item,Z_Param_ItemToSwap);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateSwapPayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateUpgradePayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Value;
		bool bIsIncremental;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for an Upgrade operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Repair operation.\n\x09 * @param Value\x09\x09\x09\x09\x09""A value that can be set as the new level or as an increment.\n\x09 * @param bIsIncremental\x09\x09If set to true, uses the value as an incremental upgrade. Otherwise, the value is absolute.\n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Upgrade Payload" },
		{ "ToolTip", "Creates a payload that can be used for an Upgrade operation.\n\n@param Item                                  Item targeted for the Repair operation.\n@param Value                                 A value that can be set as the new level or as an increment.\n@param bIsIncremental                If set to true, uses the value as an incremental upgrade. Otherwise, the value is absolute.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_bIsIncremental_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIncremental;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_bIsIncremental_SetBit(void* Obj)
{
	((NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms*)Obj)->bIsIncremental = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_bIsIncremental = { "bIsIncremental", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_bIsIncremental_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_bIsIncremental,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateUpgradePayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateUpgradePayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateUpgradePayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_GET_UBOOL(Z_Param_bIsIncremental);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateUpgradePayload(Z_Param_Item,Z_Param_Value,Z_Param_bIsIncremental);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateUpgradePayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function CreateWearPayload
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventCreateWearPayload_Parms
	{
		UNinjaInventoryItem* Item;
		int32 WearAmount;
		TInstancedStruct<FInventoryFragmentPayload> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Creates a payload that can be used for a Wear operation.\n\x09 *\n\x09 * @param Item\x09\x09\x09\x09\x09Item targeted for the Wear operation.\n\x09 * @param WearAmount\x09\x09\x09How much wear to add to the item. \n\x09 * @return\x09\x09\x09\x09\x09\x09The instanced struct fully configured for the operation.\n\x09 */" },
		{ "CPP_Default_WearAmount", "10" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ReturnDisplayName", "Wear Payload" },
		{ "ToolTip", "Creates a payload that can be used for a Wear operation.\n\n@param Item                                  Item targeted for the Wear operation.\n@param WearAmount                    How much wear to add to the item.\n@return                                              The instanced struct fully configured for the operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WearAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateWearPayload_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NewProp_WearAmount = { "WearAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateWearPayload_Parms, WearAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventCreateWearPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NewProp_WearAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "CreateWearPayload", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateWearPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::NinjaInventoryGameplayFunctionLibrary_eventCreateWearPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execCreateWearPayload)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_WearAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TInstancedStruct<FInventoryFragmentPayload>*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::CreateWearPayload(Z_Param_Item,Z_Param_WearAmount);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function CreateWearPayload

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function InEquipmentContainer
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventInEquipmentContainer_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/** \n\x09 * Checks if the Item is stored in an Equipment Container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ToolTip", "Checks if the Item is stored in an Equipment Container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventInEquipmentContainer_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayFunctionLibrary_eventInEquipmentContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayFunctionLibrary_eventInEquipmentContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "InEquipmentContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NinjaInventoryGameplayFunctionLibrary_eventInEquipmentContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::NinjaInventoryGameplayFunctionLibrary_eventInEquipmentContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execInEquipmentContainer)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::InEquipmentContainer(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function InEquipmentContainer

// Begin Class UNinjaInventoryGameplayFunctionLibrary Function IsEquipmentContainer
struct Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics
{
	struct NinjaInventoryGameplayFunctionLibrary_eventIsEquipmentContainer_Parms
	{
		const UNinjaInventoryContainer* Container;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Gameplay" },
		{ "Comment", "/**\n\x09 * Checks if the Container is configured as an Equipment Slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ToolTip", "Checks if the Container is configured as an Equipment Slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryGameplayFunctionLibrary_eventIsEquipmentContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryGameplayFunctionLibrary_eventIsEquipmentContainer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryGameplayFunctionLibrary_eventIsEquipmentContainer_Parms), &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, nullptr, "IsEquipmentContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NinjaInventoryGameplayFunctionLibrary_eventIsEquipmentContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::NinjaInventoryGameplayFunctionLibrary_eventIsEquipmentContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryGameplayFunctionLibrary::execIsEquipmentContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryGameplayFunctionLibrary::IsEquipmentContainer(Z_Param_Container);
	P_NATIVE_END;
}
// End Class UNinjaInventoryGameplayFunctionLibrary Function IsEquipmentContainer

// Begin Class UNinjaInventoryGameplayFunctionLibrary
void UNinjaInventoryGameplayFunctionLibrary::StaticRegisterNativesUNinjaInventoryGameplayFunctionLibrary()
{
	UClass* Class = UNinjaInventoryGameplayFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateActivatePayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateActivatePayload },
		{ "CreateCombinePayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateCombinePayload },
		{ "CreateConsumePayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateConsumePayload },
		{ "CreateContainerMemory", &UNinjaInventoryGameplayFunctionLibrary::execCreateContainerMemory },
		{ "CreateDeactivatePayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateDeactivatePayload },
		{ "CreateDropPayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateDropPayload },
		{ "CreateDurabilityMemory", &UNinjaInventoryGameplayFunctionLibrary::execCreateDurabilityMemory },
		{ "CreateLevelMemory", &UNinjaInventoryGameplayFunctionLibrary::execCreateLevelMemory },
		{ "CreateMovePayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateMovePayload },
		{ "CreateRepairPayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateRepairPayload },
		{ "CreateSplitPayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateSplitPayload },
		{ "CreateStackMemory", &UNinjaInventoryGameplayFunctionLibrary::execCreateStackMemory },
		{ "CreateSwapPayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateSwapPayload },
		{ "CreateUpgradePayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateUpgradePayload },
		{ "CreateWearPayload", &UNinjaInventoryGameplayFunctionLibrary::execCreateWearPayload },
		{ "InEquipmentContainer", &UNinjaInventoryGameplayFunctionLibrary::execInEquipmentContainer },
		{ "IsEquipmentContainer", &UNinjaInventoryGameplayFunctionLibrary::execIsEquipmentContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryGameplayFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_NoRegister()
{
	return UNinjaInventoryGameplayFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Support functions for the Gameplay layer in the Inventory System.\n */" },
		{ "IncludePath", "NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaInventoryGameplayFunctionLibrary.h" },
		{ "ToolTip", "Support functions for the Gameplay layer in the Inventory System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateActivatePayload, "CreateActivatePayload" }, // 772461700
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateCombinePayload, "CreateCombinePayload" }, // 1951481856
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateConsumePayload, "CreateConsumePayload" }, // 310952364
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateContainerMemory, "CreateContainerMemory" }, // 1702762767
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDeactivatePayload, "CreateDeactivatePayload" }, // 3018713144
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDropPayload, "CreateDropPayload" }, // 4131849407
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateDurabilityMemory, "CreateDurabilityMemory" }, // 632305197
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateLevelMemory, "CreateLevelMemory" }, // 634810783
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateMovePayload, "CreateMovePayload" }, // 1983913468
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateRepairPayload, "CreateRepairPayload" }, // 1544400609
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSplitPayload, "CreateSplitPayload" }, // 3663058697
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateStackMemory, "CreateStackMemory" }, // 1019610154
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateSwapPayload, "CreateSwapPayload" }, // 1544917924
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateUpgradePayload, "CreateUpgradePayload" }, // 2952574669
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_CreateWearPayload, "CreateWearPayload" }, // 533367657
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_InEquipmentContainer, "InEquipmentContainer" }, // 4080235167
		{ &Z_Construct_UFunction_UNinjaInventoryGameplayFunctionLibrary_IsEquipmentContainer, "IsEquipmentContainer" }, // 2789329822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryGameplayFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics::ClassParams = {
	&UNinjaInventoryGameplayFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryGameplayFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryGameplayFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryGameplayFunctionLibrary.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UNinjaInventoryGameplayFunctionLibrary>()
{
	return UNinjaInventoryGameplayFunctionLibrary::StaticClass();
}
UNinjaInventoryGameplayFunctionLibrary::UNinjaInventoryGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryGameplayFunctionLibrary);
UNinjaInventoryGameplayFunctionLibrary::~UNinjaInventoryGameplayFunctionLibrary() {}
// End Class UNinjaInventoryGameplayFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary, UNinjaInventoryGameplayFunctionLibrary::StaticClass, TEXT("UNinjaInventoryGameplayFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaInventoryGameplayFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryGameplayFunctionLibrary), 222728147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_2317635714(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
