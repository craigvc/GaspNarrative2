// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Widgets/NinjaInventoryLootWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryLootWidget() {}

// Begin Cross Module References
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryLootWidget();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryLootWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryLootWidget Function InitializeInventory
struct Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Initializes the connection with the Inventory Manager backing this Inventory Window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryLootWidget.h" },
		{ "ToolTip", "Initializes the connection with the Inventory Manager backing this Inventory Window." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootWidget, nullptr, "InitializeInventory", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootWidget::execInitializeInventory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeInventory();
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootWidget Function InitializeInventory

// Begin Class UNinjaInventoryLootWidget Function SetHasLoot
struct Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics
{
	struct NinjaInventoryLootWidget_eventSetHasLoot_Parms
	{
		bool bHasLoot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|Widgets" },
		{ "Comment", "/**\n\x09 * Informs if there's loot to be displayed, in which case the widget should activate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryLootWidget.h" },
		{ "ToolTip", "Informs if there's loot to be displayed, in which case the widget should activate." },
	};
#endif // WITH_METADATA
	static void NewProp_bHasLoot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::NewProp_bHasLoot_SetBit(void* Obj)
{
	((NinjaInventoryLootWidget_eventSetHasLoot_Parms*)Obj)->bHasLoot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::NewProp_bHasLoot = { "bHasLoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInventoryLootWidget_eventSetHasLoot_Parms), &Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::NewProp_bHasLoot_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::NewProp_bHasLoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryLootWidget, nullptr, "SetHasLoot", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::NinjaInventoryLootWidget_eventSetHasLoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020408, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::NinjaInventoryLootWidget_eventSetHasLoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryLootWidget::execSetHasLoot)
{
	P_GET_UBOOL(Z_Param_bHasLoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHasLoot(Z_Param_bHasLoot);
	P_NATIVE_END;
}
// End Class UNinjaInventoryLootWidget Function SetHasLoot

// Begin Class UNinjaInventoryLootWidget
void UNinjaInventoryLootWidget::StaticRegisterNativesUNinjaInventoryLootWidget()
{
	UClass* Class = UNinjaInventoryLootWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeInventory", &UNinjaInventoryLootWidget::execInitializeInventory },
		{ "SetHasLoot", &UNinjaInventoryLootWidget::execSetHasLoot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryLootWidget);
UClass* Z_Construct_UClass_UNinjaInventoryLootWidget_NoRegister()
{
	return UNinjaInventoryLootWidget::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryLootWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget used to display loot that has been received by the player's Inventory Manager.\n */" },
		{ "IncludePath", "UI/Widgets/NinjaInventoryLootWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widgets/NinjaInventoryLootWidget.h" },
		{ "ToolTip", "A widget used to display loot that has been received by the player's Inventory Manager." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryLootWidget_InitializeInventory, "InitializeInventory" }, // 1126777324
		{ &Z_Construct_UFunction_UNinjaInventoryLootWidget_SetHasLoot, "SetHasLoot" }, // 3310328309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryLootWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryLootWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryLootWidget_Statics::ClassParams = {
	&UNinjaInventoryLootWidget::StaticClass,
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
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryLootWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryLootWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryLootWidget()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryLootWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryLootWidget.OuterSingleton, Z_Construct_UClass_UNinjaInventoryLootWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryLootWidget.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryLootWidget>()
{
	return UNinjaInventoryLootWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryLootWidget);
UNinjaInventoryLootWidget::~UNinjaInventoryLootWidget() {}
// End Class UNinjaInventoryLootWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryLootWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryLootWidget, UNinjaInventoryLootWidget::StaticClass, TEXT("UNinjaInventoryLootWidget"), &Z_Registration_Info_UClass_UNinjaInventoryLootWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryLootWidget), 1748793817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryLootWidget_h_4284404306(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryLootWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Widgets_NinjaInventoryLootWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
