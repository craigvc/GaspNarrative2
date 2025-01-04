// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Pickup.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Pickup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UDroppableItemInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Pickup();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Pickup_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UItemFragment_Pickup Function CanDropItem
struct Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics
{
	struct ItemFragment_Pickup_eventCanDropItem_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Evaluates if an item can be dropped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Evaluates if an item can be dropped." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventCanDropItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Pickup_eventCanDropItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Pickup_eventCanDropItem_Parms), &Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "CanDropItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::ItemFragment_Pickup_eventCanDropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::ItemFragment_Pickup_eventCanDropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execCanDropItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDropItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function CanDropItem

// Begin Class UItemFragment_Pickup Function DropItem
struct Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics
{
	struct ItemFragment_Pickup_eventDropItem_Parms
	{
		UNinjaInventoryItem* Item;
		FVector InitialLocation;
		FVector ActualLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Drops an inventory item, including its current memory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Drops an inventory item, including its current memory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActualLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItem_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItem_Parms, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::NewProp_ActualLocation = { "ActualLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItem_Parms, ActualLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::NewProp_ActualLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "DropItem", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::ItemFragment_Pickup_eventDropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::ItemFragment_Pickup_eventDropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execDropItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_STRUCT(FVector,Z_Param_InitialLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ActualLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItem(Z_Param_Item,Z_Param_InitialLocation,Z_Param_Out_ActualLocation);
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function DropItem

// Begin Class UItemFragment_Pickup Function DropItemData
struct Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics
{
	struct ItemFragment_Pickup_eventDropItemData_Parms
	{
		AActor* Source;
		const UNinjaInventoryItemDataAsset* ItemData;
		FVector InitialLocation;
		FVector ActualLocation;
		TArray<FInventoryDefaultItemMemory> Memories;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Drops an inventory data, with any additional memories.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Drops an inventory data, with any additional memories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActualLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Memories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItemData_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItemData_Parms, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItemData_Parms, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_ActualLocation = { "ActualLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItemData_Parms, ActualLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_Memories_Inner = { "Memories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_Memories = { "Memories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventDropItemData_Parms, Memories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memories_MetaData), NewProp_Memories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_ActualLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_Memories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::NewProp_Memories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "DropItemData", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::ItemFragment_Pickup_eventDropItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::ItemFragment_Pickup_eventDropItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_DropItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_DropItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execDropItemData)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_ItemData);
	P_GET_STRUCT(FVector,Z_Param_InitialLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ActualLocation);
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_Memories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DropItemData(Z_Param_Source,Z_Param_ItemData,Z_Param_InitialLocation,Z_Param_Out_ActualLocation,Z_Param_Out_Memories);
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function DropItemData

// Begin Class UItemFragment_Pickup Function GetPickupActorClass
struct Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics
{
	struct ItemFragment_Pickup_eventGetPickupActorClass_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Retrieves the Actor used to represent dropped items in the world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Retrieves the Actor used to represent dropped items in the world." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventGetPickupActorClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "GetPickupActorClass", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::ItemFragment_Pickup_eventGetPickupActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::ItemFragment_Pickup_eventGetPickupActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execGetPickupActorClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetPickupActorClass();
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function GetPickupActorClass

// Begin Class UItemFragment_Pickup Function HandlePickupSpawned
struct ItemFragment_Pickup_eventHandlePickupSpawned_Parms
{
	AActor* PickupActor;
};
static const FName NAME_UItemFragment_Pickup_HandlePickupSpawned = FName(TEXT("HandlePickupSpawned"));
void UItemFragment_Pickup::HandlePickupSpawned(AActor* PickupActor)
{
	UFunction* Func = FindFunctionChecked(NAME_UItemFragment_Pickup_HandlePickupSpawned);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFragment_Pickup_eventHandlePickupSpawned_Parms Parms;
		Parms.PickupActor=PickupActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandlePickupSpawned_Implementation(PickupActor);
	}
}
struct Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Extension point to handle an item that has been spawned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Extension point to handle an item that has been spawned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::NewProp_PickupActor = { "PickupActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventHandlePickupSpawned_Parms, PickupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::NewProp_PickupActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "HandlePickupSpawned", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::PropPointers), sizeof(ItemFragment_Pickup_eventHandlePickupSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFragment_Pickup_eventHandlePickupSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execHandlePickupSpawned)
{
	P_GET_OBJECT(AActor,Z_Param_PickupActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePickupSpawned_Implementation(Z_Param_PickupActor);
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function HandlePickupSpawned

// Begin Class UItemFragment_Pickup Function HasValidPickupActorClass
struct Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics
{
	struct ItemFragment_Pickup_eventHasValidPickupActorClass_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if this fragment has a valid Pickup Actor Class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Checks if this fragment has a valid Pickup Actor Class." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Pickup_eventHasValidPickupActorClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Pickup_eventHasValidPickupActorClass_Parms), &Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "HasValidPickupActorClass", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::ItemFragment_Pickup_eventHasValidPickupActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::ItemFragment_Pickup_eventHasValidPickupActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execHasValidPickupActorClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidPickupActorClass();
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function HasValidPickupActorClass

// Begin Class UItemFragment_Pickup Function ModifyInitialLocation
struct ItemFragment_Pickup_eventModifyInitialLocation_Parms
{
	const AActor* Source;
	FVector InitialLocation;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	ItemFragment_Pickup_eventModifyInitialLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UItemFragment_Pickup_ModifyInitialLocation = FName(TEXT("ModifyInitialLocation"));
FVector UItemFragment_Pickup::ModifyInitialLocation(const AActor* Source, FVector const& InitialLocation)
{
	UFunction* Func = FindFunctionChecked(NAME_UItemFragment_Pickup_ModifyInitialLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemFragment_Pickup_eventModifyInitialLocation_Parms Parms;
		Parms.Source=Source;
		Parms.InitialLocation=InitialLocation;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return ModifyInitialLocation_Implementation(Source, InitialLocation);
	}
}
struct Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Extension point used to modify the initial location in any way.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "Extension point used to modify the initial location in any way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventModifyInitialLocation_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventModifyInitialLocation_Parms, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLocation_MetaData), NewProp_InitialLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Pickup_eventModifyInitialLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::NewProp_InitialLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Pickup, nullptr, "ModifyInitialLocation", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::PropPointers), sizeof(ItemFragment_Pickup_eventModifyInitialLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemFragment_Pickup_eventModifyInitialLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Pickup::execModifyInitialLocation)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InitialLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ModifyInitialLocation_Implementation(Z_Param_Source,Z_Param_Out_InitialLocation);
	P_NATIVE_END;
}
// End Class UItemFragment_Pickup Function ModifyInitialLocation

// Begin Class UItemFragment_Pickup
void UItemFragment_Pickup::StaticRegisterNativesUItemFragment_Pickup()
{
	UClass* Class = UItemFragment_Pickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanDropItem", &UItemFragment_Pickup::execCanDropItem },
		{ "DropItem", &UItemFragment_Pickup::execDropItem },
		{ "DropItemData", &UItemFragment_Pickup::execDropItemData },
		{ "GetPickupActorClass", &UItemFragment_Pickup::execGetPickupActorClass },
		{ "HandlePickupSpawned", &UItemFragment_Pickup::execHandlePickupSpawned },
		{ "HasValidPickupActorClass", &UItemFragment_Pickup::execHasValidPickupActorClass },
		{ "ModifyInitialLocation", &UItemFragment_Pickup::execModifyInitialLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Pickup);
UClass* Z_Construct_UClass_UItemFragment_Pickup_NoRegister()
{
	return UItemFragment_Pickup::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Pickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A fragment that specifies an item that can be represented as a pickup actor.\n */" },
		{ "DisplayName", "Pickup" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "A fragment that specifies an item that can be represented as a pickup actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupActorClass_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Class that represents this item when placed in the world, available for pickup. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "MustImplement", "/Script/NinjaInventory.InventoryPickupInterface" },
		{ "ToolTip", "Class that represents this item when placed in the world, available for pickup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDroppedWhenUnassigned_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** If set to true, allows this item to be dropped if the Inventory Manager is not assigned. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Pickup.h" },
		{ "ToolTip", "If set to true, allows this item to be dropped if the Inventory Manager is not assigned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PickupActorClass;
	static void NewProp_bDroppedWhenUnassigned_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDroppedWhenUnassigned;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Pickup_CanDropItem, "CanDropItem" }, // 2795425254
		{ &Z_Construct_UFunction_UItemFragment_Pickup_DropItem, "DropItem" }, // 189663093
		{ &Z_Construct_UFunction_UItemFragment_Pickup_DropItemData, "DropItemData" }, // 2399666957
		{ &Z_Construct_UFunction_UItemFragment_Pickup_GetPickupActorClass, "GetPickupActorClass" }, // 1782495768
		{ &Z_Construct_UFunction_UItemFragment_Pickup_HandlePickupSpawned, "HandlePickupSpawned" }, // 2440814970
		{ &Z_Construct_UFunction_UItemFragment_Pickup_HasValidPickupActorClass, "HasValidPickupActorClass" }, // 1013943256
		{ &Z_Construct_UFunction_UItemFragment_Pickup_ModifyInitialLocation, "ModifyInitialLocation" }, // 2293335592
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Pickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemFragment_Pickup_Statics::NewProp_PickupActorClass = { "PickupActorClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Pickup, PickupActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupActorClass_MetaData), NewProp_PickupActorClass_MetaData) };
void Z_Construct_UClass_UItemFragment_Pickup_Statics::NewProp_bDroppedWhenUnassigned_SetBit(void* Obj)
{
	((UItemFragment_Pickup*)Obj)->bDroppedWhenUnassigned = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Pickup_Statics::NewProp_bDroppedWhenUnassigned = { "bDroppedWhenUnassigned", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Pickup), &Z_Construct_UClass_UItemFragment_Pickup_Statics::NewProp_bDroppedWhenUnassigned_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDroppedWhenUnassigned_MetaData), NewProp_bDroppedWhenUnassigned_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Pickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Pickup_Statics::NewProp_PickupActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Pickup_Statics::NewProp_bDroppedWhenUnassigned,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Pickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Pickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Pickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Pickup_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDroppableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Pickup, IDroppableItemInterface), false },  // 3093478149
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Pickup_Statics::ClassParams = {
	&UItemFragment_Pickup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Pickup_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Pickup_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Pickup_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Pickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Pickup()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Pickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Pickup.OuterSingleton, Z_Construct_UClass_UItemFragment_Pickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Pickup.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Pickup>()
{
	return UItemFragment_Pickup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Pickup);
UItemFragment_Pickup::~UItemFragment_Pickup() {}
// End Class UItemFragment_Pickup

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Pickup, UItemFragment_Pickup::StaticClass, TEXT("UItemFragment_Pickup"), &Z_Registration_Info_UClass_UItemFragment_Pickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Pickup), 1808268340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_3126659288(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Pickup_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
