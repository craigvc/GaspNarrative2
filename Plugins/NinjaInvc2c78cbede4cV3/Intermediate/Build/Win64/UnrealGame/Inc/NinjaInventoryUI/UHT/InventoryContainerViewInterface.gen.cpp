// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Interfaces/InventoryContainerViewInterface.h"
#include "NinjaInventoryUI/Public/UI/Types/FNinjaInventoryItemView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryContainerViewInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerViewInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerViewInterface_NoRegister();
NINJAINVENTORYUI_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Interface UInventoryContainerViewInterface Function ConfigureItemWidget
struct InventoryContainerViewInterface_eventConfigureItemWidget_Parms
{
	UWidget* ItemWidget;
	UNinjaInventoryItem* Item;
	int32 PositionInContainer;
};
void IInventoryContainerViewInterface::ConfigureItemWidget(UWidget* ItemWidget, UNinjaInventoryItem* Item, int32 PositionInContainer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConfigureItemWidget instead.");
}
static FName NAME_UInventoryContainerViewInterface_ConfigureItemWidget = FName(TEXT("ConfigureItemWidget"));
void IInventoryContainerViewInterface::Execute_ConfigureItemWidget(UObject* O, UWidget* ItemWidget, UNinjaInventoryItem* Item, int32 PositionInContainer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryContainerViewInterface::StaticClass()));
	InventoryContainerViewInterface_eventConfigureItemWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryContainerViewInterface_ConfigureItemWidget);
	if (Func)
	{
		Parms.ItemWidget=ItemWidget;
		Parms.Item=Item;
		Parms.PositionInContainer=PositionInContainer;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryContainerViewInterface*)(O->GetNativeInterfaceAddress(UInventoryContainerViewInterface::StaticClass())))
	{
		I->ConfigureItemWidget_Implementation(ItemWidget,Item,PositionInContainer);
	}
}
struct Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container View Interface" },
		{ "Comment", "/**\n\x09 * Central way to set all required properties in an item widget, via interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerViewInterface.h" },
		{ "ToolTip", "Central way to set all required properties in an item widget, via interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionInContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::NewProp_ItemWidget = { "ItemWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventConfigureItemWidget_Parms, ItemWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemWidget_MetaData), NewProp_ItemWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventConfigureItemWidget_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::NewProp_PositionInContainer = { "PositionInContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventConfigureItemWidget_Parms, PositionInContainer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::NewProp_ItemWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::NewProp_PositionInContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryContainerViewInterface, nullptr, "ConfigureItemWidget", nullptr, nullptr, Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::PropPointers), sizeof(InventoryContainerViewInterface_eventConfigureItemWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryContainerViewInterface_eventConfigureItemWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryContainerViewInterface::execConfigureItemWidget)
{
	P_GET_OBJECT(UWidget,Z_Param_ItemWidget);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_PositionInContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureItemWidget_Implementation(Z_Param_ItemWidget,Z_Param_Item,Z_Param_PositionInContainer);
	P_NATIVE_END;
}
// End Interface UInventoryContainerViewInterface Function ConfigureItemWidget

// Begin Interface UInventoryContainerViewInterface Function CreateItemWidget
struct InventoryContainerViewInterface_eventCreateItemWidget_Parms
{
	UNinjaInventoryItem* Item;
	int32 PositionInContainer;
	UUserWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryContainerViewInterface_eventCreateItemWidget_Parms()
		: ReturnValue(NULL)
	{
	}
};
UUserWidget* IInventoryContainerViewInterface::CreateItemWidget(UNinjaInventoryItem* Item, int32 PositionInContainer)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CreateItemWidget instead.");
	InventoryContainerViewInterface_eventCreateItemWidget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryContainerViewInterface_CreateItemWidget = FName(TEXT("CreateItemWidget"));
UUserWidget* IInventoryContainerViewInterface::Execute_CreateItemWidget(UObject* O, UNinjaInventoryItem* Item, int32 PositionInContainer)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryContainerViewInterface::StaticClass()));
	InventoryContainerViewInterface_eventCreateItemWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryContainerViewInterface_CreateItemWidget);
	if (Func)
	{
		Parms.Item=Item;
		Parms.PositionInContainer=PositionInContainer;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryContainerViewInterface*)(O->GetNativeInterfaceAddress(UInventoryContainerViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CreateItemWidget_Implementation(Item,PositionInContainer);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container View Interface" },
		{ "Comment", "/**\n\x09 * Creates an item widget that can be used by the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerViewInterface.h" },
		{ "ToolTip", "Creates an item widget that can be used by the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionInContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventCreateItemWidget_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::NewProp_PositionInContainer = { "PositionInContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventCreateItemWidget_Parms, PositionInContainer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventCreateItemWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::NewProp_PositionInContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryContainerViewInterface, nullptr, "CreateItemWidget", nullptr, nullptr, Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::PropPointers), sizeof(InventoryContainerViewInterface_eventCreateItemWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryContainerViewInterface_eventCreateItemWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryContainerViewInterface::execCreateItemWidget)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_PositionInContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->CreateItemWidget_Implementation(Z_Param_Item,Z_Param_PositionInContainer);
	P_NATIVE_END;
}
// End Interface UInventoryContainerViewInterface Function CreateItemWidget

// Begin Interface UInventoryContainerViewInterface Function GetContainer
struct InventoryContainerViewInterface_eventGetContainer_Parms
{
	UNinjaInventoryContainer* ReturnValue;

	/** Constructor, initializes return property only **/
	InventoryContainerViewInterface_eventGetContainer_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaInventoryContainer* IInventoryContainerViewInterface::GetContainer() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetContainer instead.");
	InventoryContainerViewInterface_eventGetContainer_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInventoryContainerViewInterface_GetContainer = FName(TEXT("GetContainer"));
UNinjaInventoryContainer* IInventoryContainerViewInterface::Execute_GetContainer(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryContainerViewInterface::StaticClass()));
	InventoryContainerViewInterface_eventGetContainer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryContainerViewInterface_GetContainer);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInventoryContainerViewInterface*)(O->GetNativeInterfaceAddress(UInventoryContainerViewInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetContainer_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container View Interface" },
		{ "Comment", "/**\n\x09 * Provides the container storing this item view.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerViewInterface.h" },
		{ "ToolTip", "Provides the container storing this item view." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventGetContainer_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryContainerViewInterface, nullptr, "GetContainer", nullptr, nullptr, Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::PropPointers), sizeof(InventoryContainerViewInterface_eventGetContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryContainerViewInterface_eventGetContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryContainerViewInterface::execGetContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryContainer**)Z_Param__Result=P_THIS->GetContainer_Implementation();
	P_NATIVE_END;
}
// End Interface UInventoryContainerViewInterface Function GetContainer

// Begin Interface UInventoryContainerViewInterface Function SetItems
struct InventoryContainerViewInterface_eventSetItems_Parms
{
	TArray<FNinjaInventoryItemView> Items;
};
void IInventoryContainerViewInterface::SetItems(TArray<FNinjaInventoryItemView> const& Items)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItems instead.");
}
static FName NAME_UInventoryContainerViewInterface_SetItems = FName(TEXT("SetItems"));
void IInventoryContainerViewInterface::Execute_SetItems(UObject* O, TArray<FNinjaInventoryItemView> const& Items)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryContainerViewInterface::StaticClass()));
	InventoryContainerViewInterface_eventSetItems_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryContainerViewInterface_SetItems);
	if (Func)
	{
		Parms.Items=Items;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryContainerViewInterface*)(O->GetNativeInterfaceAddress(UInventoryContainerViewInterface::StaticClass())))
	{
		I->SetItems_Implementation(Items);
	}
}
struct Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container View Interface" },
		{ "Comment", "/**\n\x09 * Sets new items to the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerViewInterface.h" },
		{ "ToolTip", "Sets new items to the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNinjaInventoryItemView, METADATA_PARAMS(0, nullptr) }; // 1671698782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerViewInterface_eventSetItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1671698782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryContainerViewInterface, nullptr, "SetItems", nullptr, nullptr, Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::PropPointers), sizeof(InventoryContainerViewInterface_eventSetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryContainerViewInterface_eventSetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryContainerViewInterface::execSetItems)
{
	P_GET_TARRAY_REF(FNinjaInventoryItemView,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItems_Implementation(Z_Param_Out_Items);
	P_NATIVE_END;
}
// End Interface UInventoryContainerViewInterface Function SetItems

// Begin Interface UInventoryContainerViewInterface
void UInventoryContainerViewInterface::StaticRegisterNativesUInventoryContainerViewInterface()
{
	UClass* Class = UInventoryContainerViewInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureItemWidget", &IInventoryContainerViewInterface::execConfigureItemWidget },
		{ "CreateItemWidget", &IInventoryContainerViewInterface::execCreateItemWidget },
		{ "GetContainer", &IInventoryContainerViewInterface::execGetContainer },
		{ "SetItems", &IInventoryContainerViewInterface::execSetItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryContainerViewInterface);
UClass* Z_Construct_UClass_UInventoryContainerViewInterface_NoRegister()
{
	return UInventoryContainerViewInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryContainerViewInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerViewInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryContainerViewInterface_ConfigureItemWidget, "ConfigureItemWidget" }, // 156483887
		{ &Z_Construct_UFunction_UInventoryContainerViewInterface_CreateItemWidget, "CreateItemWidget" }, // 594797258
		{ &Z_Construct_UFunction_UInventoryContainerViewInterface_GetContainer, "GetContainer" }, // 966685882
		{ &Z_Construct_UFunction_UInventoryContainerViewInterface_SetItems, "SetItems" }, // 3064782194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryContainerViewInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryContainerViewInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryContainerViewInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryContainerViewInterface_Statics::ClassParams = {
	&UInventoryContainerViewInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryContainerViewInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryContainerViewInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryContainerViewInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryContainerViewInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryContainerViewInterface.OuterSingleton, Z_Construct_UClass_UInventoryContainerViewInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryContainerViewInterface.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UInventoryContainerViewInterface>()
{
	return UInventoryContainerViewInterface::StaticClass();
}
UInventoryContainerViewInterface::UInventoryContainerViewInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryContainerViewInterface);
UInventoryContainerViewInterface::~UInventoryContainerViewInterface() {}
// End Interface UInventoryContainerViewInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryContainerViewInterface, UInventoryContainerViewInterface::StaticClass, TEXT("UInventoryContainerViewInterface"), &Z_Registration_Info_UClass_UInventoryContainerViewInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryContainerViewInterface), 1194738476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_2648754731(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerViewInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
