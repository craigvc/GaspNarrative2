// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryUI/Public/UI/Viewmodels/ViewModel_ItemEquipment.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ItemEquipment() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipment_NoRegister();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UNinjaInventoryItemViewModel();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemEquipment();
NINJAINVENTORYUI_API UClass* Z_Construct_UClass_UViewModel_ItemEquipment_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryUI();
// End Cross Module References

// Begin Class UViewModel_ItemEquipment Function HandleEquipmentAdded
struct Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics
{
	struct ViewModel_ItemEquipment_eventHandleEquipmentAdded_Parms
	{
		UNinjaEquipment* Equipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// -- End Ninja Inventory Item implementation\n" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
		{ "ToolTip", "-- End Ninja Inventory Item implementation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemEquipment_eventHandleEquipmentAdded_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemEquipment, nullptr, "HandleEquipmentAdded", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::ViewModel_ItemEquipment_eventHandleEquipmentAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::ViewModel_ItemEquipment_eventHandleEquipmentAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemEquipment::execHandleEquipmentAdded)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquipmentAdded(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UViewModel_ItemEquipment Function HandleEquipmentAdded

// Begin Class UViewModel_ItemEquipment Function HandleEquipmentRemoved
struct Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics
{
	struct ViewModel_ItemEquipment_eventHandleEquipmentRemoved_Parms
	{
		UNinjaEquipment* Equipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemEquipment_eventHandleEquipmentRemoved_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemEquipment, nullptr, "HandleEquipmentRemoved", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::ViewModel_ItemEquipment_eventHandleEquipmentRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::ViewModel_ItemEquipment_eventHandleEquipmentRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemEquipment::execHandleEquipmentRemoved)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquipmentRemoved(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UViewModel_ItemEquipment Function HandleEquipmentRemoved

// Begin Class UViewModel_ItemEquipment Function HandleEquipmentStateChanged
struct Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics
{
	struct ViewModel_ItemEquipment_eventHandleEquipmentStateChanged_Parms
	{
		UNinjaEquipment* Equipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ItemEquipment_eventHandleEquipmentStateChanged_Parms, Equipment), Z_Construct_UClass_UNinjaEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::NewProp_Equipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ItemEquipment, nullptr, "HandleEquipmentStateChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::ViewModel_ItemEquipment_eventHandleEquipmentStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::ViewModel_ItemEquipment_eventHandleEquipmentStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ItemEquipment::execHandleEquipmentStateChanged)
{
	P_GET_OBJECT(UNinjaEquipment,Z_Param_Equipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEquipmentStateChanged(Z_Param_Equipment);
	P_NATIVE_END;
}
// End Class UViewModel_ItemEquipment Function HandleEquipmentStateChanged

// Begin Class UViewModel_ItemEquipment
void UViewModel_ItemEquipment::SetbHasEquipment_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEquipment* Obj = (UViewModel_ItemEquipment*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetHasEquipment(Value);
}
void UViewModel_ItemEquipment::SetEquipmentStateTag_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ItemEquipment* Obj = (UViewModel_ItemEquipment*)Object;
	FGameplayTag& Value = *(FGameplayTag*)InValue;
	Obj->SetEquipmentStateTag(Value);
}
void UViewModel_ItemEquipment::StaticRegisterNativesUViewModel_ItemEquipment()
{
	UClass* Class = UViewModel_ItemEquipment::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleEquipmentAdded", &UViewModel_ItemEquipment::execHandleEquipmentAdded },
		{ "HandleEquipmentRemoved", &UViewModel_ItemEquipment::execHandleEquipmentRemoved },
		{ "HandleEquipmentStateChanged", &UViewModel_ItemEquipment::execHandleEquipmentStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ItemEquipment);
UClass* Z_Construct_UClass_UViewModel_ItemEquipment_NoRegister()
{
	return UViewModel_ItemEquipment::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ItemEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides details about an item's equipment.\n */" },
		{ "DisplayName", "Item Equipment" },
		{ "IncludePath", "UI/Viewmodels/ViewModel_ItemEquipment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
		{ "ToolTip", "Provides details about an item's equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEquipment_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** Informs if the item is represented by any equipment. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
		{ "ToolTip", "Informs if the item is represented by any equipment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentStateTag_MetaData[] = {
		{ "Category", "Inventory View Model" },
		{ "Comment", "/** State of the equipment representing the item. */" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
		{ "ToolTip", "State of the equipment representing the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/Viewmodels/ViewModel_ItemEquipment.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasEquipment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEquipment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentStateTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentAdded, "HandleEquipmentAdded" }, // 4085666344
		{ &Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentRemoved, "HandleEquipmentRemoved" }, // 275205491
		{ &Z_Construct_UFunction_UViewModel_ItemEquipment_HandleEquipmentStateChanged, "HandleEquipmentStateChanged" }, // 1316449221
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ItemEquipment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_bHasEquipment_SetBit(void* Obj)
{
	((UViewModel_ItemEquipment*)Obj)->bHasEquipment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_bHasEquipment = { "bHasEquipment", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEquipment::SetbHasEquipment_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UViewModel_ItemEquipment), &Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_bHasEquipment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEquipment_MetaData), NewProp_bHasEquipment_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_EquipmentStateTag = { "EquipmentStateTag", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ItemEquipment::SetEquipmentStateTag_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemEquipment, EquipmentStateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentStateTag_MetaData), NewProp_EquipmentStateTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_EquipmentManager = { "EquipmentManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UViewModel_ItemEquipment, EquipmentManager), Z_Construct_UClass_UNinjaEquipmentManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentManager_MetaData), NewProp_EquipmentManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ItemEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_bHasEquipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_EquipmentStateTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ItemEquipment_Statics::NewProp_EquipmentManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEquipment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ItemEquipment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInventoryItemViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEquipment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ItemEquipment_Statics::ClassParams = {
	&UViewModel_ItemEquipment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ItemEquipment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEquipment_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ItemEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ItemEquipment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ItemEquipment()
{
	if (!Z_Registration_Info_UClass_UViewModel_ItemEquipment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ItemEquipment.OuterSingleton, Z_Construct_UClass_UViewModel_ItemEquipment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ItemEquipment.OuterSingleton;
}
template<> NINJAINVENTORYUI_API UClass* StaticClass<UViewModel_ItemEquipment>()
{
	return UViewModel_ItemEquipment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ItemEquipment);
UViewModel_ItemEquipment::~UViewModel_ItemEquipment() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEquipment, bHasEquipment)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ItemEquipment, EquipmentStateTag)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ItemEquipment)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEquipment, bHasEquipment)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ItemEquipment, EquipmentStateTag)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ItemEquipment);
// End Class UViewModel_ItemEquipment

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ItemEquipment, UViewModel_ItemEquipment::StaticClass, TEXT("UViewModel_ItemEquipment"), &Z_Registration_Info_UClass_UViewModel_ItemEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ItemEquipment), 2528640804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_1243049788(TEXT("/Script/NinjaInventoryUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_Viewmodels_ViewModel_ItemEquipment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
