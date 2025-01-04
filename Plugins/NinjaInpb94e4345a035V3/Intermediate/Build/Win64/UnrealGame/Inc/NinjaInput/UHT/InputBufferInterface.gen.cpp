// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Interfaces/InputBufferInterface.h"
#include "NinjaInput/Public/Types/FBufferedInputCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBufferInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputBufferInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputBufferInterface_NoRegister();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputCommand();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Interface UInputBufferInterface Function BufferInputCommands
struct InputBufferInterface_eventBufferInputCommands_Parms
{
	TArray<FBufferedInputCommand> InputCommandsForAction;
};
void IInputBufferInterface::BufferInputCommands(TArray<FBufferedInputCommand>& InputCommandsForAction)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BufferInputCommands instead.");
}
static FName NAME_UInputBufferInterface_BufferInputCommands = FName(TEXT("BufferInputCommands"));
void IInputBufferInterface::Execute_BufferInputCommands(UObject* O, TArray<FBufferedInputCommand>& InputCommandsForAction)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputBufferInterface::StaticClass()));
	InputBufferInterface_eventBufferInputCommands_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputBufferInterface_BufferInputCommands);
	if (Func)
	{
		Parms.InputCommandsForAction=InputCommandsForAction;
		O->ProcessEvent(Func, &Parms);
		InputCommandsForAction=Parms.InputCommandsForAction;
	}
	else if (auto I = (IInputBufferInterface*)(O->GetNativeInterfaceAddress(UInputBufferInterface::StaticClass())))
	{
		I->BufferInputCommands_Implementation(InputCommandsForAction);
	}
}
struct Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Buffer Interface" },
		{ "Comment", "/**\n     * Adds an array of commands to the Input Buffer.\n     *\n     * All these commands were originated from the same accepted Input Action and actually\n     * represent the outcome of one Input Action Event.\n     *\n     * @param InputCommandsForAction\n     *      Input command to be added to the Buffer. The implementation can decide on its own\n     *      policy to add/override/queue commands as per current design requirements.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputBufferInterface.h" },
		{ "ToolTip", "Adds an array of commands to the Input Buffer.\n\nAll these commands were originated from the same accepted Input Action and actually\nrepresent the outcome of one Input Action Event.\n\n@param InputCommandsForAction\n     Input command to be added to the Buffer. The implementation can decide on its own\n     policy to add/override/queue commands as per current design requirements." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputCommandsForAction_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputCommandsForAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::NewProp_InputCommandsForAction_Inner = { "InputCommandsForAction", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBufferedInputCommand, METADATA_PARAMS(0, nullptr) }; // 4108219980
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::NewProp_InputCommandsForAction = { "InputCommandsForAction", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputBufferInterface_eventBufferInputCommands_Parms, InputCommandsForAction), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108219980
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::NewProp_InputCommandsForAction_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::NewProp_InputCommandsForAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferInterface, nullptr, "BufferInputCommands", nullptr, nullptr, Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::PropPointers), sizeof(InputBufferInterface_eventBufferInputCommands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputBufferInterface_eventBufferInputCommands_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputBufferInterface::execBufferInputCommands)
{
	P_GET_TARRAY_REF(FBufferedInputCommand,Z_Param_Out_InputCommandsForAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BufferInputCommands_Implementation(Z_Param_Out_InputCommandsForAction);
	P_NATIVE_END;
}
// End Interface UInputBufferInterface Function BufferInputCommands

// Begin Interface UInputBufferInterface Function CloseInputBuffer
struct InputBufferInterface_eventCloseInputBuffer_Parms
{
	bool bCancelled;
};
void IInputBufferInterface::CloseInputBuffer(bool bCancelled)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseInputBuffer instead.");
}
static FName NAME_UInputBufferInterface_CloseInputBuffer = FName(TEXT("CloseInputBuffer"));
void IInputBufferInterface::Execute_CloseInputBuffer(UObject* O, bool bCancelled)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputBufferInterface::StaticClass()));
	InputBufferInterface_eventCloseInputBuffer_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputBufferInterface_CloseInputBuffer);
	if (Func)
	{
		Parms.bCancelled=bCancelled;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInputBufferInterface*)(O->GetNativeInterfaceAddress(UInputBufferInterface::StaticClass())))
	{
		I->CloseInputBuffer_Implementation(bCancelled);
	}
}
struct Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Buffer Interface" },
		{ "Comment", "/**\n     * Closes the Input Buffer and executes the buffered action.\n     *\n     * @param bCancelled\n     *      Informs if the buffer was cancelled when, for example the Animation Notify\n     *      State ended without reaching the expected number of frames.\n     */" },
		{ "CPP_Default_bCancelled", "false" },
		{ "ModuleRelativePath", "Public/Interfaces/InputBufferInterface.h" },
		{ "ToolTip", "Closes the Input Buffer and executes the buffered action.\n\n@param bCancelled\n     Informs if the buffer was cancelled when, for example the Animation Notify\n     State ended without reaching the expected number of frames." },
	};
