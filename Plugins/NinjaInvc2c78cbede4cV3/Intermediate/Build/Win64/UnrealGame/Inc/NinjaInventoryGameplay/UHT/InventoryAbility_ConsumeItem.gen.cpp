// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryAbility_ConsumeItem() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAbility_ConsumeItem();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UInventoryAbility_ConsumeItem_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Consumable_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UItemFragment_Stack_NoRegister();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UNinjaInventoryAnimationAbility();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UInventoryAbility_ConsumeItem Function ApplyConsumableEffect
static const FName NAME_UInventoryAbility_ConsumeItem_ApplyConsumableEffect = FName(TEXT("ApplyConsumableEffect"));
void UInventoryAbility_ConsumeItem::ApplyConsumableEffect()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryAbility_ConsumeItem_ApplyConsumableEffect);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ApplyConsumableEffect_Implementation();
	}
}
struct Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/**\n\x09 * Applies the consumable effect from the current item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Applies the consumable effect from the current item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAbility_ConsumeItem, nullptr, "ApplyConsumableEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryAbility_ConsumeItem::execApplyConsumableEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyConsumableEffect_Implementation();
	P_NATIVE_END;
}
// End Class UInventoryAbility_ConsumeItem Function ApplyConsumableEffect

// Begin Class UInventoryAbility_ConsumeItem Function ConsumeItem
static const FName NAME_UInventoryAbility_ConsumeItem_ConsumeItem = FName(TEXT("ConsumeItem"));
void UInventoryAbility_ConsumeItem::ConsumeItem()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryAbility_ConsumeItem_ConsumeItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ConsumeItem_Implementation();
	}
}
struct Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/**\n\x09 * Consumes the item stored in this ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Consumes the item stored in this ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAbility_ConsumeItem, nullptr, "ConsumeItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryAbility_ConsumeItem::execConsumeItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeItem_Implementation();
	P_NATIVE_END;
}
// End Class UInventoryAbility_ConsumeItem Function ConsumeItem

// Begin Class UInventoryAbility_ConsumeItem Function GetConsumableFragment
struct Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics
{
	struct InventoryAbility_ConsumeItem_eventGetConsumableFragment_Parms
	{
		const UItemFragment_Consumable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Consumable Fragment currently in use by this ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Provides the Consumable Fragment currently in use by this ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryAbility_ConsumeItem_eventGetConsumableFragment_Parms, ReturnValue), Z_Construct_UClass_UItemFragment_Consumable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAbility_ConsumeItem, nullptr, "GetConsumableFragment", nullptr, nullptr, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::InventoryAbility_ConsumeItem_eventGetConsumableFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::InventoryAbility_ConsumeItem_eventGetConsumableFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryAbility_ConsumeItem::execGetConsumableFragment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UItemFragment_Consumable**)Z_Param__Result=P_THIS->GetConsumableFragment();
	P_NATIVE_END;
}
// End Class UInventoryAbility_ConsumeItem Function GetConsumableFragment

// Begin Class UInventoryAbility_ConsumeItem Function GetConsumableItem
struct Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics
{
	struct InventoryAbility_ConsumeItem_eventGetConsumableItem_Parms
	{
		const UNinjaInventoryItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Consumable Item currently in use by this ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Provides the Consumable Item currently in use by this ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryAbility_ConsumeItem_eventGetConsumableItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAbility_ConsumeItem, nullptr, "GetConsumableItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::InventoryAbility_ConsumeItem_eventGetConsumableItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::InventoryAbility_ConsumeItem_eventGetConsumableItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryAbility_ConsumeItem::execGetConsumableItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetConsumableItem();
	P_NATIVE_END;
}
// End Class UInventoryAbility_ConsumeItem Function GetConsumableItem

// Begin Class UInventoryAbility_ConsumeItem Function HasConsumableData
struct Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics
{
	struct InventoryAbility_ConsumeItem_eventHasConsumableData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Abilities" },
		{ "Comment", "/**\n\x09 * Informs if this Ability has enough information to perform a Consume operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Informs if this Ability has enough information to perform a Consume operation." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryAbility_ConsumeItem_eventHasConsumableData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryAbility_ConsumeItem_eventHasConsumableData_Parms), &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAbility_ConsumeItem, nullptr, "HasConsumableData", nullptr, nullptr, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::InventoryAbility_ConsumeItem_eventHasConsumableData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::InventoryAbility_ConsumeItem_eventHasConsumableData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryAbility_ConsumeItem::execHasConsumableData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasConsumableData();
	P_NATIVE_END;
}
// End Class UInventoryAbility_ConsumeItem Function HasConsumableData

// Begin Class UInventoryAbility_ConsumeItem Function UpdateStack
static const FName NAME_UInventoryAbility_ConsumeItem_UpdateStack = FName(TEXT("UpdateStack"));
void UInventoryAbility_ConsumeItem::UpdateStack()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryAbility_ConsumeItem_UpdateStack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdateStack_Implementation();
	}
}
struct Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/**\n\x09 * Reduces the stack of the current item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Reduces the stack of the current item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryAbility_ConsumeItem, nullptr, "UpdateStack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryAbility_ConsumeItem::execUpdateStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStack_Implementation();
	P_NATIVE_END;
}
// End Class UInventoryAbility_ConsumeItem Function UpdateStack

// Begin Class UInventoryAbility_ConsumeItem
void UInventoryAbility_ConsumeItem::StaticRegisterNativesUInventoryAbility_ConsumeItem()
{
	UClass* Class = UInventoryAbility_ConsumeItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyConsumableEffect", &UInventoryAbility_ConsumeItem::execApplyConsumableEffect },
		{ "ConsumeItem", &UInventoryAbility_ConsumeItem::execConsumeItem },
		{ "GetConsumableFragment", &UInventoryAbility_ConsumeItem::execGetConsumableFragment },
		{ "GetConsumableItem", &UInventoryAbility_ConsumeItem::execGetConsumableItem },
		{ "HasConsumableData", &UInventoryAbility_ConsumeItem::execHasConsumableData },
		{ "UpdateStack", &UInventoryAbility_ConsumeItem::execUpdateStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryAbility_ConsumeItem);
UClass* Z_Construct_UClass_UInventoryAbility_ConsumeItem_NoRegister()
{
	return UInventoryAbility_ConsumeItem::StaticClass();
}
struct Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base ability that can consume an item with or without a related animation. \n */" },
		{ "IncludePath", "AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base ability that can consume an item with or without a related animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemFoundAnimationTags_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Gameplay Tags used to obtain the Animation Montage played when the consumable is found.\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Gameplay Tags used to obtain the Animation Montage played when the consumable is found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMissingAnimationTags_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Gameplay Tags used to obtain the Animation Montage played when the consumable is missing.\n\x09 * These are optional. If left empty, then the ability ends when no consumable is found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Gameplay Tags used to obtain the Animation Montage played when the consumable is missing.\nThese are optional. If left empty, then the ability ends when no consumable is found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableQuery_MetaData[] = {
		{ "Category", "Consumable" },
		{ "Comment", "/**\n\x09 * Query used to select the consumable item from the inventory.\n\x09 *\n\x09 * This query is only used if the ability is activated without an event trigger.\n\x09 * If the ability activates via an Event Trigger, it will expect the item in the payload.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Query used to select the consumable item from the inventory.\n\nThis query is only used if the ability is activated without an event trigger.\nIf the ability activates via an Event Trigger, it will expect the item in the payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableItem_MetaData[] = {
		{ "Comment", "/** Item being used in this operation. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "ToolTip", "Item being used in this operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableFragment_MetaData[] = {
		{ "Comment", "/** Consumable fragment assigned to the current item. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Consumable fragment assigned to the current item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackFragment_MetaData[] = {
		{ "Comment", "/** Stack fragment assigned to the current item. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/InventoryAbility_ConsumeItem.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Stack fragment assigned to the current item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemFoundAnimationTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemMissingAnimationTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumableQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConsumableItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConsumableFragment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StackFragment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ApplyConsumableEffect, "ApplyConsumableEffect" }, // 2950815241
		{ &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_ConsumeItem, "ConsumeItem" }, // 1587837504
		{ &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableFragment, "GetConsumableFragment" }, // 4186809873
		{ &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_GetConsumableItem, "GetConsumableItem" }, // 2659585359
		{ &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_HasConsumableData, "HasConsumableData" }, // 1279697544
		{ &Z_Construct_UFunction_UInventoryAbility_ConsumeItem_UpdateStack, "UpdateStack" }, // 415216018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryAbility_ConsumeItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ItemFoundAnimationTags = { "ItemFoundAnimationTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryAbility_ConsumeItem, ItemFoundAnimationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemFoundAnimationTags_MetaData), NewProp_ItemFoundAnimationTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ItemMissingAnimationTags = { "ItemMissingAnimationTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryAbility_ConsumeItem, ItemMissingAnimationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMissingAnimationTags_MetaData), NewProp_ItemMissingAnimationTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ConsumableQuery = { "ConsumableQuery", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryAbility_ConsumeItem, ConsumableQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumableQuery_MetaData), NewProp_ConsumableQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ConsumableItem = { "ConsumableItem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryAbility_ConsumeItem, ConsumableItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumableItem_MetaData), NewProp_ConsumableItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ConsumableFragment = { "ConsumableFragment", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryAbility_ConsumeItem, ConsumableFragment), Z_Construct_UClass_UItemFragment_Consumable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumableFragment_MetaData), NewProp_ConsumableFragment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_StackFragment = { "StackFragment", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryAbility_ConsumeItem, StackFragment), Z_Construct_UClass_UItemFragment_Stack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackFragment_MetaData), NewProp_StackFragment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ItemFoundAnimationTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ItemMissingAnimationTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ConsumableQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ConsumableItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_ConsumableFragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::NewProp_StackFragment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::ClassParams = {
	&UInventoryAbility_ConsumeItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryAbility_ConsumeItem()
{
	if (!Z_Registration_Info_UClass_UInventoryAbility_ConsumeItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryAbility_ConsumeItem.OuterSingleton, Z_Construct_UClass_UInventoryAbility_ConsumeItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryAbility_ConsumeItem.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UInventoryAbility_ConsumeItem>()
{
	return UInventoryAbility_ConsumeItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryAbility_ConsumeItem);
UInventoryAbility_ConsumeItem::~UInventoryAbility_ConsumeItem() {}
// End Class UInventoryAbility_ConsumeItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ConsumeItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryAbility_ConsumeItem, UInventoryAbility_ConsumeItem::StaticClass, TEXT("UInventoryAbility_ConsumeItem"), &Z_Registration_Info_UClass_UInventoryAbility_ConsumeItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryAbility_ConsumeItem), 312749068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ConsumeItem_h_2617237422(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ConsumeItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Abilities_InventoryAbility_ConsumeItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
