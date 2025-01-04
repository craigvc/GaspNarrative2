// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/GameFramework/NinjaInventoryItem.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
#include "NinjaInventory/Public/Types/FInventoryStoredFragmentMemory.h"
#include "Runtime/CoreUObject/Public/StructUtils/InstancedStruct.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORY_API UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Delegate FItemEventSignature
struct Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics
{
	struct NinjaInventoryItem_eventItemEventSignature_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventItemEventSignature_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "ItemEventSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::NinjaInventoryItem_eventItemEventSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::NinjaInventoryItem_eventItemEventSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaInventoryItem::FItemEventSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemEventSignature, UNinjaInventoryItem* Item)
{
	struct NinjaInventoryItem_eventItemEventSignature_Parms
	{
		UNinjaInventoryItem* Item;
	};
	NinjaInventoryItem_eventItemEventSignature_Parms Parms;
	Parms.Item=Item;
	ItemEventSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FItemEventSignature

// Begin Class UNinjaInventoryItem Function AddGameplayTag
struct Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics
{
	struct NinjaInventoryItem_eventAddGameplayTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventAddGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "AddGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::NinjaInventoryItem_eventAddGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::NinjaInventoryItem_eventAddGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execAddGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function AddGameplayTag

// Begin Class UNinjaInventoryItem Function ApplyFragments
struct Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Applies all fragments assigned to this instance.\n\x09 * Fragments are applied whenever an item is assigned to an inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Applies all fragments assigned to this instance.\nFragments are applied whenever an item is assigned to an inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "ApplyFragments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execApplyFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFragments();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function ApplyFragments

// Begin Class UNinjaInventoryItem Function FindFragmentByClass
struct Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics
{
	struct NinjaInventoryItem_eventFindFragmentByClass_Parms
	{
		TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;
		UNinjaInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Retrieves a fragment by its class.\n\x09 * \n\x09 * @param FragmentClass\x09\x09\x09""Fragment type retrieved from the item definition.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Fragment instance related to the provided class.\n\x09 */" },
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Retrieves a fragment by its class.\n\n@param FragmentClass                 Fragment type retrieved from the item definition.\n@return                                              The Fragment instance related to the provided class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventFindFragmentByClass_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "FindFragmentByClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::NinjaInventoryItem_eventFindFragmentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::NinjaInventoryItem_eventFindFragmentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execFindFragmentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_FragmentClass);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function FindFragmentByClass

// Begin Class UNinjaInventoryItem Function FindFragmentByInterface
struct Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics
{
	struct NinjaInventoryItem_eventFindFragmentByInterface_Parms
	{
		TSubclassOf<UInterface> FragmentInterface;
		UNinjaInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Retrieves a fragment by an interface.\n\x09 * \n\x09 * @param FragmentInterface\x09\x09Interface implemented by the fragment.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Fragment instance implementing the provided interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Retrieves a fragment by an interface.\n\n@param FragmentInterface             Interface implemented by the fragment.\n@return                                              The Fragment instance implementing the provided interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::NewProp_FragmentInterface = { "FragmentInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventFindFragmentByInterface_Parms, FragmentInterface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventFindFragmentByInterface_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::NewProp_FragmentInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "FindFragmentByInterface", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::NinjaInventoryItem_eventFindFragmentByInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::NinjaInventoryItem_eventFindFragmentByInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execFindFragmentByInterface)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByInterface(Z_Param_FragmentInterface);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function FindFragmentByInterface

// Begin Class UNinjaInventoryItem Function FindFragmentsByInterface
struct Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics
{
	struct NinjaInventoryItem_eventFindFragmentsByInterface_Parms
	{
		TSubclassOf<UInterface> FragmentInterface;
		TArray<UNinjaInventoryItemFragment*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Retrieves all fragments implementing an interface.\n\x09 *\n\x09 * @param FragmentInterface\x09\x09Interface implemented by the fragment.\n\x09 * @return\x09\x09\x09\x09\x09\x09""All fragments implementing the interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Retrieves all fragments implementing an interface.\n\n@param FragmentInterface             Interface implemented by the fragment.\n@return                                              All fragments implementing the interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentInterface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NewProp_FragmentInterface = { "FragmentInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventFindFragmentsByInterface_Parms, FragmentInterface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventFindFragmentsByInterface_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NewProp_FragmentInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "FindFragmentsByInterface", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NinjaInventoryItem_eventFindFragmentsByInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::NinjaInventoryItem_eventFindFragmentsByInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execFindFragmentsByInterface)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItemFragment*>*)Z_Param__Result=P_THIS->FindFragmentsByInterface(Z_Param_FragmentInterface);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function FindFragmentsByInterface

// Begin Class UNinjaInventoryItem Function GetAbilitySystem
struct Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics
{
	struct NinjaInventoryItem_eventGetAbilitySystem_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides the Ability System Component assigned to this item's owner.\n\x09 * Only available if this item is assigned to an Inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides the Ability System Component assigned to this item's owner.\nOnly available if this item is assigned to an Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetAbilitySystem_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::NinjaInventoryItem_eventGetAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::NinjaInventoryItem_eventGetAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystem();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetAbilitySystem

// Begin Class UNinjaInventoryItem Function GetActiveEffectHandle
struct Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics
{
	struct NinjaInventoryItem_eventGetActiveEffectHandle_Parms
	{
		const UNinjaInventoryItemFragment* Fragment;
		FActiveGameplayEffectHandle OutHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides the Active Effect Handle for the fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides the Active Effect Handle for the fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetActiveEffectHandle_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetActiveEffectHandle_Parms, OutHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
void Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventGetActiveEffectHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventGetActiveEffectHandle_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetActiveEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NinjaInventoryItem_eventGetActiveEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::NinjaInventoryItem_eventGetActiveEffectHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetActiveEffectHandle)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_GET_STRUCT_REF(FActiveGameplayEffectHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActiveEffectHandle(Z_Param_Fragment,Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetActiveEffectHandle

// Begin Class UNinjaInventoryItem Function GetData
struct Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics
{
	struct NinjaInventoryItem_eventGetData_Parms
	{
		const UNinjaInventoryItemDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides the item data related to this instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides the item data related to this instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::NinjaInventoryItem_eventGetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::NinjaInventoryItem_eventGetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryItemDataAsset**)Z_Param__Result=P_THIS->GetData();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetData

// Begin Class UNinjaInventoryItem Function GetFragmentMemories
struct Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics
{
	struct NinjaInventoryItem_eventGetFragmentMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Retrieves all memories from all fragments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Retrieves all memories from all fragments." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetFragmentMemories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetFragmentMemories", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::NinjaInventoryItem_eventGetFragmentMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::NinjaInventoryItem_eventGetFragmentMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetFragmentMemories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryDefaultItemMemory>*)Z_Param__Result=P_THIS->GetFragmentMemories();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetFragmentMemories

// Begin Class UNinjaInventoryItem Function GetFragmentMemory
struct Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics
{
	struct NinjaInventoryItem_eventGetFragmentMemory_Parms
	{
		const TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;
		TInstancedStruct<FInventoryFragmentMemory> OutMemory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Retrieves a memory from a fragment.\n\x09 *\n\x09 * @param FragmentClass\x09\x09""Fragment class used to search for the memory.\n\x09 * @param OutMemory\x09\x09\x09Memory found for the Fragment.\n\x09 * @return\x09\x09\x09\x09\x09True if the memory was found, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Retrieves a memory from a fragment.\n\n@param FragmentClass         Fragment class used to search for the memory.\n@param OutMemory                     Memory found for the Fragment.\n@return                                      True if the memory was found, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutMemory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMemory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetFragmentMemory_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentClass_MetaData), NewProp_FragmentClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_OutMemory = { "OutMemory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetFragmentMemory_Parms, OutMemory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutMemory_MetaData), NewProp_OutMemory_MetaData) }; // 111383296
void Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventGetFragmentMemory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventGetFragmentMemory_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_OutMemory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetFragmentMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NinjaInventoryItem_eventGetFragmentMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::NinjaInventoryItem_eventGetFragmentMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetFragmentMemory)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UNinjaInventoryItemFragment>,Z_Param_Out_FragmentClass);
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentMemory>,Z_Param_Out_OutMemory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFragmentMemory(Z_Param_Out_FragmentClass,Z_Param_Out_OutMemory);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetFragmentMemory

// Begin Class UNinjaInventoryItem Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics
{
	struct NinjaInventoryItem_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Manager that currently owns this item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides the Inventory Manager that currently owns this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::NinjaInventoryItem_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::NinjaInventoryItem_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetInventoryManager

// Begin Class UNinjaInventoryItem Function GetItemId
struct Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics
{
	struct NinjaInventoryItem_eventGetItemId_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides the unique UID for this instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides the unique UID for this instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetItemId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetItemId", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::NinjaInventoryItem_eventGetItemId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::NinjaInventoryItem_eventGetItemId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetItemId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetItemId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetItemId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetItemId();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetItemId

// Begin Class UNinjaInventoryItem Function GetOwnedGameplayTags
struct Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics
{
	struct NinjaInventoryItem_eventGetOwnedGameplayTags_Parms
	{
		FGameplayTagContainer TagContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides all Gameplay Tags assigned to this item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides all Gameplay Tags assigned to this item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetOwnedGameplayTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::NewProp_TagContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetOwnedGameplayTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::NinjaInventoryItem_eventGetOwnedGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::NinjaInventoryItem_eventGetOwnedGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetOwnedGameplayTags)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetOwnedGameplayTags(Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetOwnedGameplayTags

// Begin Class UNinjaInventoryItem Function GetSerializableFragmentMemories
struct Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics
{
	struct NinjaInventoryItem_eventGetSerializableFragmentMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Retrieves all memories from fragments that support serialization.\n\x09 * This means fragments implementing the `InventorySerializableFragmentInterface`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Retrieves all memories from fragments that support serialization.\nThis means fragments implementing the `InventorySerializableFragmentInterface`." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetSerializableFragmentMemories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetSerializableFragmentMemories", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::NinjaInventoryItem_eventGetSerializableFragmentMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::NinjaInventoryItem_eventGetSerializableFragmentMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetSerializableFragmentMemories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FInventoryDefaultItemMemory>*)Z_Param__Result=P_THIS->GetSerializableFragmentMemories();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetSerializableFragmentMemories

// Begin Class UNinjaInventoryItem Function GetSupportedOperations
struct Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics
{
	struct NinjaInventoryItem_eventGetSupportedOperations_Parms
	{
		FGameplayTagContainer TagContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Provides all Gameplay Tags representing supported operations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Provides all Gameplay Tags representing supported operations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventGetSupportedOperations_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::NewProp_TagContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "GetSupportedOperations", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::NinjaInventoryItem_eventGetSupportedOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::NinjaInventoryItem_eventGetSupportedOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execGetSupportedOperations)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSupportedOperations(Z_Param_Out_TagContainer);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function GetSupportedOperations

// Begin Class UNinjaInventoryItem Function HasActiveEffectHandle
struct Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics
{
	struct NinjaInventoryItem_eventHasActiveEffectHandle_Parms
	{
		const UNinjaInventoryItemFragment* Fragment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Checks if a given Item Fragment has an Active Effect Handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Checks if a given Item Fragment has an Active Effect Handle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventHasActiveEffectHandle_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventHasActiveEffectHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventHasActiveEffectHandle_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "HasActiveEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NinjaInventoryItem_eventHasActiveEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::NinjaInventoryItem_eventHasActiveEffectHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execHasActiveEffectHandle)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasActiveEffectHandle(Z_Param_Fragment);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function HasActiveEffectHandle

// Begin Class UNinjaInventoryItem Function HasAppliedFragments
struct Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics
{
	struct NinjaInventoryItem_eventHasAppliedFragments_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Informs if fragments for this item were applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Informs if fragments for this item were applied." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventHasAppliedFragments_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventHasAppliedFragments_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "HasAppliedFragments", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::NinjaInventoryItem_eventHasAppliedFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::NinjaInventoryItem_eventHasAppliedFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execHasAppliedFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasAppliedFragments();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function HasAppliedFragments

// Begin Class UNinjaInventoryItem Function HasFragment
struct Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics
{
	struct NinjaInventoryItem_eventHasFragment_Parms
	{
		const UNinjaInventoryItemFragment* Fragment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Ensures that a fragment instance is related to this item's definition.\n\x09 * Some fragments might want to check this before executing certain operations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Ensures that a fragment instance is related to this item's definition.\nSome fragments might want to check this before executing certain operations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventHasFragment_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventHasFragment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventHasFragment_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "HasFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NinjaInventoryItem_eventHasFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::NinjaInventoryItem_eventHasFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_HasFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_HasFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execHasFragment)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFragment(Z_Param_Fragment);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function HasFragment

// Begin Class UNinjaInventoryItem Function HasFragmentMemory
struct Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics
{
	struct NinjaInventoryItem_eventHasFragmentMemory_Parms
	{
		const TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Checks if a fragment already has an initialized memory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Checks if a fragment already has an initialized memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventHasFragmentMemory_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentClass_MetaData), NewProp_FragmentClass_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventHasFragmentMemory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventHasFragmentMemory_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "HasFragmentMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NinjaInventoryItem_eventHasFragmentMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::NinjaInventoryItem_eventHasFragmentMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execHasFragmentMemory)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UNinjaInventoryItemFragment>,Z_Param_Out_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFragmentMemory(Z_Param_Out_FragmentClass);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function HasFragmentMemory

// Begin Class UNinjaInventoryItem Function HasInitializedFragments
struct Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics
{
	struct NinjaInventoryItem_eventHasInitializedFragments_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Informs if fragments for this item were initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Informs if fragments for this item were initialized." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventHasInitializedFragments_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventHasInitializedFragments_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "HasInitializedFragments", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::NinjaInventoryItem_eventHasInitializedFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::NinjaInventoryItem_eventHasInitializedFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execHasInitializedFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasInitializedFragments();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function HasInitializedFragments

// Begin Class UNinjaInventoryItem Function HasSameData
struct Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics
{
	struct NinjaInventoryItem_eventHasSameData_Parms
	{
		const UNinjaInventoryItem* OtherItem;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Checks if this item has the same definition as the provided instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Checks if this item has the same definition as the provided instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NewProp_OtherItem = { "OtherItem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventHasSameData_Parms, OtherItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherItem_MetaData), NewProp_OtherItem_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventHasSameData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventHasSameData_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NewProp_OtherItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "HasSameData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NinjaInventoryItem_eventHasSameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::NinjaInventoryItem_eventHasSameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_HasSameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_HasSameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execHasSameData)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_OtherItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSameData(Z_Param_OtherItem);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function HasSameData

// Begin Class UNinjaInventoryItem Function InitializeFragmentMemories
struct Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics
{
	struct NinjaInventoryItem_eventInitializeFragmentMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> Memories;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Initializes all fragment memories provided in the array.\n\x09 *\n\x09 * @param Memories\x09\x09\x09""Default memories for fragments. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Initializes all fragment memories provided in the array.\n\n@param Memories                      Default memories for fragments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Memories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::NewProp_Memories_Inner = { "Memories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::NewProp_Memories = { "Memories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventInitializeFragmentMemories_Parms, Memories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memories_MetaData), NewProp_Memories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::NewProp_Memories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::NewProp_Memories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "InitializeFragmentMemories", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::NinjaInventoryItem_eventInitializeFragmentMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::NinjaInventoryItem_eventInitializeFragmentMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execInitializeFragmentMemories)
{
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_Memories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFragmentMemories(Z_Param_Out_Memories);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function InitializeFragmentMemories

// Begin Class UNinjaInventoryItem Function InitializeFragmentMemory
struct Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics
{
	struct NinjaInventoryItem_eventInitializeFragmentMemory_Parms
	{
		const TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;
		TInstancedStruct<FInventoryFragmentMemory> Memory;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Initializes the memory for a certain fragment type.\n\x09 *\n\x09 * Nothing happens if this function is called for a fragment that already has\n\x09 * a memory that has been initialized.\n\x09 * \n\x09 * @param FragmentClass\x09\x09""Fragment class mapped to the memory. \n\x09 * @param Memory\x09\x09\x09Initial memory for the fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Initializes the memory for a certain fragment type.\n\nNothing happens if this function is called for a fragment that already has\na memory that has been initialized.\n\n@param FragmentClass         Fragment class mapped to the memory.\n@param Memory                        Initial memory for the fragment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventInitializeFragmentMemory_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentClass_MetaData), NewProp_FragmentClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventInitializeFragmentMemory_Parms, Memory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) }; // 111383296
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::NewProp_Memory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "InitializeFragmentMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::NinjaInventoryItem_eventInitializeFragmentMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::NinjaInventoryItem_eventInitializeFragmentMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execInitializeFragmentMemory)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UNinjaInventoryItemFragment>,Z_Param_Out_FragmentClass);
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentMemory>,Z_Param_Out_Memory);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFragmentMemory(Z_Param_Out_FragmentClass,Z_Param_Out_Memory);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function InitializeFragmentMemory

// Begin Class UNinjaInventoryItem Function InitializeFragments
struct Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Initializes all fragments assigned to this instance.\n\x09 * Fragments are initialized only once, when the item is instantiated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Initializes all fragments assigned to this instance.\nFragments are initialized only once, when the item is instantiated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "InitializeFragments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execInitializeFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFragments();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function InitializeFragments

// Begin Class UNinjaInventoryItem Function InvalidateEffectHandle
struct Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics
{
	struct NinjaInventoryItem_eventInvalidateEffectHandle_Parms
	{
		const UNinjaInventoryItemFragment* Fragment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Invalidates the Effect Handle and removes the entry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Invalidates the Effect Handle and removes the entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventInvalidateEffectHandle_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::NewProp_Fragment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "InvalidateEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::NinjaInventoryItem_eventInvalidateEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::NinjaInventoryItem_eventInvalidateEffectHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execInvalidateEffectHandle)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InvalidateEffectHandle(Z_Param_Fragment);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function InvalidateEffectHandle

// Begin Class UNinjaInventoryItem Function OwnerHasAuthority
struct Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics
{
	struct NinjaInventoryItem_eventOwnerHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Checks if the owner of this Item has network authority.\n\x09 * Only possible if the item is currently assigned to an Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Checks if the owner of this Item has network authority.\nOnly possible if the item is currently assigned to an Inventory Manager." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItem_eventOwnerHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItem_eventOwnerHasAuthority_Parms), &Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "OwnerHasAuthority", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::NinjaInventoryItem_eventOwnerHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::NinjaInventoryItem_eventOwnerHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execOwnerHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OwnerHasAuthority();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function OwnerHasAuthority

// Begin Class UNinjaInventoryItem Function RemoveFragmentMemory
struct Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics
{
	struct NinjaInventoryItem_eventRemoveFragmentMemory_Parms
	{
		const TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Removes a fragment's memory stored in this item instance, if present.\n\x09 *\n\x09 * Every time a fragment is reverted, the memory is automatically removed, but you can\n\x09 * also decide when to call this function, if you need that to happen at a different time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Removes a fragment's memory stored in this item instance, if present.\n\nEvery time a fragment is reverted, the memory is automatically removed, but you can\nalso decide when to call this function, if you need that to happen at a different time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FragmentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventRemoveFragmentMemory_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentClass_MetaData), NewProp_FragmentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::NewProp_FragmentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "RemoveFragmentMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::NinjaInventoryItem_eventRemoveFragmentMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::NinjaInventoryItem_eventRemoveFragmentMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execRemoveFragmentMemory)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UNinjaInventoryItemFragment>,Z_Param_Out_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFragmentMemory(Z_Param_Out_FragmentClass);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function RemoveFragmentMemory

// Begin Class UNinjaInventoryItem Function RemoveGameplayTag
struct Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics
{
	struct NinjaInventoryItem_eventRemoveGameplayTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventRemoveGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "RemoveGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::NinjaInventoryItem_eventRemoveGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::NinjaInventoryItem_eventRemoveGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execRemoveGameplayTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayTag(Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function RemoveGameplayTag

// Begin Class UNinjaInventoryItem Function RevertFragments
struct Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Reverts all fragments assigned to this instance.\n\x09 * Fragments are reverted whenever an item is removed from an inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Reverts all fragments assigned to this instance.\nFragments are reverted whenever an item is removed from an inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "RevertFragments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execRevertFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertFragments();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function RevertFragments

// Begin Class UNinjaInventoryItem Function SaveActiveEffectHandle
struct Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics
{
	struct NinjaInventoryItem_eventSaveActiveEffectHandle_Parms
	{
		UNinjaInventoryItemFragment* Fragment;
		FActiveGameplayEffectHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Saves a Gameplay Effect Handle from an Inventory Fragment.\n\x09 *\n\x09 * Handles are not saved in the memory structure as they are never replicated. Saving them\n\x09 * in the memory structure is quite wasteful, and leads to unnecessarily complex memories.\n\x09 *\n\x09 * Each fragment can only have one active handle stored. Multiple effects can be added by\n\x09 * the same Gameplay Effect, so that feature should be used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Saves a Gameplay Effect Handle from an Inventory Fragment.\n\nHandles are not saved in the memory structure as they are never replicated. Saving them\nin the memory structure is quite wasteful, and leads to unnecessarily complex memories.\n\nEach fragment can only have one active handle stored. Multiple effects can be added by\nthe same Gameplay Effect, so that feature should be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventSaveActiveEffectHandle_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventSaveActiveEffectHandle_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "SaveActiveEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::NinjaInventoryItem_eventSaveActiveEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::NinjaInventoryItem_eventSaveActiveEffectHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execSaveActiveEffectHandle)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_GET_STRUCT_REF(FActiveGameplayEffectHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveActiveEffectHandle(Z_Param_Fragment,Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function SaveActiveEffectHandle

// Begin Class UNinjaInventoryItem Function SaveDefaultFragmentMemories
struct Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics
{
	struct NinjaInventoryItem_eventSaveDefaultFragmentMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> DefaultItemMemories;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Stores all applicable fragment memories from a default entry. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Stores all applicable fragment memories from a default entry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultItemMemories_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultItemMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultItemMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::NewProp_DefaultItemMemories_Inner = { "DefaultItemMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::NewProp_DefaultItemMemories = { "DefaultItemMemories", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventSaveDefaultFragmentMemories_Parms, DefaultItemMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultItemMemories_MetaData), NewProp_DefaultItemMemories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::NewProp_DefaultItemMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::NewProp_DefaultItemMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "SaveDefaultFragmentMemories", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::NinjaInventoryItem_eventSaveDefaultFragmentMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::NinjaInventoryItem_eventSaveDefaultFragmentMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execSaveDefaultFragmentMemories)
{
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_DefaultItemMemories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveDefaultFragmentMemories(Z_Param_Out_DefaultItemMemories);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function SaveDefaultFragmentMemories

// Begin Class UNinjaInventoryItem Function SaveFragmentMemory
struct Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics
{
	struct NinjaInventoryItem_eventSaveFragmentMemory_Parms
	{
		UNinjaInventoryItemFragment* Fragment;
		TInstancedStruct<FInventoryFragmentMemory> Memory;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item" },
		{ "Comment", "/**\n\x09 * Stores a fragment's memory in this item instance.\n\x09 *\n\x09 * @param Fragment\x09\x09\x09""Fragment that owns the memory.\n\x09 * @param Memory\x09\x09\x09Memory that will be created or updated.\n\x09 * @return\x09\x09\x09\x09\x09Index of the memory that was saved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Stores a fragment's memory in this item instance.\n\n@param Fragment                      Fragment that owns the memory.\n@param Memory                        Memory that will be created or updated.\n@return                                      Index of the memory that was saved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[] = {
		{ "BaseStruct", "/Script/NinjaInventory.InventoryFragmentMemory" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Memory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventSaveFragmentMemory_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventSaveFragmentMemory_Parms, Memory), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Memory_MetaData), NewProp_Memory_MetaData) }; // 111383296
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItem_eventSaveFragmentMemory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NewProp_Memory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItem, nullptr, "SaveFragmentMemory", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NinjaInventoryItem_eventSaveFragmentMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::NinjaInventoryItem_eventSaveFragmentMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItem::execSaveFragmentMemory)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_GET_STRUCT_REF(TInstancedStruct<FInventoryFragmentMemory>,Z_Param_Out_Memory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SaveFragmentMemory(Z_Param_Fragment,Z_Param_Out_Memory);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItem Function SaveFragmentMemory

// Begin Class UNinjaInventoryItem
void UNinjaInventoryItem::StaticRegisterNativesUNinjaInventoryItem()
{
	UClass* Class = UNinjaInventoryItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTag", &UNinjaInventoryItem::execAddGameplayTag },
		{ "ApplyFragments", &UNinjaInventoryItem::execApplyFragments },
		{ "FindFragmentByClass", &UNinjaInventoryItem::execFindFragmentByClass },
		{ "FindFragmentByInterface", &UNinjaInventoryItem::execFindFragmentByInterface },
		{ "FindFragmentsByInterface", &UNinjaInventoryItem::execFindFragmentsByInterface },
		{ "GetAbilitySystem", &UNinjaInventoryItem::execGetAbilitySystem },
		{ "GetActiveEffectHandle", &UNinjaInventoryItem::execGetActiveEffectHandle },
		{ "GetData", &UNinjaInventoryItem::execGetData },
		{ "GetFragmentMemories", &UNinjaInventoryItem::execGetFragmentMemories },
		{ "GetFragmentMemory", &UNinjaInventoryItem::execGetFragmentMemory },
		{ "GetInventoryManager", &UNinjaInventoryItem::execGetInventoryManager },
		{ "GetItemId", &UNinjaInventoryItem::execGetItemId },
		{ "GetOwnedGameplayTags", &UNinjaInventoryItem::execGetOwnedGameplayTags },
		{ "GetSerializableFragmentMemories", &UNinjaInventoryItem::execGetSerializableFragmentMemories },
		{ "GetSupportedOperations", &UNinjaInventoryItem::execGetSupportedOperations },
		{ "HasActiveEffectHandle", &UNinjaInventoryItem::execHasActiveEffectHandle },
		{ "HasAppliedFragments", &UNinjaInventoryItem::execHasAppliedFragments },
		{ "HasFragment", &UNinjaInventoryItem::execHasFragment },
		{ "HasFragmentMemory", &UNinjaInventoryItem::execHasFragmentMemory },
		{ "HasInitializedFragments", &UNinjaInventoryItem::execHasInitializedFragments },
		{ "HasSameData", &UNinjaInventoryItem::execHasSameData },
		{ "InitializeFragmentMemories", &UNinjaInventoryItem::execInitializeFragmentMemories },
		{ "InitializeFragmentMemory", &UNinjaInventoryItem::execInitializeFragmentMemory },
		{ "InitializeFragments", &UNinjaInventoryItem::execInitializeFragments },
		{ "InvalidateEffectHandle", &UNinjaInventoryItem::execInvalidateEffectHandle },
		{ "OwnerHasAuthority", &UNinjaInventoryItem::execOwnerHasAuthority },
		{ "RemoveFragmentMemory", &UNinjaInventoryItem::execRemoveFragmentMemory },
		{ "RemoveGameplayTag", &UNinjaInventoryItem::execRemoveGameplayTag },
		{ "RevertFragments", &UNinjaInventoryItem::execRevertFragments },
		{ "SaveActiveEffectHandle", &UNinjaInventoryItem::execSaveActiveEffectHandle },
		{ "SaveDefaultFragmentMemories", &UNinjaInventoryItem::execSaveDefaultFragmentMemories },
		{ "SaveFragmentMemory", &UNinjaInventoryItem::execSaveFragmentMemory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItem);
UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister()
{
	return UNinjaInventoryItem::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Manages item data and it's fragments.\n *\n * Items can replicate their information and fragment memory, but a pre-requisite for that is that\n * something is replicating the Inventory Items as part of their own replication system.\n *\n * The most common scenario is the Inventory Manager, which will add the Item Instance's replication\n * to itself. Other situations where the Item Instance is not assigned to an Inventory Manager,\n * such as when they are represented by an Item Pickup Actor, must also account for that.\n */" },
		{ "IncludePath", "GameFramework/NinjaInventoryItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Manages item data and it's fragments.\n\nItems can replicate their information and fragment memory, but a pre-requisite for that is that\nsomething is replicating the Inventory Items as part of their own replication system.\n\nThe most common scenario is the Inventory Manager, which will add the Item Instance's replication\nto itself. Other situations where the Item Instance is not assigned to an Inventory Manager,\nsuch as when they are represented by an Item Pickup Actor, must also account for that." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAdded_MetaData[] = {
		{ "Comment", "/** Broadcasts when the item is added to an Inventory. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Broadcasts when the item is added to an Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemoved_MetaData[] = {
		{ "Comment", "/** Broadcasts when the item is removed from an Inventory. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Broadcasts when the item is removed from an Inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInitializedFragments_MetaData[] = {
		{ "Comment", "/**\n\x09 * Informs if this item was fully initialized.\n\x09 * Initialization code only happens in the server, so we need to replicate this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Informs if this item was fully initialized.\nInitialization code only happens in the server, so we need to replicate this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[] = {
		{ "Comment", "/** Identifier for this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Identifier for this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTags_MetaData[] = {
		{ "Comment", "/** Tags for this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Tags for this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentMemoryList_MetaData[] = {
		{ "Comment", "/** All fragment memories assigned to this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "All fragment memories assigned to this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Comment", "/** Item definition backing this item. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Item definition backing this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Inventory Manager that currently owns this item.\n\x09 *\n\x09 * Set by the inventory manager when the item is added and replicated.\n\x09 * Therefore, we don't need to replicate the manager here.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaInventoryItem.h" },
		{ "ToolTip", "Inventory Manager that currently owns this item.\n\nSet by the inventory manager when the item is added and replicated.\nTherefore, we don't need to replicate the manager here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemoved;
	static void NewProp_bHasInitializedFragments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInitializedFragments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentMemoryList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItem_AddGameplayTag, "AddGameplayTag" }, // 2018018660
		{ &Z_Construct_UFunction_UNinjaInventoryItem_ApplyFragments, "ApplyFragments" }, // 3088149321
		{ &Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByClass, "FindFragmentByClass" }, // 3768038191
		{ &Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentByInterface, "FindFragmentByInterface" }, // 1406036101
		{ &Z_Construct_UFunction_UNinjaInventoryItem_FindFragmentsByInterface, "FindFragmentsByInterface" }, // 4128676200
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetAbilitySystem, "GetAbilitySystem" }, // 784032430
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetActiveEffectHandle, "GetActiveEffectHandle" }, // 947634128
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetData, "GetData" }, // 3533645599
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemories, "GetFragmentMemories" }, // 3235033887
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetFragmentMemory, "GetFragmentMemory" }, // 832126213
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetInventoryManager, "GetInventoryManager" }, // 3887042596
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetItemId, "GetItemId" }, // 3655000028
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetOwnedGameplayTags, "GetOwnedGameplayTags" }, // 2864632712
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetSerializableFragmentMemories, "GetSerializableFragmentMemories" }, // 2019499973
		{ &Z_Construct_UFunction_UNinjaInventoryItem_GetSupportedOperations, "GetSupportedOperations" }, // 3042166919
		{ &Z_Construct_UFunction_UNinjaInventoryItem_HasActiveEffectHandle, "HasActiveEffectHandle" }, // 3124087296
		{ &Z_Construct_UFunction_UNinjaInventoryItem_HasAppliedFragments, "HasAppliedFragments" }, // 891391697
		{ &Z_Construct_UFunction_UNinjaInventoryItem_HasFragment, "HasFragment" }, // 3647300524
		{ &Z_Construct_UFunction_UNinjaInventoryItem_HasFragmentMemory, "HasFragmentMemory" }, // 156023505
		{ &Z_Construct_UFunction_UNinjaInventoryItem_HasInitializedFragments, "HasInitializedFragments" }, // 3501511557
		{ &Z_Construct_UFunction_UNinjaInventoryItem_HasSameData, "HasSameData" }, // 420220766
		{ &Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemories, "InitializeFragmentMemories" }, // 3620281284
		{ &Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragmentMemory, "InitializeFragmentMemory" }, // 906192944
		{ &Z_Construct_UFunction_UNinjaInventoryItem_InitializeFragments, "InitializeFragments" }, // 252355711
		{ &Z_Construct_UFunction_UNinjaInventoryItem_InvalidateEffectHandle, "InvalidateEffectHandle" }, // 3626349599
		{ &Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature, "ItemEventSignature__DelegateSignature" }, // 2449320878
		{ &Z_Construct_UFunction_UNinjaInventoryItem_OwnerHasAuthority, "OwnerHasAuthority" }, // 920746748
		{ &Z_Construct_UFunction_UNinjaInventoryItem_RemoveFragmentMemory, "RemoveFragmentMemory" }, // 37690756
		{ &Z_Construct_UFunction_UNinjaInventoryItem_RemoveGameplayTag, "RemoveGameplayTag" }, // 338028912
		{ &Z_Construct_UFunction_UNinjaInventoryItem_RevertFragments, "RevertFragments" }, // 2073713608
		{ &Z_Construct_UFunction_UNinjaInventoryItem_SaveActiveEffectHandle, "SaveActiveEffectHandle" }, // 605813838
		{ &Z_Construct_UFunction_UNinjaInventoryItem_SaveDefaultFragmentMemories, "SaveDefaultFragmentMemories" }, // 973478647
		{ &Z_Construct_UFunction_UNinjaInventoryItem_SaveFragmentMemory, "SaveFragmentMemory" }, // 649739674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_OnItemAdded = { "OnItemAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, OnItemAdded), Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAdded_MetaData), NewProp_OnItemAdded_MetaData) }; // 2449320878
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_OnItemRemoved = { "OnItemRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, OnItemRemoved), Z_Construct_UDelegateFunction_UNinjaInventoryItem_ItemEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemoved_MetaData), NewProp_OnItemRemoved_MetaData) }; // 2449320878
void Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_bHasInitializedFragments_SetBit(void* Obj)
{
	((UNinjaInventoryItem*)Obj)->bHasInitializedFragments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_bHasInitializedFragments = { "bHasInitializedFragments", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNinjaInventoryItem), &Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_bHasInitializedFragments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInitializedFragments_MetaData), NewProp_bHasInitializedFragments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, ItemId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemId_MetaData), NewProp_ItemId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_ItemTags = { "ItemTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, ItemTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTags_MetaData), NewProp_ItemTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_FragmentMemoryList = { "FragmentMemoryList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, FragmentMemoryList), Z_Construct_UScriptStruct_FInventoryStoredFragmentMemoryList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentMemoryList_MetaData), NewProp_FragmentMemoryList_MetaData) }; // 1657798941
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0144000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, ItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0144000000080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItem, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_OnItemAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_OnItemRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_bHasInitializedFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_ItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_ItemTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_FragmentMemoryList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItem_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItem, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItem, IItemMagnitudeValueInterface), false },  // 682410900
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItem_Statics::ClassParams = {
	&UNinjaInventoryItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItem()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItem.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItem.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryItem>()
{
	return UNinjaInventoryItem::StaticClass();
}
void UNinjaInventoryItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bHasInitializedFragments(TEXT("bHasInitializedFragments"));
	static const FName Name_ItemId(TEXT("ItemId"));
	static const FName Name_ItemTags(TEXT("ItemTags"));
	static const FName Name_FragmentMemoryList(TEXT("FragmentMemoryList"));
	static const FName Name_ItemData(TEXT("ItemData"));
	static const FName Name_InventoryManager(TEXT("InventoryManager"));
	const bool bIsValid = true
		&& Name_bHasInitializedFragments == ClassReps[(int32)ENetFields_Private::bHasInitializedFragments].Property->GetFName()
		&& Name_ItemId == ClassReps[(int32)ENetFields_Private::ItemId].Property->GetFName()
		&& Name_ItemTags == ClassReps[(int32)ENetFields_Private::ItemTags].Property->GetFName()
		&& Name_FragmentMemoryList == ClassReps[(int32)ENetFields_Private::FragmentMemoryList].Property->GetFName()
		&& Name_ItemData == ClassReps[(int32)ENetFields_Private::ItemData].Property->GetFName()
		&& Name_InventoryManager == ClassReps[(int32)ENetFields_Private::InventoryManager].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaInventoryItem"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItem);
UNinjaInventoryItem::~UNinjaInventoryItem() {}
// End Class UNinjaInventoryItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItem, UNinjaInventoryItem::StaticClass, TEXT("UNinjaInventoryItem"), &Z_Registration_Info_UClass_UNinjaInventoryItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItem), 1053972855U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_3361994484(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
