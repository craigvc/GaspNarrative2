// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Interfaces/InventoryContainerSlotInterface.h"
#include "NinjaInventoryUI/Public/UI/Types/FNinjaInventoryItemView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryContainerSlotInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerSlotInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryContainerSlotInterface_NoRegister();
NINJAINVENTORYUI_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaInventoryItemView();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Interface UInventoryContainerSlotInterface Function InitializeContainerSlot
struct InventoryContainerSlotInterface_eventInitializeContainerSlot_Parms
{
	UUserWidget* ContainerView;
};
void IInventoryContainerSlotInterface::InitializeContainerSlot(UUserWidget* ContainerView)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeContainerSlot instead.");
}
static FName NAME_UInventoryContainerSlotInterface_InitializeContainerSlot = FName(TEXT("InitializeContainerSlot"));
void IInventoryContainerSlotInterface::Execute_InitializeContainerSlot(UObject* O, UUserWidget* ContainerView)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryContainerSlotInterface::StaticClass()));
	InventoryContainerSlotInterface_eventInitializeContainerSlot_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryContainerSlotInterface_InitializeContainerSlot);
	if (Func)
	{
		Parms.ContainerView=ContainerView;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryContainerSlotInterface*)(O->GetNativeInterfaceAddress(UInventoryContainerSlotInterface::StaticClass())))
	{
		I->InitializeContainerSlot_Implementation(ContainerView);
	}
}
struct Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container Slot Interface" },
		{ "Comment", "/**\n\x09 * Initializes the widget or component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerSlotInterface.h" },
		{ "ToolTip", "Initializes the widget or component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::NewProp_ContainerView = { "ContainerView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerSlotInterface_eventInitializeContainerSlot_Parms, ContainerView), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerView_MetaData), NewProp_ContainerView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::NewProp_ContainerView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryContainerSlotInterface, nullptr, "InitializeContainerSlot", nullptr, nullptr, Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::PropPointers), sizeof(InventoryContainerSlotInterface_eventInitializeContainerSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryContainerSlotInterface_eventInitializeContainerSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryContainerSlotInterface::execInitializeContainerSlot)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ContainerView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeContainerSlot_Implementation(Z_Param_ContainerView);
	P_NATIVE_END;
}
// End Interface UInventoryContainerSlotInterface Function InitializeContainerSlot

// Begin Interface UInventoryContainerSlotInterface Function SetItems
struct InventoryContainerSlotInterface_eventSetItems_Parms
{
	TArray<FNinjaInventoryItemView> Items;
};
void IInventoryContainerSlotInterface::SetItems(TArray<FNinjaInventoryItemView> const& Items)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetItems instead.");
}
static FName NAME_UInventoryContainerSlotInterface_SetItems = FName(TEXT("SetItems"));
void IInventoryContainerSlotInterface::Execute_SetItems(UObject* O, TArray<FNinjaInventoryItemView> const& Items)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryContainerSlotInterface::StaticClass()));
	InventoryContainerSlotInterface_eventSetItems_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryContainerSlotInterface_SetItems);
	if (Func)
	{
		Parms.Items=Items;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryContainerSlotInterface*)(O->GetNativeInterfaceAddress(UInventoryContainerSlotInterface::StaticClass())))
	{
		I->SetItems_Implementation(Items);
	}
}
struct Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Container Slot Interface" },
		{ "Comment", "/**\n\x09 * Sets new items to the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerSlotInterface.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNinjaInventoryItemView, METADATA_PARAMS(0, nullptr) }; // 1671698782
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryContainerSlotInterface_eventSetItems_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 1671698782
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::NewProp_Items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryContainerSlotInterface, nullptr, "SetItems", nullptr, nullptr, Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::PropPointers), sizeof(InventoryContainerSlotInterface_eventSetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryContainerSlotInterface_eventSetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryContainerSlotInterface::execSetItems)
{
	P_GET_TARRAY_REF(FNinjaInventoryItemView,Z_Param_Out_Items);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItems_Implementation(Z_Param_Out_Items);
	P_NATIVE_END;
}
// End Interface UInventoryContainerSlotInterface Function SetItems

// Begin Interface UInventoryContainerSlotInterface
void UInventoryContainerSlotInterface::StaticRegisterNativesUInventoryContainerSlotInterface()
{
	UClass* Class = UInventoryContainerSlotInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeContainerSlot", &IInventoryContainerSlotInterface::execInitializeContainerSlot },
		{ "SetItems", &IInventoryContainerSlotInterface::execSetItems },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryContainerSlotInterface);
UClass* Z_Construct_UClass_UInventoryContainerSlotInterface_NoRegister()
{
	return UInventoryContainerSlotInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryContainerSlotInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryContainerSlotInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryContainerSlotInterface_InitializeContainerSlot, "InitializeContainerSlot" }, // 3760001242
		{ &Z_Construct_UFunction_UInventoryContainerSlotInterface_SetItems, "SetItems" }, // 100560179
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryContainerSlotInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryContainerSlotInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryContainerSlotInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryContainerSlotInterface_Statics::ClassParams = {
	&UInventoryContainerSlotInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryContainerSlotInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryContainerSlotInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryContainerSlotInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryContainerSlotInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryContainerSlotInterface.OuterSingleton, Z_Construct_UClass_UInventoryContainerSlotInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryContainerSlotInterface.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UInventoryContainerSlotInterface>()
{
	return UInventoryContainerSlotInterface::StaticClass();
}
UInventoryContainerSlotInterface::UInventoryContainerSlotInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryContainerSlotInterface);
UInventoryContainerSlotInterface::~UInventoryContainerSlotInterface() {}
// End Interface UInventoryContainerSlotInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerSlotInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryContainerSlotInterface, UInventoryContainerSlotInterface::StaticClass, TEXT("UInventoryContainerSlotInterface"), &Z_Registration_Info_UClass_UInventoryContainerSlotInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryContainerSlotInterface), 2513712811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerSlotInterface_h_2816154999(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerSlotInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryContainerSlotInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