#endif // WITH_METADATA
	static void NewProp_bCancelled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::NewProp_bCancelled_SetBit(void* Obj)
{
	((InputBufferInterface_eventCloseInputBuffer_Parms*)Obj)->bCancelled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::NewProp_bCancelled = { "bCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputBufferInterface_eventCloseInputBuffer_Parms), &Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::NewProp_bCancelled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::NewProp_bCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferInterface, nullptr, "CloseInputBuffer", nullptr, nullptr, Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::PropPointers), sizeof(InputBufferInterface_eventCloseInputBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputBufferInterface_eventCloseInputBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputBufferInterface::execCloseInputBuffer)
{
	P_GET_UBOOL(Z_Param_bCancelled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseInputBuffer_Implementation(Z_Param_bCancelled);
	P_NATIVE_END;
}
// End Interface UInputBufferInterface Function CloseInputBuffer

// Begin Interface UInputBufferInterface Function IsInputBufferEnabled
struct InputBufferInterface_eventIsInputBufferEnabled_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputBufferInterface_eventIsInputBufferEnabled_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInputBufferInterface::IsInputBufferEnabled() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInputBufferEnabled instead.");
	InputBufferInterface_eventIsInputBufferEnabled_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInputBufferInterface_IsInputBufferEnabled = FName(TEXT("IsInputBufferEnabled"));
bool IInputBufferInterface::Execute_IsInputBufferEnabled(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputBufferInterface::StaticClass()));
	InputBufferInterface_eventIsInputBufferEnabled_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputBufferInterface_IsInputBufferEnabled);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInputBufferInterface*)(O->GetNativeInterfaceAddress(UInputBufferInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInputBufferEnabled_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Buffer Interface" },
		{ "Comment", "/**\n     * Informs the current buffer is enabled and can be activated.\n     *\n     * @return\n     *      A boolean value informing if the Input Buffer is enabled. If not, then the\n     *      buffer is not functional, and therefore it can't be opened.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputBufferInterface.h" },
		{ "ToolTip", "Informs the current buffer is enabled and can be activated.\n\n@return\n     A boolean value informing if the Input Buffer is enabled. If not, then the\n     buffer is not functional, and therefore it can't be opened." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputBufferInterface_eventIsInputBufferEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputBufferInterface_eventIsInputBufferEnabled_Parms), &Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferInterface, nullptr, "IsInputBufferEnabled", nullptr, nullptr, Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::PropPointers), sizeof(InputBufferInterface_eventIsInputBufferEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputBufferInterface_eventIsInputBufferEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputBufferInterface::execIsInputBufferEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInputBufferEnabled_Implementation();
	P_NATIVE_END;
}
// End Interface UInputBufferInterface Function IsInputBufferEnabled

// Begin Interface UInputBufferInterface Function IsInputBufferOpen
struct InputBufferInterface_eventIsInputBufferOpen_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputBufferInterface_eventIsInputBufferOpen_Parms()
		: ReturnValue(false)
	{
	}
};
bool IInputBufferInterface::IsInputBufferOpen() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsInputBufferOpen instead.");
	InputBufferInterface_eventIsInputBufferOpen_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInputBufferInterface_IsInputBufferOpen = FName(TEXT("IsInputBufferOpen"));
