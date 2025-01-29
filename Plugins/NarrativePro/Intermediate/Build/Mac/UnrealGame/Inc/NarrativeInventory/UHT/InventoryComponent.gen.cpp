// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventory/Public/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UItemCollection();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UItemCollection_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem_NoRegister();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature();
NARRATIVEINVENTORY_API UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FItemWithQuantity();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRoll();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FLootTableRow();
NARRATIVEINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedItem();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInventory();
// End Cross Module References

// Begin ScriptStruct FItemAddResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAddResult;
class UScriptStruct* FItemAddResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAddResult, (UObject*)Z_Construct_UPackage__Script_NarrativeInventory(), TEXT("ItemAddResult"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAddResult.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<FItemAddResult>()
{
	return FItemAddResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemAddResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents the result of adding an item to the inventory.\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Represents the result of adding an item to the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "Comment", "//The item class we were attempting to add \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The item class we were attempting to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stacks_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "Comment", "//Any new stacks that were created\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Any new stacks that were created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToGive_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "Comment", "//The amount of the item that we tried to add\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The amount of the item that we tried to add" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountGiven_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "Comment", "//The amount of the item that was actually added in the end. Maybe we tried adding 10 items, but only 8 could be added because of capacity/weight\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The amount of the item that was actually added in the end. Maybe we tried adding 10 items, but only 8 could be added because of capacity/weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorText_MetaData[] = {
		{ "Category", "Item Add Result" },
		{ "Comment", "//If something went wrong, like we didnt have enough capacity or carrying too much weight this contains the reason why\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "If something went wrong, like we didnt have enough capacity or carrying too much weight this contains the reason why" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stacks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToGive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountGiven;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAddResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_Stacks_Inner = { "Stacks", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, Stacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stacks_MetaData), NewProp_Stacks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_AmountToGive = { "AmountToGive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, AmountToGive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToGive_MetaData), NewProp_AmountToGive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_AmountGiven = { "AmountGiven", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, AmountGiven), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountGiven_MetaData), NewProp_AmountGiven_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemAddResult, ErrorText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorText_MetaData), NewProp_ErrorText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_Stacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_Stacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_AmountToGive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_AmountGiven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAddResult_Statics::NewProp_ErrorText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAddResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
	nullptr,
	&NewStructOps,
	"ItemAddResult",
	Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::PropPointers),
	sizeof(FItemAddResult),
	alignof(FItemAddResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemAddResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemAddResult()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton, Z_Construct_UScriptStruct_FItemAddResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemAddResult.InnerSingleton;
}
// End ScriptStruct FItemAddResult

