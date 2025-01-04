// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Interfaces/InventoryItemViewInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemViewInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryItemViewInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryItemViewInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Interface UInventoryItemViewInterface Function CompareItem
struct InventoryItemViewInterface_eventCompareItem_Parms
{
	UNinjaInventoryItem* OtherItem;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryItemViewInterface_eventCompareItem_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInventoryItemViewInterface::CompareItem(UNinjaInventoryItem* OtherItem) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CompareItem instead.");
	InventoryItemViewInterface_eventCompareItem_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryItemViewInterface_CompareItem = FName(TEXT("CompareItem"));
bool IInventoryItemViewInterface::Execute_CompareItem(const UObject* O, UNinjaInventoryItem* OtherItem)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventCompareItem_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_CompareItem);
	if (Func)
	{
		Parms.OtherItem=OtherItem;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CompareItem_Implementation(OtherItem);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Compares this View's Item Instance with the one provided. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Compares this View's Item Instance with the one provided." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherItem;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::NewProp_OtherItem = { "OtherItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemViewInterface_eventCompareItem_Parms, OtherItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryItemViewInterface_eventCompareItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryItemViewInterface_eventCompareItem_Parms), &Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::NewProp_OtherItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "CompareItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventCompareItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventCompareItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execCompareItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_OtherItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CompareItem_Implementation(Z_Param_OtherItem);
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function CompareItem

// Begin Interface UInventoryItemViewInterface Function GetContainer
struct InventoryItemViewInterface_eventGetContainer_Parms
{
	UNinjaInventoryContainer* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryItemViewInterface_eventGetContainer_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaInventoryContainer* IInventoryItemViewInterface::GetContainer() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetContainer instead.");
	InventoryItemViewInterface_eventGetContainer_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryItemViewInterface_GetContainer = FName(TEXT("GetContainer"));
UNinjaInventoryContainer* IInventoryItemViewInterface::Execute_GetContainer(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventGetContainer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_GetContainer);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetContainer_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Provides the container backing this view.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Provides the container backing this view." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemViewInterface_eventGetContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "GetContainer", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventGetContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventGetContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execGetContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetContainer_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function GetContainer

// Begin Interface UInventoryItemViewInterface Function GetItem
struct InventoryItemViewInterface_eventGetItem_Parms
{
	UNinjaInventoryItem* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryItemViewInterface_eventGetItem_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaInventoryItem* IInventoryItemViewInterface::GetItem() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItem instead.");
	InventoryItemViewInterface_eventGetItem_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryItemViewInterface_GetItem = FName(TEXT("GetItem"));
UNinjaInventoryItem* IInventoryItemViewInterface::Execute_GetItem(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventGetItem_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_GetItem);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetItem_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Provides the item currently assigned to this view. May be null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Provides the item currently assigned to this view. May be null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemViewInterface_eventGetItem_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "GetItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventGetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventGetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_GetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_GetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execGetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItem**)Z_Param__Result=P_THIS->GetItem_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function GetItem

// Begin Interface UInventoryItemViewInterface Function HasItem
struct InventoryItemViewInterface_eventHasItem_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryItemViewInterface_eventHasItem_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInventoryItemViewInterface::HasItem() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HasItem instead.");
	InventoryItemViewInterface_eventHasItem_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryItemViewInterface_HasItem = FName(TEXT("HasItem"));
bool IInventoryItemViewInterface::Execute_HasItem(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventHasItem_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_HasItem);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->HasItem_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Checks if this Item View has an Item assigned to it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Checks if this Item View has an Item assigned to it." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryItemViewInterface_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryItemViewInterface_eventHasItem_Parms), &Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "HasItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventHasItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_HasItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_HasItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execHasItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function HasItem

// Begin Interface UInventoryItemViewInterface Function SetContainer
struct InventoryItemViewInterface_eventSetContainer_Parms
{
	UNinjaInventoryContainer* NewContainer;
};
void IInventoryItemViewInterface::SetContainer(UNinjaInventoryContainer* NewContainer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetContainer instead.");
}
static FName NAME_UInventoryItemViewInterface_SetContainer = FName(TEXT("SetContainer"));
void IInventoryItemViewInterface::Execute_SetContainer(UObject* O, UNinjaInventoryContainer* NewContainer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventSetContainer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_SetContainer);
	if (Func)
	{
		Parms.NewContainer=NewContainer;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		I->SetContainer_Implementation(NewContainer);
	}
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Sets the container hosting this item view. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Sets the container hosting this item view." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::NewProp_NewContainer = { "NewContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemViewInterface_eventSetContainer_Parms, NewContainer), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::NewProp_NewContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "SetContainer", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventSetContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventSetContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execSetContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_NewContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContainer_Implementation(Z_Param_NewContainer);
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function SetContainer

// Begin Interface UInventoryItemViewInterface Function SetItem
struct InventoryItemViewInterface_eventSetItem_Parms
{
	UNinjaInventoryItem* NewItem;
};
void IInventoryItemViewInterface::SetItem(UNinjaInventoryItem* NewItem)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItem instead.");
}
static FName NAME_UInventoryItemViewInterface_SetItem = FName(TEXT("SetItem"));
void IInventoryItemViewInterface::Execute_SetItem(UObject* O, UNinjaInventoryItem* NewItem)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventSetItem_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_SetItem);
	if (Func)
	{
		Parms.NewItem=NewItem;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		I->SetItem_Implementation(NewItem);
	}
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Sets the item represented by this view.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Sets the item represented by this view." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemViewInterface_eventSetItem_Parms, NewItem), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::NewProp_NewItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execSetItem)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem_Implementation(Z_Param_NewItem);
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function SetItem

