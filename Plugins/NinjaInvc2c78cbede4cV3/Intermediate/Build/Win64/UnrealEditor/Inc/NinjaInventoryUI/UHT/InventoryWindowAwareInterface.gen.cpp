// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Interfaces/InventoryWindowAwareInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryWindowAwareInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryWindowAwareInterface();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UInventoryWindowAwareInterface_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryWindowWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Interface UInventoryWindowAwareInterface Function SetInventoryWindowWidget
struct InventoryWindowAwareInterface_eventSetInventoryWindowWidget_Parms
{
	UNinjaInventoryWindowWidget* InventoryWindowWidget;
};
void IInventoryWindowAwareInterface::SetInventoryWindowWidget(UNinjaInventoryWindowWidget* InventoryWindowWidget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInventoryWindowWidget instead.");
}
static FName NAME_UInventoryWindowAwareInterface_SetInventoryWindowWidget = FName(TEXT("SetInventoryWindowWidget"));
void IInventoryWindowAwareInterface::Execute_SetInventoryWindowWidget(UObject* O, UNinjaInventoryWindowWidget* InventoryWindowWidget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryWindowAwareInterface::StaticClass()));
	InventoryWindowAwareInterface_eventSetInventoryWindowWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryWindowAwareInterface_SetInventoryWindowWidget);
	if (Func)
	{
		Parms.InventoryWindowWidget=InventoryWindowWidget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryWindowAwareInterface*)(O->GetNativeInterfaceAddress(UInventoryWindowAwareInterface::StaticClass())))
	{
		I->SetInventoryWindowWidget_Implementation(InventoryWindowWidget);
	}
}
struct Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory Window Aware Interface" },
		{ "Comment", "/**\n\x09 * Provides the Inventory Window hosting other Inventory Widgets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryWindowAwareInterface.h" },
		{ "ToolTip", "Provides the Inventory Window hosting other Inventory Widgets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryWindowWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryWindowWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::NewProp_InventoryWindowWidget = { "InventoryWindowWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryWindowAwareInterface_eventSetInventoryWindowWidget_Parms, InventoryWindowWidget), Z_Construct_UClass_UNinjaInventoryWindowWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryWindowWidget_MetaData), NewProp_InventoryWindowWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::NewProp_InventoryWindowWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryWindowAwareInterface, nullptr, "SetInventoryWindowWidget", nullptr, nullptr, Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::PropPointers), sizeof(InventoryWindowAwareInterface_eventSetInventoryWindowWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryWindowAwareInterface_eventSetInventoryWindowWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryWindowAwareInterface::execSetInventoryWindowWidget)
{
	P_GET_OBJECT(UNinjaInventoryWindowWidget,Z_Param_InventoryWindowWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventoryWindowWidget_Implementation(Z_Param_InventoryWindowWidget);
	P_NATIVE_END;
}
// End Interface UInventoryWindowAwareInterface Function SetInventoryWindowWidget

// Begin Interface UInventoryWindowAwareInterface
void UInventoryWindowAwareInterface::StaticRegisterNativesUInventoryWindowAwareInterface()
{
	UClass* Class = UInventoryWindowAwareInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInventoryWindowWidget", &IInventoryWindowAwareInterface::execSetInventoryWindowWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryWindowAwareInterface);
UClass* Z_Construct_UClass_UInventoryWindowAwareInterface_NoRegister()
{
	return UInventoryWindowAwareInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryWindowAwareInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Interfaces/InventoryWindowAwareInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryWindowAwareInterface_SetInventoryWindowWidget, "SetInventoryWindowWidget" }, // 3151573210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryWindowAwareInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryWindowAwareInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWindowAwareInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWindowAwareInterface_Statics::ClassParams = {
	&UInventoryWindowAwareInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWindowAwareInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryWindowAwareInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryWindowAwareInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryWindowAwareInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWindowAwareInterface.OuterSingleton, Z_Construct_UClass_UInventoryWindowAwareInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryWindowAwareInterface.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UInventoryWindowAwareInterface>()
{
	return UInventoryWindowAwareInterface::StaticClass();
}
UInventoryWindowAwareInterface::UInventoryWindowAwareInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWindowAwareInterface);
UInventoryWindowAwareInterface::~UInventoryWindowAwareInterface() {}
// End Interface UInventoryWindowAwareInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryWindowAwareInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWindowAwareInterface, UInventoryWindowAwareInterface::StaticClass, TEXT("UInventoryWindowAwareInterface"), &Z_Registration_Info_UClass_UInventoryWindowAwareInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWindowAwareInterface), 328116427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryWindowAwareInterface_h_1530906536(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryWindowAwareInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Interfaces_InventoryWindowAwareInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
