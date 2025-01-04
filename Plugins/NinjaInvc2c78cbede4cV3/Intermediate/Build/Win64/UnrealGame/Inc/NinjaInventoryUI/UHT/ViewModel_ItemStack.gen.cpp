// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemStack() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemStack();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemStack Function HandleStackSizeChanged
struct Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics
{
	struct ViewModel_ItemStack_eventHandleStackSizeChanged_Parms
	{
		UNinjaInventoryItem* Item;
		int32 NewStackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemStack_eventHandleStackSizeChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::NewProp_NewStackSize = { "NewStackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemStack_eventHandleStackSizeChanged_Parms, NewStackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::NewProp_NewStackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemStack, nullptr, "HandleStackSizeChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::ViewModel_ItemStack_eventHandleStackSizeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::ViewModel_ItemStack_eventHandleStackSizeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemStack::execHandleStackSizeChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewStackSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStackSizeChanged(Z_Param_Item,Z_Param_NewStackSize);
	P_NATIVE_END;
}
// End Class UViewModel_ItemStack Function HandleStackSizeChanged

// Begin Class UViewModel_ItemStack
void UViewModel_ItemStack::SetbHasStack_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemStack* Obj = (UViewModel_ItemStack*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetHasStack(Value);
}
void UViewModel_ItemStack::SetStackSize_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemStack* Obj = (UViewModel_ItemStack*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetStackSize(Value);
}
void UViewModel_ItemStack::SetStackLimit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemStack* Obj = (UViewModel_ItemStack*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetStackLimit(Value);
}
void UViewModel_ItemStack::SetMaximumLimit_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemStack* Obj = (UViewModel_ItemStack*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetMaximumLimit(Value);
}
void UViewModel_ItemStack::StaticRegisterNativesUViewModel_ItemStack()
{
	UClass* Class = UViewModel_ItemStack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleStackSizeChanged", &UViewModel_ItemStack::execHandleStackSizeChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemStack);
UClass* Z_Construct_UClass_UViewModel_ItemStack_NoRegister()
{
	return UViewModel_ItemStack::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's stack.\n */" },
		{ "DisplayName", "Item Stack" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "ToolTip", "Provides details about an item's stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStack_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Informs if the item has a stack, meaning more than one item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "ToolTip", "Informs if the item has a stack, meaning more than one item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Stack size for the current item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "ToolTip", "Stack size for the current item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackLimit_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Maximum stack size for the current item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "ToolTip", "Maximum stack size for the current item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLimit_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Maximum amount of items allowed in the inventory. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemStack.h" },
		{ "ToolTip", "Maximum amount of items allowed in the inventory." },
	};
#endif // WITH_METADATA
	static void NewProp_bHasStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackLimit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ItemStack_HandleStackSizeChanged, "HandleStackSizeChanged" }, // 2569367984
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_bHasStack_SetBit(void* Obj)
{
	((UViewModel_ItemStack*)Obj)->bHasStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_bHasStack = { "bHasStack", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemStack::SetbHasStack_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UViewModel_ItemStack), &Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_bHasStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStack_MetaData), NewProp_bHasStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemStack::SetStackSize_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemStack, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_StackLimit = { "StackLimit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemStack::SetStackLimit_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemStack, StackLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackLimit_MetaData), NewProp_StackLimit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_MaximumLimit = { "MaximumLimit", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemStack::SetMaximumLimit_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemStack, MaximumLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLimit_MetaData), NewProp_MaximumLimit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_bHasStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_StackLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemStack_Statics::NewProp_MaximumLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemStack_Statics::ClassParams = {
	&UViewModel_ItemStack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ItemStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemStack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemStack()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemStack.OuterSingleton, Z_Construct_UClass_UViewModel_ItemStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemStack.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemStack>()
{
	return UViewModel_ItemStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemStack);
UViewModel_ItemStack::~UViewModel_ItemStack() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemStack, bHasStack)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemStack, StackSize)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemStack, StackLimit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemStack, MaximumLimit)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemStack)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemStack, bHasStack)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemStack, StackSize)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemStack, StackLimit)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemStack, MaximumLimit)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemStack);
// End Class UViewModel_ItemStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemStack, UViewModel_ItemStack::StaticClass, TEXT("UViewModel_ItemStack"), &Z_Registration_Info_UClass_UViewModel_ItemStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemStack), 211219628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_2852575670(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
