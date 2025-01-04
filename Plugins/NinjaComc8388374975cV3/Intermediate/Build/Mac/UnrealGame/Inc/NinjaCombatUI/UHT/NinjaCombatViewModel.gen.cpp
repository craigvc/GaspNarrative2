// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/NinjaCombatViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatViewModel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase();
NINJACOMBATCORE_API UClass* Z_Construct_UClass_UCombatActorAwareInterface_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UNinjaCombatViewModel Function BindToAbilitySystem
struct Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics
{
	struct NinjaCombatViewModel_eventBindToAbilitySystem_Parms
	{
		const AActor* Owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|View Model" },
		{ "Comment", "/**\n\x09 * Binds this View Model to an Ability Component, so it will react to changes in meaningful attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/NinjaCombatViewModel.h" },
		{ "ToolTip", "Binds this View Model to an Ability Component, so it will react to changes in meaningful attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatViewModel_eventBindToAbilitySystem_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatViewModel, nullptr, "BindToAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::NinjaCombatViewModel_eventBindToAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::NinjaCombatViewModel_eventBindToAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatViewModel::execBindToAbilitySystem)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAbilitySystem(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatViewModel Function BindToAbilitySystem

// Begin Class UNinjaCombatViewModel Function GetCombatActor
struct Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics
{
	struct NinjaCombatViewModel_eventGetCombatActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|View Model" },
		{ "Comment", "/**\n\x09 * Provides the Combat Actor current bound to this Viewmodel.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/NinjaCombatViewModel.h" },
		{ "ToolTip", "Provides the Combat Actor current bound to this Viewmodel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatViewModel_eventGetCombatActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatViewModel, nullptr, "GetCombatActor", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::NinjaCombatViewModel_eventGetCombatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::NinjaCombatViewModel_eventGetCombatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatViewModel::execGetCombatActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCombatActor();
	P_NATIVE_END;
}
// End Class UNinjaCombatViewModel Function GetCombatActor

// Begin Class UNinjaCombatViewModel Function UnbindFromAbilitySystem
struct Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics
{
	struct NinjaCombatViewModel_eventUnbindFromAbilitySystem_Parms
	{
		AActor* OldActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|View Model" },
		{ "Comment", "/**\n\x09 * Unbinds this View Model from an Ability Component and clears all current Attribute Bindings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/NinjaCombatViewModel.h" },
		{ "ToolTip", "Unbinds this View Model from an Ability Component and clears all current Attribute Bindings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::NewProp_OldActor = { "OldActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatViewModel_eventUnbindFromAbilitySystem_Parms, OldActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::NewProp_OldActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatViewModel, nullptr, "UnbindFromAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::NinjaCombatViewModel_eventUnbindFromAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::NinjaCombatViewModel_eventUnbindFromAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatViewModel::execUnbindFromAbilitySystem)
{
	P_GET_OBJECT(AActor,Z_Param_OldActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromAbilitySystem(Z_Param_OldActor);
	P_NATIVE_END;
}
// End Class UNinjaCombatViewModel Function UnbindFromAbilitySystem

// Begin Class UNinjaCombatViewModel
void UNinjaCombatViewModel::GetbChangedActor_WrapperImpl(const void* Object, void* OutValue)
{
	const UNinjaCombatViewModel* Obj = (const UNinjaCombatViewModel*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->HasChangedActor();
}
void UNinjaCombatViewModel::SetbChangedActor_WrapperImpl(void* Object, const void* InValue)
{
	UNinjaCombatViewModel* Obj = (UNinjaCombatViewModel*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetChangedActor(Value);
}
void UNinjaCombatViewModel::StaticRegisterNativesUNinjaCombatViewModel()
{
	UClass* Class = UNinjaCombatViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToAbilitySystem", &UNinjaCombatViewModel::execBindToAbilitySystem },
		{ "GetCombatActor", &UNinjaCombatViewModel::execGetCombatActor },
		{ "UnbindFromAbilitySystem", &UNinjaCombatViewModel::execUnbindFromAbilitySystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatViewModel);
UClass* Z_Construct_UClass_UNinjaCombatViewModel_NoRegister()
{
	return UNinjaCombatViewModel::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for Ninja Combat view models using the Ability System component. \n */" },
		{ "IncludePath", "UI/ViewModel/NinjaCombatViewModel.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/NinjaCombatViewModel.h" },
		{ "ToolTip", "Base class for Ninja Combat view models using the Ability System component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChangedActor_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/NinjaCombatViewModel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bChangedActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChangedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatViewModel_BindToAbilitySystem, "BindToAbilitySystem" }, // 2403730783
		{ &Z_Construct_UFunction_UNinjaCombatViewModel_GetCombatActor, "GetCombatActor" }, // 1924615110
		{ &Z_Construct_UFunction_UNinjaCombatViewModel_UnbindFromAbilitySystem, "UnbindFromAbilitySystem" }, // 3780575459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatViewModel_Statics::NewProp_bChangedActor_SetBit(void* Obj)
{
	((UNinjaCombatViewModel*)Obj)->bChangedActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatViewModel_Statics::NewProp_bChangedActor = { "bChangedActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UNinjaCombatViewModel::SetbChangedActor_WrapperImpl, &UNinjaCombatViewModel::GetbChangedActor_WrapperImpl, 1, sizeof(bool), sizeof(UNinjaCombatViewModel), &Z_Construct_UClass_UNinjaCombatViewModel_Statics::NewProp_bChangedActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChangedActor_MetaData), NewProp_bChangedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatViewModel_Statics::NewProp_bChangedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMVVMViewModelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatViewModel_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatActorAwareInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatViewModel, ICombatActorAwareInterface), false },  // 1763291407
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatViewModel_Statics::ClassParams = {
	&UNinjaCombatViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatViewModel_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatViewModel_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatViewModel()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatViewModel.OuterSingleton, Z_Construct_UClass_UNinjaCombatViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatViewModel.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UNinjaCombatViewModel>()
{
	return UNinjaCombatViewModel::StaticClass();
}
UNinjaCombatViewModel::UNinjaCombatViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatViewModel);
UNinjaCombatViewModel::~UNinjaCombatViewModel() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UNinjaCombatViewModel, bChangedActor)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UNinjaCombatViewModel)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UNinjaCombatViewModel, bChangedActor)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UNinjaCombatViewModel);
// End Class UNinjaCombatViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_NinjaCombatViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatViewModel, UNinjaCombatViewModel::StaticClass, TEXT("UNinjaCombatViewModel"), &Z_Registration_Info_UClass_UNinjaCombatViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatViewModel), 2583072093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_NinjaCombatViewModel_h_1957121091(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_NinjaCombatViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_NinjaCombatViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
