// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h"
#include "NinjaInventory/Public/Types/FInventoryDefaultItemMemory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryItemDataViewModel() {}

// Begin Cross Module References
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister();
NINJAINVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryDefaultItemMemory();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemDataViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryItemDataViewModel Function ClearData
static const FName NAME_UNinjaInventoryItemDataViewModel_ClearData = FName(TEXT("ClearData"));
void UNinjaInventoryItemDataViewModel::ClearData()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemDataViewModel_ClearData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ClearData_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/**\n\x09 * Clears the view model, resetting it to the initial state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Clears the view model, resetting it to the initial state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataViewModel, nullptr, "ClearData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataViewModel::execClearData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearData_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataViewModel Function ClearData

// Begin Class UNinjaInventoryItemDataViewModel Function GetItemData
struct Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics
{
	struct NinjaInventoryItemDataViewModel_eventGetItemData_Parms
	{
		const UNinjaInventoryItemDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Provides the current item data set to this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Provides the current item data set to this view model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataViewModel_eventGetItemData_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataViewModel, nullptr, "GetItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::NinjaInventoryItemDataViewModel_eventGetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::NinjaInventoryItemDataViewModel_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataViewModel::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UNinjaInventoryItemDataAsset**)Z_Param__Result=P_THIS->GetItemData();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataViewModel Function GetItemData

// Begin Class UNinjaInventoryItemDataViewModel Function InitializeData
static const FName NAME_UNinjaInventoryItemDataViewModel_InitializeData = FName(TEXT("InitializeData"));
void UNinjaInventoryItemDataViewModel::InitializeData()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryItemDataViewModel_InitializeData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeData_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/**\n\x09 * Initializes the view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Initializes the view model." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataViewModel, nullptr, "InitializeData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataViewModel::execInitializeData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeData_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataViewModel Function InitializeData

// Begin Class UNinjaInventoryItemDataViewModel Function SetDefaultMemories
struct Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics
{
	struct NinjaInventoryItemDataViewModel_eventSetDefaultMemories_Parms
	{
		TArray<FInventoryDefaultItemMemory> NewDefaultMemories;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Sets memories that could be used in conjunction with the Item Data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Sets memories that could be used in conjunction with the Item Data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewDefaultMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDefaultMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::NewProp_NewDefaultMemories_Inner = { "NewDefaultMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::NewProp_NewDefaultMemories = { "NewDefaultMemories", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataViewModel_eventSetDefaultMemories_Parms, NewDefaultMemories), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::NewProp_NewDefaultMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::NewProp_NewDefaultMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataViewModel, nullptr, "SetDefaultMemories", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::NinjaInventoryItemDataViewModel_eventSetDefaultMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::NinjaInventoryItemDataViewModel_eventSetDefaultMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataViewModel::execSetDefaultMemories)
{
	P_GET_TARRAY_REF(FInventoryDefaultItemMemory,Z_Param_Out_NewDefaultMemories);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultMemories(Z_Param_Out_NewDefaultMemories);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataViewModel Function SetDefaultMemories

// Begin Class UNinjaInventoryItemDataViewModel Function SetItemData
struct Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics
{
	struct NinjaInventoryItemDataViewModel_eventSetItemData_Parms
	{
		const UNinjaInventoryItemDataAsset* NewItemData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Sets or clear the item data assigned to this view model.\n\x09 * If the data is cleared (set to null), memories are also cleared.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Sets or clear the item data assigned to this view model.\nIf the data is cleared (set to null), memories are also cleared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewItemData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::NewProp_NewItemData = { "NewItemData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryItemDataViewModel_eventSetItemData_Parms, NewItemData), Z_Construct_UClass_UNinjaInventoryItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewItemData_MetaData), NewProp_NewItemData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::NewProp_NewItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryItemDataViewModel, nullptr, "SetItemData", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::NinjaInventoryItemDataViewModel_eventSetItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::NinjaInventoryItemDataViewModel_eventSetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryItemDataViewModel::execSetItemData)
{
	P_GET_OBJECT(UNinjaInventoryItemDataAsset,Z_Param_NewItemData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItemData(Z_Param_NewItemData);
	P_NATIVE_END;
}
// End Class UNinjaInventoryItemDataViewModel Function SetItemData

// Begin Class UNinjaInventoryItemDataViewModel
void UNinjaInventoryItemDataViewModel::StaticRegisterNativesUNinjaInventoryItemDataViewModel()
{
	UClass* Class = UNinjaInventoryItemDataViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearData", &UNinjaInventoryItemDataViewModel::execClearData },
		{ "GetItemData", &UNinjaInventoryItemDataViewModel::execGetItemData },
		{ "InitializeData", &UNinjaInventoryItemDataViewModel::execInitializeData },
		{ "SetDefaultMemories", &UNinjaInventoryItemDataViewModel::execSetDefaultMemories },
		{ "SetItemData", &UNinjaInventoryItemDataViewModel::execSetItemData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryItemDataViewModel);
UClass* Z_Construct_UClass_UNinjaInventoryItemDataViewModel_NoRegister()
{
	return UNinjaInventoryItemDataViewModel::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for view models exposing aspects of an item data.\n * Can be used to support view models that won't require specific information from an item.\n */" },
		{ "IncludePath", "UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Base class for view models exposing aspects of an item data.\nCan be used to support view models that won't require specific information from an item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasItemData_MetaData[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/** Informs if this view model has item data assigned to it. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Informs if this view model has item data assigned to it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMemories_MetaData[] = {
		{ "Category", "Inventory Item View Model" },
		{ "Comment", "/** Default memories that might be granted from initial items or loot. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryItemDataViewModel.h" },
		{ "ToolTip", "Default memories that might be granted from initial items or loot." },
	};