bool IInputBufferInterface::Execute_IsInputBufferOpen(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputBufferInterface::StaticClass()));
	InputBufferInterface_eventIsInputBufferOpen_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputBufferInterface_IsInputBufferOpen);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInputBufferInterface*)(O->GetNativeInterfaceAddress(UInputBufferInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsInputBufferOpen_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Buffer Interface" },
		{ "Comment", "/**\n     * Informs the current state of the Input Buffer.\n     *\n     * @return\n     *      A boolean value informing if the Input Buffer is currently open or closed.\n     *      To modify the buffer state, please use the proper \"Open\" and \"Close\" functions.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputBufferInterface.h" },
		{ "ToolTip", "Informs the current state of the Input Buffer.\n\n@return\n     A boolean value informing if the Input Buffer is currently open or closed.\n     To modify the buffer state, please use the proper \"Open\" and \"Close\" functions." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputBufferInterface_eventIsInputBufferOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputBufferInterface_eventIsInputBufferOpen_Parms), &Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferInterface, nullptr, "IsInputBufferOpen", nullptr, nullptr, Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::PropPointers), sizeof(InputBufferInterface_eventIsInputBufferOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputBufferInterface_eventIsInputBufferOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputBufferInterface::execIsInputBufferOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInputBufferOpen_Implementation();
	P_NATIVE_END;
}
// End Interface UInputBufferInterface Function IsInputBufferOpen

// Begin Interface UInputBufferInterface Function OpenInputBuffer
void IInputBufferInterface::OpenInputBuffer()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OpenInputBuffer instead.");
}
static FName NAME_UInputBufferInterface_OpenInputBuffer = FName(TEXT("OpenInputBuffer"));
void IInputBufferInterface::Execute_OpenInputBuffer(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputBufferInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UInputBufferInterface_OpenInputBuffer);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IInputBufferInterface*)(O->GetNativeInterfaceAddress(UInputBufferInterface::StaticClass())))
	{
		I->OpenInputBuffer_Implementation();
	}
}
struct Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Buffer Interface" },
		{ "Comment", "/**\n     * Activates the Input Buffer and routes actions to it.\n     * An Input Buffer can only be opened if it's enabled.\n     */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputBufferInterface.h" },
		{ "ToolTip", "Activates the Input Buffer and routes actions to it.\nAn Input Buffer can only be opened if it's enabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputBufferInterface, nullptr, "OpenInputBuffer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputBufferInterface::execOpenInputBuffer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenInputBuffer_Implementation();
	P_NATIVE_END;
}
// End Interface UInputBufferInterface Function OpenInputBuffer

// Begin Interface UInputBufferInterface
void UInputBufferInterface::StaticRegisterNativesUInputBufferInterface()
{
	UClass* Class = UInputBufferInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BufferInputCommands", &IInputBufferInterface::execBufferInputCommands },
		{ "CloseInputBuffer", &IInputBufferInterface::execCloseInputBuffer },
		{ "IsInputBufferEnabled", &IInputBufferInterface::execIsInputBufferEnabled },
		{ "IsInputBufferOpen", &IInputBufferInterface::execIsInputBufferOpen },
		{ "OpenInputBuffer", &IInputBufferInterface::execOpenInputBuffer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputBufferInterface);
UClass* Z_Construct_UClass_UInputBufferInterface_NoRegister()
{
	return UInputBufferInterface::StaticClass();
}
struct Z_Construct_UClass_UInputBufferInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/InputBufferInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputBufferInterface_BufferInputCommands, "BufferInputCommands" }, // 1383766944
		{ &Z_Construct_UFunction_UInputBufferInterface_CloseInputBuffer, "CloseInputBuffer" }, // 1624186592
		{ &Z_Construct_UFunction_UInputBufferInterface_IsInputBufferEnabled, "IsInputBufferEnabled" }, // 4113203624
		{ &Z_Construct_UFunction_UInputBufferInterface_IsInputBufferOpen, "IsInputBufferOpen" }, // 3366077213
		{ &Z_Construct_UFunction_UInputBufferInterface_OpenInputBuffer, "OpenInputBuffer" }, // 2219204171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputBufferInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputBufferInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputBufferInterface_Statics::ClassParams = {
	&UInputBufferInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputBufferInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputBufferInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputBufferInterface()
{
	if (!Z_Registration_Info_UClass_UInputBufferInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBufferInterface.OuterSingleton, Z_Construct_UClass_UInputBufferInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputBufferInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputBufferInterface>()
{
	return UInputBufferInterface::StaticClass();
}
UInputBufferInterface::UInputBufferInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBufferInterface);
UInputBufferInterface::~UInputBufferInterface() {}
// End Interface UInputBufferInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputBufferInterface, UInputBufferInterface::StaticClass, TEXT("UInputBufferInterface"), &Z_Registration_Info_UClass_UInputBufferInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBufferInterface), 634529503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_2583417613(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
