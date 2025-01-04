// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/NinjaInputHandler.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputHandler Function CanBeBuffered
struct Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics
{
	struct NinjaInputHandler_eventCanBeBuffered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Handler" },
		{ "Comment", "/**\n     * Informs if this handler can be buffered.\n     *\n     * @return\n     *      A boolean value informing if this Input Handler can be buffered, meaning that if the\n     *      Input Buffer is open, than this won't be executed immediately. Instead, it will be\n     *      executed later, when the buffer is closed and released.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Informs if this handler can be buffered.\n\n@return\n     A boolean value informing if this Input Handler can be buffered, meaning that if the\n     Input Buffer is open, than this won't be executed immediately. Instead, it will be\n     executed later, when the buffer is closed and released." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputHandler_eventCanBeBuffered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputHandler_eventCanBeBuffered_Parms), &Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "CanBeBuffered", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::NinjaInputHandler_eventCanBeBuffered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::NinjaInputHandler_eventCanBeBuffered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execCanBeBuffered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanBeBuffered();
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function CanBeBuffered

// Begin Class UNinjaInputHandler Function CanHandle
struct NinjaInputHandler_eventCanHandle_Parms
{
	ETriggerEvent TriggerEvent;
	const UInputAction* InputAction;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInputHandler_eventCanHandle_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInputHandler_CanHandle = FName(TEXT("CanHandle"));
bool UNinjaInputHandler::CanHandle(ETriggerEvent const& TriggerEvent, const UInputAction* InputAction) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputHandler_CanHandle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputHandler_eventCanHandle_Parms Parms;
		Parms.TriggerEvent=TriggerEvent;
		Parms.InputAction=InputAction;
		const_cast<UNinjaInputHandler*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInputHandler*>(this)->CanHandle_Implementation(TriggerEvent, InputAction);
	}
}
struct Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Checks if this handler can deal with a given action/trigger.\n\x09 *\n\x09 * @param TriggerEvent\n\x09 *      The event to be checked.\n\x09 *      \n\x09 * @param InputAction\n\x09 *      The input action to be checked.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A boolean value informing if this Action Handler is capable of handling a given\n\x09 *\x09\x09""combination of Trigger Event and Input Action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Checks if this handler can deal with a given action/trigger.\n\n@param TriggerEvent\n     The event to be checked.\n\n@param InputAction\n     The input action to be checked.\n\n@return\n             A boolean value informing if this Action Handler is capable of handling a given\n             combination of Trigger Event and Input Action." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventCanHandle_Parms, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvent_MetaData), NewProp_TriggerEvent_MetaData) }; // 3771639830
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventCanHandle_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
void Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputHandler_eventCanHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputHandler_eventCanHandle_Parms), &Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "CanHandle", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::PropPointers), sizeof(NinjaInputHandler_eventCanHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputHandler_eventCanHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_CanHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_CanHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execCanHandle)
{
	P_GET_ENUM_REF(ETriggerEvent,Z_Param_Out_TriggerEvent);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanHandle_Implementation((ETriggerEvent&)(Z_Param_Out_TriggerEvent),Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function CanHandle

// Begin Class UNinjaInputHandler Function HandleCancelledEvent
struct NinjaInputHandler_eventHandleCancelledEvent_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	const UInputAction* InputAction;
};
static const FName NAME_UNinjaInputHandler_HandleCancelledEvent = FName(TEXT("HandleCancelledEvent"));
void UNinjaInputHandler::HandleCancelledEvent(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputHandler_HandleCancelledEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputHandler_eventHandleCancelledEvent_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		Parms.InputAction=InputAction;
		const_cast<UNinjaInputHandler*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaInputHandler*>(this)->HandleCancelledEvent_Implementation(Manager, Value, InputAction);
	}
}
struct Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Handles the Cancelled event.\n\x09 *\n\x09 * @param Manager\x09\x09The Actor Component assigned to the owning character invoking this handler.\n\x09 * @param Value\x09\x09\x09""Final Action value to be applied to the owning character.\n\x09 * @param InputAction\x09""Additional information about the Input Action that triggered this handler.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Handles the Cancelled event.\n\n@param Manager               The Actor Component assigned to the owning character invoking this handler.\n@param Value                 Final Action value to be applied to the owning character.\n@param InputAction   Additional information about the Input Action that triggered this handler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleCancelledEvent_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleCancelledEvent_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleCancelledEvent_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "HandleCancelledEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::PropPointers), sizeof(NinjaInputHandler_eventHandleCancelledEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputHandler_eventHandleCancelledEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execHandleCancelledEvent)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCancelledEvent_Implementation(Z_Param_Manager,Z_Param_Out_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function HandleCancelledEvent

