// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/NinjaInventoryUIFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryUIFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NINJAINVENTORY_API UClass* Z_Construct_UClass_UNinjaInventoryItem_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UNinjaInventoryUIFunctionLibrary Function ConstructItemViewModel
struct Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics
{
	struct NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms
	{
		TSubclassOf<UNinjaInventoryItemViewModel> ViewModelClass;
		UWidget* Outer;
		UNinjaInventoryItem* Item;
		UNinjaInventoryItemViewModel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|UI" },
		{ "Comment", "/**\n\x09 * Creates an Item View Model, for a specific View Model type, with the backing item already set.\n\x09 *\n\x09 * @param ViewModelClass\x09\x09Item View Model type to be constructed.\n\x09 * @param Outer\x09\x09\x09\x09\x09""Context where the View Model will be constructed.\n\x09 * @param Item\x09\x09\x09\x09\x09Item backing the view model.\n\x09 */" },
		{ "DefaultToSelf", "Outer" },
		{ "DeterminesOutputType", "ViewModelClass" },
		{ "ModuleRelativePath", "Public/NinjaInventoryUIFunctionLibrary.h" },
		{ "ReturnDisplayName", "Item View Model" },
		{ "ToolTip", "Creates an Item View Model, for a specific View Model type, with the backing item already set.\n\n@param ViewModelClass                Item View Model type to be constructed.\n@param Outer                                 Context where the View Model will be constructed.\n@param Item                                  Item backing the view model." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModelClass_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewModelClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_ViewModelClass = { "ViewModelClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms, ViewModelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInventoryItemViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModelClass_MetaData), NewProp_ViewModelClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms, Outer), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outer_MetaData), NewProp_Outer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms, Item), Z_Construct_UClass_UNinjaInventoryItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms, ReturnValue), Z_Construct_UClass_UNinjaInventoryItemViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_ViewModelClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary, nullptr, "ConstructItemViewModel", nullptr, nullptr, Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::NinjaInventoryUIFunctionLibrary_eventConstructItemViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryUIFunctionLibrary::execConstructItemViewModel)
{
	P_GET_OBJECT(UClass,Z_Param_ViewModelClass);
	P_GET_OBJECT(UWidget,Z_Param_Outer);
	P_GET_OBJECT(UNinjaInventoryItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInventoryItemViewModel**)Z_Param__Result=UNinjaInventoryUIFunctionLibrary::ConstructItemViewModel(Z_Param_ViewModelClass,Z_Param_Outer,Z_Param_Item);
	P_NATIVE_END;
}
// End Class UNinjaInventoryUIFunctionLibrary Function ConstructItemViewModel

// Begin Class UNinjaInventoryUIFunctionLibrary
void UNinjaInventoryUIFunctionLibrary::StaticRegisterNativesUNinjaInventoryUIFunctionLibrary()
{
	UClass* Class = UNinjaInventoryUIFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstructItemViewModel", &UNinjaInventoryUIFunctionLibrary::execConstructItemViewModel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryUIFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_NoRegister()
{
	return UNinjaInventoryUIFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Support functions for the Ninja Inventory UI Module. \n */" },
		{ "IncludePath", "NinjaInventoryUIFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaInventoryUIFunctionLibrary.h" },
		{ "ToolTip", "Support functions for the Ninja Inventory UI Module." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryUIFunctionLibrary_ConstructItemViewModel, "ConstructItemViewModel" }, // 1860023180
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryUIFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics::ClassParams = {
	&UNinjaInventoryUIFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryUIFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryUIFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryUIFunctionLibrary.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UNinjaInventoryUIFunctionLibrary>()
{
	return UNinjaInventoryUIFunctionLibrary::StaticClass();
}
UNinjaInventoryUIFunctionLibrary::UNinjaInventoryUIFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryUIFunctionLibrary);
UNinjaInventoryUIFunctionLibrary::~UNinjaInventoryUIFunctionLibrary() {}
// End Class UNinjaInventoryUIFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_NinjaInventoryUIFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryUIFunctionLibrary, UNinjaInventoryUIFunctionLibrary::StaticClass, TEXT("UNinjaInventoryUIFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaInventoryUIFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryUIFunctionLibrary), 1594805595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_NinjaInventoryUIFunctionLibrary_h_1960499581(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_NinjaInventoryUIFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_NinjaInventoryUIFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
