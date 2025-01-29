// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/NarrativeActivatableWidget.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeActivatableWidget() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeActivatableWidget();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeActivatableWidget_NoRegister();
NARRATIVECOMMONUI_API UFunction* Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature();
NARRATIVECOMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandle();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Delegate FInputActionExecutedDelegate
struct Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics
{
	struct _Script_NarrativeCommonUI_eventInputActionExecutedDelegate_Parms
	{
		FName ActionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeCommonUI_eventInputActionExecutedDelegate_Parms, ActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::NewProp_ActionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeCommonUI, nullptr, "InputActionExecutedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_NarrativeCommonUI_eventInputActionExecutedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::_Script_NarrativeCommonUI_eventInputActionExecutedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInputActionExecutedDelegate_DelegateWrapper(const FScriptDelegate& InputActionExecutedDelegate, FName ActionName)
{
	struct _Script_NarrativeCommonUI_eventInputActionExecutedDelegate_Parms
	{
		FName ActionName;
	};
	_Script_NarrativeCommonUI_eventInputActionExecutedDelegate_Parms Parms;
	Parms.ActionName=ActionName;
	InputActionExecutedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FInputActionExecutedDelegate

// Begin ScriptStruct FInputActionBindingHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionBindingHandle;
class UScriptStruct* FInputActionBindingHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionBindingHandle, (UObject*)Z_Construct_UPackage__Script_NarrativeCommonUI(), TEXT("InputActionBindingHandle"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionBindingHandle.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UScriptStruct* StaticStruct<FInputActionBindingHandle>()
{
	return FInputActionBindingHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionBindingHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
	nullptr,
	&NewStructOps,
	"InputActionBindingHandle",
	nullptr,
	0,
	sizeof(FInputActionBindingHandle),
	alignof(FInputActionBindingHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputActionBindingHandle()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton, Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputActionBindingHandle.InnerSingleton;
}
// End ScriptStruct FInputActionBindingHandle

// Begin Class UNarrativeActivatableWidget Function RegisterActions
static const FName NAME_UNarrativeActivatableWidget_RegisterActions = FName(TEXT("RegisterActions"));
void UNarrativeActivatableWidget::RegisterActions()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeActivatableWidget_RegisterActions);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivatableWidget, nullptr, "RegisterActions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeActivatableWidget Function RegisterActions

// Begin Class UNarrativeActivatableWidget Function RegisterBinding
struct Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics
{
	struct NarrativeActivatableWidget_eventRegisterBinding_Parms
	{
		FDataTableRowHandle InputAction;
		FScriptDelegate Callback;
		FInputActionBindingHandle BindingHandle;
		FText OverrideDisplayName;
		bool bShouldDisplayInActionBar;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "CPP_Default_bShouldDisplayInActionBar", "true" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDisplayInActionBar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OverrideDisplayName;
	static void NewProp_bShouldDisplayInActionBar_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayInActionBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventRegisterBinding_Parms, InputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(0, nullptr) }; // 1360917958
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventRegisterBinding_Parms, Callback), Z_Construct_UDelegateFunction_NarrativeCommonUI_InputActionExecutedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3847367014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventRegisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 4144393550
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_OverrideDisplayName = { "OverrideDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventRegisterBinding_Parms, OverrideDisplayName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_bShouldDisplayInActionBar_SetBit(void* Obj)
{
	((NarrativeActivatableWidget_eventRegisterBinding_Parms*)Obj)->bShouldDisplayInActionBar = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_bShouldDisplayInActionBar = { "bShouldDisplayInActionBar", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeActivatableWidget_eventRegisterBinding_Parms), &Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_bShouldDisplayInActionBar_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDisplayInActionBar_MetaData), NewProp_bShouldDisplayInActionBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_BindingHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_OverrideDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NewProp_bShouldDisplayInActionBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivatableWidget, nullptr, "RegisterBinding", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NarrativeActivatableWidget_eventRegisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::NarrativeActivatableWidget_eventRegisterBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivatableWidget::execRegisterBinding)
{
	P_GET_STRUCT(FDataTableRowHandle,Z_Param_InputAction);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT_REF(FInputActionBindingHandle,Z_Param_Out_BindingHandle);
	P_GET_PROPERTY(FTextProperty,Z_Param_OverrideDisplayName);
	P_GET_UBOOL(Z_Param_bShouldDisplayInActionBar);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterBinding(Z_Param_InputAction,FInputActionExecutedDelegate(Z_Param_Out_Callback),Z_Param_Out_BindingHandle,Z_Param_OverrideDisplayName,Z_Param_bShouldDisplayInActionBar);
	P_NATIVE_END;
}
// End Class UNarrativeActivatableWidget Function RegisterBinding

// Begin Class UNarrativeActivatableWidget Function SetBindingDisplayName
struct Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics
{
	struct NarrativeActivatableWidget_eventSetBindingDisplayName_Parms
	{
		FInputActionBindingHandle BindingHandle;
		FText NewDisplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventSetBindingDisplayName_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 4144393550
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventSetBindingDisplayName_Parms, NewDisplayName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::NewProp_BindingHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::NewProp_NewDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivatableWidget, nullptr, "SetBindingDisplayName", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::NarrativeActivatableWidget_eventSetBindingDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::NarrativeActivatableWidget_eventSetBindingDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivatableWidget::execSetBindingDisplayName)
{
	P_GET_STRUCT(FInputActionBindingHandle,Z_Param_BindingHandle);
	P_GET_PROPERTY(FTextProperty,Z_Param_NewDisplayName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBindingDisplayName(Z_Param_BindingHandle,Z_Param_NewDisplayName);
	P_NATIVE_END;
}
// End Class UNarrativeActivatableWidget Function SetBindingDisplayName

// Begin Class UNarrativeActivatableWidget Function UnregisterAllBindings
struct Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivatableWidget, nullptr, "UnregisterAllBindings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivatableWidget::execUnregisterAllBindings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterAllBindings();
	P_NATIVE_END;
}
// End Class UNarrativeActivatableWidget Function UnregisterAllBindings

// Begin Class UNarrativeActivatableWidget Function UnregisterBinding
struct Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics
{
	struct NarrativeActivatableWidget_eventUnregisterBinding_Parms
	{
		FInputActionBindingHandle BindingHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle = { "BindingHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivatableWidget_eventUnregisterBinding_Parms, BindingHandle), Z_Construct_UScriptStruct_FInputActionBindingHandle, METADATA_PARAMS(0, nullptr) }; // 4144393550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::NewProp_BindingHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivatableWidget, nullptr, "UnregisterBinding", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::NarrativeActivatableWidget_eventUnregisterBinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::NarrativeActivatableWidget_eventUnregisterBinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivatableWidget::execUnregisterBinding)
{
	P_GET_STRUCT(FInputActionBindingHandle,Z_Param_BindingHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterBinding(Z_Param_BindingHandle);
	P_NATIVE_END;
}
// End Class UNarrativeActivatableWidget Function UnregisterBinding

// Begin Class UNarrativeActivatableWidget
void UNarrativeActivatableWidget::StaticRegisterNativesUNarrativeActivatableWidget()
{
	UClass* Class = UNarrativeActivatableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterBinding", &UNarrativeActivatableWidget::execRegisterBinding },
		{ "SetBindingDisplayName", &UNarrativeActivatableWidget::execSetBindingDisplayName },
		{ "UnregisterAllBindings", &UNarrativeActivatableWidget::execUnregisterAllBindings },
		{ "UnregisterBinding", &UNarrativeActivatableWidget::execUnregisterBinding },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActivatableWidget);
UClass* Z_Construct_UClass_UNarrativeActivatableWidget_NoRegister()
{
	return UNarrativeActivatableWidget::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActivatableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisableNativeTick", "" },
		{ "IncludePath", "NarrativeActivatableWidget.h" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGameInput_MetaData[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeactivateOnBack_MetaData[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFocusDesiredTargetOnActivate_MetaData[] = {
		{ "Category", "Narrative Activatable Widget" },
		{ "Comment", "//If true we'll automatically focus GetDesiredFocusTarget() when widget activates\n" },
		{ "ModuleRelativePath", "Public/NarrativeActivatableWidget.h" },
		{ "ToolTip", "If true we'll automatically focus GetDesiredFocusTarget() when widget activates" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseGameInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGameInput;
	static void NewProp_bDeactivateOnBack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeactivateOnBack;
	static void NewProp_bFocusDesiredTargetOnActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFocusDesiredTargetOnActivate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterActions, "RegisterActions" }, // 1271419264
		{ &Z_Construct_UFunction_UNarrativeActivatableWidget_RegisterBinding, "RegisterBinding" }, // 447237085
		{ &Z_Construct_UFunction_UNarrativeActivatableWidget_SetBindingDisplayName, "SetBindingDisplayName" }, // 1764803238
		{ &Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterAllBindings, "UnregisterAllBindings" }, // 2761119814
		{ &Z_Construct_UFunction_UNarrativeActivatableWidget_UnregisterBinding, "UnregisterBinding" }, // 2461618450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActivatableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bUseGameInput_SetBit(void* Obj)
{
	((UNarrativeActivatableWidget*)Obj)->bUseGameInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bUseGameInput = { "bUseGameInput", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeActivatableWidget), &Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bUseGameInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGameInput_MetaData), NewProp_bUseGameInput_MetaData) };
void Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bDeactivateOnBack_SetBit(void* Obj)
{
	((UNarrativeActivatableWidget*)Obj)->bDeactivateOnBack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bDeactivateOnBack = { "bDeactivateOnBack", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeActivatableWidget), &Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bDeactivateOnBack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeactivateOnBack_MetaData), NewProp_bDeactivateOnBack_MetaData) };
void Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bFocusDesiredTargetOnActivate_SetBit(void* Obj)
{
	((UNarrativeActivatableWidget*)Obj)->bFocusDesiredTargetOnActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bFocusDesiredTargetOnActivate = { "bFocusDesiredTargetOnActivate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeActivatableWidget), &Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bFocusDesiredTargetOnActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFocusDesiredTargetOnActivate_MetaData), NewProp_bFocusDesiredTargetOnActivate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeActivatableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bUseGameInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bDeactivateOnBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivatableWidget_Statics::NewProp_bFocusDesiredTargetOnActivate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivatableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeActivatableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivatableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActivatableWidget_Statics::ClassParams = {
	&UNarrativeActivatableWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeActivatableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivatableWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivatableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActivatableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActivatableWidget()
{
	if (!Z_Registration_Info_UClass_UNarrativeActivatableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActivatableWidget.OuterSingleton, Z_Construct_UClass_UNarrativeActivatableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActivatableWidget.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeActivatableWidget>()
{
	return UNarrativeActivatableWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActivatableWidget);
UNarrativeActivatableWidget::~UNarrativeActivatableWidget() {}
// End Class UNarrativeActivatableWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeActivatableWidget_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputActionBindingHandle::StaticStruct, Z_Construct_UScriptStruct_FInputActionBindingHandle_Statics::NewStructOps, TEXT("InputActionBindingHandle"), &Z_Registration_Info_UScriptStruct_InputActionBindingHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionBindingHandle), 4144393550U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeActivatableWidget, UNarrativeActivatableWidget::StaticClass, TEXT("UNarrativeActivatableWidget"), &Z_Registration_Info_UClass_UNarrativeActivatableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActivatableWidget), 227274200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeActivatableWidget_h_2219813094(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeActivatableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeActivatableWidget_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeActivatableWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeActivatableWidget_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
