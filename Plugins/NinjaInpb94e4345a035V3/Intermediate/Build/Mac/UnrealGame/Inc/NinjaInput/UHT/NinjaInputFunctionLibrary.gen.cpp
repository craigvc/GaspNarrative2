// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/NinjaInputFunctionLibrary.h"
#include "EnhancedInput/Public/InputAction.h"
#include "NinjaInput/Public/Components/NinjaInputManagerComponent.h"
#include "NinjaInput/Public/NinjaInputHandler.h"
#include "NinjaInput/Public/Types/FBufferedInputCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputFunctionLibrary();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputFunctionLibrary_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputCommand();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputFunctionLibrary Function BreakBufferedInputCommand
struct Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics
{
	struct NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms
	{
		FBufferedInputCommand Command;
		bool bIsValid;
		UNinjaInputManagerComponent* Source;
		UNinjaInputHandler* Handler;
		FInputActionInstance ActionInstance;
		ETriggerEvent TriggerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Ninja Input" },
		{ "Comment", "/**\n\x09 * Breaks the Input Buffered Command, providing the proper values.\n\x09 * It will accept an invalid command, filling the output including its validity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputFunctionLibrary.h" },
		{ "ToolTip", "Breaks the Input Buffered Command, providing the proper values.\nIt will accept an invalid command, filling the output including its validity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handler_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Command;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms, Command), Z_Construct_UScriptStruct_FBufferedInputCommand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) }; // 4108219980
void Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms), &Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms, Source), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms, Handler), Z_Construct_UClass_UNinjaInputHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handler_MetaData), NewProp_Handler_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(0, nullptr) }; // 1467082250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_Handler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_ActionInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NewProp_TriggerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputFunctionLibrary, nullptr, "BreakBufferedInputCommand", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::NinjaInputFunctionLibrary_eventBreakBufferedInputCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputFunctionLibrary::execBreakBufferedInputCommand)
{
	P_GET_STRUCT_REF(FBufferedInputCommand,Z_Param_Out_Command);
	P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
	P_GET_OBJECT_REF(UNinjaInputManagerComponent,Z_Param_Out_Source);
	P_GET_OBJECT_REF(UNinjaInputHandler,Z_Param_Out_Handler);
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_GET_ENUM_REF(ETriggerEvent,Z_Param_Out_TriggerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaInputFunctionLibrary::BreakBufferedInputCommand(Z_Param_Out_Command,Z_Param_Out_bIsValid,P_ARG_GC_BARRIER(Z_Param_Out_Source),P_ARG_GC_BARRIER(Z_Param_Out_Handler),Z_Param_Out_ActionInstance,(ETriggerEvent&)(Z_Param_Out_TriggerEvent));
	P_NATIVE_END;
}
// End Class UNinjaInputFunctionLibrary Function BreakBufferedInputCommand

// Begin Class UNinjaInputFunctionLibrary Function FindLookAtCursorRotation
struct Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics
{
	struct NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms
	{
		const APlayerController* Controller;
		FRotator OutRotation;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input" },
		{ "Comment", "/**\n\x09 * Calculates a Look At Rotation for the cursor.\n\x09 */" },
		{ "CPP_Default_TraceChannel", "ECC_Visibility" },
		{ "ModuleRelativePath", "Public/NinjaInputFunctionLibrary.h" },
		{ "ToolTip", "Calculates a Look At Rotation for the cursor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms), &Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_OutRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputFunctionLibrary, nullptr, "FindLookAtCursorRotation", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::NinjaInputFunctionLibrary_eventFindLookAtCursorRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputFunctionLibrary::execFindLookAtCursorRotation)
{
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaInputFunctionLibrary::FindLookAtCursorRotation(Z_Param_Controller,Z_Param_Out_OutRotation,ECollisionChannel(Z_Param_TraceChannel));
	P_NATIVE_END;
}
// End Class UNinjaInputFunctionLibrary Function FindLookAtCursorRotation

// Begin Class UNinjaInputFunctionLibrary Function GetInputBufferComponent
struct Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics
{
	struct NinjaInputFunctionLibrary_eventGetInputBufferComponent_Parms
	{
		const AActor* Actor;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input" },
		{ "Comment", "/**\n     * Provides the Input Buffer assigned to a given actor.\n     *\n     * The generic Actor Component is guaranteed to be a valid implementation of the\n     * Input Buffer interface and is also guaranteed to be usable.\n     *\n     * @param Actor\n     *      The actor that may provide the Manager Component. Null values are handled.\n     *\n     * @return\n     *      Actor Component that is a valid, enabled, implementation of the Input Buffer\n     *      interface. May be null, so make sure to check before using it!\n     */" },
		{ "ModuleRelativePath", "Public/NinjaInputFunctionLibrary.h" },
		{ "ToolTip", "Provides the Input Buffer assigned to a given actor.\n\nThe generic Actor Component is guaranteed to be a valid implementation of the\nInput Buffer interface and is also guaranteed to be usable.\n\n@param Actor\n     The actor that may provide the Manager Component. Null values are handled.\n\n@return\n     Actor Component that is a valid, enabled, implementation of the Input Buffer\n     interface. May be null, so make sure to check before using it!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventGetInputBufferComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventGetInputBufferComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputFunctionLibrary, nullptr, "GetInputBufferComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::NinjaInputFunctionLibrary_eventGetInputBufferComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::NinjaInputFunctionLibrary_eventGetInputBufferComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputFunctionLibrary::execGetInputBufferComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaInputFunctionLibrary::GetInputBufferComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNinjaInputFunctionLibrary Function GetInputBufferComponent

// Begin Class UNinjaInputFunctionLibrary Function GetInputManagerComponent
struct Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics
{
	struct NinjaInputFunctionLibrary_eventGetInputManagerComponent_Parms
	{
		const AActor* Actor;
		UNinjaInputManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input" },
		{ "Comment", "/**\n     * Retrieves the Input Manager Component from a given actor.\n     *\n     * @param Actor\n     *      The actor that may provide the Manager Component. Null values are handled.\n     *\n     * @return\n     *      Input Manager Component assigned to the actor.\n     */" },
		{ "ModuleRelativePath", "Public/NinjaInputFunctionLibrary.h" },
		{ "ToolTip", "Retrieves the Input Manager Component from a given actor.\n\n@param Actor\n     The actor that may provide the Manager Component. Null values are handled.\n\n@return\n     Input Manager Component assigned to the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventGetInputManagerComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventGetInputManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputFunctionLibrary, nullptr, "GetInputManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::NinjaInputFunctionLibrary_eventGetInputManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::NinjaInputFunctionLibrary_eventGetInputManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputFunctionLibrary::execGetInputManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaInputManagerComponent**)Z_Param__Result=UNinjaInputFunctionLibrary::GetInputManagerComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNinjaInputFunctionLibrary Function GetInputManagerComponent

// Begin Class UNinjaInputFunctionLibrary Function MakeBufferedInputCommand
struct Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics
{
	struct NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms
	{
		UNinjaInputManagerComponent* Source;
		UNinjaInputHandler* Handler;
		FInputActionInstance ActionInstance;
		ETriggerEvent TriggerEvent;
		FBufferedInputCommand ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Ninja Input" },
		{ "Comment", "/**\n\x09 * Makes the Input Buffer Command using all the provided values.\n\x09 * If any value is invalid, then the Input Command will be invalid as well.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputFunctionLibrary.h" },
		{ "ToolTip", "Makes the Input Buffer Command using all the provided values.\nIf any value is invalid, then the Input Command will be invalid as well." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handler_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handler;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms, Source), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms, Handler), Z_Construct_UClass_UNinjaInputHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handler_MetaData), NewProp_Handler_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionInstance_MetaData), NewProp_ActionInstance_MetaData) }; // 1467082250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(0, nullptr) }; // 3771639830
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms, ReturnValue), Z_Construct_UScriptStruct_FBufferedInputCommand, METADATA_PARAMS(0, nullptr) }; // 4108219980
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_Handler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_ActionInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_TriggerEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_TriggerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputFunctionLibrary, nullptr, "MakeBufferedInputCommand", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::NinjaInputFunctionLibrary_eventMakeBufferedInputCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputFunctionLibrary::execMakeBufferedInputCommand)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Source);
	P_GET_OBJECT(UNinjaInputHandler,Z_Param_Handler);
	P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
	P_GET_ENUM(ETriggerEvent,Z_Param_TriggerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBufferedInputCommand*)Z_Param__Result=UNinjaInputFunctionLibrary::MakeBufferedInputCommand(Z_Param_Source,Z_Param_Handler,Z_Param_Out_ActionInstance,ETriggerEvent(Z_Param_TriggerEvent));
	P_NATIVE_END;
}
// End Class UNinjaInputFunctionLibrary Function MakeBufferedInputCommand

// Begin Class UNinjaInputFunctionLibrary
void UNinjaInputFunctionLibrary::StaticRegisterNativesUNinjaInputFunctionLibrary()
{
	UClass* Class = UNinjaInputFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakBufferedInputCommand", &UNinjaInputFunctionLibrary::execBreakBufferedInputCommand },
		{ "FindLookAtCursorRotation", &UNinjaInputFunctionLibrary::execFindLookAtCursorRotation },
		{ "GetInputBufferComponent", &UNinjaInputFunctionLibrary::execGetInputBufferComponent },
		{ "GetInputManagerComponent", &UNinjaInputFunctionLibrary::execGetInputManagerComponent },
		{ "MakeBufferedInputCommand", &UNinjaInputFunctionLibrary::execMakeBufferedInputCommand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaInputFunctionLibrary_NoRegister()
{
	return UNinjaInputFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides static helpers for the Ninja Input system.\n */" },
		{ "IncludePath", "NinjaInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaInputFunctionLibrary.h" },
		{ "ToolTip", "Provides static helpers for the Ninja Input system." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInputFunctionLibrary_BreakBufferedInputCommand, "BreakBufferedInputCommand" }, // 1309356518
		{ &Z_Construct_UFunction_UNinjaInputFunctionLibrary_FindLookAtCursorRotation, "FindLookAtCursorRotation" }, // 1095387265
		{ &Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputBufferComponent, "GetInputBufferComponent" }, // 1351193205
		{ &Z_Construct_UFunction_UNinjaInputFunctionLibrary_GetInputManagerComponent, "GetInputManagerComponent" }, // 1049377522
		{ &Z_Construct_UFunction_UNinjaInputFunctionLibrary_MakeBufferedInputCommand, "MakeBufferedInputCommand" }, // 1801513286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics::ClassParams = {
	&UNinjaInputFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaInputFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputFunctionLibrary.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputFunctionLibrary>()
{
	return UNinjaInputFunctionLibrary::StaticClass();
}
UNinjaInputFunctionLibrary::UNinjaInputFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputFunctionLibrary);
UNinjaInputFunctionLibrary::~UNinjaInputFunctionLibrary() {}
// End Class UNinjaInputFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputFunctionLibrary, UNinjaInputFunctionLibrary::StaticClass, TEXT("UNinjaInputFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaInputFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputFunctionLibrary), 173427446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_2388160547(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
