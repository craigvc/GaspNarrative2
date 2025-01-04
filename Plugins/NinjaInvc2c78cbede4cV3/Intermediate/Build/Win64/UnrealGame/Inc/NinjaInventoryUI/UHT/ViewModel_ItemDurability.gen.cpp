// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemDurability.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemDurability() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemDurability();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemDurability_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemDurability Function HandleDurabilityChanged
struct Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics
{
	struct ViewModel_ItemDurability_eventHandleDurabilityChanged_Parms
	{
		UNinjaInventoryItem* Item;
		int32 NewDurability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemDurability.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewDurability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemDurability_eventHandleDurabilityChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::NewProp_NewDurability = { "NewDurability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemDurability_eventHandleDurabilityChanged_Parms, NewDurability), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::NewProp_NewDurability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemDurability, nullptr, "HandleDurabilityChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::ViewModel_ItemDurability_eventHandleDurabilityChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::ViewModel_ItemDurability_eventHandleDurabilityChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemDurability::execHandleDurabilityChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewDurability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDurabilityChanged(Z_Param_Item,Z_Param_NewDurability);
	P_NATIVE_END;
}
// End Class UViewModel_ItemDurability Function HandleDurabilityChanged

// Begin Class UViewModel_ItemDurability
void UViewModel_ItemDurability::SetbIsIndestructible_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemDurability* Obj = (UViewModel_ItemDurability*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsIndestructible(Value);
}
void UViewModel_ItemDurability::SetbIsBroken_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemDurability* Obj = (UViewModel_ItemDurability*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsBroken(Value);
}
void UViewModel_ItemDurability::SetDurability_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemDurability* Obj = (UViewModel_ItemDurability*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetDurability(Value);
}
void UViewModel_ItemDurability::StaticRegisterNativesUViewModel_ItemDurability()
{
	UClass* Class = UViewModel_ItemDurability::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleDurabilityChanged", &UViewModel_ItemDurability::execHandleDurabilityChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemDurability);
UClass* Z_Construct_UClass_UViewModel_ItemDurability_NoRegister()
{
	return UViewModel_ItemDurability::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemDurability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's durability.\n */" },
		{ "DisplayName", "Item Durability" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemDurability.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemDurability.h" },
		{ "ToolTip", "Provides details about an item's durability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsIndestructible_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Informs if the item is indestructible. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemDurability.h" },
		{ "ToolTip", "Informs if the item is indestructible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBroken_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Informs if the item is broken, so you don't have to keep tracking durability for that. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemDurability.h" },
		{ "ToolTip", "Informs if the item is broken, so you don't have to keep tracking durability for that." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Durability_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Level assigned to the backing item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemDurability.h" },
		{ "ToolTip", "Level assigned to the backing item." },
	};
#endif // WITH_METADATA
	static void NewProp_bIsIndestructible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIndestructible;
	static void NewProp_bIsBroken_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBroken;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Durability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ItemDurability_HandleDurabilityChanged, "HandleDurabilityChanged" }, // 3699430225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemDurability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsIndestructible_SetBit(void* Obj)
{
	((UViewModel_ItemDurability*)Obj)->bIsIndestructible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsIndestructible = { "bIsIndestructible", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemDurability::SetbIsIndestructible_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UViewModel_ItemDurability), &Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsIndestructible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsIndestructible_MetaData), NewProp_bIsIndestructible_MetaData) };
void Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsBroken_SetBit(void* Obj)
{
	((UViewModel_ItemDurability*)Obj)->bIsBroken = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsBroken = { "bIsBroken", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemDurability::SetbIsBroken_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UViewModel_ItemDurability), &Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsBroken_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBroken_MetaData), NewProp_bIsBroken_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_Durability = { "Durability", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemDurability::SetDurability_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemDurability, Durability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Durability_MetaData), NewProp_Durability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemDurability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsIndestructible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_bIsBroken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemDurability_Statics::NewProp_Durability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemDurability_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemDurability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemDurability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemDurability_Statics::ClassParams = {
	&UViewModel_ItemDurability::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ItemDurability_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemDurability_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemDurability_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemDurability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemDurability()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemDurability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemDurability.OuterSingleton, Z_Construct_UClass_UViewModel_ItemDurability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemDurability.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemDurability>()
{
	return UViewModel_ItemDurability::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemDurability);
UViewModel_ItemDurability::~UViewModel_ItemDurability() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemDurability, bIsIndestructible)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemDurability, bIsBroken)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemDurability, Durability)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemDurability)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemDurability, bIsIndestructible)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemDurability, bIsBroken)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemDurability, Durability)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemDurability);
// End Class UViewModel_ItemDurability

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemDurability_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemDurability, UViewModel_ItemDurability::StaticClass, TEXT("UViewModel_ItemDurability"), &Z_Registration_Info_UClass_UViewModel_ItemDurability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemDurability), 1160071004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemDurability_h_139550394(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemDurability_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemDurability_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
