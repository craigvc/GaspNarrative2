// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemLevel() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemLevel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemLevel_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemLevel Function HandleLevelChanged
struct Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics
{
	struct ViewModel_ItemLevel_eventHandleLevelChanged_Parms
	{
		UNinjaInventoryItem* Item;
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End View Model implementation\n" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemLevel.h" },
		{ "ToolTip", "-- End View Model implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemLevel_eventHandleLevelChanged_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemLevel_eventHandleLevelChanged_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemLevel, nullptr, "HandleLevelChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::ViewModel_ItemLevel_eventHandleLevelChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::ViewModel_ItemLevel_eventHandleLevelChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemLevel::execHandleLevelChanged)
{
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLevelChanged(Z_Param_Item,Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class UViewModel_ItemLevel Function HandleLevelChanged

// Begin Class UViewModel_ItemLevel
void UViewModel_ItemLevel::SetLevel_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemLevel* Obj = (UViewModel_ItemLevel*)Object;
	float& Value = *(float*)InValue;
	Obj->SetLevel(Value);
}
void UViewModel_ItemLevel::StaticRegisterNativesUViewModel_ItemLevel()
{
	UClass* Class = UViewModel_ItemLevel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleLevelChanged", &UViewModel_ItemLevel::execHandleLevelChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemLevel);
UClass* Z_Construct_UClass_UViewModel_ItemLevel_NoRegister()
{
	return UViewModel_ItemLevel::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's level.\n */" },
		{ "DisplayName", "Item Level" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemLevel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemLevel.h" },
		{ "ToolTip", "Provides details about an item's level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Level assigned to the backing item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemLevel.h" },
		{ "ToolTip", "Level assigned to the backing item." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ItemLevel_HandleLevelChanged, "HandleLevelChanged" }, // 2631240392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemLevel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UViewModel_ItemLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemLevel::SetLevel_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemLevel, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemLevel_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemLevel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemLevel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemLevel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemLevel_Statics::ClassParams = {
	&UViewModel_ItemLevel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ItemLevel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemLevel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemLevel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemLevel()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemLevel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemLevel.OuterSingleton, Z_Construct_UClass_UViewModel_ItemLevel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemLevel.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemLevel>()
{
	return UViewModel_ItemLevel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemLevel);
UViewModel_ItemLevel::~UViewModel_ItemLevel() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemLevel, Level)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemLevel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemLevel, Level)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemLevel);
// End Class UViewModel_ItemLevel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemLevel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemLevel, UViewModel_ItemLevel::StaticClass, TEXT("UViewModel_ItemLevel"), &Z_Registration_Info_UClass_UViewModel_ItemLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemLevel), 4161226727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemLevel_h_215281120(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemLevel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
