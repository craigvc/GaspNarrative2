// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventory/Public/Data/NinjaInventoryItemDataAsset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItemDataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventory();
// End Cross Module References

// Begin Class UNinjaInventoryItemDataAsset Function ApplyFragments
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics
{
	struct NinjaInventoryItemDataAsset_eventApplyFragments_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Applies all fragments from this definition on an Item that has been granted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Applies all fragments from this definition on an Item that has been granted." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventApplyFragments_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "ApplyFragments", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::NinjaInventoryItemDataAsset_eventApplyFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::NinjaInventoryItemDataAsset_eventApplyFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execApplyFragments)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyFragments(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function ApplyFragments

// Begin Class UNinjaInventoryItemDataAsset Function FindFragmentByClass
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics
{
	struct NinjaInventoryItemDataAsset_eventFindFragmentByClass_Parms
	{
		TSubclassOf<UNinjaInventoryItemFragment> FragmentClass;
		UNinjaInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Retrieves a fragment by a given class.\n\x09 * \n\x09 * @param FragmentClass\x09\x09\x09""Fragment type retrieved from the Item Data.\n\x09 * @return\x09\x09\x09\x09\x09\x09The Fragment instance related to the provided class.\n\x09 */" },
		{ "DeterminesOutputType", "FragmentClass" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Retrieves a fragment by a given class.\n\n@param FragmentClass                 Fragment type retrieved from the Item Data.\n@return                                              The Fragment instance related to the provided class." },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::NewProp_FragmentClass = { "FragmentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventFindFragmentByClass_Parms, FragmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventFindFragmentByClass_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::NewProp_FragmentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "FindFragmentByClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::NinjaInventoryItemDataAsset_eventFindFragmentByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::NinjaInventoryItemDataAsset_eventFindFragmentByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execFindFragmentByClass)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByClass(Z_Param_FragmentClass);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function FindFragmentByClass

// Begin Class UNinjaInventoryItemDataAsset Function FindFragmentByInterface
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics
{
	struct NinjaInventoryItemDataAsset_eventFindFragmentByInterface_Parms
	{
		TSubclassOf<UInterface> FragmentInterface;
		UNinjaInventoryItemFragment* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Retrieves a fragment implementing a given interface.\n\x09 *\n\x09 * Be aware that if multiple fragments are found for the same interface, the first\n\x09 * one will be returned. If you need all of them, then use \"FindFragmentsByInterface\".\n\x09 * \n\x09 * @param FragmentInterface\x09\x09Interface implemented by the fragment.\n\x09 * @return\x09\x09\x09\x09\x09\x09""First fragment instance implementing the provided interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Retrieves a fragment implementing a given interface.\n\nBe aware that if multiple fragments are found for the same interface, the first\none will be returned. If you need all of them, then use \"FindFragmentsByInterface\".\n\n@param FragmentInterface             Interface implemented by the fragment.\n@return                                              First fragment instance implementing the provided interface." },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::NewProp_FragmentInterface = { "FragmentInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventFindFragmentByInterface_Parms, FragmentInterface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventFindFragmentByInterface_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::NewProp_FragmentInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "FindFragmentByInterface", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::NinjaInventoryItemDataAsset_eventFindFragmentByInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::NinjaInventoryItemDataAsset_eventFindFragmentByInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execFindFragmentByInterface)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemFragment**)Z_Param__Result=P_THIS->FindFragmentByInterface(Z_Param_FragmentInterface);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function FindFragmentByInterface

// Begin Class UNinjaInventoryItemDataAsset Function FindFragmentsByInterface
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics
{
	struct NinjaInventoryItemDataAsset_eventFindFragmentsByInterface_Parms
	{
		TSubclassOf<UInterface> FragmentInterface;
		TArray<UNinjaInventoryItemFragment*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Retrieves all fragment implementing a given interface.\n\x09 *\n\x09 * @param FragmentInterface\x09\x09Interface implemented by the fragment.\n\x09 * @return\x09\x09\x09\x09\x09\x09""All fragment instances implementing the provided interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Retrieves all fragment implementing a given interface.\n\n@param FragmentInterface             Interface implemented by the fragment.\n@return                                              All fragment instances implementing the provided interface." },
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
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NewProp_FragmentInterface = { "FragmentInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventFindFragmentsByInterface_Parms, FragmentInterface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventFindFragmentsByInterface_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NewProp_FragmentInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "FindFragmentsByInterface", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NinjaInventoryItemDataAsset_eventFindFragmentsByInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::NinjaInventoryItemDataAsset_eventFindFragmentsByInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execFindFragmentsByInterface)
{
	P_GET_OBJECT(UClass,Z_Param_FragmentInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInventoryItemFragment*>*)Z_Param__Result=P_THIS->FindFragmentsByInterface(Z_Param_FragmentInterface);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function FindFragmentsByInterface

// Begin Class UNinjaInventoryItemDataAsset Function GetDefaultInstanceClass
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics
{
	struct NinjaInventoryItemDataAsset_eventGetDefaultInstanceClass_Parms
	{
		TSubclassOf<UNinjaInventoryItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Provides the Default Instance Class defined in this data asset.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09The default Item Instance class that should be used for this item.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Provides the Default Instance Class defined in this data asset.\n\n@return\n             The default Item Instance class that should be used for this item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventGetDefaultInstanceClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "GetDefaultInstanceClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::NinjaInventoryItemDataAsset_eventGetDefaultInstanceClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::NinjaInventoryItemDataAsset_eventGetDefaultInstanceClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execGetDefaultInstanceClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UNinjaInventoryItem>*)Z_Param__Result=P_THIS->GetDefaultInstanceClass();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function GetDefaultInstanceClass

// Begin Class UNinjaInventoryItemDataAsset Function GetGameplayTags
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics
{
	struct NinjaInventoryItemDataAsset_eventGetGameplayTags_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Provides all tags from this definition, including ones provided by fragments.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09Gameplay Tag Container with all tags defined for this definition, plus the\n\x09 *\x09\x09ones that are contributed by assigned fragments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Provides all tags from this definition, including ones provided by fragments.\n\n@return\n             Gameplay Tag Container with all tags defined for this definition, plus the\n             ones that are contributed by assigned fragments." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventGetGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "GetGameplayTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::NinjaInventoryItemDataAsset_eventGetGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::NinjaInventoryItemDataAsset_eventGetGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execGetGameplayTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetGameplayTags();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function GetGameplayTags

// Begin Class UNinjaInventoryItemDataAsset Function GetSupportedOperations
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics
{
	struct NinjaInventoryItemDataAsset_eventGetSupportedOperations_Parms
	{
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Provides all operations available to this item, based on the current fragments.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09Gameplay Tag Container aggregating all Operation Tags from fragments that\n\x09 *\x09\x09""can support any kind of operation (Operable Aspect/Interface).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Provides all operations available to this item, based on the current fragments.\n\n@return\n             Gameplay Tag Container aggregating all Operation Tags from fragments that\n             can support any kind of operation (Operable Aspect/Interface)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventGetSupportedOperations_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "GetSupportedOperations", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::NinjaInventoryItemDataAsset_eventGetSupportedOperations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::NinjaInventoryItemDataAsset_eventGetSupportedOperations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execGetSupportedOperations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetSupportedOperations();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function GetSupportedOperations

// Begin Class UNinjaInventoryItemDataAsset Function HasFragment
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics
{
	struct NinjaInventoryItemDataAsset_eventHasFragment_Parms
	{
		const UNinjaInventoryItemFragment* Fragment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Checks if this Item Data has a given fragment.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Checks if this Item Data has a given fragment." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventHasFragment_Parms, Fragment), Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
void Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInventoryItemDataAsset_eventHasFragment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryItemDataAsset_eventHasFragment_Parms), &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "HasFragment", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NinjaInventoryItemDataAsset_eventHasFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::NinjaInventoryItemDataAsset_eventHasFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execHasFragment)
{
	P_GET_OBJECT(UNinjaInventoryItemFragment,Z_Param_Fragment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasFragment(Z_Param_Fragment);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function HasFragment

// Begin Class UNinjaInventoryItemDataAsset Function InitializeFragments
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics
{
	struct NinjaInventoryItemDataAsset_eventInitializeFragments_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Initializes all fragments from this definition on an Item that has been initialized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Initializes all fragments from this definition on an Item that has been initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventInitializeFragments_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "InitializeFragments", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::NinjaInventoryItemDataAsset_eventInitializeFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::NinjaInventoryItemDataAsset_eventInitializeFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execInitializeFragments)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFragments(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function InitializeFragments

// Begin Class UNinjaInventoryItemDataAsset Function RevertFragments
struct Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics
{
	struct NinjaInventoryItemDataAsset_eventRevertFragments_Parms
	{
		UNinjaInventoryItem* Item;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Item Data" },
		{ "Comment", "/**\n\x09 * Reverts all fragments from this definition on an Item that has been removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Reverts all fragments from this definition on an Item that has been removed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataAsset_eventRevertFragments_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataAsset, nullptr, "RevertFragments", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::NinjaInventoryItemDataAsset_eventRevertFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::NinjaInventoryItemDataAsset_eventRevertFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataAsset::execRevertFragments)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevertFragments(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataAsset Function RevertFragments

// Begin Class UNinjaInventoryItemDataAsset
void UNinjaInventoryItemDataAsset::StaticRegisterNativesUNinjaInventoryItemDataAsset()
{
	UClass* Class = UNinjaInventoryItemDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyFragments", &UNinjaInventoryItemDataAsset::execApplyFragments },
		{ "FindFragmentByClass", &UNinjaInventoryItemDataAsset::execFindFragmentByClass },
		{ "FindFragmentByInterface", &UNinjaInventoryItemDataAsset::execFindFragmentByInterface },
		{ "FindFragmentsByInterface", &UNinjaInventoryItemDataAsset::execFindFragmentsByInterface },
		{ "GetDefaultInstanceClass", &UNinjaInventoryItemDataAsset::execGetDefaultInstanceClass },
		{ "GetGameplayTags", &UNinjaInventoryItemDataAsset::execGetGameplayTags },
		{ "GetSupportedOperations", &UNinjaInventoryItemDataAsset::execGetSupportedOperations },
		{ "HasFragment", &UNinjaInventoryItemDataAsset::execHasFragment },
		{ "InitializeFragments", &UNinjaInventoryItemDataAsset::execInitializeFragments },
		{ "RevertFragments", &UNinjaInventoryItemDataAsset::execRevertFragments },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItemDataAsset);
UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister()
{
	return UNinjaInventoryItemDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Bundles information about an Inventory Item.\n */" },
		{ "IncludePath", "Data/NinjaInventoryItemDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Bundles information about an Inventory Item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "Item Data" },
		{ "Comment", "/** Tags that identify this item. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Tags that identify this item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceClass_MetaData[] = {
		{ "Category", "Item Data" },
		{ "Comment", "/** Default class used to represent instances. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "ToolTip", "Default class used to represent instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_Inner_MetaData[] = {
		{ "Category", "Item Data" },
		{ "Comment", "/** All fragments assigned to this definition */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "All fragments assigned to this definition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[] = {
		{ "Category", "Item Data" },
		{ "Comment", "/** All fragments assigned to this definition */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/NinjaInventoryItemDataAsset.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "All fragments assigned to this definition" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultInstanceClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_ApplyFragments, "ApplyFragments" }, // 3619090958
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByClass, "FindFragmentByClass" }, // 2954766450
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentByInterface, "FindFragmentByInterface" }, // 1187641192
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_FindFragmentsByInterface, "FindFragmentsByInterface" }, // 1933667969
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetDefaultInstanceClass, "GetDefaultInstanceClass" }, // 358726870
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetGameplayTags, "GetGameplayTags" }, // 2734565612
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_GetSupportedOperations, "GetSupportedOperations" }, // 1030027850
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_HasFragment, "HasFragment" }, // 4161249003
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_InitializeFragments, "InitializeFragments" }, // 263356670
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataAsset_RevertFragments, "RevertFragments" }, // 2906333264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItemDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemDataAsset, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_DefaultInstanceClass = { "DefaultInstanceClass", nullptr, (EPropertyFlags)0x0024080002010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemDataAsset, DefaultInstanceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInstanceClass_MetaData), NewProp_DefaultInstanceClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInventoryItemFragment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_Inner_MetaData), NewProp_Fragments_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemDataAsset, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragments_MetaData), NewProp_Fragments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_DefaultInstanceClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_Fragments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::NewProp_Fragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UItemMagnitudeValueInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInventoryItemDataAsset, IItemMagnitudeValueInterface), false },  // 682410900
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::ClassParams = {
	&UNinjaInventoryItemDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItemDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItemDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItemDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItemDataAsset.OuterSingleton;
}
template<> NINJAINVENTORY_API UClass* StaticClass<UNinjaInventoryItemDataAsset>()
{
	return UNinjaInventoryItemDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItemDataAsset);
UNinjaInventoryItemDataAsset::~UNinjaInventoryItemDataAsset() {}
// End Class UNinjaInventoryItemDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItemDataAsset, UNinjaInventoryItemDataAsset::StaticClass, TEXT("UNinjaInventoryItemDataAsset"), &Z_Registration_Info_UClass_UNinjaInventoryItemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItemDataAsset), 2849897174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_3278278052(TEXT("/Script/NinjaInventory"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Data_NinjaInventoryItemDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
