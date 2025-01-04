// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemEconomy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemEconomy() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemEconomy();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemEconomy_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemEconomy Function HandleTotalPriceChanged
struct Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics
{
	struct ViewModel_ItemEconomy_eventHandleTotalPriceChanged_Parms
	{
		UNinjaInventoryItem* Item;
		float BuyPrice;
		float SellPrice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuyPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SellPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemEconomy_eventHandleTotalPriceChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::NewProp_BuyPrice = { "BuyPrice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemEconomy_eventHandleTotalPriceChanged_Parms, BuyPrice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::NewProp_SellPrice = { "SellPrice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemEconomy_eventHandleTotalPriceChanged_Parms, SellPrice), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::NewProp_BuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::NewProp_SellPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemEconomy, nullptr, "HandleTotalPriceChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::ViewModel_ItemEconomy_eventHandleTotalPriceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::ViewModel_ItemEconomy_eventHandleTotalPriceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemEconomy::execHandleTotalPriceChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BuyPrice);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SellPrice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTotalPriceChanged(Z_Param_Item,Z_Param_BuyPrice,Z_Param_SellPrice);
	P_NATIVE_END;
}
// End Class UViewModel_ItemEconomy Function HandleTotalPriceChanged

// Begin Class UViewModel_ItemEconomy
void UViewModel_ItemEconomy::SetbCanBeBought_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEconomy* Obj = (UViewModel_ItemEconomy*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetCanBeBought(Value);
}
void UViewModel_ItemEconomy::SetbCanBeSold_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEconomy* Obj = (UViewModel_ItemEconomy*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetCanBeSold(Value);
}
void UViewModel_ItemEconomy::SetUnitBuyPrice_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEconomy* Obj = (UViewModel_ItemEconomy*)Object;
	float& Value = *(float*)InValue;
	Obj->SetUnitBuyPrice(Value);
}
void UViewModel_ItemEconomy::SetTotalBuyPrice_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEconomy* Obj = (UViewModel_ItemEconomy*)Object;
	float& Value = *(float*)InValue;
	Obj->SetTotalBuyPrice(Value);
}
void UViewModel_ItemEconomy::SetUnitSellPrice_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEconomy* Obj = (UViewModel_ItemEconomy*)Object;
	float& Value = *(float*)InValue;
	Obj->SetUnitSellPrice(Value);
}
void UViewModel_ItemEconomy::SetTotalSellPrice_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEconomy* Obj = (UViewModel_ItemEconomy*)Object;
	float& Value = *(float*)InValue;
	Obj->SetTotalSellPrice(Value);
}
void UViewModel_ItemEconomy::StaticRegisterNativesUViewModel_ItemEconomy()
{
	UClass* Class = UViewModel_ItemEconomy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleTotalPriceChanged", &UViewModel_ItemEconomy::execHandleTotalPriceChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemEconomy);
UClass* Z_Construct_UClass_UViewModel_ItemEconomy_NoRegister()
{
	return UViewModel_ItemEconomy::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemEconomy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's prices.\n */" },
		{ "DisplayName", "Item Economy" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Provides details about an item's prices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeBought_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Informs if this item can be bought. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Informs if this item can be bought." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeSold_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Informs if this item can be sold. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Informs if this item can be sold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitBuyPrice_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Buy price for the current item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Buy price for the current item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalBuyPrice_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Buy price for the current item, including the stack. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Buy price for the current item, including the stack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitSellPrice_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Sell price for the current item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Sell price for the current item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalSellPrice_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Sell price for the current item, including the stack. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEconomy.h" },
		{ "ToolTip", "Sell price for the current item, including the stack." },
	};
#endif // WITH_METADATA
	static void NewProp_bCanBeBought_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeBought;
	static void NewProp_bCanBeSold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeSold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitBuyPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalBuyPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitSellPrice;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalSellPrice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ItemEconomy_HandleTotalPriceChanged, "HandleTotalPriceChanged" }, // 3250066382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemEconomy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeBought_SetBit(void* Obj)
{
	((UViewModel_ItemEconomy*)Obj)->bCanBeBought = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeBought = { "bCanBeBought", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEconomy::SetbCanBeBought_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UViewModel_ItemEconomy), &Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeBought_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeBought_MetaData), NewProp_bCanBeBought_MetaData) };
void Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeSold_SetBit(void* Obj)
{
	((UViewModel_ItemEconomy*)Obj)->bCanBeSold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeSold = { "bCanBeSold", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEconomy::SetbCanBeSold_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UViewModel_ItemEconomy), &Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeSold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeSold_MetaData), NewProp_bCanBeSold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_UnitBuyPrice = { "UnitBuyPrice", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEconomy::SetUnitBuyPrice_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemEconomy, UnitBuyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitBuyPrice_MetaData), NewProp_UnitBuyPrice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_TotalBuyPrice = { "TotalBuyPrice", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEconomy::SetTotalBuyPrice_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemEconomy, TotalBuyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalBuyPrice_MetaData), NewProp_TotalBuyPrice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_UnitSellPrice = { "UnitSellPrice", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEconomy::SetUnitSellPrice_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemEconomy, UnitSellPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitSellPrice_MetaData), NewProp_UnitSellPrice_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_TotalSellPrice = { "TotalSellPrice", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEconomy::SetTotalSellPrice_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemEconomy, TotalSellPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalSellPrice_MetaData), NewProp_TotalSellPrice_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemEconomy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeBought,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_bCanBeSold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_UnitBuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_TotalBuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_UnitSellPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEconomy_Statics::NewProp_TotalSellPrice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEconomy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemEconomy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEconomy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemEconomy_Statics::ClassParams = {
	&UViewModel_ItemEconomy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ItemEconomy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEconomy_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEconomy_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemEconomy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemEconomy()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemEconomy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemEconomy.OuterSingleton, Z_Construct_UClass_UViewModel_ItemEconomy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemEconomy.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemEconomy>()
{
	return UViewModel_ItemEconomy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemEconomy);
UViewModel_ItemEconomy::~UViewModel_ItemEconomy() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEconomy, bCanBeBought)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEconomy, bCanBeSold)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEconomy, UnitBuyPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEconomy, TotalBuyPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEconomy, UnitSellPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEconomy, TotalSellPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemEconomy)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEconomy, bCanBeBought)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEconomy, bCanBeSold)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEconomy, UnitBuyPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEconomy, TotalBuyPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEconomy, UnitSellPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEconomy, TotalSellPrice)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemEconomy);
// End Class UViewModel_ItemEconomy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemEconomy, UViewModel_ItemEconomy::StaticClass, TEXT("UViewModel_ItemEconomy"), &Z_Registration_Info_UClass_UViewModel_ItemEconomy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemEconomy), 2845957227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_3977206359(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEconomy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
