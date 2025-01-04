// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemWeight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemWeight() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemWeight();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemWeight_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemWeight Function HandleWeightChanged
struct Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics
{
	struct ViewModel_ItemWeight_eventHandleWeightChanged_Parms
	{
		UNinjaInventoryItem* Item;
		float NewWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemWeight.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemWeight_eventHandleWeightChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::NewProp_NewWeight = { "NewWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemWeight_eventHandleWeightChanged_Parms, NewWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::NewProp_NewWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemWeight, nullptr, "HandleWeightChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::ViewModel_ItemWeight_eventHandleWeightChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::ViewModel_ItemWeight_eventHandleWeightChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemWeight::execHandleWeightChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWeightChanged(Z_Param_Item,Z_Param_NewWeight);
	P_NATIVE_END;
}
// End Class UViewModel_ItemWeight Function HandleWeightChanged

// Begin Class UViewModel_ItemWeight
void UViewModel_ItemWeight::SetWeight_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemWeight* Obj = (UViewModel_ItemWeight*)Object;
	float& Value = *(float*)InValue;
	Obj->SetWeight(Value);
}
void UViewModel_ItemWeight::SetTotalWeight_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemWeight* Obj = (UViewModel_ItemWeight*)Object;
	float& Value = *(float*)InValue;
	Obj->SetTotalWeight(Value);
}
void UViewModel_ItemWeight::StaticRegisterNativesUViewModel_ItemWeight()
{
	UClass* Class = UViewModel_ItemWeight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleWeightChanged", &UViewModel_ItemWeight::execHandleWeightChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemWeight);
UClass* Z_Construct_UClass_UViewModel_ItemWeight_NoRegister()
{
	return UViewModel_ItemWeight::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's weight.\n */" },
		{ "DisplayName", "Item Weight" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemWeight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemWeight.h" },
		{ "ToolTip", "Provides details about an item's weight." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Base weight for the item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemWeight.h" },
		{ "ToolTip", "Base weight for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalWeight_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Total Weight for the current item, considering the stack. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemWeight.h" },
		{ "ToolTip", "Total Weight for the current item, considering the stack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ItemWeight_HandleWeightChanged, "HandleWeightChanged" }, // 754245067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemWeight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemWeight::SetWeight_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemWeight, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemWeight_Statics::NewProp_TotalWeight = { "TotalWeight", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemWeight::SetTotalWeight_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemWeight, TotalWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalWeight_MetaData), NewProp_TotalWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemWeight_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemWeight_Statics::NewProp_TotalWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemWeight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemWeight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemWeight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemWeight_Statics::ClassParams = {
	&UViewModel_ItemWeight::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ItemWeight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemWeight_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemWeight_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemWeight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemWeight()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemWeight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemWeight.OuterSingleton, Z_Construct_UClass_UViewModel_ItemWeight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemWeight.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemWeight>()
{
	return UViewModel_ItemWeight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemWeight);
UViewModel_ItemWeight::~UViewModel_ItemWeight() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemWeight, Weight)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemWeight, TotalWeight)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemWeight)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemWeight, Weight)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemWeight, TotalWeight)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemWeight);
// End Class UViewModel_ItemWeight

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemWeight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemWeight, UViewModel_ItemWeight::StaticClass, TEXT("UViewModel_ItemWeight"), &Z_Registration_Info_UClass_UViewModel_ItemWeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemWeight), 1552661972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemWeight_h_1447624740(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemWeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemWeight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