// Begin Class UNinjaInputHandler Function HandleCompletedEvent
struct NinjaInputHandler_eventHandleCompletedEvent_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	const UInputAction* InputAction;
};
static const FName NAME_UNinjaInputHandler_HandleCompletedEvent = FName(TEXT("HandleCompletedEvent"));
void UNinjaInputHandler::HandleCompletedEvent(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputHandler_HandleCompletedEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputHandler_eventHandleCompletedEvent_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		Parms.InputAction=InputAction;
		const_cast<UNinjaInputHandler*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaInputHandler*>(this)->HandleCompletedEvent_Implementation(Manager, Value, InputAction);
	}
}
struct Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Handles the Completed event.\n\x09 *\n\x09 * @param Manager\x09\x09The Actor Component assigned to the owning character invoking this handler.\n\x09 * @param Value\x09\x09\x09""Final Action value to be applied to the owning character.\n\x09 * @param InputAction\x09""Additional information about the Input Action that triggered this handler.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Handles the Completed event.\n\n@param Manager               The Actor Component assigned to the owning character invoking this handler.\n@param Value                 Final Action value to be applied to the owning character.\n@param InputAction   Additional information about the Input Action that triggered this handler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleCompletedEvent_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleCompletedEvent_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleCompletedEvent_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "HandleCompletedEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::PropPointers), sizeof(NinjaInputHandler_eventHandleCompletedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputHandler_eventHandleCompletedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execHandleCompletedEvent)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCompletedEvent_Implementation(Z_Param_Manager,Z_Param_Out_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function HandleCompletedEvent

// Begin Class UNinjaInputHandler Function HandleOngoingEvent
struct NinjaInputHandler_eventHandleOngoingEvent_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	const UInputAction* InputAction;
	float ElapsedTime;
};
static const FName NAME_UNinjaInputHandler_HandleOngoingEvent = FName(TEXT("HandleOngoingEvent"));
void UNinjaInputHandler::HandleOngoingEvent(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputHandler_HandleOngoingEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputHandler_eventHandleOngoingEvent_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		Parms.InputAction=InputAction;
		Parms.ElapsedTime=ElapsedTime;
		const_cast<UNinjaInputHandler*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaInputHandler*>(this)->HandleOngoingEvent_Implementation(Manager, Value, InputAction, ElapsedTime);
	}
}
struct Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Handles the Ongoing event.\n\x09 *\n\x09 * @param Manager\x09\x09The Actor Component assigned to the owning character invoking this handler.\n\x09 * @param Value\x09\x09\x09""Final Action value to be applied to the owning character.\n\x09 * @param InputAction\x09""Additional information about the Input Action that triggered this handler.\n\x09 * @param ElapsedTime\x09Total time the action has been evaluating triggering (Ongoing & Triggered).\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Handles the Ongoing event.\n\n@param Manager               The Actor Component assigned to the owning character invoking this handler.\n@param Value                 Final Action value to be applied to the owning character.\n@param InputAction   Additional information about the Input Action that triggered this handler.\n@param ElapsedTime   Total time the action has been evaluating triggering (Ongoing & Triggered)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleOngoingEvent_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleOngoingEvent_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleOngoingEvent_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleOngoingEvent_Parms, ElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::NewProp_ElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "HandleOngoingEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::PropPointers), sizeof(NinjaInputHandler_eventHandleOngoingEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputHandler_eventHandleOngoingEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execHandleOngoingEvent)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOngoingEvent_Implementation(Z_Param_Manager,Z_Param_Out_Value,Z_Param_InputAction,Z_Param_ElapsedTime);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function HandleOngoingEvent

