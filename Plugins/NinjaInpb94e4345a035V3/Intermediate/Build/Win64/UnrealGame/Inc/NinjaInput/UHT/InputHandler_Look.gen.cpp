// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_Look.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_Look() {}

// Begin Cross Module References
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Look();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Look_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_Look Function CanChangePitch
struct InputHandler_Look_eventCanChangePitch_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_Look_eventCanChangePitch_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInputHandler_Look_CanChangePitch = FName(TEXT("CanChangePitch"));
bool UInputHandler_Look::CanChangePitch(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Look_CanChangePitch);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Look_eventCanChangePitch_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Look*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_Look*>(this)->CanChangePitch_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Look" },
		{ "Comment", "/**\n\x09 * Checks if the character is allowed to change camera pitch.\n\x09 * Checked after evaluating if camera movement is fully blocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "Checks if the character is allowed to change camera pitch.\nChecked after evaluating if camera movement is fully blocked." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventCanChangePitch_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventCanChangePitch_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
void Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandler_Look_eventCanChangePitch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_Look_eventCanChangePitch_Parms), &Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Look, nullptr, "CanChangePitch", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::PropPointers), sizeof(InputHandler_Look_eventCanChangePitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Look_eventCanChangePitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Look_CanChangePitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Look_CanChangePitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Look::execCanChangePitch)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangePitch_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Look Function CanChangePitch

// Begin Class UInputHandler_Look Function CanChangeYaw
struct InputHandler_Look_eventCanChangeYaw_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_Look_eventCanChangeYaw_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInputHandler_Look_CanChangeYaw = FName(TEXT("CanChangeYaw"));
bool UInputHandler_Look::CanChangeYaw(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Look_CanChangeYaw);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Look_eventCanChangeYaw_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Look*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_Look*>(this)->CanChangeYaw_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Look" },
		{ "Comment", "/**\n\x09 * Checks if the character is allowed to change camera yaw.\n\x09 * Checked after evaluating if camera movement is fully blocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "Checks if the character is allowed to change camera yaw.\nChecked after evaluating if camera movement is fully blocked." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventCanChangeYaw_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventCanChangeYaw_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
void Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandler_Look_eventCanChangeYaw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_Look_eventCanChangeYaw_Parms), &Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Look, nullptr, "CanChangeYaw", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::PropPointers), sizeof(InputHandler_Look_eventCanChangeYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Look_eventCanChangeYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Look::execCanChangeYaw)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanChangeYaw_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Look Function CanChangeYaw

// Begin Class UInputHandler_Look Function CanLook
struct InputHandler_Look_eventCanLook_Parms
{
	UNinjaInputManagerComponent* Manager;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_Look_eventCanLook_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInputHandler_Look_CanLook = FName(TEXT("CanLook"));
bool UInputHandler_Look::CanLook(UNinjaInputManagerComponent* Manager) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Look_CanLook);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Look_eventCanLook_Parms Parms;
		Parms.Manager=Manager;
		const_cast<UInputHandler_Look*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_Look*>(this)->CanLook_Implementation(Manager);
	}
}
struct Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Look" },
		{ "Comment", "/**\n\x09 * Checks if the character is allowed to look around.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "Checks if the character is allowed to look around." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventCanLook_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
void Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandler_Look_eventCanLook_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_Look_eventCanLook_Parms), &Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Look, nullptr, "CanLook", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::PropPointers), sizeof(InputHandler_Look_eventCanLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Look_eventCanLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Look_CanLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Look_CanLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Look::execCanLook)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanLook_Implementation(Z_Param_Manager);
	P_NATIVE_END;
}
// End Class UInputHandler_Look Function CanLook