// Begin Delegate FOnInventoryUpdated
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when the inventory is changed and the UI needs an update. \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Called when the inventory is changed and the UI needs an update." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnInventoryUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated)
{
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnInventoryUpdated

// Begin Delegate FOnItemAdded
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics
{
	struct _Script_NarrativeInventory_eventOnItemAdded_Parms
	{
		FItemAddResult AddResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Called on server when an item is added to this inventory*/" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Called on server when an item is added to this inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::NewProp_AddResult = { "AddResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnItemAdded_Parms, AddResult), Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddResult_MetaData), NewProp_AddResult_MetaData) }; // 1390342961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::NewProp_AddResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnItemAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FItemAddResult const& AddResult)
{
	struct _Script_NarrativeInventory_eventOnItemAdded_Parms
	{
		FItemAddResult AddResult;
	};
	_Script_NarrativeInventory_eventOnItemAdded_Parms Parms;
	Parms.AddResult=AddResult;
	OnItemAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemAdded

// Begin Delegate FOnItemRemoved
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics
{
	struct _Script_NarrativeInventory_eventOnItemRemoved_Parms
	{
		UNarrativeItem* Item;
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnItemRemoved_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnItemRemoved_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnItemRemoved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, UNarrativeItem* Item, const int32 Amount)
{
	struct _Script_NarrativeInventory_eventOnItemRemoved_Parms
	{
		UNarrativeItem* Item;
		int32 Amount;
	};
	_Script_NarrativeInventory_eventOnItemRemoved_Parms Parms;
	Parms.Item=Item;
	Parms.Amount=Amount;
	OnItemRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemRemoved

// Begin Delegate FOnBeginLooting
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics
{
	struct _Script_NarrativeInventory_eventOnBeginLooting_Parms
	{
		UNarrativeInventoryComponent* LootSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LootSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::NewProp_LootSource = { "LootSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnBeginLooting_Parms, LootSource), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootSource_MetaData), NewProp_LootSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::NewProp_LootSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnBeginLooting__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnBeginLooting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnBeginLooting_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginLooting_DelegateWrapper(const FMulticastScriptDelegate& OnBeginLooting, UNarrativeInventoryComponent* LootSource)
{
	struct _Script_NarrativeInventory_eventOnBeginLooting_Parms
	{
		UNarrativeInventoryComponent* LootSource;
	};
	_Script_NarrativeInventory_eventOnBeginLooting_Parms Parms;
	Parms.LootSource=LootSource;
	OnBeginLooting.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBeginLooting

// Begin Delegate FOnEndLooting
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnEndLooting__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndLooting_DelegateWrapper(const FMulticastScriptDelegate& OnEndLooting)
{
	OnEndLooting.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnEndLooting

// Begin Delegate FOnItemUsed
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics
{
	struct _Script_NarrativeInventory_eventOnItemUsed_Parms
	{
		UNarrativeItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnItemUsed_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnItemUsed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnItemUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnItemUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnItemUsed, UNarrativeItem* Item)
{
	struct _Script_NarrativeInventory_eventOnItemUsed_Parms
	{
		UNarrativeItem* Item;
	};
	_Script_NarrativeInventory_eventOnItemUsed_Parms Parms;
	Parms.Item=Item;
	OnItemUsed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemUsed

// Begin Delegate FOnCurrencyChanged
struct Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics
{
	struct _Script_NarrativeInventory_eventOnCurrencyChanged_Parms
	{
		int32 OldCurrency;
		int32 NewCurrency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldCurrency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::NewProp_OldCurrency = { "OldCurrency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnCurrencyChanged_Parms, OldCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrency_MetaData), NewProp_OldCurrency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::NewProp_NewCurrency = { "NewCurrency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeInventory_eventOnCurrencyChanged_Parms, NewCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCurrency_MetaData), NewProp_NewCurrency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::NewProp_OldCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::NewProp_NewCurrency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeInventory, nullptr, "OnCurrencyChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnCurrencyChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::_Script_NarrativeInventory_eventOnCurrencyChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCurrencyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyChanged, const int32 OldCurrency, const int32 NewCurrency)
{
	struct _Script_NarrativeInventory_eventOnCurrencyChanged_Parms
	{
		int32 OldCurrency;
		int32 NewCurrency;
	};
	_Script_NarrativeInventory_eventOnCurrencyChanged_Parms Parms;
	Parms.OldCurrency=OldCurrency;
	Parms.NewCurrency=NewCurrency;
	OnCurrencyChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCurrencyChanged

// Begin ScriptStruct FItemWithQuantity
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemWithQuantity;
class UScriptStruct* FItemWithQuantity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemWithQuantity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemWithQuantity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemWithQuantity, (UObject*)Z_Construct_UPackage__Script_NarrativeInventory(), TEXT("ItemWithQuantity"));
	}
	return Z_Registration_Info_UScriptStruct_ItemWithQuantity.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<FItemWithQuantity>()
{
	return FItemWithQuantity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemWithQuantity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Just a nice way of defining an item along with some amount of the item \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Just a nice way of defining an item along with some amount of the item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemWithQuantity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FItemWithQuantity_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemWithQuantity, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemWithQuantity_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemWithQuantity, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemWithQuantity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemWithQuantity_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemWithQuantity_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemWithQuantity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemWithQuantity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
	nullptr,
	&NewStructOps,
	"ItemWithQuantity",
	Z_Construct_UScriptStruct_FItemWithQuantity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemWithQuantity_Statics::PropPointers),
	sizeof(FItemWithQuantity),
	alignof(FItemWithQuantity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemWithQuantity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemWithQuantity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemWithQuantity()
{
	if (!Z_Registration_Info_UScriptStruct_ItemWithQuantity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemWithQuantity.InnerSingleton, Z_Construct_UScriptStruct_FItemWithQuantity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemWithQuantity.InnerSingleton;
}
// End ScriptStruct FItemWithQuantity

// Begin Class UItemCollection
void UItemCollection::StaticRegisterNativesUItemCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemCollection);
UClass* Z_Construct_UClass_UItemCollection_NoRegister()
{
	return UItemCollection::StaticClass();
}
struct Z_Construct_UClass_UItemCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Data asset with a collection of items. Useful for grouping things together like armor sets, weapon sets, etc. \n */" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Data asset with a collection of items. Useful for grouping things together like armor sets, weapon sets, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "Comment", "//The items to grant if this row is given to the inventory\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The items to grant if this row is given to the inventory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemCollection_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemWithQuantity, METADATA_PARAMS(0, nullptr) }; // 68793355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemCollection_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemCollection, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 68793355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemCollection_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemCollection_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCollection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemCollection_Statics::ClassParams = {
	&UItemCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemCollection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemCollection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemCollection()
{
	if (!Z_Registration_Info_UClass_UItemCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemCollection.OuterSingleton, Z_Construct_UClass_UItemCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemCollection.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UItemCollection>()
{
	return UItemCollection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemCollection);
UItemCollection::~UItemCollection() {}
// End Class UItemCollection

// Begin ScriptStruct FLootTableRoll
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootTableRoll;
class UScriptStruct* FLootTableRoll::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootTableRoll.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootTableRoll.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootTableRoll, (UObject*)Z_Construct_UPackage__Script_NarrativeInventory(), TEXT("LootTableRoll"));
	}
	return Z_Registration_Info_UScriptStruct_LootTableRoll.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<FLootTableRoll>()
{
	return FLootTableRoll::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLootTableRoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a roll of a loot table \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Defines a roll of a loot table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableToRoll_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "Comment", "//The items to grant if this row is given to the inventory \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NarrativeInventory.LootTableRow" },
		{ "ToolTip", "The items to grant if this row is given to the inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRolls_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "//The number of times we should roll the table \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The number of times we should roll the table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//The chance of each roll succeeding \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The chance of each roll succeeding" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TableToRoll;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRolls;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Chance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootTableRoll>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewProp_TableToRoll = { "TableToRoll", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRoll, TableToRoll), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableToRoll_MetaData), NewProp_TableToRoll_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewProp_NumRolls = { "NumRolls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRoll, NumRolls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRolls_MetaData), NewProp_NumRolls_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRoll, Chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chance_MetaData), NewProp_Chance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootTableRoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewProp_TableToRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewProp_NumRolls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewProp_Chance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootTableRoll_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
	nullptr,
	&NewStructOps,
	"LootTableRoll",
	Z_Construct_UScriptStruct_FLootTableRoll_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRoll_Statics::PropPointers),
	sizeof(FLootTableRoll),
	alignof(FLootTableRoll),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRoll_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootTableRoll_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLootTableRoll()
{
	if (!Z_Registration_Info_UScriptStruct_LootTableRoll.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootTableRoll.InnerSingleton, Z_Construct_UScriptStruct_FLootTableRoll_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LootTableRoll.InnerSingleton;
}
// End ScriptStruct FLootTableRoll

// Begin ScriptStruct FLootTableRow
static_assert(std::is_polymorphic<FLootTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLootTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LootTableRow;
class UScriptStruct* FLootTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LootTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LootTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLootTableRow, (UObject*)Z_Construct_UPackage__Script_NarrativeInventory(), TEXT("LootTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_LootTableRow.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<FLootTableRow>()
{
	return FLootTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLootTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a row in a loot table\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Defines a row in a loot table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToGrant_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "Comment", "//The items to grant if this row is given to the inventory\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The items to grant if this row is given to the inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCollectionsToGrant_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "Comment", "//Item collections to grant\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Item collections to grant" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTablesToRoll_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "Comment", "//Subloot tables that this loot table will roll \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Subloot tables that this loot table will roll" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[] = {
		{ "Category", "Loot Table Row" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//The chance this row will actually be given if selected \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The chance this row will actually be given if selected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToGrant_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToGrant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemCollectionsToGrant_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemCollectionsToGrant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubTablesToRoll_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubTablesToRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Chance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLootTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemsToGrant_Inner = { "ItemsToGrant", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemWithQuantity, METADATA_PARAMS(0, nullptr) }; // 68793355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemsToGrant = { "ItemsToGrant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, ItemsToGrant), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemsToGrant_MetaData), NewProp_ItemsToGrant_MetaData) }; // 68793355
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemCollectionsToGrant_Inner = { "ItemCollectionsToGrant", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemCollectionsToGrant = { "ItemCollectionsToGrant", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, ItemCollectionsToGrant), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCollectionsToGrant_MetaData), NewProp_ItemCollectionsToGrant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_SubTablesToRoll_Inner = { "SubTablesToRoll", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootTableRoll, METADATA_PARAMS(0, nullptr) }; // 2828341262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_SubTablesToRoll = { "SubTablesToRoll", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, SubTablesToRoll), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTablesToRoll_MetaData), NewProp_SubTablesToRoll_MetaData) }; // 2828341262
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLootTableRow, Chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chance_MetaData), NewProp_Chance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemsToGrant_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemsToGrant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemCollectionsToGrant_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_ItemCollectionsToGrant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_SubTablesToRoll_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_SubTablesToRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLootTableRow_Statics::NewProp_Chance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLootTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"LootTableRow",
	Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::PropPointers),
	sizeof(FLootTableRow),
	alignof(FLootTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLootTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLootTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_LootTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LootTableRow.InnerSingleton, Z_Construct_UScriptStruct_FLootTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LootTableRow.InnerSingleton;
}
// End ScriptStruct FLootTableRow

// Begin ScriptStruct FNarrativeSavedItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NarrativeSavedItem;
class UScriptStruct* FNarrativeSavedItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NarrativeSavedItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNarrativeSavedItem, (UObject*)Z_Construct_UPackage__Script_NarrativeInventory(), TEXT("NarrativeSavedItem"));
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedItem.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<FNarrativeSavedItem>()
{
	return FNarrativeSavedItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Used by the save interface to save our data \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Used by the save interface to save our data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteData_MetaData[] = {
		{ "Comment", "//Any savegame variables on the item get serialized and stored in here \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Any savegame variables on the item get serialized and stored in here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNarrativeSavedItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedItem, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_ByteData_Inner = { "ByteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_ByteData = { "ByteData", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedItem, ByteData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteData_MetaData), NewProp_ByteData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNarrativeSavedItem, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FNarrativeSavedItem*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNarrativeSavedItem), &Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_ByteData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_ByteData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
	nullptr,
	&NewStructOps,
	"NarrativeSavedItem",
	Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::PropPointers),
	sizeof(FNarrativeSavedItem),
	alignof(FNarrativeSavedItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNarrativeSavedItem()
{
	if (!Z_Registration_Info_UScriptStruct_NarrativeSavedItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NarrativeSavedItem.InnerSingleton, Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NarrativeSavedItem.InnerSingleton;
}
// End ScriptStruct FNarrativeSavedItem

// Begin Class UNarrativeInventoryComponent Function AddCurrency
struct Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics
{
	struct NarrativeInventoryComponent_eventAddCurrency_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Currency" },
		{ "Comment", "/** Add some currency to the players inventory. Can accept negative values. */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Add some currency to the players inventory. Can accept negative values." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAddCurrency_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "AddCurrency", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::NarrativeInventoryComponent_eventAddCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::NarrativeInventoryComponent_eventAddCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execAddCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCurrency(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function AddCurrency

// Begin Class UNarrativeInventoryComponent Function AllowLootItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics
{
	struct NarrativeInventoryComponent_eventAllowLootItem_Parms
	{
		UNarrativeInventoryComponent* Taker;
		TSubclassOf<UNarrativeItem> ItemClass;
		int32 Quantity;
		FText ErrorText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Return true if the taker can loot the item from this inventory */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return true if the taker can loot the item from this inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Taker_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Taker;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_Taker = { "Taker", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowLootItem_Parms, Taker), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Taker_MetaData), NewProp_Taker_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowLootItem_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowLootItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowLootItem_Parms, ErrorText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventAllowLootItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventAllowLootItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_Taker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "AllowLootItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NarrativeInventoryComponent_eventAllowLootItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::NarrativeInventoryComponent_eventAllowLootItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execAllowLootItem)
{
	P_GET_OBJECT(UNarrativeInventoryComponent,Z_Param_Taker);
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ErrorText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowLootItem(Z_Param_Taker,Z_Param_ItemClass,Z_Param_Quantity,Z_Param_Out_ErrorText);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function AllowLootItem

// Begin Class UNarrativeInventoryComponent Function AllowStoreItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics
{
	struct NarrativeInventoryComponent_eventAllowStoreItem_Parms
	{
		UNarrativeInventoryComponent* Storer;
		TSubclassOf<UNarrativeItem> ItemClass;
		int32 Quantity;
		FText ErrorText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Return true if the storer can store the given item in this inventory */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return true if the storer can store the given item in this inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Storer_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Storer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_Storer = { "Storer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowStoreItem_Parms, Storer), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Storer_MetaData), NewProp_Storer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowStoreItem_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowStoreItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventAllowStoreItem_Parms, ErrorText), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventAllowStoreItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventAllowStoreItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_Storer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "AllowStoreItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NarrativeInventoryComponent_eventAllowStoreItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::NarrativeInventoryComponent_eventAllowStoreItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execAllowStoreItem)
{
	P_GET_OBJECT(UNarrativeInventoryComponent,Z_Param_Storer);
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ErrorText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowStoreItem(Z_Param_Storer,Z_Param_ItemClass,Z_Param_Quantity,Z_Param_Out_ErrorText);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function AllowStoreItem

// Begin Class UNarrativeInventoryComponent Function ClientRefreshInventory
static const FName NAME_UNarrativeInventoryComponent_ClientRefreshInventory = FName(TEXT("ClientRefreshInventory"));
void UNarrativeInventoryComponent::ClientRefreshInventory()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ClientRefreshInventory);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ClientRefreshInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execClientRefreshInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRefreshInventory_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ClientRefreshInventory

// Begin Class UNarrativeInventoryComponent Function ConsumeItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics
{
	struct NarrativeInventoryComponent_eventConsumeItem_Parms
	{
		UNarrativeItem* Item;
		int32 Quantity;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Take some quantity away from the item, and remove it from the inventory when quantity reaches zero.\n\x09Useful for things like eating food, using ammo, etc.*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Take some quantity away from the item, and remove it from the inventory when quantity reaches zero.\n      Useful for things like eating food, using ammo, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventConsumeItem_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventConsumeItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventConsumeItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ConsumeItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NarrativeInventoryComponent_eventConsumeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::NarrativeInventoryComponent_eventConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execConsumeItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ConsumeItem(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ConsumeItem

// Begin Class UNarrativeInventoryComponent Function FindItemByClass
struct Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics
{
	struct NarrativeInventoryComponent_eventFindItemByClass_Parms
	{
		TSoftClassPtr<UNarrativeItem>  ItemClass;
		bool bCheckVisibility;
		UNarrativeItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Return the first item with the same class as ItemClass.*/" },
		{ "CPP_Default_bCheckVisibility", "false" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return the first item with the same class as ItemClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
	static void NewProp_bCheckVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckVisibility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventFindItemByClass_Parms, ItemClass), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_bCheckVisibility_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventFindItemByClass_Parms*)Obj)->bCheckVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_bCheckVisibility = { "bCheckVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventFindItemByClass_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_bCheckVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckVisibility_MetaData), NewProp_bCheckVisibility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventFindItemByClass_Parms, ReturnValue), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_bCheckVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "FindItemByClass", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NarrativeInventoryComponent_eventFindItemByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::NarrativeInventoryComponent_eventFindItemByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execFindItemByClass)
{
	P_GET_SOFTCLASS(TSoftClassPtr<UNarrativeItem> ,Z_Param_ItemClass);
	P_GET_UBOOL(Z_Param_bCheckVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeItem**)Z_Param__Result=P_THIS->FindItemByClass(Z_Param_ItemClass,Z_Param_bCheckVisibility);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function FindItemByClass

// Begin Class UNarrativeInventoryComponent Function FindItemsOfClass
struct Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics
{
	struct NarrativeInventoryComponent_eventFindItemsOfClass_Parms
	{
		TSubclassOf<UNarrativeItem> ItemClass;
		bool bCheckVisibility;
		TArray<UNarrativeItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Get all inventory items that are children of the supplied ItemClass. */" },
		{ "CPP_Default_bCheckVisibility", "false" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Get all inventory items that are children of the supplied ItemClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static void NewProp_bCheckVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckVisibility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventFindItemsOfClass_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_bCheckVisibility_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventFindItemsOfClass_Parms*)Obj)->bCheckVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_bCheckVisibility = { "bCheckVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventFindItemsOfClass_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_bCheckVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckVisibility_MetaData), NewProp_bCheckVisibility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventFindItemsOfClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_bCheckVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "FindItemsOfClass", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NarrativeInventoryComponent_eventFindItemsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::NarrativeInventoryComponent_eventFindItemsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execFindItemsOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_GET_UBOOL(Z_Param_bCheckVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNarrativeItem*>*)Z_Param__Result=P_THIS->FindItemsOfClass(Z_Param_ItemClass,Z_Param_bCheckVisibility);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function FindItemsOfClass

// Begin Class UNarrativeInventoryComponent Function GetBuyPrice
struct NarrativeInventoryComponent_eventGetBuyPrice_Parms
{
	TSubclassOf<UNarrativeItem> Item;
	int32 Quantity;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeInventoryComponent_eventGetBuyPrice_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNarrativeInventoryComponent_GetBuyPrice = FName(TEXT("GetBuyPrice"));
int32 UNarrativeInventoryComponent::GetBuyPrice(TSubclassOf<UNarrativeItem> Item, int32 Quantity) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_GetBuyPrice);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInventoryComponent_eventGetBuyPrice_Parms Parms;
		Parms.Item=Item;
		Parms.Quantity=Quantity;
		const_cast<UNarrativeInventoryComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeInventoryComponent*>(this)->GetBuyPrice_Implementation(Item, Quantity);
	}
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Return the price we'll buy the given item for\n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return the price we'll buy the given item for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetBuyPrice_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetBuyPrice_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetBuyPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetBuyPrice", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventGetBuyPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventGetBuyPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetBuyPrice)
{
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBuyPrice_Implementation(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetBuyPrice

// Begin Class UNarrativeInventoryComponent Function GetCapacity
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics
{
	struct NarrativeInventoryComponent_eventGetCapacity_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetCapacity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::NarrativeInventoryComponent_eventGetCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::NarrativeInventoryComponent_eventGetCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCapacity();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetCapacity

// Begin Class UNarrativeInventoryComponent Function GetCurrency
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics
{
	struct NarrativeInventoryComponent_eventGetCurrency_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Currency" },
		{ "Comment", "/** Return the amount of currency we have */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return the amount of currency we have" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetCurrency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetCurrency", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::NarrativeInventoryComponent_eventGetCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::NarrativeInventoryComponent_eventGetCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetCurrency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrency();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetCurrency

// Begin Class UNarrativeInventoryComponent Function GetCurrentWeight
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics
{
	struct NarrativeInventoryComponent_eventGetCurrentWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Get the current weight of the inventory. To get the amount of items in the inventory, just do GetItems().Num()\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Get the current weight of the inventory. To get the amount of items in the inventory, just do GetItems().Num()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetCurrentWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetCurrentWeight", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::NarrativeInventoryComponent_eventGetCurrentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::NarrativeInventoryComponent_eventGetCurrentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetCurrentWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentWeight();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetCurrentWeight

// Begin Class UNarrativeInventoryComponent Function GetItems
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics
{
	struct NarrativeInventoryComponent_eventGetItems_Parms
	{
		TArray<UNarrativeItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::NarrativeInventoryComponent_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::NarrativeInventoryComponent_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNarrativeItem*>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetItems

// Begin Class UNarrativeInventoryComponent Function GetOwningController
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics
{
	struct NarrativeInventoryComponent_eventGetOwningController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetOwningController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetOwningController", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::NarrativeInventoryComponent_eventGetOwningController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::NarrativeInventoryComponent_eventGetOwningController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetOwningController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwningController();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetOwningController

// Begin Class UNarrativeInventoryComponent Function GetOwningPawn
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics
{
	struct NarrativeInventoryComponent_eventGetOwningPawn_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetOwningPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetOwningPawn", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::NarrativeInventoryComponent_eventGetOwningPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::NarrativeInventoryComponent_eventGetOwningPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetOwningPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwningPawn();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetOwningPawn

// Begin Class UNarrativeInventoryComponent Function GetSellPrice
struct NarrativeInventoryComponent_eventGetSellPrice_Parms
{
	TSubclassOf<UNarrativeItem> Item;
	int32 Quantity;
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeInventoryComponent_eventGetSellPrice_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNarrativeInventoryComponent_GetSellPrice = FName(TEXT("GetSellPrice"));
int32 UNarrativeInventoryComponent::GetSellPrice(TSubclassOf<UNarrativeItem> Item, int32 Quantity) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_GetSellPrice);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeInventoryComponent_eventGetSellPrice_Parms Parms;
		Parms.Item=Item;
		Parms.Quantity=Quantity;
		const_cast<UNarrativeInventoryComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeInventoryComponent*>(this)->GetSellPrice_Implementation(Item, Quantity);
	}
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "/**\n\x09* Return the price we'll sell the given item for\n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return the price we'll sell the given item for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetSellPrice_Parms, Item), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetSellPrice_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetSellPrice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetSellPrice", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventGetSellPrice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventGetSellPrice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetSellPrice)
{
	P_GET_OBJECT(UClass,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSellPrice_Implementation(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetSellPrice

// Begin Class UNarrativeInventoryComponent Function GetSpaceForItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics
{
	struct NarrativeInventoryComponent_eventGetSpaceForItem_Parms
	{
		TSubclassOf<UNarrativeItem> ItemClass;
		FText NoSpaceReason;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Return the amount of a given item that we have space for based on its weight, max stack size, etc.\n\x09@param NoSpaceReason If we have no space for the item, this is the reason why */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return the amount of a given item that we have space for based on its weight, max stack size, etc.\n       @param NoSpaceReason If we have no space for the item, this is the reason why" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NoSpaceReason;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetSpaceForItem_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NewProp_NoSpaceReason = { "NoSpaceReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetSpaceForItem_Parms, NoSpaceReason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetSpaceForItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NewProp_NoSpaceReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetSpaceForItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NarrativeInventoryComponent_eventGetSpaceForItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::NarrativeInventoryComponent_eventGetSpaceForItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetSpaceForItem)
{
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NoSpaceReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSpaceForItem(Z_Param_ItemClass,Z_Param_Out_NoSpaceReason);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetSpaceForItem

// Begin Class UNarrativeInventoryComponent Function GetWeightCapacity
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics
{
	struct NarrativeInventoryComponent_eventGetWeightCapacity_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventGetWeightCapacity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GetWeightCapacity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::NarrativeInventoryComponent_eventGetWeightCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::NarrativeInventoryComponent_eventGetWeightCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGetWeightCapacity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeightCapacity();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GetWeightCapacity

// Begin Class UNarrativeInventoryComponent Function GiveDefaultItems
struct Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Instead of calling this automatically on beginplay we let designers call this when they like.  */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Instead of calling this automatically on beginplay we let designers call this when they like." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "GiveDefaultItems", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execGiveDefaultItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveDefaultItems();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function GiveDefaultItems

// Begin Class UNarrativeInventoryComponent Function HasItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics
{
	struct NarrativeInventoryComponent_eventHasItem_Parms
	{
		TSoftClassPtr<UNarrativeItem>  ItemClass;
		int32 Quantity;
		bool bCheckVisibility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Return true if we have a given amount of an item. bCheckVisibility will only look for items that are visible in the inventory*/" },
		{ "CPP_Default_bCheckVisibility", "false" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Return true if we have a given amount of an item. bCheckVisibility will only look for items that are visible in the inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_bCheckVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckVisibility;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventHasItem_Parms, ItemClass), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventHasItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_bCheckVisibility_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventHasItem_Parms*)Obj)->bCheckVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_bCheckVisibility = { "bCheckVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventHasItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_bCheckVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckVisibility_MetaData), NewProp_bCheckVisibility_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventHasItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_bCheckVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "HasItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NarrativeInventoryComponent_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::NarrativeInventoryComponent_eventHasItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execHasItem)
{
	P_GET_SOFTCLASS(TSoftClassPtr<UNarrativeItem> ,Z_Param_ItemClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_UBOOL(Z_Param_bCheckVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_ItemClass,Z_Param_Quantity,Z_Param_bCheckVisibility);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function HasItem

// Begin Class UNarrativeInventoryComponent Function OnRep_Currency
struct Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics
{
	struct NarrativeInventoryComponent_eventOnRep_Currency_Parms
	{
		int32 OldCurrency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCurrency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldCurrency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::NewProp_OldCurrency = { "OldCurrency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventOnRep_Currency_Parms, OldCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCurrency_MetaData), NewProp_OldCurrency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::NewProp_OldCurrency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "OnRep_Currency", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::NarrativeInventoryComponent_eventOnRep_Currency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::NarrativeInventoryComponent_eventOnRep_Currency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execOnRep_Currency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_OldCurrency);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Currency(Z_Param_OldCurrency);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function OnRep_Currency

// Begin Class UNarrativeInventoryComponent Function OnRep_Items
struct Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics
{
	struct NarrativeInventoryComponent_eventOnRep_Items_Parms
	{
		TArray<UNarrativeItem*> OldItems;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldItems_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OldItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::NewProp_OldItems_Inner = { "OldItems", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::NewProp_OldItems = { "OldItems", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventOnRep_Items_Parms, OldItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldItems_MetaData), NewProp_OldItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::NewProp_OldItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::NewProp_OldItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "OnRep_Items", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::NarrativeInventoryComponent_eventOnRep_Items_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::NarrativeInventoryComponent_eventOnRep_Items_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execOnRep_Items)
{
	P_GET_TARRAY_REF(UNarrativeItem*,Z_Param_Out_OldItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Items(Z_Param_Out_OldItems);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function OnRep_Items

// Begin Class UNarrativeInventoryComponent Function OnRep_LootSource
struct Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics
{
	struct NarrativeInventoryComponent_eventOnRep_LootSource_Parms
	{
		UNarrativeInventoryComponent* OldLootSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldLootSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldLootSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::NewProp_OldLootSource = { "OldLootSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventOnRep_LootSource_Parms, OldLootSource), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldLootSource_MetaData), NewProp_OldLootSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::NewProp_OldLootSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "OnRep_LootSource", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::NarrativeInventoryComponent_eventOnRep_LootSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::NarrativeInventoryComponent_eventOnRep_LootSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execOnRep_LootSource)
{
	P_GET_OBJECT(UNarrativeInventoryComponent,Z_Param_OldLootSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_LootSource(Z_Param_OldLootSource);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function OnRep_LootSource

// Begin Class UNarrativeInventoryComponent Function RemoveItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics
{
	struct NarrativeInventoryComponent_eventRemoveItem_Parms
	{
		UNarrativeItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Remove the item from the inventory. We do actually allow clients to call this unlike AddItem, however the server\n\x09will still validate that the item is allowed to be removed before removing the item, so still cheat safe */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Remove the item from the inventory. We do actually allow clients to call this unlike AddItem, however the server\n      will still validate that the item is allowed to be removed before removing the item, so still cheat safe" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRemoveItem_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventRemoveItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NarrativeInventoryComponent_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::NarrativeInventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execRemoveItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function RemoveItem

// Begin Class UNarrativeInventoryComponent Function RequestLootItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics
{
	struct NarrativeInventoryComponent_eventRequestLootItem_Parms
	{
		UNarrativeItem* ItemToLoot;
		FText ErrorText;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Loot an item. Clients RPC to tell server they want to do this; server will validate to prevent cheating\n\x09\x09If we're client return true/false if we notified server to loot. Server returns true if loot actually happened. */" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Loot an item. Clients RPC to tell server they want to do this; server will validate to prevent cheating\n              If we're client return true/false if we notified server to loot. Server returns true if loot actually happened." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToLoot_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToLoot;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ItemToLoot = { "ItemToLoot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRequestLootItem_Parms, ItemToLoot), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToLoot_MetaData), NewProp_ItemToLoot_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRequestLootItem_Parms, ErrorText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRequestLootItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventRequestLootItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventRequestLootItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ItemToLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "RequestLootItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NarrativeInventoryComponent_eventRequestLootItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::NarrativeInventoryComponent_eventRequestLootItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execRequestLootItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_ItemToLoot);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ErrorText);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestLootItem(Z_Param_ItemToLoot,Z_Param_Out_ErrorText,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function RequestLootItem

// Begin Class UNarrativeInventoryComponent Function RequestStoreItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics
{
	struct NarrativeInventoryComponent_eventRequestStoreItem_Parms
	{
		UNarrativeItem* ItemToStore;
		FText ErrorText;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Store an item. Clients RPC to tell server they want to do this; server will validate to prevent cheating\n\x09If we're client return true/false if we notified server to store. Server returns true if store actually happened. \n\x09*/" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Store an item. Clients RPC to tell server they want to do this; server will validate to prevent cheating\n      If we're client return true/false if we notified server to store. Server returns true if store actually happened." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToStore_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToStore;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ItemToStore = { "ItemToStore", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRequestStoreItem_Parms, ItemToStore), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToStore_MetaData), NewProp_ItemToStore_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRequestStoreItem_Parms, ErrorText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventRequestStoreItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventRequestStoreItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventRequestStoreItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ItemToStore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "RequestStoreItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NarrativeInventoryComponent_eventRequestStoreItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::NarrativeInventoryComponent_eventRequestStoreItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execRequestStoreItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_ItemToStore);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ErrorText);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestStoreItem(Z_Param_ItemToStore,Z_Param_Out_ErrorText,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function RequestStoreItem

// Begin Class UNarrativeInventoryComponent Function ServerConsumeItem
struct NarrativeInventoryComponent_eventServerConsumeItem_Parms
{
	UNarrativeItem* Item;
	int32 Quantity;
};
static const FName NAME_UNarrativeInventoryComponent_ServerConsumeItem = FName(TEXT("ServerConsumeItem"));
void UNarrativeInventoryComponent::ServerConsumeItem(UNarrativeItem* Item, const int32 Quantity)
{
	NarrativeInventoryComponent_eventServerConsumeItem_Parms Parms;
	Parms.Item=Item;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ServerConsumeItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerConsumeItem_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerConsumeItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ServerConsumeItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventServerConsumeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventServerConsumeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execServerConsumeItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerConsumeItem_Implementation(Z_Param_Item,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ServerConsumeItem

// Begin Class UNarrativeInventoryComponent Function ServerRemoveItem
struct NarrativeInventoryComponent_eventServerRemoveItem_Parms
{
	UNarrativeItem* Item;
};
static const FName NAME_UNarrativeInventoryComponent_ServerRemoveItem = FName(TEXT("ServerRemoveItem"));
void UNarrativeInventoryComponent::ServerRemoveItem(UNarrativeItem* Item)
{
	NarrativeInventoryComponent_eventServerRemoveItem_Parms Parms;
	Parms.Item=Item;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ServerRemoveItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerRemoveItem_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ServerRemoveItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventServerRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventServerRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execServerRemoveItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRemoveItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ServerRemoveItem

// Begin Class UNarrativeInventoryComponent Function ServerRequestLootItem
struct NarrativeInventoryComponent_eventServerRequestLootItem_Parms
{
	UNarrativeItem* ItemToLoot;
	int32 Quantity;
};
static const FName NAME_UNarrativeInventoryComponent_ServerRequestLootItem = FName(TEXT("ServerRequestLootItem"));
void UNarrativeInventoryComponent::ServerRequestLootItem(UNarrativeItem* ItemToLoot, const int32 Quantity)
{
	NarrativeInventoryComponent_eventServerRequestLootItem_Parms Parms;
	Parms.ItemToLoot=ItemToLoot;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ServerRequestLootItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToLoot_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToLoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::NewProp_ItemToLoot = { "ItemToLoot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerRequestLootItem_Parms, ItemToLoot), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToLoot_MetaData), NewProp_ItemToLoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerRequestLootItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::NewProp_ItemToLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ServerRequestLootItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventServerRequestLootItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventServerRequestLootItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execServerRequestLootItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_ItemToLoot);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestLootItem_Implementation(Z_Param_ItemToLoot,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ServerRequestLootItem

// Begin Class UNarrativeInventoryComponent Function ServerRequestStoreItem
struct NarrativeInventoryComponent_eventServerRequestStoreItem_Parms
{
	UNarrativeItem* ItemToLoot;
	int32 Quantity;
};
static const FName NAME_UNarrativeInventoryComponent_ServerRequestStoreItem = FName(TEXT("ServerRequestStoreItem"));
void UNarrativeInventoryComponent::ServerRequestStoreItem(UNarrativeItem* ItemToLoot, const int32 Quantity)
{
	NarrativeInventoryComponent_eventServerRequestStoreItem_Parms Parms;
	Parms.ItemToLoot=ItemToLoot;
	Parms.Quantity=Quantity;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ServerRequestStoreItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToLoot_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToLoot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::NewProp_ItemToLoot = { "ItemToLoot", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerRequestStoreItem_Parms, ItemToLoot), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToLoot_MetaData), NewProp_ItemToLoot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerRequestStoreItem_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::NewProp_ItemToLoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ServerRequestStoreItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventServerRequestStoreItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventServerRequestStoreItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execServerRequestStoreItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_ItemToLoot);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRequestStoreItem_Implementation(Z_Param_ItemToLoot,Z_Param_Quantity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ServerRequestStoreItem

// Begin Class UNarrativeInventoryComponent Function ServerStopLooting
static const FName NAME_UNarrativeInventoryComponent_ServerStopLooting = FName(TEXT("ServerStopLooting"));
void UNarrativeInventoryComponent::ServerStopLooting()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ServerStopLooting);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ServerStopLooting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execServerStopLooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerStopLooting_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ServerStopLooting

// Begin Class UNarrativeInventoryComponent Function ServerUseItem
struct NarrativeInventoryComponent_eventServerUseItem_Parms
{
	UNarrativeItem* Item;
};
static const FName NAME_UNarrativeInventoryComponent_ServerUseItem = FName(TEXT("ServerUseItem"));
void UNarrativeInventoryComponent::ServerUseItem(UNarrativeItem* Item)
{
	NarrativeInventoryComponent_eventServerUseItem_Parms Parms;
	Parms.Item=Item;
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeInventoryComponent_ServerUseItem);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventServerUseItem_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "ServerUseItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::PropPointers), sizeof(NarrativeInventoryComponent_eventServerUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeInventoryComponent_eventServerUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execServerUseItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerUseItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function ServerUseItem

// Begin Class UNarrativeInventoryComponent Function SetCapacity
struct Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics
{
	struct NarrativeInventoryComponent_eventSetCapacity_Parms
	{
		int32 NewCapacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::NewProp_NewCapacity = { "NewCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventSetCapacity_Parms, NewCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCapacity_MetaData), NewProp_NewCapacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::NewProp_NewCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "SetCapacity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::NarrativeInventoryComponent_eventSetCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::NarrativeInventoryComponent_eventSetCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execSetCapacity)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCapacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCapacity(Z_Param_NewCapacity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function SetCapacity

// Begin Class UNarrativeInventoryComponent Function SetCurrency
struct Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics
{
	struct NarrativeInventoryComponent_eventSetCurrency_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Currency" },
		{ "Comment", "/** set the amount of currency the player has . */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "set the amount of currency the player has ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventSetCurrency_Parms, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "SetCurrency", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::NarrativeInventoryComponent_eventSetCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::NarrativeInventoryComponent_eventSetCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execSetCurrency)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrency(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function SetCurrency

// Begin Class UNarrativeInventoryComponent Function SetInventoryFriendlyName
struct Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics
{
	struct NarrativeInventoryComponent_eventSetInventoryFriendlyName_Parms
	{
		FText Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventSetInventoryFriendlyName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "SetInventoryFriendlyName", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::NarrativeInventoryComponent_eventSetInventoryFriendlyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::NarrativeInventoryComponent_eventSetInventoryFriendlyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execSetInventoryFriendlyName)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventoryFriendlyName(Z_Param_Out_Name);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function SetInventoryFriendlyName

// Begin Class UNarrativeInventoryComponent Function SetIsVendor
struct Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics
{
	struct NarrativeInventoryComponent_eventSetIsVendor_Parms
	{
		bool bNewIsVendor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewIsVendor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsVendor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsVendor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::NewProp_bNewIsVendor_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventSetIsVendor_Parms*)Obj)->bNewIsVendor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::NewProp_bNewIsVendor = { "bNewIsVendor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventSetIsVendor_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::NewProp_bNewIsVendor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewIsVendor_MetaData), NewProp_bNewIsVendor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::NewProp_bNewIsVendor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "SetIsVendor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::NarrativeInventoryComponent_eventSetIsVendor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::NarrativeInventoryComponent_eventSetIsVendor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execSetIsVendor)
{
	P_GET_UBOOL(Z_Param_bNewIsVendor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsVendor(Z_Param_bNewIsVendor);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function SetIsVendor

// Begin Class UNarrativeInventoryComponent Function SetLootSource
struct Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics
{
	struct NarrativeInventoryComponent_eventSetLootSource_Parms
	{
		UNarrativeInventoryComponent* NewLootSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Sets our loot source. Only the server can call this for obvious reasons! */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Sets our loot source. Only the server can call this for obvious reasons!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLootSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLootSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::NewProp_NewLootSource = { "NewLootSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventSetLootSource_Parms, NewLootSource), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLootSource_MetaData), NewProp_NewLootSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::NewProp_NewLootSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "SetLootSource", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::NarrativeInventoryComponent_eventSetLootSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::NarrativeInventoryComponent_eventSetLootSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execSetLootSource)
{
	P_GET_OBJECT(UNarrativeInventoryComponent,Z_Param_NewLootSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLootSource(Z_Param_NewLootSource);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function SetLootSource

// Begin Class UNarrativeInventoryComponent Function SetWeightCapacity
struct Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics
{
	struct NarrativeInventoryComponent_eventSetWeightCapacity_Parms
	{
		float NewWeightCapacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewWeightCapacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWeightCapacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity = { "NewWeightCapacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventSetWeightCapacity_Parms, NewWeightCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewWeightCapacity_MetaData), NewProp_NewWeightCapacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::NewProp_NewWeightCapacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "SetWeightCapacity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::NarrativeInventoryComponent_eventSetWeightCapacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::NarrativeInventoryComponent_eventSetWeightCapacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execSetWeightCapacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWeightCapacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeightCapacity(Z_Param_NewWeightCapacity);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function SetWeightCapacity

// Begin Class UNarrativeInventoryComponent Function StopLooting
struct Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Stop looting. Clients will RPC to the server to end looting. */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Stop looting. Clients will RPC to the server to end looting." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "StopLooting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execStopLooting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopLooting();
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function StopLooting

// Begin Class UNarrativeInventoryComponent Function TryAddFromLootTable
struct Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics
{
	struct NarrativeInventoryComponent_eventTryAddFromLootTable_Parms
	{
		FLootTableRoll LootTable;
		TArray<FItemAddResult> OutItemAddResults;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Add an item to our inventory using a loot table instead of an item class. Current loads the granted items syncrounously and may cause hitching depending on how heavy the item is. */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Add an item to our inventory using a loot table instead of an item class. Current loads the granted items syncrounously and may cause hitching depending on how heavy the item is." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LootTable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutItemAddResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutItemAddResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NewProp_LootTable = { "LootTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventTryAddFromLootTable_Parms, LootTable), Z_Construct_UScriptStruct_FLootTableRoll, METADATA_PARAMS(0, nullptr) }; // 2828341262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NewProp_OutItemAddResults_Inner = { "OutItemAddResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(0, nullptr) }; // 1390342961
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NewProp_OutItemAddResults = { "OutItemAddResults", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventTryAddFromLootTable_Parms, OutItemAddResults), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1390342961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NewProp_LootTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NewProp_OutItemAddResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NewProp_OutItemAddResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "TryAddFromLootTable", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NarrativeInventoryComponent_eventTryAddFromLootTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::NarrativeInventoryComponent_eventTryAddFromLootTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execTryAddFromLootTable)
{
	P_GET_STRUCT(FLootTableRoll,Z_Param_LootTable);
	P_GET_TARRAY_REF(FItemAddResult,Z_Param_Out_OutItemAddResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryAddFromLootTable(Z_Param_LootTable,Z_Param_Out_OutItemAddResults);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function TryAddFromLootTable

// Begin Class UNarrativeInventoryComponent Function TryAddItemFromClass
struct Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics
{
	struct NarrativeInventoryComponent_eventTryAddItemFromClass_Parms
	{
		TSubclassOf<UNarrativeItem> ItemClass;
		int32 Quantity;
		bool bCheckAutoUse;
		FItemAddResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Add an item to the inventory using the item class\n\x09@param ItemClass the item to add\n\x09@param Quantity the amount of the item to add\n\x09@param bCheckAutoUse if true, we'll check if the item wants to be auto-used on add. Clothing items do this for example to auto-equip. \n\x09@return the amount of the item that was added to the inventory */" },
		{ "CPP_Default_bCheckAutoUse", "true" },
		{ "CPP_Default_Quantity", "1" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Add an item to the inventory using the item class\n       @param ItemClass the item to add\n       @param Quantity the amount of the item to add\n       @param bCheckAutoUse if true, we'll check if the item wants to be auto-used on add. Clothing items do this for example to auto-equip.\n       @return the amount of the item that was added to the inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckAutoUse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_bCheckAutoUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckAutoUse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventTryAddItemFromClass_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventTryAddItemFromClass_Parms, Quantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quantity_MetaData), NewProp_Quantity_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_bCheckAutoUse_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventTryAddItemFromClass_Parms*)Obj)->bCheckAutoUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_bCheckAutoUse = { "bCheckAutoUse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventTryAddItemFromClass_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_bCheckAutoUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckAutoUse_MetaData), NewProp_bCheckAutoUse_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventTryAddItemFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemAddResult, METADATA_PARAMS(0, nullptr) }; // 1390342961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_bCheckAutoUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "TryAddItemFromClass", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NarrativeInventoryComponent_eventTryAddItemFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::NarrativeInventoryComponent_eventTryAddItemFromClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execTryAddItemFromClass)
{
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_GET_UBOOL(Z_Param_bCheckAutoUse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemAddResult*)Z_Param__Result=P_THIS->TryAddItemFromClass(Z_Param_ItemClass,Z_Param_Quantity,Z_Param_bCheckAutoUse);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function TryAddItemFromClass

// Begin Class UNarrativeInventoryComponent Function UseItem
struct Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics
{
	struct NarrativeInventoryComponent_eventUseItem_Parms
	{
		UNarrativeItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Use the given item. Return true if the item was successfully used. Please note Using is currently predicted by clients. */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Use the given item. Return true if the item was successfully used. Please note Using is currently predicted by clients." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeInventoryComponent_eventUseItem_Parms, Item), Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeInventoryComponent_eventUseItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeInventoryComponent_eventUseItem_Parms), &Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeInventoryComponent, nullptr, "UseItem", nullptr, nullptr, Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NarrativeInventoryComponent_eventUseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::NarrativeInventoryComponent_eventUseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeInventoryComponent::execUseItem)
{
	P_GET_OBJECT(UNarrativeItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UseItem(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNarrativeInventoryComponent Function UseItem

// Begin Class UNarrativeInventoryComponent
void UNarrativeInventoryComponent::StaticRegisterNativesUNarrativeInventoryComponent()
{
	UClass* Class = UNarrativeInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCurrency", &UNarrativeInventoryComponent::execAddCurrency },
		{ "AllowLootItem", &UNarrativeInventoryComponent::execAllowLootItem },
		{ "AllowStoreItem", &UNarrativeInventoryComponent::execAllowStoreItem },
		{ "ClientRefreshInventory", &UNarrativeInventoryComponent::execClientRefreshInventory },
		{ "ConsumeItem", &UNarrativeInventoryComponent::execConsumeItem },
		{ "FindItemByClass", &UNarrativeInventoryComponent::execFindItemByClass },
		{ "FindItemsOfClass", &UNarrativeInventoryComponent::execFindItemsOfClass },
		{ "GetBuyPrice", &UNarrativeInventoryComponent::execGetBuyPrice },
		{ "GetCapacity", &UNarrativeInventoryComponent::execGetCapacity },
		{ "GetCurrency", &UNarrativeInventoryComponent::execGetCurrency },
		{ "GetCurrentWeight", &UNarrativeInventoryComponent::execGetCurrentWeight },
		{ "GetItems", &UNarrativeInventoryComponent::execGetItems },
		{ "GetOwningController", &UNarrativeInventoryComponent::execGetOwningController },
		{ "GetOwningPawn", &UNarrativeInventoryComponent::execGetOwningPawn },
		{ "GetSellPrice", &UNarrativeInventoryComponent::execGetSellPrice },
		{ "GetSpaceForItem", &UNarrativeInventoryComponent::execGetSpaceForItem },
		{ "GetWeightCapacity", &UNarrativeInventoryComponent::execGetWeightCapacity },
		{ "GiveDefaultItems", &UNarrativeInventoryComponent::execGiveDefaultItems },
		{ "HasItem", &UNarrativeInventoryComponent::execHasItem },
		{ "OnRep_Currency", &UNarrativeInventoryComponent::execOnRep_Currency },
		{ "OnRep_Items", &UNarrativeInventoryComponent::execOnRep_Items },
		{ "OnRep_LootSource", &UNarrativeInventoryComponent::execOnRep_LootSource },
		{ "RemoveItem", &UNarrativeInventoryComponent::execRemoveItem },
		{ "RequestLootItem", &UNarrativeInventoryComponent::execRequestLootItem },
		{ "RequestStoreItem", &UNarrativeInventoryComponent::execRequestStoreItem },
		{ "ServerConsumeItem", &UNarrativeInventoryComponent::execServerConsumeItem },
		{ "ServerRemoveItem", &UNarrativeInventoryComponent::execServerRemoveItem },
		{ "ServerRequestLootItem", &UNarrativeInventoryComponent::execServerRequestLootItem },
		{ "ServerRequestStoreItem", &UNarrativeInventoryComponent::execServerRequestStoreItem },
		{ "ServerStopLooting", &UNarrativeInventoryComponent::execServerStopLooting },
		{ "ServerUseItem", &UNarrativeInventoryComponent::execServerUseItem },
		{ "SetCapacity", &UNarrativeInventoryComponent::execSetCapacity },
		{ "SetCurrency", &UNarrativeInventoryComponent::execSetCurrency },
		{ "SetInventoryFriendlyName", &UNarrativeInventoryComponent::execSetInventoryFriendlyName },
		{ "SetIsVendor", &UNarrativeInventoryComponent::execSetIsVendor },
		{ "SetLootSource", &UNarrativeInventoryComponent::execSetLootSource },
		{ "SetWeightCapacity", &UNarrativeInventoryComponent::execSetWeightCapacity },
		{ "StopLooting", &UNarrativeInventoryComponent::execStopLooting },
		{ "TryAddFromLootTable", &UNarrativeInventoryComponent::execTryAddFromLootTable },
		{ "TryAddItemFromClass", &UNarrativeInventoryComponent::execTryAddItemFromClass },
		{ "UseItem", &UNarrativeInventoryComponent::execUseItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeInventoryComponent);
UClass* Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister()
{
	return UNarrativeInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**An inventory component manages a collection of Narrative Items. For players, this should be added to the player state.\nFor lootable items like chests, simply add the inventory component to the chest actor. */" },
		{ "DisplayName", "Narrative Inventory" },
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An inventory component manages a collection of Narrative Items. For players, this should be added to the player state.\nFor lootable items like chests, simply add the inventory component to the chest actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCurrency_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryUpdated_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Delegate for an item being added. Currently only called server side.\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Delegate for an item being added. Currently only called server side." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Delegate for an item being removed. Called on server and client \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Delegate for an item being removed. Called on server and client" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemUsed_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Delegate for an item being Used. Currently only called server side.\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Delegate for an item being Used. Currently only called server side." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginLooting_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndLooting_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrencyChanged_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//Notify when our currency balance changes \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Notify when our currency balance changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryFriendlyName_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//The name of this inventory - used by the UI that ships with Narrative Inventory. \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The name of this inventory - used by the UI that ships with Narrative Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightCapacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "//The maximum weight the inventory can hold. For players, backpacks and other items increase this limit\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The maximum weight the inventory can hold. For players, backpacks and other items increase this limit" },
		{ "Units", "Kilograms" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Capacity_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "//The maximum number of items the inventory can hold. For players, backpacks and other items increase this limit\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The maximum number of items the inventory can hold. For players, backpacks and other items increase this limit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LootSource_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**The inventory we're currently looting from*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The inventory we're currently looting from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**The items currently in our inventory*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The items currently in our inventory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**The amount of currency our player has*/" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The amount of currency our player has" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItems_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**Items that should be put in our inventory on BeginPlay. We savegame this as to only add the items once.  */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Items that should be put in our inventory on BeginPlay. We savegame this as to only add the items once." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItemTables_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Loot table we'll use to generate this inventories items. */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Loot table we'll use to generate this inventories items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGaveDefaultItems_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Nice way to ensure we don't give default items multiple times.  */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "Nice way to ensure we don't give default items multiple times." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVendor_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** If true, this inventory will be treated as a vendor, meaning taking/giving items will check you/the vendor has enough currency, and will \n\x09give you/the vendor the currency when the taking/giving occurs also. */" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "If true, this inventory will be treated as a vendor, meaning taking/giving items will check you/the vendor has enough currency, and will\n      give you/the vendor the currency when the taking/giving occurs also." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuyItemPct_MetaData[] = {
		{ "Category", "Vendor Settings" },
		{ "Comment", "//The percentage of the items value we'll buy items for if we're a vendor. \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The percentage of the items value we'll buy items for if we're a vendor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellItemPct_MetaData[] = {
		{ "Category", "Vendor Settings" },
		{ "Comment", "//The percentage of the items value we'll sell items for \n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "The percentage of the items value we'll sell items for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPC_MetaData[] = {
		{ "Comment", "//We cache the OwningController, we won't cache pawn as this might change\n" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
		{ "ToolTip", "We cache the OwningController, we won't cache pawn as this might change" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedItemsKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedItems;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedCurrency;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemUsed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginLooting;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndLooting;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrencyChanged;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InventoryFriendlyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightCapacity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Capacity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LootSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultItemTables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItemTables;
	static void NewProp_bGaveDefaultItems_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGaveDefaultItems;
	static void NewProp_bIsVendor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVendor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuyItemPct;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SellItemPct;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicatedItemsKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_AddCurrency, "AddCurrency" }, // 1719238456
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_AllowLootItem, "AllowLootItem" }, // 949278324
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_AllowStoreItem, "AllowStoreItem" }, // 2559224425
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ClientRefreshInventory, "ClientRefreshInventory" }, // 4235575751
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ConsumeItem, "ConsumeItem" }, // 2786540670
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemByClass, "FindItemByClass" }, // 2552626280
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_FindItemsOfClass, "FindItemsOfClass" }, // 332548351
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetBuyPrice, "GetBuyPrice" }, // 1555414314
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetCapacity, "GetCapacity" }, // 2464406880
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrency, "GetCurrency" }, // 3499765932
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetCurrentWeight, "GetCurrentWeight" }, // 1936059473
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetItems, "GetItems" }, // 2296839571
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningController, "GetOwningController" }, // 930373308
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetOwningPawn, "GetOwningPawn" }, // 601610141
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetSellPrice, "GetSellPrice" }, // 3982810760
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetSpaceForItem, "GetSpaceForItem" }, // 2563657104
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GetWeightCapacity, "GetWeightCapacity" }, // 1236157572
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_GiveDefaultItems, "GiveDefaultItems" }, // 1595448062
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_HasItem, "HasItem" }, // 951550355
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Currency, "OnRep_Currency" }, // 2403783930
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_Items, "OnRep_Items" }, // 1282740100
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_OnRep_LootSource, "OnRep_LootSource" }, // 3109327346
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_RemoveItem, "RemoveItem" }, // 1673373807
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_RequestLootItem, "RequestLootItem" }, // 1793947782
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_RequestStoreItem, "RequestStoreItem" }, // 60437678
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ServerConsumeItem, "ServerConsumeItem" }, // 2816886687
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRemoveItem, "ServerRemoveItem" }, // 1232076687
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestLootItem, "ServerRequestLootItem" }, // 1206260556
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ServerRequestStoreItem, "ServerRequestStoreItem" }, // 657551091
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ServerStopLooting, "ServerStopLooting" }, // 627376709
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_ServerUseItem, "ServerUseItem" }, // 2169778967
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_SetCapacity, "SetCapacity" }, // 3371141202
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_SetCurrency, "SetCurrency" }, // 3203652743
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_SetInventoryFriendlyName, "SetInventoryFriendlyName" }, // 985970831
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_SetIsVendor, "SetIsVendor" }, // 3303635595
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_SetLootSource, "SetLootSource" }, // 2803702470
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_SetWeightCapacity, "SetWeightCapacity" }, // 2694205692
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_StopLooting, "StopLooting" }, // 1181817595
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddFromLootTable, "TryAddFromLootTable" }, // 2461403421
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_TryAddItemFromClass, "TryAddItemFromClass" }, // 3529498062
		{ &Z_Construct_UFunction_UNarrativeInventoryComponent_UseItem, "UseItem" }, // 3877807601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SavedItems_Inner = { "SavedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNarrativeSavedItem, METADATA_PARAMS(0, nullptr) }; // 260295843
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SavedItems = { "SavedItems", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, SavedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedItems_MetaData), NewProp_SavedItems_MetaData) }; // 260295843
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SavedCurrency = { "SavedCurrency", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, SavedCurrency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCurrency_MetaData), NewProp_SavedCurrency_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnInventoryUpdated = { "OnInventoryUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnInventoryUpdated), Z_Construct_UDelegateFunction_NarrativeInventory_OnInventoryUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryUpdated_MetaData), NewProp_OnInventoryUpdated_MetaData) }; // 1917469912
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnItemAdded), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAdded_MetaData), NewProp_OnItemAdded_MetaData) }; // 1624445653
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnItemRemoved), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemRemoved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemoved_MetaData), NewProp_OnItemRemoved_MetaData) }; // 2958804279
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnItemUsed = { "OnItemUsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnItemUsed), Z_Construct_UDelegateFunction_NarrativeInventory_OnItemUsed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemUsed_MetaData), NewProp_OnItemUsed_MetaData) }; // 2198670191
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnBeginLooting = { "OnBeginLooting", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnBeginLooting), Z_Construct_UDelegateFunction_NarrativeInventory_OnBeginLooting__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginLooting_MetaData), NewProp_OnBeginLooting_MetaData) }; // 1573753604
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnEndLooting = { "OnEndLooting", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnEndLooting), Z_Construct_UDelegateFunction_NarrativeInventory_OnEndLooting__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndLooting_MetaData), NewProp_OnEndLooting_MetaData) }; // 3746036195
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnCurrencyChanged = { "OnCurrencyChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OnCurrencyChanged), Z_Construct_UDelegateFunction_NarrativeInventory_OnCurrencyChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrencyChanged_MetaData), NewProp_OnCurrencyChanged_MetaData) }; // 2897989768
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_InventoryFriendlyName = { "InventoryFriendlyName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, InventoryFriendlyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryFriendlyName_MetaData), NewProp_InventoryFriendlyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_WeightCapacity = { "WeightCapacity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, WeightCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightCapacity_MetaData), NewProp_WeightCapacity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Capacity = { "Capacity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, Capacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Capacity_MetaData), NewProp_Capacity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_LootSource = { "LootSource", "OnRep_LootSource", (EPropertyFlags)0x00200801000a083d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, LootSource), Z_Construct_UClass_UNarrativeInventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LootSource_MetaData), NewProp_LootSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Items = { "Items", "OnRep_Items", (EPropertyFlags)0x0020088100020829, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Currency = { "Currency", "OnRep_Currency", (EPropertyFlags)0x0020080100010021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, Currency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItems_Inner = { "DefaultItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemWithQuantity, METADATA_PARAMS(0, nullptr) }; // 68793355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItems = { "DefaultItems", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, DefaultItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItems_MetaData), NewProp_DefaultItems_MetaData) }; // 68793355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItemTables_Inner = { "DefaultItemTables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLootTableRoll, METADATA_PARAMS(0, nullptr) }; // 2828341262
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItemTables = { "DefaultItemTables", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, DefaultItemTables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItemTables_MetaData), NewProp_DefaultItemTables_MetaData) }; // 2828341262
void Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bGaveDefaultItems_SetBit(void* Obj)
{
	((UNarrativeInventoryComponent*)Obj)->bGaveDefaultItems = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bGaveDefaultItems = { "bGaveDefaultItems", nullptr, (EPropertyFlags)0x0020080001000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeInventoryComponent), &Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bGaveDefaultItems_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGaveDefaultItems_MetaData), NewProp_bGaveDefaultItems_MetaData) };
void Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bIsVendor_SetBit(void* Obj)
{
	((UNarrativeInventoryComponent*)Obj)->bIsVendor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bIsVendor = { "bIsVendor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeInventoryComponent), &Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bIsVendor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVendor_MetaData), NewProp_bIsVendor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_BuyItemPct = { "BuyItemPct", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, BuyItemPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuyItemPct_MetaData), NewProp_BuyItemPct_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SellItemPct = { "SellItemPct", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, SellItemPct), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellItemPct_MetaData), NewProp_SellItemPct_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OwnerPC = { "OwnerPC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, OwnerPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPC_MetaData), NewProp_OwnerPC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_ReplicatedItemsKey = { "ReplicatedItemsKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeInventoryComponent, ReplicatedItemsKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedItemsKey_MetaData), NewProp_ReplicatedItemsKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SavedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SavedItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SavedCurrency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnInventoryUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnItemRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnItemUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnBeginLooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnEndLooting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OnCurrencyChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_InventoryFriendlyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_WeightCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Capacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_LootSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItemTables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_DefaultItemTables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bGaveDefaultItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_bIsVendor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_BuyItemPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_SellItemPct,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_OwnerPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeInventoryComponent_Statics::NewProp_ReplicatedItemsKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeInventoryComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeInventoryComponent_Statics::ClassParams = {
	&UNarrativeInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeInventoryComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeInventoryComponent.OuterSingleton, Z_Construct_UClass_UNarrativeInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeInventoryComponent.OuterSingleton;
}
template<> NARRATIVEINVENTORY_API UClass* StaticClass<UNarrativeInventoryComponent>()
{
	return UNarrativeInventoryComponent::StaticClass();
}
void UNarrativeInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_LootSource(TEXT("LootSource"));
	static const FName Name_Items(TEXT("Items"));
	static const FName Name_Currency(TEXT("Currency"));
	const bool bIsValid = true
		&& Name_LootSource == ClassReps[(int32)ENetFields_Private::LootSource].Property->GetFName()
		&& Name_Items == ClassReps[(int32)ENetFields_Private::Items].Property->GetFName()
		&& Name_Currency == ClassReps[(int32)ENetFields_Private::Currency].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeInventoryComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeInventoryComponent);
UNarrativeInventoryComponent::~UNarrativeInventoryComponent() {}
// End Class UNarrativeInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemAddResult::StaticStruct, Z_Construct_UScriptStruct_FItemAddResult_Statics::NewStructOps, TEXT("ItemAddResult"), &Z_Registration_Info_UScriptStruct_ItemAddResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAddResult), 1390342961U) },
		{ FItemWithQuantity::StaticStruct, Z_Construct_UScriptStruct_FItemWithQuantity_Statics::NewStructOps, TEXT("ItemWithQuantity"), &Z_Registration_Info_UScriptStruct_ItemWithQuantity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemWithQuantity), 68793355U) },
		{ FLootTableRoll::StaticStruct, Z_Construct_UScriptStruct_FLootTableRoll_Statics::NewStructOps, TEXT("LootTableRoll"), &Z_Registration_Info_UScriptStruct_LootTableRoll, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootTableRoll), 2828341262U) },
		{ FLootTableRow::StaticStruct, Z_Construct_UScriptStruct_FLootTableRow_Statics::NewStructOps, TEXT("LootTableRow"), &Z_Registration_Info_UScriptStruct_LootTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLootTableRow), 2716489465U) },
		{ FNarrativeSavedItem::StaticStruct, Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics::NewStructOps, TEXT("NarrativeSavedItem"), &Z_Registration_Info_UScriptStruct_NarrativeSavedItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNarrativeSavedItem), 260295843U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemCollection, UItemCollection::StaticClass, TEXT("UItemCollection"), &Z_Registration_Info_UClass_UItemCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemCollection), 2831253816U) },
		{ Z_Construct_UClass_UNarrativeInventoryComponent, UNarrativeInventoryComponent::StaticClass, TEXT("UNarrativeInventoryComponent"), &Z_Registration_Info_UClass_UNarrativeInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeInventoryComponent), 3257672715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_2535254160(TEXT("/Script/NarrativeInventory"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