// Begin Class UNinjaInputHandler Function HandleStartedEvent
struct NinjaInputHandler_eventHandleStartedEvent_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	const UInputAction* InputAction;
};
static const FName NAME_UNinjaInputHandler_HandleStartedEvent = FName(TEXT("HandleStartedEvent"));
void UNinjaInputHandler::HandleStartedEvent(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputHandler_HandleStartedEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputHandler_eventHandleStartedEvent_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		Parms.InputAction=InputAction;
		const_cast<UNinjaInputHandler*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaInputHandler*>(this)->HandleStartedEvent_Implementation(Manager, Value, InputAction);
	}
}
struct Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Handles the Started event.\n\x09 *\n\x09 * @param Manager\x09\x09The Actor Component assigned to the owning character invoking this handler.\n\x09 * @param Value\x09\x09\x09""Final Action value to be applied to the owning character.\n\x09 * @param InputAction\x09""Additional information about the Input Action that triggered this handler.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Handles the Started event.\n\n@param Manager               The Actor Component assigned to the owning character invoking this handler.\n@param Value                 Final Action value to be applied to the owning character.\n@param InputAction   Additional information about the Input Action that triggered this handler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleStartedEvent_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleStartedEvent_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleStartedEvent_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "HandleStartedEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::PropPointers), sizeof(NinjaInputHandler_eventHandleStartedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputHandler_eventHandleStartedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execHandleStartedEvent)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStartedEvent_Implementation(Z_Param_Manager,Z_Param_Out_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function HandleStartedEvent

// Begin Class UNinjaInputHandler Function HandleTriggeredEvent
struct NinjaInputHandler_eventHandleTriggeredEvent_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	const UInputAction* InputAction;
	float ElapsedTime;
};
static const FName NAME_UNinjaInputHandler_HandleTriggeredEvent = FName(TEXT("HandleTriggeredEvent"));
void UNinjaInputHandler::HandleTriggeredEvent(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction, float ElapsedTime) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputHandler_HandleTriggeredEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputHandler_eventHandleTriggeredEvent_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		Parms.InputAction=InputAction;
		Parms.ElapsedTime=ElapsedTime;
		const_cast<UNinjaInputHandler*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaInputHandler*>(this)->HandleTriggeredEvent_Implementation(Manager, Value, InputAction, ElapsedTime);
	}
}
struct Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Handles the Triggered event.\n\x09 *\n\x09 * @param Manager\x09\x09The Actor Component assigned to the owning character invoking this handler.\n\x09 * @param Value\x09\x09\x09""Final Action value to be applied to the owning character.\n\x09 * @param InputAction\x09""Additional information about the Input Action that triggered this handler.\n\x09 * @param ElapsedTime\x09Total time the action has been evaluating triggering (Ongoing & Triggered).\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Handles the Triggered event.\n\n@param Manager               The Actor Component assigned to the owning character invoking this handler.\n@param Value                 Final Action value to be applied to the owning character.\n@param InputAction   Additional information about the Input Action that triggered this handler.\n@param ElapsedTime   Total time the action has been evaluating triggering (Ongoing & Triggered)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleTriggeredEvent_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleTriggeredEvent_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleTriggeredEvent_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHandleTriggeredEvent_Parms, ElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::NewProp_ElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "HandleTriggeredEvent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::PropPointers), sizeof(NinjaInputHandler_eventHandleTriggeredEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputHandler_eventHandleTriggeredEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execHandleTriggeredEvent)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTriggeredEvent_Implementation(Z_Param_Manager,Z_Param_Out_Value,Z_Param_InputAction,Z_Param_ElapsedTime);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function HandleTriggeredEvent

