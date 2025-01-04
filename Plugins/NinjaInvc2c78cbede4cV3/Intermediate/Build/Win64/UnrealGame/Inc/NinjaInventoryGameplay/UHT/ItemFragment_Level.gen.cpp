// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/GameFramework/ItemFragments/ItemFragment_Level.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemFragment_Level() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UUpgradeableItemInterface_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Level();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Level_NoRegister();
NINJAINVENTORYGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Delegate FItemLevelChangedSignature
struct Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics
{
	struct ItemFragment_Level_eventItemLevelChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventItemLevelChangedSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventItemLevelChangedSignature_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "ItemLevelChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::ItemFragment_Level_eventItemLevelChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::ItemFragment_Level_eventItemLevelChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemFragment_Level::FItemLevelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemLevelChangedSignature, UNinjaInventoryItem* Item, int32 Level)
{
	struct ItemFragment_Level_eventItemLevelChangedSignature_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Level;
	};
	ItemFragment_Level_eventItemLevelChangedSignature_Parms Parms;
	Parms.Item=Item;
	Parms.Level=Level;
	ItemLevelChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemLevelChangedSignature

// Begin Class UItemFragment_Level Function CanUpgrade
struct Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics
{
	struct ItemFragment_Level_eventCanUpgrade_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Informs if the level can be upgraded (i.e. crafting).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Informs if the level can be upgraded (i.e. crafting)." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemFragment_Level_eventCanUpgrade_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemFragment_Level_eventCanUpgrade_Parms), &Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "CanUpgrade", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::ItemFragment_Level_eventCanUpgrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::ItemFragment_Level_eventCanUpgrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_CanUpgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_CanUpgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execCanUpgrade)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUpgrade();
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function CanUpgrade

// Begin Class UItemFragment_Level Function ClampLevel
struct Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics
{
	struct ItemFragment_Level_eventClampLevel_Parms
	{
		int32 Value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Clamps the value between zero and max level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Clamps the value between zero and max level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventClampLevel_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventClampLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "ClampLevel", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::ItemFragment_Level_eventClampLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::ItemFragment_Level_eventClampLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_ClampLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_ClampLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execClampLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ClampLevel(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function ClampLevel

// Begin Class UItemFragment_Level Function GetLevel
struct Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics
{
	struct ItemFragment_Level_eventGetLevel_Parms
	{
		const UNinjaInventoryItem* Item;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides the Gear Level for the item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Provides the Gear Level for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventGetLevel_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventGetLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "GetLevel", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::ItemFragment_Level_eventGetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::ItemFragment_Level_eventGetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_GetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_GetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execGetLevel)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLevel(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function GetLevel

// Begin Class UItemFragment_Level Function SetLevel
struct Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics
{
	struct ItemFragment_Level_eventSetLevel_Parms
	{
		UNinjaInventoryItem* Item;
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Overrides the level with an absolute value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Overrides the level with an absolute value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventSetLevel_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventSetLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "SetLevel", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::ItemFragment_Level_eventSetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::ItemFragment_Level_eventSetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_SetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_SetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execSetLevel)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevel(Z_Param_Item,Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function SetLevel

// Begin Class UItemFragment_Level Function SynchronizedFromItemRemoved
struct Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics
{
	struct ItemFragment_Level_eventSynchronizedFromItemRemoved_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables the effect when the item is removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Disables the effect when the item is removed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventSynchronizedFromItemRemoved_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "SynchronizedFromItemRemoved", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::ItemFragment_Level_eventSynchronizedFromItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::ItemFragment_Level_eventSynchronizedFromItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execSynchronizedFromItemRemoved)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizedFromItemRemoved(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function SynchronizedFromItemRemoved

// Begin Class UItemFragment_Level Function SynchronizeFromContainer
struct Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics
{
	struct ItemFragment_Level_eventSynchronizeFromContainer_Parms
	{
		UNinjaInventoryItem* Item;
		UNinjaInventoryContainer* Container;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Synchronizes the gear level based on the current container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Synchronizes the gear level based on the current container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventSynchronizeFromContainer_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventSynchronizeFromContainer_Parms, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "SynchronizeFromContainer", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::ItemFragment_Level_eventSynchronizeFromContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::ItemFragment_Level_eventSynchronizeFromContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execSynchronizeFromContainer)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_Container);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SynchronizeFromContainer(Z_Param_Item,Z_Param_Container);
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function SynchronizeFromContainer

// Begin Class UItemFragment_Level Function Upgrade
struct Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics
{
	struct ItemFragment_Level_eventUpgrade_Parms
	{
		UNinjaInventoryItem* Item;
		int32 Increment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Increments the level by a certain amount.\n\x09 * More efficient than reading and then saving a value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Increments the level by a certain amount.\nMore efficient than reading and then saving a value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Increment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventUpgrade_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemFragment_Level_eventUpgrade_Parms, Increment), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::NewProp_Increment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemFragment_Level, nullptr, "Upgrade", nullptr, nullptr, Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::ItemFragment_Level_eventUpgrade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::ItemFragment_Level_eventUpgrade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemFragment_Level_Upgrade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemFragment_Level_Upgrade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemFragment_Level::execUpgrade)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_Increment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Upgrade(Z_Param_Item,Z_Param_Increment);
	P_NATIVE_END;
}
// End Class UItemFragment_Level Function Upgrade

// Begin Class UItemFragment_Level
void UItemFragment_Level::StaticRegisterNativesUItemFragment_Level()
{
	UClass* Class = UItemFragment_Level::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanUpgrade", &UItemFragment_Level::execCanUpgrade },
		{ "ClampLevel", &UItemFragment_Level::execClampLevel },
		{ "GetLevel", &UItemFragment_Level::execGetLevel },
		{ "SetLevel", &UItemFragment_Level::execSetLevel },
		{ "SynchronizedFromItemRemoved", &UItemFragment_Level::execSynchronizedFromItemRemoved },
		{ "SynchronizeFromContainer", &UItemFragment_Level::execSynchronizeFromContainer },
		{ "Upgrade", &UItemFragment_Level::execUpgrade },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemFragment_Level);
UClass* Z_Construct_UClass_UItemFragment_Level_NoRegister()
{
	return UItemFragment_Level::StaticClass();
}
struct Z_Construct_UClass_UItemFragment_Level_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the level or potency of an item.\n *\n * The item level effect is only applied when the Equipment is activated. This means that this\n * fragment is only ever relevant for Inventory Items that also have an Equipment Fragment.\n */" },
		{ "DisplayName", "Level" },
		{ "IncludePath", "GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Represents the level or potency of an item.\n\nThe item level effect is only applied when the Equipment is activated. This means that this\nfragment is only ever relevant for Inventory Items that also have an Equipment Fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts when the level changes. */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Broadcasts when the level changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanUpgrade_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/**\n\x09 * Informs if this item can be upgraded during gameplay.\n\x09 * Allowing the level to be upgraded also enables the Upgrade Operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Informs if this item can be upgraded during gameplay.\nAllowing the level to be upgraded also enables the Upgrade Operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 *\n\x09 * Level of the equipment/gear related to this item.\n\x09 * \n\x09 * This overrides the Effect Level property, so the Level gameplay effect is always\n\x09 * applied at this item's level. You can use that to scale the effect or safely ignore it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Level of the equipment/gear related to this item.\n\nThis overrides the Effect Level property, so the Level gameplay effect is always\napplied at this item's level. You can use that to scale the effect or safely ignore it." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLevel_MetaData[] = {
		{ "Category", "Fragment" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Maximum level that this item can reach.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/ItemFragments/ItemFragment_Level.h" },
		{ "ToolTip", "Maximum level that this item can reach." },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelChanged;
	static void NewProp_bCanUpgrade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUpgrade;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemFragment_Level_CanUpgrade, "CanUpgrade" }, // 1794548711
		{ &Z_Construct_UFunction_UItemFragment_Level_ClampLevel, "ClampLevel" }, // 2857832462
		{ &Z_Construct_UFunction_UItemFragment_Level_GetLevel, "GetLevel" }, // 1159792107
		{ &Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature, "ItemLevelChangedSignature__DelegateSignature" }, // 1348640289
		{ &Z_Construct_UFunction_UItemFragment_Level_SetLevel, "SetLevel" }, // 4005210784
		{ &Z_Construct_UFunction_UItemFragment_Level_SynchronizedFromItemRemoved, "SynchronizedFromItemRemoved" }, // 4240780282
		{ &Z_Construct_UFunction_UItemFragment_Level_SynchronizeFromContainer, "SynchronizeFromContainer" }, // 1612318475
		{ &Z_Construct_UFunction_UItemFragment_Level_Upgrade, "Upgrade" }, // 2983925792
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemFragment_Level>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_OnLevelChanged = { "OnLevelChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Level, OnLevelChanged), Z_Construct_UDelegateFunction_UItemFragment_Level_ItemLevelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLevelChanged_MetaData), NewProp_OnLevelChanged_MetaData) }; // 1348640289
void Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_bCanUpgrade_SetBit(void* Obj)
{
	((UItemFragment_Level*)Obj)->bCanUpgrade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_bCanUpgrade = { "bCanUpgrade", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemFragment_Level), &Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_bCanUpgrade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanUpgrade_MetaData), NewProp_bCanUpgrade_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Level, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_MaximumLevel = { "MaximumLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemFragment_Level, MaximumLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLevel_MetaData), NewProp_MaximumLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemFragment_Level_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_OnLevelChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_bCanUpgrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemFragment_Level_Statics::NewProp_MaximumLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Level_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemFragment_Level_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Level_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UItemFragment_Level_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUpgradeableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UItemFragment_Level, IUpgradeableItemInterface), false },  // 935181
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemFragment_Level_Statics::ClassParams = {
	&UItemFragment_Level::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemFragment_Level_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Level_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemFragment_Level_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemFragment_Level_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemFragment_Level()
{
	if (!Z_Registration_Info_UClass_UItemFragment_Level.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemFragment_Level.OuterSingleton, Z_Construct_UClass_UItemFragment_Level_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemFragment_Level.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UItemFragment_Level>()
{
	return UItemFragment_Level::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemFragment_Level);
UItemFragment_Level::~UItemFragment_Level() {}
// End Class UItemFragment_Level

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Level_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemFragment_Level, UItemFragment_Level::StaticClass, TEXT("UItemFragment_Level"), &Z_Registration_Info_UClass_UItemFragment_Level, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemFragment_Level), 810255899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Level_h_1204942625(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Level_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Level_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
