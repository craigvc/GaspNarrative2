// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryManagerViewModel() {}

// Begin Cross Module References
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryManagerViewModel Function BindToInventoryManager
struct NinjaInventoryManagerViewModel_eventBindToInventoryManager_Parms
{
	UNinjaInventoryManagerComponent* InventoryManager;
};
static const FName NAME_UNinjaInventoryManagerViewModel_BindToInventoryManager = FName(TEXT("BindToInventoryManager"));
void UNinjaInventoryManagerViewModel::BindToInventoryManager(UNinjaInventoryManagerComponent* InventoryManager)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerViewModel_BindToInventoryManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryManagerViewModel_eventBindToInventoryManager_Parms Parms;
		Parms.InventoryManager=InventoryManager;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		BindToInventoryManager_Implementation(InventoryManager);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Allows View Models to bind to delegates exposed by the Inventory Manager.\n\x09 * \n\x09 * This can also be used to access/bind to delegates exposed by the Ability System Component\n\x09 * related to/provided by the Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Allows View Models to bind to delegates exposed by the Inventory Manager.\n\nThis can also be used to access/bind to delegates exposed by the Ability System Component\nrelated to/provided by the Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerViewModel_eventBindToInventoryManager_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel, nullptr, "BindToInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::PropPointers), sizeof(NinjaInventoryManagerViewModel_eventBindToInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerViewModel_eventBindToInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerViewModel::execBindToInventoryManager)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToInventoryManager_Implementation(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerViewModel Function BindToInventoryManager

// Begin Class UNinjaInventoryManagerViewModel Function ClearData
static const FName NAME_UNinjaInventoryManagerViewModel_ClearData = FName(TEXT("ClearData"));
void UNinjaInventoryManagerViewModel::ClearData()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerViewModel_ClearData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ClearData_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Clears the view model due to the Inventory Manager being cleared.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Clears the view model due to the Inventory Manager being cleared." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel, nullptr, "ClearData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerViewModel::execClearData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearData_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerViewModel Function ClearData