// Begin Class UNinjaInputHandler Function HasAnyTags
struct Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics
{
	struct NinjaInputHandler_eventHasAnyTags_Parms
	{
		const UNinjaInputManagerComponent* Manager;
		FGameplayTagContainer Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/**\n\x09 * Checks if any of the provided tags is present in the owner's ASC.\n\x09 *\n\x09 * @param Manager\x09\x09""Component that will provide access to the Ability Component.\n\x09 * @param Tags\x09\x09\x09Tags that will be checked in the owner.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09""A boolean value informing if any tags is present in the owner's ASC. Also, if the\n\x09 *\x09\x09owner does not have this component, then the result will be false as well.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Checks if any of the provided tags is present in the owner's ASC.\n\n@param Manager               Component that will provide access to the Ability Component.\n@param Tags                  Tags that will be checked in the owner.\n\n@return\n             A boolean value informing if any tags is present in the owner's ASC. Also, if the\n             owner does not have this component, then the result will be false as well." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHasAnyTags_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputHandler_eventHasAnyTags_Parms, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
void Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputHandler_eventHasAnyTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputHandler_eventHasAnyTags_Parms), &Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputHandler, nullptr, "HasAnyTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NinjaInputHandler_eventHasAnyTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::NinjaInputHandler_eventHasAnyTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputHandler::execHasAnyTags)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInputHandler::HasAnyTags(Z_Param_Manager,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// End Class UNinjaInputHandler Function HasAnyTags

// Begin Class UNinjaInputHandler
void UNinjaInputHandler::StaticRegisterNativesUNinjaInputHandler()
{
	UClass* Class = UNinjaInputHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanBeBuffered", &UNinjaInputHandler::execCanBeBuffered },
		{ "CanHandle", &UNinjaInputHandler::execCanHandle },
		{ "HandleCancelledEvent", &UNinjaInputHandler::execHandleCancelledEvent },
		{ "HandleCompletedEvent", &UNinjaInputHandler::execHandleCompletedEvent },
		{ "HandleOngoingEvent", &UNinjaInputHandler::execHandleOngoingEvent },
		{ "HandleStartedEvent", &UNinjaInputHandler::execHandleStartedEvent },
		{ "HandleTriggeredEvent", &UNinjaInputHandler::execHandleTriggeredEvent },
		{ "HasAnyTags", &UNinjaInputHandler::execHasAnyTags },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputHandler);
UClass* Z_Construct_UClass_UNinjaInputHandler_NoRegister()
{
	return UNinjaInputHandler::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaInput" },
		{ "Comment", "/**\n * Basic implementation of an Input Handler.\n */" },
		{ "IncludePath", "NinjaInputHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Basic implementation of an Input Handler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/** Actions that may trigger this input. */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Actions that may trigger this input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvents_MetaData[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/** Triggers that will invoke the handler. */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Triggers that will invoke the handler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeBuffered_MetaData[] = {
		{ "Category", "Input Handler" },
		{ "Comment", "/** Informs if this handler can be buffered. */" },
		{ "ModuleRelativePath", "Public/NinjaInputHandler.h" },
		{ "ToolTip", "Informs if this handler can be buffered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvents_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TriggerEvents;
	static void NewProp_bCanBeBuffered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeBuffered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInputHandler_CanBeBuffered, "CanBeBuffered" }, // 3490013361
		{ &Z_Construct_UFunction_UNinjaInputHandler_CanHandle, "CanHandle" }, // 3896984965
		{ &Z_Construct_UFunction_UNinjaInputHandler_HandleCancelledEvent, "HandleCancelledEvent" }, // 3611058122
		{ &Z_Construct_UFunction_UNinjaInputHandler_HandleCompletedEvent, "HandleCompletedEvent" }, // 2109775250
		{ &Z_Construct_UFunction_UNinjaInputHandler_HandleOngoingEvent, "HandleOngoingEvent" }, // 1639197917
		{ &Z_Construct_UFunction_UNinjaInputHandler_HandleStartedEvent, "HandleStartedEvent" }, // 3407826657
		{ &Z_Construct_UFunction_UNinjaInputHandler_HandleTriggeredEvent, "HandleTriggeredEvent" }, // 2277530589
		{ &Z_Construct_UFunction_UNinjaInputHandler_HasAnyTags, "HasAnyTags" }, // 3091497653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputHandler, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_TriggerEvents_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_TriggerEvents_Inner = { "TriggerEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_TriggerEvents = { "TriggerEvents", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputHandler, TriggerEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEvents_MetaData), NewProp_TriggerEvents_MetaData) }; // 3771639830
void Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_bCanBeBuffered_SetBit(void* Obj)
{
	((UNinjaInputHandler*)Obj)->bCanBeBuffered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_bCanBeBuffered = { "bCanBeBuffered", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInputHandler), &Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_bCanBeBuffered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanBeBuffered_MetaData), NewProp_bCanBeBuffered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInputHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_InputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_InputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_TriggerEvents_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_TriggerEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_TriggerEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputHandler_Statics::NewProp_bCanBeBuffered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInputHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputHandler_Statics::ClassParams = {
	&UNinjaInputHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInputHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputHandler_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputHandler()
{
	if (!Z_Registration_Info_UClass_UNinjaInputHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputHandler.OuterSingleton, Z_Construct_UClass_UNinjaInputHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputHandler.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputHandler>()
{
	return UNinjaInputHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputHandler);
UNinjaInputHandler::~UNinjaInputHandler() {}
// End Class UNinjaInputHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputHandler, UNinjaInputHandler::StaticClass, TEXT("UNinjaInputHandler"), &Z_Registration_Info_UClass_UNinjaInputHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputHandler), 75773348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_3757809490(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
