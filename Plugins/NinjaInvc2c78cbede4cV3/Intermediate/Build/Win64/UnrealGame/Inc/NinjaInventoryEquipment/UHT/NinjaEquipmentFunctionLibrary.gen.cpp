// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/NinjaEquipmentFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentFunctionLibrary();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UNinjaEquipmentFunctionLibrary Function GetEquipmentForItem
struct Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics
{
	struct NinjaEquipmentFunctionLibrary_eventGetEquipmentForItem_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaEquipment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment" },
		{ "Comment", "/**\n\x09 * Retrieves the equipment that represents an item in the world.\n\x09 * The item must be currently assigned to an Inventory Manager for this to be viable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaEquipmentFunctionLibrary.h" },
		{ "ReturnDisplayName", "Equipment Manager" },
		{ "ToolTip", "Retrieves the equipment that represents an item in the world.\nThe item must be currently assigned to an Inventory Manager for this to be viable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentForItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentFunctionLibrary, nullptr, "GetEquipmentForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentFunctionLibrary::execGetEquipmentForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipment**)Z_Param__Result=UNinjaEquipmentFunctionLibrary::GetEquipmentForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentFunctionLibrary Function GetEquipmentForItem

// Begin Class UNinjaEquipmentFunctionLibrary Function GetEquipmentManager
struct Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics
{
	struct NinjaEquipmentFunctionLibrary_eventGetEquipmentManager_Parms
	{
		const AActor* Owner;
		UNinjaEquipmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment" },
		{ "Comment", "/**\n\x09 * Provides the Equipment Manager assigned to an actor.\n\x09 * \n\x09 * The Equipment Manager should be assigned to the actual Pawn, so this function\n\x09 * will not look for it in any other places, but it will navigate different assets\n\x09 * that may be provided, such as a Player State or Controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaEquipmentFunctionLibrary.h" },
		{ "ReturnDisplayName", "Equipment Manager" },
		{ "ToolTip", "Provides the Equipment Manager assigned to an actor.\n\nThe Equipment Manager should be assigned to the actual Pawn, so this function\nwill not look for it in any other places, but it will navigate different assets\nthat may be provided, such as a Player State or Controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentManager_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentFunctionLibrary, nullptr, "GetEquipmentManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentFunctionLibrary::execGetEquipmentManager)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=UNinjaEquipmentFunctionLibrary::GetEquipmentManager(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentFunctionLibrary Function GetEquipmentManager

// Begin Class UNinjaEquipmentFunctionLibrary Function GetEquipmentManagerForInventory
struct Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics
{
	struct NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForInventory_Parms
	{
		const UNinjaInventoryManagerComponent* InventoryManager;
		UNinjaEquipmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment" },
		{ "Comment", "/**\n\x09 * Provides the Equipment Manager related to an Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaEquipmentFunctionLibrary.h" },
		{ "ReturnDisplayName", "Equipment Manager" },
		{ "ToolTip", "Provides the Equipment Manager related to an Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForInventory_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForInventory_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::NewProp_InventoryManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentFunctionLibrary, nullptr, "GetEquipmentManagerForInventory", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentFunctionLibrary::execGetEquipmentManagerForInventory)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForInventory(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentFunctionLibrary Function GetEquipmentManagerForInventory

// Begin Class UNinjaEquipmentFunctionLibrary Function GetEquipmentManagerForItem
struct Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics
{
	struct NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForItem_Parms
	{
		const UNinjaInventoryItem* Item;
		UNinjaEquipmentManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Equipment" },
		{ "Comment", "/**\n\x09 * Provides the Equipment Manager related to an Inventory Item.\n\x09 * The item must be currently assigned to an Inventory Manager for this to be viable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaEquipmentFunctionLibrary.h" },
		{ "ReturnDisplayName", "Equipment Manager" },
		{ "ToolTip", "Provides the Equipment Manager related to an Inventory Item.\nThe item must be currently assigned to an Inventory Manager for this to be viable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentFunctionLibrary, nullptr, "GetEquipmentManagerForItem", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::NinjaEquipmentFunctionLibrary_eventGetEquipmentManagerForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentFunctionLibrary::execGetEquipmentManagerForItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaEquipmentManagerComponent**)Z_Param__Result=UNinjaEquipmentFunctionLibrary::GetEquipmentManagerForItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentFunctionLibrary Function GetEquipmentManagerForItem

// Begin Class UNinjaEquipmentFunctionLibrary
void UNinjaEquipmentFunctionLibrary::StaticRegisterNativesUNinjaEquipmentFunctionLibrary()
{
	UClass* Class = UNinjaEquipmentFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquipmentForItem", &UNinjaEquipmentFunctionLibrary::execGetEquipmentForItem },
		{ "GetEquipmentManager", &UNinjaEquipmentFunctionLibrary::execGetEquipmentManager },
		{ "GetEquipmentManagerForInventory", &UNinjaEquipmentFunctionLibrary::execGetEquipmentManagerForInventory },
		{ "GetEquipmentManagerForItem", &UNinjaEquipmentFunctionLibrary::execGetEquipmentManagerForItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_NoRegister()
{
	return UNinjaEquipmentFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Support functions for the Equipment System. \n */" },
		{ "IncludePath", "NinjaEquipmentFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaEquipmentFunctionLibrary.h" },
		{ "ToolTip", "Support functions for the Equipment System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentForItem, "GetEquipmentForItem" }, // 1447393838
		{ &Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManager, "GetEquipmentManager" }, // 2932911026
		{ &Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForInventory, "GetEquipmentManagerForInventory" }, // 1114853226
		{ &Z_Construct_UFunction_UNinjaEquipmentFunctionLibrary_GetEquipmentManagerForItem, "GetEquipmentManagerForItem" }, // 3600813259
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics::ClassParams = {
	&UNinjaEquipmentFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentFunctionLibrary.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentFunctionLibrary>()
{
	return UNinjaEquipmentFunctionLibrary::StaticClass();
}
UNinjaEquipmentFunctionLibrary::UNinjaEquipmentFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentFunctionLibrary);
UNinjaEquipmentFunctionLibrary::~UNinjaEquipmentFunctionLibrary() {}
// End Class UNinjaEquipmentFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_NinjaEquipmentFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentFunctionLibrary, UNinjaEquipmentFunctionLibrary::StaticClass, TEXT("UNinjaEquipmentFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaEquipmentFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentFunctionLibrary), 2399064440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_NinjaEquipmentFunctionLibrary_h_90200490(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_NinjaEquipmentFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_NinjaEquipmentFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