// Begin Class UInputHandler_Look Function Look
struct InputHandler_Look_eventLook_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
};
static const FName NAME_UInputHandler_Look_Look = FName(TEXT("Look"));
void UInputHandler_Look::Look(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Look_Look);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Look_eventLook_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Look*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UInputHandler_Look*>(this)->Look_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Look_Look_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Look" },
		{ "Comment", "/**\n\x09 * Effective implementation the camera movement (look).\n\x09 *\n\x09 * @param Manager\x09\x09Manager component providing access to the affected character.\n\x09 * @param Value\x09\x09\x09""Event magnitude applied to the camera.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "Effective implementation the camera movement (look).\n\n@param Manager               Manager component providing access to the affected character.\n@param Value                 Event magnitude applied to the camera." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Look_Look_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventLook_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Look_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Look_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Look_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_Look_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Look_Look_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Look_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Look, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Look_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_Look_Statics::PropPointers), sizeof(InputHandler_Look_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Look_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Look_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Look_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Look_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Look_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Look::execLook)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Look Function Look

// Begin Class UInputHandler_Look
void UInputHandler_Look::StaticRegisterNativesUInputHandler_Look()
{
	UClass* Class = UInputHandler_Look::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanChangePitch", &UInputHandler_Look::execCanChangePitch },
		{ "CanChangeYaw", &UInputHandler_Look::execCanChangeYaw },
		{ "CanLook", &UInputHandler_Look::execCanLook },
		{ "Look", &UInputHandler_Look::execLook },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_Look);
UClass* Z_Construct_UClass_UInputHandler_Look_NoRegister()
{
	return UInputHandler_Look::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_Look_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Translates mouse or gamepad commands into camera input.\n */" },
		{ "DisplayName", "Character: Look" },
		{ "IncludePath", "InputHandlers/InputHandler_Look.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "Translates mouse or gamepad commands into camera input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyWorldDeltaSeconds_MetaData[] = {
		{ "Category", "Look" },
		{ "Comment", "/**\n\x09 * If true, applies the World Delta Seconds to the input.\n\x09 * Useful for gamepad input, as per established by the GASP sample.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "If true, applies the World Delta Seconds to the input.\nUseful for gamepad input, as per established by the GASP sample." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMagnitudeToLook_MetaData[] = {
		{ "Category", "Look" },
		{ "Comment", "/**\n\x09 * Minimum magnitude required for the camera movement to be accepted.\n\x09 * This is only relevant for analog input from a gamepad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "Minimum magnitude required for the camera movement to be accepted.\nThis is only relevant for analog input from a gamepad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockPitchTags_MetaData[] = {
		{ "Category", "Look" },
		{ "Comment", "/** If any of these tags are present, camera pitch is blocked. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "If any of these tags are present, camera pitch is blocked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockYawTags_MetaData[] = {
		{ "Category", "Look" },
		{ "Comment", "/** If any of these tags are present, camera yaw is blocked. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Look.h" },
		{ "ToolTip", "If any of these tags are present, camera yaw is blocked." },
	};
#endif // WITH_METADATA
	static void NewProp_bApplyWorldDeltaSeconds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyWorldDeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMagnitudeToLook;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockPitchTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockYawTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandler_Look_CanChangePitch, "CanChangePitch" }, // 3449189447
		{ &Z_Construct_UFunction_UInputHandler_Look_CanChangeYaw, "CanChangeYaw" }, // 2941567607
		{ &Z_Construct_UFunction_UInputHandler_Look_CanLook, "CanLook" }, // 1151617489
		{ &Z_Construct_UFunction_UInputHandler_Look_Look, "Look" }, // 546615836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_Look>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_bApplyWorldDeltaSeconds_SetBit(void* Obj)
{
	((UInputHandler_Look*)Obj)->bApplyWorldDeltaSeconds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_bApplyWorldDeltaSeconds = { "bApplyWorldDeltaSeconds", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInputHandler_Look), &Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_bApplyWorldDeltaSeconds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyWorldDeltaSeconds_MetaData), NewProp_bApplyWorldDeltaSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_MinimumMagnitudeToLook = { "MinimumMagnitudeToLook", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Look, MinimumMagnitudeToLook), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumMagnitudeToLook_MetaData), NewProp_MinimumMagnitudeToLook_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_BlockPitchTags = { "BlockPitchTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Look, BlockPitchTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockPitchTags_MetaData), NewProp_BlockPitchTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_BlockYawTags = { "BlockYawTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Look, BlockYawTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockYawTags_MetaData), NewProp_BlockYawTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_bApplyWorldDeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_MinimumMagnitudeToLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_BlockPitchTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Look_Statics::NewProp_BlockYawTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Look_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_Look_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Look_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_Look_Statics::ClassParams = {
	&UInputHandler_Look::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputHandler_Look_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Look_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Look_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_Look_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_Look()
{
	if (!Z_Registration_Info_UClass_UInputHandler_Look.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_Look.OuterSingleton, Z_Construct_UClass_UInputHandler_Look_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_Look.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_Look>()
{
	return UInputHandler_Look::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_Look);
UInputHandler_Look::~UInputHandler_Look() {}
// End Class UInputHandler_Look

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_Look, UInputHandler_Look::StaticClass, TEXT("UInputHandler_Look"), &Z_Registration_Info_UClass_UInputHandler_Look, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_Look), 2937952245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_2392691128(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
