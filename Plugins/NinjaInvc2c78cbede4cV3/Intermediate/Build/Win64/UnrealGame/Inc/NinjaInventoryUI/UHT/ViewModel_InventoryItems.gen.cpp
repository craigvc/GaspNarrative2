// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_InventoryItems.h"
#include "NinjaInventoryUI/Public/UI/Types/FNinjaInventoryItemView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_InventoryItems() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_InventoryItems();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_InventoryItems_NoRegister();
NINJAINVENTORYUI_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_InventoryItems Function GetItems
struct Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics
{
	struct ViewModel_InventoryItems_eventGetItems_Parms
	{
		TArray<FNinjaInventoryItemView> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Provides all items (item views) stored in this view model.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryItems.h" },
		{ "ToolTip", "Provides all items (item views) stored in this view model." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNinjaInventoryItemView, METADATA_PARAMS(0, nullptr) }; // 1671698782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryItems_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1671698782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_InventoryItems, nullptr, "GetItems", nullptr, nullptr, Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::ViewModel_InventoryItems_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::ViewModel_InventoryItems_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_InventoryItems_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_InventoryItems_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_InventoryItems::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNinjaInventoryItemView>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// End Class UViewModel_InventoryItems Function GetItems

// Begin Class UViewModel_InventoryItems Function HandleItemAdded
struct ViewModel_InventoryItems_eventHandleItemAdded_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UViewModel_InventoryItems_HandleItemAdded = FName(TEXT("HandleItemAdded"));
void UViewModel_InventoryItems::HandleItemAdded(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UViewModel_InventoryItems_HandleItemAdded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ViewModel_InventoryItems_eventHandleItemAdded_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleItemAdded_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Handles an Inventory Item that was added to the backing inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryItems.h" },
		{ "ToolTip", "Handles an Inventory Item that was added to the backing inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryItems_eventHandleItemAdded_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_InventoryItems, nullptr, "HandleItemAdded", nullptr, nullptr, Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::PropPointers), sizeof(ViewModel_InventoryItems_eventHandleItemAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(ViewModel_InventoryItems_eventHandleItemAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_InventoryItems::execHandleItemAdded)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemAdded_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UViewModel_InventoryItems Function HandleItemAdded

// Begin Class UViewModel_InventoryItems Function HandleItemRemoved
struct ViewModel_InventoryItems_eventHandleItemRemoved_Parms
{
	UNinjaInventoryItem* Item;
};
static const FName NAME_UViewModel_InventoryItems_HandleItemRemoved = FName(TEXT("HandleItemRemoved"));
void UViewModel_InventoryItems::HandleItemRemoved(UNinjaInventoryItem* Item)
{
	UFunction* Func = FindFunctionChecked(NAME_UViewModel_InventoryItems_HandleItemRemoved);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ViewModel_InventoryItems_eventHandleItemRemoved_Parms Parms;
		Parms.Item=Item;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleItemRemoved_Implementation(Item);
	}
}
struct Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Handles an Inventory Item that was removed from the backing inventory.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryItems.h" },
		{ "ToolTip", "Handles an Inventory Item that was removed from the backing inventory." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryItems_eventHandleItemRemoved_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_InventoryItems, nullptr, "HandleItemRemoved", nullptr, nullptr, Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::PropPointers), sizeof(ViewModel_InventoryItems_eventHandleItemRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(ViewModel_InventoryItems_eventHandleItemRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_InventoryItems::execHandleItemRemoved)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemRemoved_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UViewModel_InventoryItems Function HandleItemRemoved

// Begin Class UViewModel_InventoryItems Function HandleItemStorageChanged
struct ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms
{
	UNinjaInventoryItem* Item;
	UNinjaInventoryContainer* OtherContainer;
	int32 Position;
};
static const FName NAME_UViewModel_InventoryItems_HandleItemStorageChanged = FName(TEXT("HandleItemStorageChanged"));
void UViewModel_InventoryItems::HandleItemStorageChanged(UNinjaInventoryItem* Item, UNinjaInventoryContainer* OtherContainer, int32 Position)
{
	UFunction* Func = FindFunctionChecked(NAME_UViewModel_InventoryItems_HandleItemStorageChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms Parms;
		Parms.Item=Item;
		Parms.OtherContainer=OtherContainer;
		Parms.Position=Position;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleItemStorageChanged_Implementation(Item, OtherContainer, Position);
	}
}
struct Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Manager View Model" },
		{ "Comment", "/**\n\x09 * Handles a change in the cached item storage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryItems.h" },
		{ "ToolTip", "Handles a change in the cached item storage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherContainer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms, OtherContainer), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms, Position), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::NewProp_OtherContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_InventoryItems, nullptr, "HandleItemStorageChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::PropPointers), sizeof(ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(ViewModel_InventoryItems_eventHandleItemStorageChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_InventoryItems::execHandleItemStorageChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_OtherContainer);
	P_GET_PROPERTY(FIntProperty,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleItemStorageChanged_Implementation(Z_Param_Item,Z_Param_OtherContainer,Z_Param_Position);
	P_NATIVE_END;
}
// End Class UViewModel_InventoryItems Function HandleItemStorageChanged

// Begin Class UViewModel_InventoryItems
void UViewModel_InventoryItems::StaticRegisterNativesUViewModel_InventoryItems()
{
	UClass* Class = UViewModel_InventoryItems::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItems", &UViewModel_InventoryItems::execGetItems },
		{ "HandleItemAdded", &UViewModel_InventoryItems::execHandleItemAdded },
		{ "HandleItemRemoved", &UViewModel_InventoryItems::execHandleItemRemoved },
		{ "HandleItemStorageChanged", &UViewModel_InventoryItems::execHandleItemStorageChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_InventoryItems);
UClass* Z_Construct_UClass_UViewModel_InventoryItems_NoRegister()
{
	return UViewModel_InventoryItems::StaticClass();
}
struct Z_Construct_UClass_UViewModel_InventoryItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides updates on the items stored in the inventory.\n */" },
		{ "DisplayName", "Inventory Items" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_InventoryItems.h" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryItems.h" },
		{ "ToolTip", "Provides updates on the items stored in the inventory." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_InventoryItems_GetItems, "GetItems" }, // 1423014121
		{ &Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemAdded, "HandleItemAdded" }, // 2235896177
		{ &Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemRemoved, "HandleItemRemoved" }, // 388372091
		{ &Z_Construct_UFunction_UViewModel_InventoryItems_HandleItemStorageChanged, "HandleItemStorageChanged" }, // 3038921690
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_InventoryItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UViewModel_InventoryItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryContainerViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_InventoryItems_Statics::ClassParams = {
	&UViewModel_InventoryItems::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryItems_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_InventoryItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_InventoryItems()
{
	if (!Z_Registration_Info_UClass_UViewModel_InventoryItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_InventoryItems.OuterSingleton, Z_Construct_UClass_UViewModel_InventoryItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_InventoryItems.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_InventoryItems>()
{
	return UViewModel_InventoryItems::StaticClass();
}
UViewModel_InventoryItems::UViewModel_InventoryItems() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_InventoryItems);
UViewModel_InventoryItems::~UViewModel_InventoryItems() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryItems, GetItems)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_InventoryItems)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryItems, GetItems)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_InventoryItems);
// End Class UViewModel_InventoryItems

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_InventoryItems, UViewModel_InventoryItems::StaticClass, TEXT("UViewModel_InventoryItems"), &Z_Registration_Info_UClass_UViewModel_InventoryItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_InventoryItems), 390209513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_1367067062(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryItems_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