// Begin Interface UInventoryItemViewInterface Function SetPositionInContainer
struct InventoryItemViewInterface_eventSetPositionInContainer_Parms
{
	int32 NewPosition;
};
void IInventoryItemViewInterface::SetPositionInContainer(int32 NewPosition)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPositionInContainer instead.");
}
static FName NAME_UInventoryItemViewInterface_SetPositionInContainer = FName(TEXT("SetPositionInContainer"));
void IInventoryItemViewInterface::Execute_SetPositionInContainer(UObject* O, int32 NewPosition)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryItemViewInterface::StaticClass()));
	InventoryItemViewInterface_eventSetPositionInContainer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryItemViewInterface_SetPositionInContainer);
	if (Func)
	{
		Parms.NewPosition=NewPosition;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryItemViewInterface*)(O->GetNativeInterfaceAddress(UInventoryItemViewInterface::StaticClass())))
	{
		I->SetPositionInContainer_Implementation(NewPosition);
	}
}
struct Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Item View Interface" },
		{ "Comment", "/**\n\x09 * Sets the position this item view occupies in the parent container.\n\x09 *\n\x09 * This is NOT the Item's position! This is the position that the Item Widget occupies\n\x09 * in a container such as a Panel or List, which is used to move items around!\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
		{ "ToolTip", "Sets the position this item view occupies in the parent container.\n\nThis is NOT the Item's position! This is the position that the Item Widget occupies\nin a container such as a Panel or List, which is used to move items around!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryItemViewInterface_eventSetPositionInContainer_Parms, NewPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::NewProp_NewPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemViewInterface, nullptr, "SetPositionInContainer", nullptr, nullptr, Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::PropPointers), sizeof(InventoryItemViewInterface_eventSetPositionInContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryItemViewInterface_eventSetPositionInContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryItemViewInterface::execSetPositionInContainer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPositionInContainer_Implementation(Z_Param_NewPosition);
	P_NATIVE_END;
}
// End Interface UInventoryItemViewInterface Function SetPositionInContainer

// Begin Interface UInventoryItemViewInterface
void UInventoryItemViewInterface::StaticRegisterNativesUInventoryItemViewInterface()
{
	UClass* Class = UInventoryItemViewInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompareItem", &IInventoryItemViewInterface::execCompareItem },
		{ "GetContainer", &IInventoryItemViewInterface::execGetContainer },
		{ "GetItem", &IInventoryItemViewInterface::execGetItem },
		{ "HasItem", &IInventoryItemViewInterface::execHasItem },
		{ "SetContainer", &IInventoryItemViewInterface::execSetContainer },
		{ "SetItem", &IInventoryItemViewInterface::execSetItem },
		{ "SetPositionInContainer", &IInventoryItemViewInterface::execSetPositionInContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryItemViewInterface);
UClass* Z_Construct_UClass_UInventoryItemViewInterface_NoRegister()
{
	return UInventoryItemViewInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryItemViewInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryItemViewInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_CompareItem, "CompareItem" }, // 1290982137
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_GetContainer, "GetContainer" }, // 591105789
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_GetItem, "GetItem" }, // 1050131358
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_HasItem, "HasItem" }, // 1035842229
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_SetContainer, "SetContainer" }, // 2627603249
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_SetItem, "SetItem" }, // 1096573232
		{ &Z_Construct_UFunction_UInventoryItemViewInterface_SetPositionInContainer, "SetPositionInContainer" }, // 2980304571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryItemViewInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryItemViewInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemViewInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemViewInterface_Statics::ClassParams = {
	&UInventoryItemViewInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemViewInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryItemViewInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryItemViewInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryItemViewInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryItemViewInterface.OuterSingleton, Z_Construct_UClass_UInventoryItemViewInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryItemViewInterface.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UInventoryItemViewInterface>()
{
	return UInventoryItemViewInterface::StaticClass();
}
UInventoryItemViewInterface::UInventoryItemViewInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemViewInterface);
UInventoryItemViewInterface::~UInventoryItemViewInterface() {}
// End Interface UInventoryItemViewInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryItemViewInterface, UInventoryItemViewInterface::StaticClass, TEXT("UInventoryItemViewInterface"), &Z_Registration_Info_UClass_UInventoryItemViewInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryItemViewInterface), 2460705847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_903523325(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryItemViewInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