#endif // WITH_METADATA
	static void NewProp_bHasItemData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_ClearData, "ClearData" }, // 787251391
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_GetItemData, "GetItemData" }, // 3954021982
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_InitializeData, "InitializeData" }, // 867627642
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetDefaultMemories, "SetDefaultMemories" }, // 2373286356
		{ &Z_Construct_UFunction_UNinjaInventoryItemDataViewModel_SetItemData, "SetItemData" }, // 3053297257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryItemDataViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_bHasItemData_SetBit(void* Obj)
{
	((UNinjaInventoryItemDataViewModel*)Obj)->bHasItemData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_bHasItemData = { "bHasItemData", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryItemDataViewModel), &Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_bHasItemData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasItemData_MetaData), NewProp_bHasItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_DefaultMemories_Inner = { "DefaultMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInventoryDefaultItemMemory, METADATA_PARAMS(0, nullptr) }; // 3775202926
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_DefaultMemories = { "DefaultMemories", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryItemDataViewModel, DefaultMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMemories_MetaData), NewProp_DefaultMemories_MetaData) }; // 3775202926
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_bHasItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_DefaultMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::NewProp_DefaultMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::ClassParams = {
	&UNinjaInventoryItemDataViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryItemDataViewModel()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryItemDataViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryItemDataViewModel.OuterSingleton, Z_Construct_UClass_UNinjaInventoryItemDataViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryItemDataViewModel.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryItemDataViewModel>()
{
	return UNinjaInventoryItemDataViewModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryItemDataViewModel);
UNinjaInventoryItemDataViewModel::~UNinjaInventoryItemDataViewModel() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UNinjaInventoryItemDataViewModel, bHasItemData)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UNinjaInventoryItemDataViewModel, DefaultMemories)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UNinjaInventoryItemDataViewModel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UNinjaInventoryItemDataViewModel, bHasItemData)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UNinjaInventoryItemDataViewModel, DefaultMemories)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UNinjaInventoryItemDataViewModel);
// End Class UNinjaInventoryItemDataViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryItemDataViewModel, UNinjaInventoryItemDataViewModel::StaticClass, TEXT("UNinjaInventoryItemDataViewModel"), &Z_Registration_Info_UClass_UNinjaInventoryItemDataViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryItemDataViewModel), 2473069734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_2916433052(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryItemDataViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
