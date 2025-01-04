// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryItemFragment.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItemFragment() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UOperableItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryItemFragment Function ApplyFragment
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics
{
	struct NinjaInventoryItemFragment_eventApplyFragment_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Applies the effects of this fragment on a given Item Instance.\n\x09 * \n\x09 * This event happens after the item has been fully assigned to the Inventory Manager,\n\x09 * along with its memories. It wil be called in the authoritative and client version.\n\x09 *\n\x09 * This is a good place to execute any logic or bind to other fragments or events.  \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Applies the effects of this fragment on a given Item Instance.\n\nThis event happens after the item has been fully assigned to the Inventory Manager,\nalong with its memories. It wil be called in the authoritative and client version.\n\nThis is a good place to execute any logic or bind to other fragments or events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventApplyFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "ApplyFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::NinjaInventoryItemFragment_eventApplyFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::NinjaInventoryItemFragment_eventApplyFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execApplyFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFragment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function ApplyFragment

// Begin Class UNinjaInventoryItemFragment Function EvaluateOperation
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics
{
	struct NinjaInventoryItemFragment_eventEvaluateOperation_Parms
	{
		TInstancedStruct<FInventoryFragmentPayload> Payload;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Evaluates if a given operation can be performed.\n\x09 *\n\x09 * @param Payload\x09\x09\x09\x09Payload containing details about the operation.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if this fragment can perform the request operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Evaluates if a given operation can be performed.\n\n@param Payload                               Payload containing details about the operation.\n@return                                              True if this fragment can perform the request operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventEvaluateOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
void Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemFragment_eventEvaluateOperation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemFragment_eventEvaluateOperation_Parms), &Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "EvaluateOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NinjaInventoryItemFragment_eventEvaluateOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::NinjaInventoryItemFragment_eventEvaluateOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execEvaluateOperation)
{
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EvaluateOperation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function EvaluateOperation

// Begin Class UNinjaInventoryItemFragment Function GetItemTags
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics
{
	struct NinjaInventoryItemFragment_eventGetItemTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides all tags that can be assigned to the owning item.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09Gameplay Tags that this fragment contributes to the owning item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Provides all tags that can be assigned to the owning item.\n\n@return\n             Gameplay Tags that this fragment contributes to the owning item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventGetItemTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "GetItemTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::NinjaInventoryItemFragment_eventGetItemTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::NinjaInventoryItemFragment_eventGetItemTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execGetItemTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetItemTags();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function GetItemTags

// Begin Class UNinjaInventoryItemFragment Function GetSupportedOperationTags
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics
{
	struct NinjaInventoryItemFragment_eventGetSupportedOperationTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Provides all Gameplay Tags representing supported operations.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09Gameplay Tags of operations supported by this fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Provides all Gameplay Tags representing supported operations.\n\n@return\n             Gameplay Tags of operations supported by this fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventGetSupportedOperationTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "GetSupportedOperationTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::NinjaInventoryItemFragment_eventGetSupportedOperationTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::NinjaInventoryItemFragment_eventGetSupportedOperationTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execGetSupportedOperationTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSupportedOperationTags();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function GetSupportedOperationTags

// Begin Class UNinjaInventoryItemFragment Function HandleMemoryCreated
struct NinjaInventoryItemFragment_eventHandleMemoryCreated_Parms
{
	UNinjaInventoryItem* Item;
	TInstancedStruct<FInventoryFragmentMemory> FragmentMemory;
};
static const FName NAME_UNinjaInventoryItemFragment_HandleMemoryCreated = FName(TEXT("HandleMemoryCreated"));
void UNinjaInventoryItemFragment::HandleMemoryCreated(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_HandleMemoryCreated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventHandleMemoryCreated_Parms Parms;
		Parms.Item=Item;
		Parms.FragmentMemory=FragmentMemory;
	ProcessEvent(Func,&Parms);
		FragmentMemory=Parms.FragmentMemory;
	}
	else
	{
		HandleMemoryCreated_Implementation(Item, FragmentMemory);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Fragment" },
		{ "Comment", "/**\n\x09 * Callback invoked whenever this Fragment's memory is created in the backend.\n\x09 *\n\x09 * Meant to be called by the memory replication in the owning item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Callback invoked whenever this Fragment's memory is created in the backend.\n\nMeant to be called by the memory replication in the owning item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentMemory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentMemory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventHandleMemoryCreated_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::NewProp_FragmentMemory = { "FragmentMemory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventHandleMemoryCreated_Parms, FragmentMemory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentMemory_MetaData), NewProp_FragmentMemory_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::NewProp_FragmentMemory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "HandleMemoryCreated", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventHandleMemoryCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventHandleMemoryCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execHandleMemoryCreated)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentMemory>,Z_Param_Out_FragmentMemory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMemoryCreated_Implementation(Z_Param_Item,Z_Param_Out_FragmentMemory);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function HandleMemoryCreated

// Begin Class UNinjaInventoryItemFragment Function HandleMemoryRemoved
struct NinjaInventoryItemFragment_eventHandleMemoryRemoved_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UNinjaInventoryItemFragment_HandleMemoryRemoved = FName(TEXT("HandleMemoryRemoved"));
void UNinjaInventoryItemFragment::HandleMemoryRemoved(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_HandleMemoryRemoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventHandleMemoryRemoved_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleMemoryRemoved_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Fragment" },
		{ "Comment", "/**\n\x09 * Callback invoked whenever this Fragment's memory is removed from the backend.\n\x09 *\n\x09 * Meant to be called by the memory replication in the owning item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Callback invoked whenever this Fragment's memory is removed from the backend.\n\nMeant to be called by the memory replication in the owning item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventHandleMemoryRemoved_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "HandleMemoryRemoved", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventHandleMemoryRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventHandleMemoryRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execHandleMemoryRemoved)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMemoryRemoved_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function HandleMemoryRemoved

// Begin Class UNinjaInventoryItemFragment Function HandleMemoryUpdated
struct NinjaInventoryItemFragment_eventHandleMemoryUpdated_Parms
{
	UNinjaInventoryItem* Item;
	TInstancedStruct<FInventoryFragmentMemory> FragmentMemory;
};
static const FName NAME_UNinjaInventoryItemFragment_HandleMemoryUpdated = FName(TEXT("HandleMemoryUpdated"));
void UNinjaInventoryItemFragment::HandleMemoryUpdated(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_HandleMemoryUpdated);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventHandleMemoryUpdated_Parms Parms;
		Parms.Item=Item;
		Parms.FragmentMemory=FragmentMemory;
	ProcessEvent(Func,&Parms);
		FragmentMemory=Parms.FragmentMemory;
	}
	else
	{
		HandleMemoryUpdated_Implementation(Item, FragmentMemory);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Fragment" },
		{ "Comment", "/**\n\x09 * Callback invoked whenever this Fragment's memory is updated in the backend.\n\x09 *\n\x09 * Meant to be called by the memory replication in the owning item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Callback invoked whenever this Fragment's memory is updated in the backend.\n\nMeant to be called by the memory replication in the owning item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentMemory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentMemory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventHandleMemoryUpdated_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::NewProp_FragmentMemory = { "FragmentMemory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventHandleMemoryUpdated_Parms, FragmentMemory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentMemory_MetaData), NewProp_FragmentMemory_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::NewProp_FragmentMemory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "HandleMemoryUpdated", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventHandleMemoryUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventHandleMemoryUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execHandleMemoryUpdated)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentMemory>,Z_Param_Out_FragmentMemory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMemoryUpdated_Implementation(Z_Param_Item,Z_Param_Out_FragmentMemory);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function HandleMemoryUpdated

// Begin Class UNinjaInventoryItemFragment Function InitializeFragment
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics
{
	struct NinjaInventoryItemFragment_eventInitializeFragment_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Initializes the effects of this fragment on a given Item Instance.\n\x09 * \n\x09 * This event happens when the item is instantiated in the owning Inventory Manager,\n\x09 * in the authoritative version.\n\x09 *\n\x09 * This is a good place to initialize the fragment memories in their initial states.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Initializes the effects of this fragment on a given Item Instance.\n\nThis event happens when the item is instantiated in the owning Inventory Manager,\nin the authoritative version.\n\nThis is a good place to initialize the fragment memories in their initial states." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventInitializeFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "InitializeFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::NinjaInventoryItemFragment_eventInitializeFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::NinjaInventoryItemFragment_eventInitializeFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execInitializeFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFragment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function InitializeFragment

// Begin Class UNinjaInventoryItemFragment Function ItemHasAuthority
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics
{
	struct NinjaInventoryItemFragment_eventItemHasAuthority_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if the item has authority.\n\x09 *\n\x09 * An item can only have network authority if it's assigned to an Inventory\n\x09 * Manager, and this component has an owner with network authority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Checks if the item has authority.\n\nAn item can only have network authority if it's assigned to an Inventory\nManager, and this component has an owner with network authority." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventItemHasAuthority_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemFragment_eventItemHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemFragment_eventItemHasAuthority_Parms), &Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "ItemHasAuthority", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NinjaInventoryItemFragment_eventItemHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::NinjaInventoryItemFragment_eventItemHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execItemHasAuthority)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInventoryItemFragment::ItemHasAuthority(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function ItemHasAuthority

// Begin Class UNinjaInventoryItemFragment Function ItemHasFragment
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics
{
	struct NinjaInventoryItemFragment_eventItemHasFragment_Parms
	{
		const UNinjaInventoryItem* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Checks if the provided item has this actual item fragment instance.\n\x09 *\n\x09 * Some operations might want to check this to ensure that the item in their payload is an\n\x09 * item that actually has the fragment that will execute the operation. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Checks if the provided item has this actual item fragment instance.\n\nSome operations might want to check this to ensure that the item in their payload is an\nitem that actually has the fragment that will execute the operation." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventItemHasFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemFragment_eventItemHasFragment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemFragment_eventItemHasFragment_Parms), &Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "ItemHasFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NinjaInventoryItemFragment_eventItemHasFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::NinjaInventoryItemFragment_eventItemHasFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execItemHasFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ItemHasFragment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function ItemHasFragment

// Begin Class UNinjaInventoryItemFragment Function OnApplyFragment
struct NinjaInventoryItemFragment_eventOnApplyFragment_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UNinjaInventoryItemFragment_OnApplyFragment = FName(TEXT("OnApplyFragment"));
void UNinjaInventoryItemFragment::OnApplyFragment(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_OnApplyFragment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventOnApplyFragment_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnApplyFragment_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Fragment" },
		{ "Comment", "/**\n\x09 * Applies the effects of this fragment on a given Item Instance.\n\x09 * \n\x09 * This event happens after the item has been fully assigned to the Inventory Manager,\n\x09 * along with its memories. It wil be called in the authoritative and client version.\n\x09 *\n\x09 * This is a good place to execute any logic or bind to other fragments or events.\n\x09 *\n\x09 * This extension point is available to Blueprints and C++ and its invoked once its\n\x09 * native counterpart has finished executing. At a framework level, there's no need\n\x09 * to invoke the parent implementation of this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Applies the effects of this fragment on a given Item Instance.\n\nThis event happens after the item has been fully assigned to the Inventory Manager,\nalong with its memories. It wil be called in the authoritative and client version.\n\nThis is a good place to execute any logic or bind to other fragments or events.\n\nThis extension point is available to Blueprints and C++ and its invoked once its\nnative counterpart has finished executing. At a framework level, there's no need\nto invoke the parent implementation of this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventOnApplyFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "OnApplyFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventOnApplyFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventOnApplyFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execOnApplyFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnApplyFragment_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function OnApplyFragment

// Begin Class UNinjaInventoryItemFragment Function OnEvaluateOperation
struct NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms
{
	TInstancedStruct<FInventoryFragmentPayload> Payload;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInventoryItemFragment_OnEvaluateOperation = FName(TEXT("OnEvaluateOperation"));
bool UNinjaInventoryItemFragment::OnEvaluateOperation(TInstancedStruct<FInventoryFragmentPayload> const& Payload) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_OnEvaluateOperation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms Parms;
		Parms.Payload=Payload;
		const_cast<UNinjaInventoryItemFragment*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInventoryItemFragment*>(this)->OnEvaluateOperation_Implementation(Payload);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operable Item Fragment" },
		{ "Comment", "/**\n\x09 * Checks if this fragment can perform an operation on the provided payload.\n\x09 * \n\x09 * Default checks for a valid item, the payload type and operation tags are already\n\x09 * covered for you, so you don't need to worry about those.\n\x09 */" },
		{ "DisplayName", "Can Perform Operation" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Checks if this fragment can perform an operation on the provided payload.\n\nDefault checks for a valid item, the payload type and operation tags are already\ncovered for you, so you don't need to worry about those." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
void Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms), &Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "OnEvaluateOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventOnEvaluateOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execOnEvaluateOperation)
{
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnEvaluateOperation_Implementation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function OnEvaluateOperation

// Begin Class UNinjaInventoryItemFragment Function OnInitializeFragment
struct NinjaInventoryItemFragment_eventOnInitializeFragment_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UNinjaInventoryItemFragment_OnInitializeFragment = FName(TEXT("OnInitializeFragment"));
void UNinjaInventoryItemFragment::OnInitializeFragment(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_OnInitializeFragment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventOnInitializeFragment_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnInitializeFragment_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Fragment" },
		{ "Comment", "/**\n\x09 * Initializes the effects of this fragment on a given Item Instance.\n\x09 * \n\x09 * This event happens when the item is instantiated in the owning Inventory Manager,\n\x09 * in the authoritative version.\n\x09 *\n\x09 * This is a good place to initialize the fragment memories in their initial states.\n\x09 *\n\x09 * This extension point is available to Blueprints and C++ and its invoked once its\n\x09 * native counterpart has finished executing. At a framework level, there's no need\n\x09 * to invoke the parent implementation of this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Initializes the effects of this fragment on a given Item Instance.\n\nThis event happens when the item is instantiated in the owning Inventory Manager,\nin the authoritative version.\n\nThis is a good place to initialize the fragment memories in their initial states.\n\nThis extension point is available to Blueprints and C++ and its invoked once its\nnative counterpart has finished executing. At a framework level, there's no need\nto invoke the parent implementation of this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventOnInitializeFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "OnInitializeFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventOnInitializeFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C04, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventOnInitializeFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execOnInitializeFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInitializeFragment_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function OnInitializeFragment

// Begin Class UNinjaInventoryItemFragment Function OnPerformOperation
struct NinjaInventoryItemFragment_eventOnPerformOperation_Parms
{
	TInstancedStruct<FInventoryFragmentPayload> Payload;
};
static const FName NAME_UNinjaInventoryItemFragment_OnPerformOperation = FName(TEXT("OnPerformOperation"));
void UNinjaInventoryItemFragment::OnPerformOperation(TInstancedStruct<FInventoryFragmentPayload> const& Payload)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_OnPerformOperation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventOnPerformOperation_Parms Parms;
		Parms.Payload=Payload;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnPerformOperation_Implementation(Payload);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Operable Item Fragment" },
		{ "Comment", "/**\n\x09 * Performs an operation on the provided payload.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Performs an operation on the provided payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventOnPerformOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "OnPerformOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventOnPerformOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventOnPerformOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execOnPerformOperation)
{
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerformOperation_Implementation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function OnPerformOperation

// Begin Class UNinjaInventoryItemFragment Function OnRevertFragment
struct NinjaInventoryItemFragment_eventOnRevertFragment_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UNinjaInventoryItemFragment_OnRevertFragment = FName(TEXT("OnRevertFragment"));
void UNinjaInventoryItemFragment::OnRevertFragment(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemFragment_OnRevertFragment);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryItemFragment_eventOnRevertFragment_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnRevertFragment_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item Fragment" },
		{ "Comment", "/**\n\x09 * Reverts the effects of this fragment from a given Item Instance.\n\x09 * \n\x09 * This event happens when the item is removed from an owner. All effects and memories\n\x09 * are still available, so the item can properly clean itself up before removal.\n\x09 *\n\x09 * This extension point is available to Blueprints and C++ and its invoked once its\n\x09 * native counterpart has finished executing. At a framework level, there's no need\n\x09 * to invoke the parent implementation of this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Reverts the effects of this fragment from a given Item Instance.\n\nThis event happens when the item is removed from an owner. All effects and memories\nare still available, so the item can properly clean itself up before removal.\n\nThis extension point is available to Blueprints and C++ and its invoked once its\nnative counterpart has finished executing. At a framework level, there's no need\nto invoke the parent implementation of this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventOnRevertFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "OnRevertFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::PropPointers), sizeof(NinjaInventoryItemFragment_eventOnRevertFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryItemFragment_eventOnRevertFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execOnRevertFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRevertFragment_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function OnRevertFragment

// Begin Class UNinjaInventoryItemFragment Function PerformOperation
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics
{
	struct NinjaInventoryItemFragment_eventPerformOperation_Parms
	{
		TInstancedStruct<FInventoryFragmentPayload> Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Performs a viable operation between this fragment and anything provided in the payload.\n\x09 *\n\x09 * @param Payload\n\x09 *\x09\x09""An instanced struct containing the specific payload for this operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Performs a viable operation between this fragment and anything provided in the payload.\n\n@param Payload\n             An instanced struct containing the specific payload for this operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentPayload" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventPerformOperation_Parms, Payload), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "PerformOperation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::NinjaInventoryItemFragment_eventPerformOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::NinjaInventoryItemFragment_eventPerformOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execPerformOperation)
{
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentPayload>,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformOperation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function PerformOperation

// Begin Class UNinjaInventoryItemFragment Function RevertFragment
struct Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics
{
	struct NinjaInventoryItemFragment_eventRevertFragment_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Fragments" },
		{ "Comment", "/**\n\x09 * Reverts the effects of this fragment from a given Item Instance.\n\x09 * \n\x09 * This event happens when the item is removed from an owner. All effects and memories\n\x09 * are still available, so the item can properly clean itself up before removal.\n\x09 *\n\x09 * There is no need to clear the fragment's memory from the owning item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Reverts the effects of this fragment from a given Item Instance.\n\nThis event happens when the item is removed from an owner. All effects and memories\nare still available, so the item can properly clean itself up before removal.\n\nThere is no need to clear the fragment's memory from the owning item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemFragment_eventRevertFragment_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemFragment, nullptr, "RevertFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::NinjaInventoryItemFragment_eventRevertFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::NinjaInventoryItemFragment_eventRevertFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemFragment::execRevertFragment)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertFragment(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemFragment Function RevertFragment

// Begin Class UNinjaInventoryItemFragment
void UNinjaInventoryItemFragment::StaticRegisterNativesUNinjaInventoryItemFragment()
{
	UClass* Class = UNinjaInventoryItemFragment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyFragment", &UNinjaInventoryItemFragment::execApplyFragment },
		{ "EvaluateOperation", &UNinjaInventoryItemFragment::execEvaluateOperation },
		{ "GetItemTags", &UNinjaInventoryItemFragment::execGetItemTags },
		{ "GetSupportedOperationTags", &UNinjaInventoryItemFragment::execGetSupportedOperationTags },
		{ "HandleMemoryCreated", &UNinjaInventoryItemFragment::execHandleMemoryCreated },
		{ "HandleMemoryRemoved", &UNinjaInventoryItemFragment::execHandleMemoryRemoved },
		{ "HandleMemoryUpdated", &UNinjaInventoryItemFragment::execHandleMemoryUpdated },
		{ "InitializeFragment", &UNinjaInventoryItemFragment::execInitializeFragment },
		{ "ItemHasAuthority", &UNinjaInventoryItemFragment::execItemHasAuthority },
		{ "ItemHasFragment", &UNinjaInventoryItemFragment::execItemHasFragment },
		{ "OnApplyFragment", &UNinjaInventoryItemFragment::execOnApplyFragment },
		{ "OnEvaluateOperation", &UNinjaInventoryItemFragment::execOnEvaluateOperation },
		{ "OnInitializeFragment", &UNinjaInventoryItemFragment::execOnInitializeFragment },
		{ "OnPerformOperation", &UNinjaInventoryItemFragment::execOnPerformOperation },
		{ "OnRevertFragment", &UNinjaInventoryItemFragment::execOnRevertFragment },
		{ "PerformOperation", &UNinjaInventoryItemFragment::execPerformOperation },
		{ "RevertFragment", &UNinjaInventoryItemFragment::execRevertFragment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItemFragment);
UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister()
{
	return UNinjaInventoryItemFragment::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a particular aspect of an inventory item.\n *\n * Inventory items are built by aggregation, meaning that all multiple aspects of an item,\n * such as its Icon, Gameplay Abilities, Weight, Quality and so on are defined by fragments.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryItemFragment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Represents a particular aspect of an inventory item.\n\nInventory items are built by aggregation, meaning that all multiple aspects of an item,\nsuch as its Icon, Gameplay Abilities, Weight, Quality and so on are defined by fragments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[] = {
		{ "Category", "Fragment" },
		{ "Comment", "/** Tags that this fragment contributes to the owning definition. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Tags that this fragment contributes to the owning definition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OperationTags_MetaData[] = {
		{ "Categories", "Inventory.Item.Fragment.Operation" },
		{ "Category", "Fragment" },
		{ "Comment", "/** Tags representing operations supported by this fragment. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItemFragment.h" },
		{ "ToolTip", "Tags representing operations supported by this fragment." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OperationTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_ApplyFragment, "ApplyFragment" }, // 1455052774
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_EvaluateOperation, "EvaluateOperation" }, // 2614226973
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_GetItemTags, "GetItemTags" }, // 1880577852
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_GetSupportedOperationTags, "GetSupportedOperationTags" }, // 1468791138
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryCreated, "HandleMemoryCreated" }, // 3119520179
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryRemoved, "HandleMemoryRemoved" }, // 3474165234
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_HandleMemoryUpdated, "HandleMemoryUpdated" }, // 3395713330
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_InitializeFragment, "InitializeFragment" }, // 2402507357
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasAuthority, "ItemHasAuthority" }, // 898318166
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_ItemHasFragment, "ItemHasFragment" }, // 2593673152
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_OnApplyFragment, "OnApplyFragment" }, // 2593369036
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_OnEvaluateOperation, "OnEvaluateOperation" }, // 1948509251
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_OnInitializeFragment, "OnInitializeFragment" }, // 1717030127
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_OnPerformOperation, "OnPerformOperation" }, // 2906508629
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_OnRevertFragment, "OnRevertFragment" }, // 707349123
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_PerformOperation, "PerformOperation" }, // 2729013149
		{ &Z_Construct_UFunction_UNinjaInventoryItemFragment_RevertFragment, "RevertFragment" }, // 2149525293
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItemFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemFragment, ItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTags_MetaData), NewProp_ItemTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::NewProp_OperationTags = { "OperationTags", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemFragment, OperationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OperationTags_MetaData), NewProp_OperationTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::NewProp_ItemTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::NewProp_OperationTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UOperableItemInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItemFragment, IOperableItemInterface), false },  // 1843980662
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::ClassParams = {
	&UNinjaInventoryItemFragment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItemFragment()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItemFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItemFragment.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItemFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItemFragment.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryItemFragment>()
{
	return UNinjaInventoryItemFragment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItemFragment);
UNinjaInventoryItemFragment::~UNinjaInventoryItemFragment() {}
// End Class UNinjaInventoryItemFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItemFragment, UNinjaInventoryItemFragment::StaticClass, TEXT("UNinjaInventoryItemFragment"), &Z_Registration_Info_UClass_UNinjaInventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItemFragment), 512242453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_3082074200(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
