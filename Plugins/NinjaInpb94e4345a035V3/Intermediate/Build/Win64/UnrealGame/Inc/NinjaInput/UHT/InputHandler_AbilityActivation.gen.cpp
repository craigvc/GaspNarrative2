// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityActivation.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityActivation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityActivation();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityActivation_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputAbilityActivationCheck_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityActivation Function HandleActivation
struct Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics
{
	struct InputHandler_AbilityActivation_eventHandleActivation_Parms
	{
		UNinjaInputManagerComponent* Manager;
		FInputActionValue Value;
		const UInputAction* InputAction;
		float ElapsedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Ability Activation" },
		{ "Comment", "/**\n\x09 * Basic logic for activations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "Basic logic for activations." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventHandleActivation_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventHandleActivation_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventHandleActivation_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventHandleActivation_Parms, ElapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::NewProp_ElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_AbilityActivation, nullptr, "HandleActivation", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::InputHandler_AbilityActivation_eventHandleActivation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::InputHandler_AbilityActivation_eventHandleActivation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_AbilityActivation::execHandleActivation)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ElapsedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleActivation(Z_Param_Manager,Z_Param_Out_Value,Z_Param_InputAction,Z_Param_ElapsedTime);
	P_NATIVE_END;
}
// End Class UInputHandler_AbilityActivation Function HandleActivation

// Begin Class UInputHandler_AbilityActivation Function SendGameplayEvent
struct Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics
{
	struct InputHandler_AbilityActivation_eventSendGameplayEvent_Parms
	{
		const UNinjaInputManagerComponent* Manager;
		FGameplayTag GameplayEventTag;
		FInputActionValue Value;
		const UInputAction* InputAction;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability Activation Input Handler" },
		{ "Comment", "/**\n     * Sends a gameplay event for the provided tag.\n     *\n     * It will send the Input Action as an optional object and the value as Magnitude.\n     *\n     * @param Manager           Input Manager that has invoked this handler. Must be valid.\n     * @param GameplayEventTag  Gameplay Event Tag that identifies the Event to trigger. Must be valid.\n     * @param Value             Input value that generated the input activation.\n     * @param InputAction       Specific Input Action that was activated.\n     * @return                  Ability activations generated by this event. \n     */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "Sends a gameplay event for the provided tag.\n\nIt will send the Input Action as an optional object and the value as Magnitude.\n\n@param Manager           Input Manager that has invoked this handler. Must be valid.\n@param GameplayEventTag  Gameplay Event Tag that identifies the Event to trigger. Must be valid.\n@param Value             Input value that generated the input activation.\n@param InputAction       Specific Input Action that was activated.\n@return                  Ability activations generated by this event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventSendGameplayEvent_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_GameplayEventTag = { "GameplayEventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventSendGameplayEvent_Parms, GameplayEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventSendGameplayEvent_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventSendGameplayEvent_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_AbilityActivation_eventSendGameplayEvent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_GameplayEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_AbilityActivation, nullptr, "SendGameplayEvent", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::InputHandler_AbilityActivation_eventSendGameplayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::InputHandler_AbilityActivation_eventSendGameplayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_AbilityActivation::execSendGameplayEvent)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayEventTag);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SendGameplayEvent(Z_Param_Manager,Z_Param_GameplayEventTag,Z_Param_Out_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UInputHandler_AbilityActivation Function SendGameplayEvent

// Begin Class UInputHandler_AbilityActivation
void UInputHandler_AbilityActivation::StaticRegisterNativesUInputHandler_AbilityActivation()
{
	UClass* Class = UInputHandler_AbilityActivation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleActivation", &UInputHandler_AbilityActivation::execHandleActivation },
		{ "SendGameplayEvent", &UInputHandler_AbilityActivation::execSendGameplayEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityActivation);
UClass* Z_Construct_UClass_UInputHandler_AbilityActivation_NoRegister()
{
	return UInputHandler_AbilityActivation::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityActivation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base input handler for ability activations. \n */" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "Base input handler for ability activations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToggledActivation_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n     * Determines if the activation should be toggled.\n     *\n     * This means the first successful trigger will activate the ability and the next one will check if the\n     * ability is active first (with an optional query test), and if so, it will interrupt the ability.\n     */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "Determines if the activation should be toggled.\n\nThis means the first successful trigger will activate the ability and the next one will check if the\nability is active first (with an optional query test), and if so, it will interrupt the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSendEventIfActive_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n     * If set to true, this handler will send a Gameplay Event on additional inputs, made while the ability is active.\n     *\n     * Activation must be determined by child classes that will have their own activation strategies (i.e. Class, Tags\n     * or Input ID) and must use these same strategies to determine if an ability is active or not. \n     */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "If set to true, this handler will send a Gameplay Event on additional inputs, made while the ability is active.\n\nActivation must be determined by child classes that will have their own activation strategies (i.e. Class, Tags\nor Input ID) and must use these same strategies to determine if an ability is active or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerEventLocally_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n     * If set to true, the event will be triggered on locally.\n     *\n     * If the \"Trigger Event On Server\" flag is enabled and the Input Owner is both locally controlled and authoritative,\n     * the event is guaranteed to not be triggered twice.\n     */" },
		{ "EditCondition", "bSendEventIfActive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "If set to true, the event will be triggered on locally.\n\nIf the \"Trigger Event On Server\" flag is enabled and the Input Owner is both locally controlled and authoritative,\nthe event is guaranteed to not be triggered twice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerEventOnServer_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n     * If set to true, the event will be triggered on the server (authoritative) version.\n     *\n     * If the \"Trigger Event Locally\" flag is enabled and the Input Owner is both locally controlled and authoritative,\n     * the event is guaranteed to not be triggered twice.\n     */" },
		{ "EditCondition", "bSendEventIfActive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "If set to true, the event will be triggered on the server (authoritative) version.\n\nIf the \"Trigger Event Locally\" flag is enabled and the Input Owner is both locally controlled and authoritative,\nthe event is guaranteed to not be triggered twice." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEventTag_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n     * Gameplay Tag used to trigger a Gameplay Event, if there is an activation attempt, while the ability is active.\n     *\n     * This Gameplay Event can be tracked by the active ability or any other ability that is already active or can\n     * be activated by a Gameplay State. A common use-case for this is a Combo Attack.\n     */" },
		{ "EditCondition", "bSendEventIfActive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "Gameplay Tag used to trigger a Gameplay Event, if there is an activation attempt, while the ability is active.\n\nThis Gameplay Event can be tracked by the active ability or any other ability that is already active or can\nbe activated by a Gameplay State. A common use-case for this is a Combo Attack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationCheckClass_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n\x09 * Provides additional flexibility while evaluating Input Action values.\n\x09 *\n\x09 * For common triggers such as Pressed or Released, which will return a proper boolean false, you probably\n\x09 * won't need to use this. However, for other triggers such as \"Tap\" and \"Double Tap\" which won't provide\n\x09 * such boolean values - meaning their values will be *false* once they *trigger*, you may want to use the\n\x09 * provided (default) UNinjaInputAbilityActivationCheck, which can handle such cases.\n\x09 *\n\x09 * You can also extend the base class and add any other necessary checks for activation.\n\x09 *\n\x09 * This value is set as the default class, which handles both cases and tries to find an outcome as fast\n\x09 * as possible. However, if you are looking for extreme optimizations and are NOT using triggers such as\n\x09 * the ones mentioned above, you may want to clear this value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityActivation.h" },
		{ "ToolTip", "Provides additional flexibility while evaluating Input Action values.\n\nFor common triggers such as Pressed or Released, which will return a proper boolean false, you probably\nwon't need to use this. However, for other triggers such as \"Tap\" and \"Double Tap\" which won't provide\nsuch boolean values - meaning their values will be *false* once they *trigger*, you may want to use the\nprovided (default) UNinjaInputAbilityActivationCheck, which can handle such cases.\n\nYou can also extend the base class and add any other necessary checks for activation.\n\nThis value is set as the default class, which handles both cases and tries to find an outcome as fast\nas possible. However, if you are looking for extreme optimizations and are NOT using triggers such as\nthe ones mentioned above, you may want to clear this value." },
	};
#endif // WITH_METADATA
	static void NewProp_bToggledActivation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggledActivation;
	static void NewProp_bSendEventIfActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendEventIfActive;
	static void NewProp_bTriggerEventLocally_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerEventLocally;
	static void NewProp_bTriggerEventOnServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerEventOnServer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEventTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityActivationCheckClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandler_AbilityActivation_HandleActivation, "HandleActivation" }, // 659856122
		{ &Z_Construct_UFunction_UInputHandler_AbilityActivation_SendGameplayEvent, "SendGameplayEvent" }, // 747667958
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityActivation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bToggledActivation_SetBit(void* Obj)
{
	((UInputHandler_AbilityActivation*)Obj)->bToggledActivation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bToggledActivation = { "bToggledActivation", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputHandler_AbilityActivation), &Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bToggledActivation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToggledActivation_MetaData), NewProp_bToggledActivation_MetaData) };
void Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bSendEventIfActive_SetBit(void* Obj)
{
	((UInputHandler_AbilityActivation*)Obj)->bSendEventIfActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bSendEventIfActive = { "bSendEventIfActive", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputHandler_AbilityActivation), &Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bSendEventIfActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSendEventIfActive_MetaData), NewProp_bSendEventIfActive_MetaData) };
void Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventLocally_SetBit(void* Obj)
{
	((UInputHandler_AbilityActivation*)Obj)->bTriggerEventLocally = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventLocally = { "bTriggerEventLocally", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputHandler_AbilityActivation), &Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventLocally_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerEventLocally_MetaData), NewProp_bTriggerEventLocally_MetaData) };
void Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventOnServer_SetBit(void* Obj)
{
	((UInputHandler_AbilityActivation*)Obj)->bTriggerEventOnServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventOnServer = { "bTriggerEventOnServer", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputHandler_AbilityActivation), &Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventOnServer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerEventOnServer_MetaData), NewProp_bTriggerEventOnServer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_ActiveEventTag = { "ActiveEventTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_AbilityActivation, ActiveEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEventTag_MetaData), NewProp_ActiveEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_AbilityActivationCheckClass = { "AbilityActivationCheckClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_AbilityActivation, AbilityActivationCheckClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaInputAbilityActivationCheck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationCheckClass_MetaData), NewProp_AbilityActivationCheckClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bToggledActivation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bSendEventIfActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventLocally,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_bTriggerEventOnServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_ActiveEventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::NewProp_AbilityActivationCheckClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::ClassParams = {
	&UInputHandler_AbilityActivation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityActivation()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityActivation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityActivation.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityActivation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityActivation.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityActivation>()
{
	return UInputHandler_AbilityActivation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityActivation);
UInputHandler_AbilityActivation::~UInputHandler_AbilityActivation() {}
// End Class UInputHandler_AbilityActivation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityActivation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityActivation, UInputHandler_AbilityActivation::StaticClass, TEXT("UInputHandler_AbilityActivation"), &Z_Registration_Info_UClass_UInputHandler_AbilityActivation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityActivation), 421789259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityActivation_h_624211050(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityActivation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityActivation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
