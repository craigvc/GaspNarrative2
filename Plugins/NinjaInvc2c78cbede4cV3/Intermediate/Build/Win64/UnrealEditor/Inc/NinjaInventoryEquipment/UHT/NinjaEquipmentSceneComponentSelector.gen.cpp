// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/NinjaEquipmentSceneComponentSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaEquipmentSceneComponentSelector() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class UNinjaEquipmentSceneComponentSelector Function SelectComponent
struct NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms
{
	const UNinjaEquipment* Equipment;
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaEquipmentSceneComponentSelector_SelectComponent = FName(TEXT("SelectComponent"));
USceneComponent* UNinjaEquipmentSceneComponentSelector::SelectComponent(const UNinjaEquipment* Equipment) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaEquipmentSceneComponentSelector_SelectComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms Parms;
		Parms.Equipment=Equipment;
		const_cast<UNinjaEquipmentSceneComponentSelector*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaEquipmentSceneComponentSelector*>(this)->SelectComponent_Implementation(Equipment);
	}
}
struct Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scene Component Selector" },
		{ "Comment", "/**\n\x09 * Selects the appropriate Scene Component for an Equipment Instance.\n\x09 *\n\x09 * From the Instance, you may want to consider its current Equipment State and you may\n\x09 * also access the owning pawn to search from components from it.\n\x09 * \n\x09 * @param Equipment\x09\x09""Equipment trying to attach a new actor.\n\x09 * @return\x09\x09\x09\x09The Scene Component to be used as a parent. \n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipmentSceneComponentSelector.h" },
		{ "ToolTip", "Selects the appropriate Scene Component for an Equipment Instance.\n\nFrom the Instance, you may want to consider its current Equipment State and you may\nalso access the owning pawn to search from components from it.\n\n@param Equipment             Equipment trying to attach a new actor.\n@return                              The Scene Component to be used as a parent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Equipment_MetaData), NewProp_Equipment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector, nullptr, "SelectComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::PropPointers), sizeof(NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaEquipmentSceneComponentSelector_eventSelectComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaEquipmentSceneComponentSelector::execSelectComponent)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->SelectComponent_Implementation(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UNinjaEquipmentSceneComponentSelector Function SelectComponent

// Begin Class UNinjaEquipmentSceneComponentSelector
void UNinjaEquipmentSceneComponentSelector::StaticRegisterNativesUNinjaEquipmentSceneComponentSelector()
{
	UClass* Class = UNinjaEquipmentSceneComponentSelector::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectComponent", &UNinjaEquipmentSceneComponentSelector::execSelectComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaEquipmentSceneComponentSelector);
UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_NoRegister()
{
	return UNinjaEquipmentSceneComponentSelector::StaticClass();
}
struct Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Allows custom logic to be applied when we are selecting a scene component to attach actors. \n */" },
		{ "IncludePath", "GameFramework/NinjaEquipmentSceneComponentSelector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaEquipmentSceneComponentSelector.h" },
		{ "ToolTip", "Allows custom logic to be applied when we are selecting a scene component to attach actors." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaEquipmentSceneComponentSelector_SelectComponent, "SelectComponent" }, // 4096086244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaEquipmentSceneComponentSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics::ClassParams = {
	&UNinjaEquipmentSceneComponentSelector::StaticClass,
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
	0x001100A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector()
{
	if (!Z_Registration_Info_UClass_UNinjaEquipmentSceneComponentSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaEquipmentSceneComponentSelector.OuterSingleton, Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaEquipmentSceneComponentSelector.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<UNinjaEquipmentSceneComponentSelector>()
{
	return UNinjaEquipmentSceneComponentSelector::StaticClass();
}
UNinjaEquipmentSceneComponentSelector::UNinjaEquipmentSceneComponentSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaEquipmentSceneComponentSelector);
UNinjaEquipmentSceneComponentSelector::~UNinjaEquipmentSceneComponentSelector() {}
// End Class UNinjaEquipmentSceneComponentSelector

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentSceneComponentSelector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector, UNinjaEquipmentSceneComponentSelector::StaticClass, TEXT("UNinjaEquipmentSceneComponentSelector"), &Z_Registration_Info_UClass_UNinjaEquipmentSceneComponentSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaEquipmentSceneComponentSelector), 1255396588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentSceneComponentSelector_h_893098935(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentSceneComponentSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipmentSceneComponentSelector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
