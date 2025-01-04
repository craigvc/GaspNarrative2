// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/NinjaInventoryContainerViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryContainerViewModel() {}

// Begin Cross Module References
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryContainer_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryContainerViewModel_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryManagerViewModel();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryContainerViewModel Function SetContainer
struct Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics
{
	struct NinjaInventoryContainerViewModel_eventSetContainer_Parms
	{
		UNinjaInventoryContainer* NewContainer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI|View Model" },
		{ "Comment", "/**\n\x09 * Sets the new container tracked by this view model. \n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryContainerViewModel.h" },
		{ "ToolTip", "Sets the new container tracked by this view model." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::NewProp_NewContainer = { "NewContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryContainerViewModel_eventSetContainer_Parms, NewContainer), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::NewProp_NewContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryContainerViewModel, nullptr, "SetContainer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::NinjaInventoryContainerViewModel_eventSetContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::NinjaInventoryContainerViewModel_eventSetContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryContainerViewModel::execSetContainer)
{
	P_GET_OBJECT(UNinjaInventoryContainer,Z_Param_NewContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetContainer(Z_Param_NewContainer);
	P_NATIVE_END;
}
// End Class UNinjaInventoryContainerViewModel Function SetContainer

// Begin Class UNinjaInventoryContainerViewModel
void UNinjaInventoryContainerViewModel::SetContainer_WrapperImpl(void* Object, const void* InValue)
{
	UNinjaInventoryContainerViewModel* Obj = (UNinjaInventoryContainerViewModel*)Object;
	UNinjaInventoryContainer*& Value = *(UNinjaInventoryContainer**)InValue;
	Obj->SetContainer(Value);
}
void UNinjaInventoryContainerViewModel::StaticRegisterNativesUNinjaInventoryContainerViewModel()
{
	UClass* Class = UNinjaInventoryContainerViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetContainer", &UNinjaInventoryContainerViewModel::execSetContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryContainerViewModel);
UClass* Z_Construct_UClass_UNinjaInventoryContainerViewModel_NoRegister()
{
	return UNinjaInventoryContainerViewModel::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for view models exposing containers. \n */" },
		{ "IncludePath", "UI/Viewmodels/NinjaInventoryContainerViewModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryContainerViewModel.h" },
		{ "ToolTip", "Base class for view models exposing containers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[] = {
		{ "Category", "Inventory Items" },
		{ "Comment", "/** The container tracked by this view model. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/NinjaInventoryContainerViewModel.h" },
		{ "ToolTip", "The container tracked by this view model." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryContainerViewModel_SetContainer, "SetContainer" }, // 2394919150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryContainerViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, &UNinjaInventoryContainerViewModel::SetContainer_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryContainerViewModel, Container), Z_Construct_UClass_UNinjaInventoryContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Container_MetaData), NewProp_Container_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::NewProp_Container,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryManagerViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::ClassParams = {
	&UNinjaInventoryContainerViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryContainerViewModel()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryContainerViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryContainerViewModel.OuterSingleton, Z_Construct_UClass_UNinjaInventoryContainerViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryContainerViewModel.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryContainerViewModel>()
{
	return UNinjaInventoryContainerViewModel::StaticClass();
}
UNinjaInventoryContainerViewModel::UNinjaInventoryContainerViewModel() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryContainerViewModel);
UNinjaInventoryContainerViewModel::~UNinjaInventoryContainerViewModel() {}
// End Class UNinjaInventoryContainerViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryContainerViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryContainerViewModel, UNinjaInventoryContainerViewModel::StaticClass, TEXT("UNinjaInventoryContainerViewModel"), &Z_Registration_Info_UClass_UNinjaInventoryContainerViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryContainerViewModel), 3910012827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryContainerViewModel_h_184142886(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryContainerViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_NinjaInventoryContainerViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
