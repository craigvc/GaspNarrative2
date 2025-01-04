// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_InventoryLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_InventoryLayout() {}

// Begin Cross Module References
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_InventoryLayout();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_InventoryLayout_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_InventoryLayout Function SetDisplayName
struct Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics
{
	struct ViewModel_InventoryLayout_eventSetDisplayName_Parms
	{
		FText NewDisplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_InventoryLayout_eventSetDisplayName_Parms, NewDisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::NewProp_NewDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_InventoryLayout, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::ViewModel_InventoryLayout_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::ViewModel_InventoryLayout_eventSetDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_InventoryLayout::execSetDisplayName)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_NewDisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisplayName(Z_Param_NewDisplayName);
	P_NATIVE_END;
}
// End Class UViewModel_InventoryLayout Function SetDisplayName

// Begin Class UViewModel_InventoryLayout
void UViewModel_InventoryLayout::SetDisplayName_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_InventoryLayout* Obj = (UViewModel_InventoryLayout*)Object;
	FText& Value = *(FText*)InValue;
	Obj->SetDisplayName(Value);
}
void UViewModel_InventoryLayout::StaticRegisterNativesUViewModel_InventoryLayout()
{
	UClass* Class = UViewModel_InventoryLayout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDisplayName", &UViewModel_InventoryLayout::execSetDisplayName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_InventoryLayout);
UClass* Z_Construct_UClass_UViewModel_InventoryLayout_NoRegister()
{
	return UViewModel_InventoryLayout::StaticClass();
}
struct Z_Construct_UClass_UViewModel_InventoryLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides information about the layout used for the inventory.\n */" },
		{ "DisplayName", "Inventory Layout" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_InventoryLayout.h" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryLayout.h" },
		{ "ToolTip", "Provides information about the layout used for the inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Inventory Layout" },
		{ "Comment", "/** The title assigned to the inventory layout. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_InventoryLayout.h" },
		{ "ToolTip", "The title assigned to the inventory layout." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_InventoryLayout_SetDisplayName, "SetDisplayName" }, // 686054267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_InventoryLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UViewModel_InventoryLayout_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_InventoryLayout::SetDisplayName_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_InventoryLayout, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_InventoryLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_InventoryLayout_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryLayout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_InventoryLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_InventoryLayout_Statics::ClassParams = {
	&UViewModel_InventoryLayout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_InventoryLayout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryLayout_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_InventoryLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_InventoryLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_InventoryLayout()
{
	if (!Z_Registration_Info_UClass_UViewModel_InventoryLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_InventoryLayout.OuterSingleton, Z_Construct_UClass_UViewModel_InventoryLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_InventoryLayout.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_InventoryLayout>()
{
	return UViewModel_InventoryLayout::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_InventoryLayout);
UViewModel_InventoryLayout::~UViewModel_InventoryLayout() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_InventoryLayout, DisplayName)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_InventoryLayout)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_InventoryLayout, DisplayName)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_InventoryLayout);
// End Class UViewModel_InventoryLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryLayout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_InventoryLayout, UViewModel_InventoryLayout::StaticClass, TEXT("UViewModel_InventoryLayout"), &Z_Registration_Info_UClass_UViewModel_InventoryLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_InventoryLayout), 2587559672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryLayout_h_3261354588(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_InventoryLayout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
