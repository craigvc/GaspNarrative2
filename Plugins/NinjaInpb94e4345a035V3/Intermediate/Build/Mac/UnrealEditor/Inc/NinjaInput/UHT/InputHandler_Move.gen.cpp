// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_Move.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_Move() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Move();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Move_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_Move Function CanMove
struct InputHandler_Move_eventCanMove_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_Move_eventCanMove_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInputHandler_Move_CanMove = FName(TEXT("CanMove"));
bool UInputHandler_Move::CanMove(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Move_CanMove);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Move_eventCanMove_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Move*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_Move*>(this)->CanMove_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "Comment", "/**\n\x09 * Checks if the character is allowed to move.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "Checks if the character is allowed to move." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventCanMove_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventCanMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
void Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandler_Move_eventCanMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_Move_eventCanMove_Parms), &Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Move, nullptr, "CanMove", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::PropPointers), sizeof(InputHandler_Move_eventCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Move_eventCanMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Move_CanMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Move_CanMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Move::execCanMove)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMove_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Move Function CanMove

// Begin Class UInputHandler_Move Function GetMovementInputScaleValue
struct InputHandler_Move_eventGetMovementInputScaleValue_Parms
{
	const UNinjaInputManagerComponent* Manager;
	FVector2D InputValue;
	FVector2D ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_Move_eventGetMovementInputScaleValue_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UInputHandler_Move_GetMovementInputScaleValue = FName(TEXT("GetMovementInputScaleValue"));
FVector2D UInputHandler_Move::GetMovementInputScaleValue(const UNinjaInputManagerComponent* Manager, FVector2D const& InputValue) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Move_GetMovementInputScaleValue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Move_eventGetMovementInputScaleValue_Parms Parms;
		Parms.Manager=Manager;
		Parms.InputValue=InputValue;
		const_cast<UInputHandler_Move*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_Move*>(this)->GetMovementInputScaleValue_Implementation(Manager, InputValue);
	}
}
struct Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "Comment", "/**\n\x09 * Processes the Input Value considering any values from the Input Manager, such as the \"AnalogStickBehavior\".\n\x09 *\n\x09 * @param Manager\x09\x09Manager component providing access to the affected character.\n\x09 * @param InputValue\x09""Event magnitude applied to the movement.\n\x09 * @return\x09\x09\x09\x09The scaled input value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "Processes the Input Value considering any values from the Input Manager, such as the \"AnalogStickBehavior\".\n\n@param Manager               Manager component providing access to the affected character.\n@param InputValue    Event magnitude applied to the movement.\n@return                              The scaled input value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventGetMovementInputScaleValue_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventGetMovementInputScaleValue_Parms, InputValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputValue_MetaData), NewProp_InputValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventGetMovementInputScaleValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::NewProp_InputValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Move, nullptr, "GetMovementInputScaleValue", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::PropPointers), sizeof(InputHandler_Move_eventGetMovementInputScaleValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Move_eventGetMovementInputScaleValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Move::execGetMovementInputScaleValue)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InputValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetMovementInputScaleValue_Implementation(Z_Param_Manager,Z_Param_Out_InputValue);
	P_NATIVE_END;
}
// End Class UInputHandler_Move Function GetMovementInputScaleValue

// Begin Class UInputHandler_Move Function Move
struct InputHandler_Move_eventMove_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
};
static const FName NAME_UInputHandler_Move_Move = FName(TEXT("Move"));
void UInputHandler_Move::Move(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Move_Move);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Move_eventMove_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Move*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UInputHandler_Move*>(this)->Move_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Move_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Move" },
		{ "Comment", "/**\n\x09 * Effective implementation for moving a character.\n\x09 *\n\x09 * @param Manager\x09\x09Manager component providing access to the affected character.\n\x09 * @param Value\x09\x09\x09""Event magnitude applied to the movement.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "Effective implementation for moving a character.\n\n@param Manager               Manager component providing access to the affected character.\n@param Value                 Event magnitude applied to the movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Move_Move_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventMove_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Move_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Move_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Move_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_Move_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Move_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Move_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Move, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Move_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_Move_Statics::PropPointers), sizeof(InputHandler_Move_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Move_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Move_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Move_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Move_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Move_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Move::execMove)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Move Function Move

// Begin Class UInputHandler_Move
void UInputHandler_Move::StaticRegisterNativesUInputHandler_Move()
{
	UClass* Class = UInputHandler_Move::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanMove", &UInputHandler_Move::execCanMove },
		{ "GetMovementInputScaleValue", &UInputHandler_Move::execGetMovementInputScaleValue },
		{ "Move", &UInputHandler_Move::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_Move);
UClass* Z_Construct_UClass_UInputHandler_Move_NoRegister()
{
	return UInputHandler_Move::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_Move_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles character movement.\n */" },
		{ "DisplayName", "Character: Move" },
		{ "IncludePath", "InputHandlers/InputHandler_Move.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "Handles character movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpace_MetaData[] = {
		{ "Category", "Move" },
		{ "Comment", "/** Applies movement in world space, which can be useful for locomotion testing. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "Applies movement in world space, which can be useful for locomotion testing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMagnitudeToMove_MetaData[] = {
		{ "Category", "Move" },
		{ "Comment", "/**\n\x09 * Minimum magnitude required for the movement to be accepted.\n\x09 * This is only relevant for analog input from a gamepad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "Minimum magnitude required for the movement to be accepted.\nThis is only relevant for analog input from a gamepad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockMovementTags_MetaData[] = {
		{ "Category", "Move" },
		{ "Comment", "/** If any of these tags are present, movement is blocked. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Move.h" },
		{ "ToolTip", "If any of these tags are present, movement is blocked." },
	};
#endif // WITH_METADATA
	static void NewProp_bUseWorldSpace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMagnitudeToMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockMovementTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandler_Move_CanMove, "CanMove" }, // 4216099059
		{ &Z_Construct_UFunction_UInputHandler_Move_GetMovementInputScaleValue, "GetMovementInputScaleValue" }, // 1841530019
		{ &Z_Construct_UFunction_UInputHandler_Move_Move, "Move" }, // 3305079434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_Move>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_bUseWorldSpace_SetBit(void* Obj)
{
	((UInputHandler_Move*)Obj)->bUseWorldSpace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_bUseWorldSpace = { "bUseWorldSpace", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputHandler_Move), &Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_bUseWorldSpace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpace_MetaData), NewProp_bUseWorldSpace_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_MinimumMagnitudeToMove = { "MinimumMagnitudeToMove", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Move, MinimumMagnitudeToMove), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumMagnitudeToMove_MetaData), NewProp_MinimumMagnitudeToMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_BlockMovementTags = { "BlockMovementTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Move, BlockMovementTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockMovementTags_MetaData), NewProp_BlockMovementTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_bUseWorldSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_MinimumMagnitudeToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Move_Statics::NewProp_BlockMovementTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Move_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_Move_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Move_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_Move_Statics::ClassParams = {
	&UInputHandler_Move::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputHandler_Move_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Move_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Move_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_Move_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_Move()
{
	if (!Z_Registration_Info_UClass_UInputHandler_Move.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_Move.OuterSingleton, Z_Construct_UClass_UInputHandler_Move_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_Move.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_Move>()
{
	return UInputHandler_Move::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_Move);
UInputHandler_Move::~UInputHandler_Move() {}
// End Class UInputHandler_Move

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_Move, UInputHandler_Move::StaticClass, TEXT("UInputHandler_Move"), &Z_Registration_Info_UClass_UInputHandler_Move, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_Move), 558767356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_1680072546(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