// Begin Class UNinjaInventoryManagerViewModel Function GetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics
{
	struct NinjaInventoryManagerViewModel_eventGetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Provides the current inventory manager set to this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Provides the current inventory manager set to this view model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerViewModel_eventGetInventoryManager_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel, nullptr, "GetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::NinjaInventoryManagerViewModel_eventGetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::NinjaInventoryManagerViewModel_eventGetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerViewModel::execGetInventoryManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryManagerComponent**)Z_Param__Result=P_THIS->GetInventoryManager();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerViewModel Function GetInventoryManager

// Begin Class UNinjaInventoryManagerViewModel Function InitializeData
static const FName NAME_UNinjaInventoryManagerViewModel_InitializeData = FName(TEXT("InitializeData"));
void UNinjaInventoryManagerViewModel::InitializeData()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerViewModel_InitializeData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitializeData_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Initializes the view model using a new Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Initializes the view model using a new Inventory Manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel, nullptr, "InitializeData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerViewModel::execInitializeData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeData_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerViewModel Function InitializeData

// Begin Class UNinjaInventoryManagerViewModel Function SetInventoryManager
struct Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics
{
	struct NinjaInventoryManagerViewModel_eventSetInventoryManager_Parms
	{
		UNinjaInventoryManagerComponent* InventoryManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Sets or clear the inventory manager assigned to this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Sets or clear the inventory manager assigned to this view model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerViewModel_eventSetInventoryManager_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel, nullptr, "SetInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::NinjaInventoryManagerViewModel_eventSetInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::NinjaInventoryManagerViewModel_eventSetInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerViewModel::execSetInventoryManager)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventoryManager(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerViewModel Function SetInventoryManager

// Begin Class UNinjaInventoryManagerViewModel Function UnbindFromInventoryManager
struct NinjaInventoryManagerViewModel_eventUnbindFromInventoryManager_Parms
{
	UNinjaInventoryManagerComponent* InventoryManager;
};
static const FName NAME_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager = FName(TEXT("UnbindFromInventoryManager"));
void UNinjaInventoryManagerViewModel::UnbindFromInventoryManager(UNinjaInventoryManagerComponent* InventoryManager)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInventoryManagerViewModel_eventUnbindFromInventoryManager_Parms Parms;
		Parms.InventoryManager=InventoryManager;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UnbindFromInventoryManager_Implementation(InventoryManager);
	}
}
struct Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Allows view Models to unbind from delegates from an Item and/or its fragments.\n\x09 *\n\x09 * This can also be used to access/unbind from delegates exposed by the Ability System Component\n\x09 * related to/provided by the Inventory Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Allows view Models to unbind from delegates from an Item and/or its fragments.\n\nThis can also be used to access/unbind from delegates exposed by the Ability System Component\nrelated to/provided by the Inventory Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryManagerViewModel_eventUnbindFromInventoryManager_Parms, InventoryManager), Z_Construct_UClass_UNinjaInventoryManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel, nullptr, "UnbindFromInventoryManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::PropPointers), sizeof(NinjaInventoryManagerViewModel_eventUnbindFromInventoryManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInventoryManagerViewModel_eventUnbindFromInventoryManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryManagerViewModel::execUnbindFromInventoryManager)
{
	P_GET_OBJECT(UNinjaInventoryManagerComponent,Z_Param_InventoryManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromInventoryManager_Implementation(Z_Param_InventoryManager);
	P_NATIVE_END;
}
// End Class UNinjaInventoryManagerViewModel Function UnbindFromInventoryManager

// Begin Class UNinjaInventoryManagerViewModel
void UNinjaInventoryManagerViewModel::StaticRegisterNativesUNinjaInventoryManagerViewModel()
{
	UClass* Class = UNinjaInventoryManagerViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToInventoryManager", &UNinjaInventoryManagerViewModel::execBindToInventoryManager },
		{ "ClearData", &UNinjaInventoryManagerViewModel::execClearData },
		{ "GetInventoryManager", &UNinjaInventoryManagerViewModel::execGetInventoryManager },
		{ "InitializeData", &UNinjaInventoryManagerViewModel::execInitializeData },
		{ "SetInventoryManager", &UNinjaInventoryManagerViewModel::execSetInventoryManager },
		{ "UnbindFromInventoryManager", &UNinjaInventoryManagerViewModel::execUnbindFromInventoryManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryManagerViewModel);
UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel_NoRegister()
{
	return UNinjaInventoryManagerViewModel::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for view models exposing aspects of the inventory manager. \n */" },
		{ "IncludePath", "UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Base class for view models exposing aspects of the inventory manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInventoryManager_MetaData[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/** Informs if this view model has an item assigned to it. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryManagerViewModel.h" },
		{ "ToolTip", "Informs if this view model has an item assigned to it." },
	};
#endif // WITH_METADATA
	static void NewProp_bHasInventoryManager_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryManagerViewModel_BindToInventoryManager, "BindToInventoryManager" }, // 1526339583
		{ &Z_Construct_UFunction_UNinjaInventoryManagerViewModel_ClearData, "ClearData" }, // 292354625
		{ &Z_Construct_UFunction_UNinjaInventoryManagerViewModel_GetInventoryManager, "GetInventoryManager" }, // 1917128470
		{ &Z_Construct_UFunction_UNinjaInventoryManagerViewModel_InitializeData, "InitializeData" }, // 2216494697
		{ &Z_Construct_UFunction_UNinjaInventoryManagerViewModel_SetInventoryManager, "SetInventoryManager" }, // 3853798082
		{ &Z_Construct_UFunction_UNinjaInventoryManagerViewModel_UnbindFromInventoryManager, "UnbindFromInventoryManager" }, // 344603682
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryManagerViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::NewProp_bHasInventoryManager_SetBit(void* Obj)
{
	((UNinjaInventoryManagerViewModel*)Obj)->bHasInventoryManager = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::NewProp_bHasInventoryManager = { "bHasInventoryManager", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInventoryManagerViewModel), &Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::NewProp_bHasInventoryManager_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInventoryManager_MetaData), NewProp_bHasInventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::NewProp_bHasInventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::ClassParams = {
	&UNinjaInventoryManagerViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryManagerViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryManagerViewModel.OuterSingleton, Z_Construct_UClass_UNinjaInventoryManagerViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryManagerViewModel.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryManagerViewModel>()
{
	return UNinjaInventoryManagerViewModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryManagerViewModel);
UNinjaInventoryManagerViewModel::~UNinjaInventoryManagerViewModel() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UNinjaInventoryManagerViewModel, bHasInventoryManager)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UNinjaInventoryManagerViewModel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UNinjaInventoryManagerViewModel, bHasInventoryManager)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UNinjaInventoryManagerViewModel);
// End Class UNinjaInventoryManagerViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryManagerViewModel, UNinjaInventoryManagerViewModel::StaticClass, TEXT("UNinjaInventoryManagerViewModel"), &Z_Registration_Info_UClass_UNinjaInventoryManagerViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryManagerViewModel), 314630145U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_1819365771(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryManagerViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
