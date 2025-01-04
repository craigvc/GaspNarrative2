// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/ViewModel_ComboState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_ComboState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_ComboState();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_ComboState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UViewModel_ComboState Function HandleComboCountChanged
struct Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics
{
	struct ViewModel_ComboState_eventHandleComboCountChanged_Parms
	{
		UActorComponent* ComboManager;
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_ComboState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ComboState_eventHandleComboCountChanged_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ComboState_eventHandleComboCountChanged_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ComboState, nullptr, "HandleComboCountChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::ViewModel_ComboState_eventHandleComboCountChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::ViewModel_ComboState_eventHandleComboCountChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ComboState::execHandleComboCountChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ComboManager);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComboCountChanged(Z_Param_ComboManager,Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UViewModel_ComboState Function HandleComboCountChanged

// Begin Class UViewModel_ComboState Function HandleComboWindowChanged
struct Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics
{
	struct ViewModel_ComboState_eventHandleComboWindowChanged_Parms
	{
		UActorComponent* ComboManager;
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_ComboState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_ComboState_eventHandleComboWindowChanged_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((ViewModel_ComboState_eventHandleComboWindowChanged_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ViewModel_ComboState_eventHandleComboWindowChanged_Parms), &Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_ComboState, nullptr, "HandleComboWindowChanged", nullptr, nullptr, Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::ViewModel_ComboState_eventHandleComboWindowChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::ViewModel_ComboState_eventHandleComboWindowChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_ComboState::execHandleComboWindowChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ComboManager);
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComboWindowChanged(Z_Param_ComboManager,Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UViewModel_ComboState Function HandleComboWindowChanged

// Begin Class UViewModel_ComboState
void UViewModel_ComboState::GetbInComboWindow_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_ComboState* Obj = (const UViewModel_ComboState*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->InComboWindow();
}
void UViewModel_ComboState::SetbInComboWindow_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ComboState* Obj = (UViewModel_ComboState*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetInComboWindow(Value);
}
void UViewModel_ComboState::GetComboCount_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewModel_ComboState* Obj = (const UViewModel_ComboState*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetComboCount();
}
void UViewModel_ComboState::SetComboCount_WrapperImpl(void* Object, const void* InValue)
{
	UViewModel_ComboState* Obj = (UViewModel_ComboState*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetComboCount(Value);
}
void UViewModel_ComboState::StaticRegisterNativesUViewModel_ComboState()
{
	UClass* Class = UViewModel_ComboState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleComboCountChanged", &UViewModel_ComboState::execHandleComboCountChanged },
		{ "HandleComboWindowChanged", &UViewModel_ComboState::execHandleComboWindowChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_ComboState);
UClass* Z_Construct_UClass_UViewModel_ComboState_NoRegister()
{
	return UViewModel_ComboState::StaticClass();
}
struct Z_Construct_UClass_UViewModel_ComboState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Exposes the Combo State.\n */" },
		{ "DisplayName", "Combo State" },
		{ "IncludePath", "UI/ViewModel/ViewModel_ComboState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_ComboState.h" },
		{ "ToolTip", "Exposes the Combo State." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInComboWindow_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/** Indicates if the character is currently staggered. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_ComboState.h" },
		{ "ToolTip", "Indicates if the character is currently staggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCount_MetaData[] = {
		{ "Category", "Combo" },
		{ "Comment", "/** Poise available in the Attribute Set. */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_ComboState.h" },
		{ "ToolTip", "Poise available in the Attribute Set." },
	};
#endif // WITH_METADATA
	static void NewProp_bInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComboWindow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_ComboState_HandleComboCountChanged, "HandleComboCountChanged" }, // 2708174000
		{ &Z_Construct_UFunction_UViewModel_ComboState_HandleComboWindowChanged, "HandleComboWindowChanged" }, // 2369547388
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_ComboState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UViewModel_ComboState_Statics::NewProp_bInComboWindow_SetBit(void* Obj)
{
	((UViewModel_ComboState*)Obj)->bInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UViewModel_ComboState_Statics::NewProp_bInComboWindow = { "bInComboWindow", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ComboState::SetbInComboWindow_WrapperImpl, &UViewModel_ComboState::GetbInComboWindow_WrapperImpl, 1, sizeof(bool), sizeof(UViewModel_ComboState), &Z_Construct_UClass_UViewModel_ComboState_Statics::NewProp_bInComboWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInComboWindow_MetaData), NewProp_bInComboWindow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UViewModel_ComboState_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UViewModel_ComboState::SetComboCount_WrapperImpl, &UViewModel_ComboState::GetComboCount_WrapperImpl, 1, STRUCT_OFFSET(UViewModel_ComboState, ComboCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCount_MetaData), NewProp_ComboCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewModel_ComboState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ComboState_Statics::NewProp_bInComboWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewModel_ComboState_Statics::NewProp_ComboCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ComboState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewModel_ComboState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ComboState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_ComboState_Statics::ClassParams = {
	&UViewModel_ComboState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewModel_ComboState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ComboState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_ComboState_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_ComboState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_ComboState()
{
	if (!Z_Registration_Info_UClass_UViewModel_ComboState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_ComboState.OuterSingleton, Z_Construct_UClass_UViewModel_ComboState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_ComboState.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UViewModel_ComboState>()
{
	return UViewModel_ComboState::StaticClass();
}
UViewModel_ComboState::UViewModel_ComboState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_ComboState);
UViewModel_ComboState::~UViewModel_ComboState() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ComboState, bInComboWindow)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_ComboState, ComboCount)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_ComboState)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ComboState, bInComboWindow)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_ComboState, ComboCount)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_ComboState);
// End Class UViewModel_ComboState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_ComboState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_ComboState, UViewModel_ComboState::StaticClass, TEXT("UViewModel_ComboState"), &Z_Registration_Info_UClass_UViewModel_ComboState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_ComboState), 1558454572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_ComboState_h_2397128767(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_ComboState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_ComboState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
