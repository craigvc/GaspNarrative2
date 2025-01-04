// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_Turn.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_Turn() {}

// Begin Cross Module References
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Turn();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_Turn_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_Turn Function CanTurn
struct InputHandler_Turn_eventCanTurn_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_Turn_eventCanTurn_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInputHandler_Turn_CanTurn = FName(TEXT("CanTurn"));
bool UInputHandler_Turn::CanTurn(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Turn_CanTurn);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Turn_eventCanTurn_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Turn*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_Turn*>(this)->CanTurn_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler|Turn" },
		{ "Comment", "/**\n\x09 * Checks if the character is allowed to turn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Turn.h" },
		{ "ToolTip", "Checks if the character is allowed to turn." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Turn_eventCanTurn_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Turn_eventCanTurn_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
void Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandler_Turn_eventCanTurn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_Turn_eventCanTurn_Parms), &Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Turn, nullptr, "CanTurn", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::PropPointers), sizeof(InputHandler_Turn_eventCanTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Turn_eventCanTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Turn_CanTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Turn_CanTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Turn::execCanTurn)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanTurn_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Turn Function CanTurn

// Begin Class UInputHandler_Turn Function Turn
struct InputHandler_Turn_eventTurn_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
};
static const FName NAME_UInputHandler_Turn_Turn = FName(TEXT("Turn"));
void UInputHandler_Turn::Turn(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_Turn_Turn);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_Turn_eventTurn_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_Turn*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UInputHandler_Turn*>(this)->Turn_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler|Turn" },
		{ "Comment", "/**\n\x09 * Effective implementation for the turn logic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Turn.h" },
		{ "ToolTip", "Effective implementation for the turn logic." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Turn_eventTurn_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_Turn_eventTurn_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_Turn, nullptr, "Turn", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::PropPointers), sizeof(InputHandler_Turn_eventTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_Turn_eventTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_Turn_Turn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_Turn_Turn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_Turn::execTurn)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Turn_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_Turn Function Turn

// Begin Class UInputHandler_Turn
void UInputHandler_Turn::StaticRegisterNativesUInputHandler_Turn()
{
	UClass* Class = UInputHandler_Turn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanTurn", &UInputHandler_Turn::execCanTurn },
		{ "Turn", &UInputHandler_Turn::execTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_Turn);
UClass* Z_Construct_UClass_UInputHandler_Turn_NoRegister()
{
	return UInputHandler_Turn::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_Turn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rotates the character by adding values to the control rotation.\n * \n * Usually relevant for the right thumbstick, for a twin-stick control scheme.\n */" },
		{ "DisplayName", "Character: Turn" },
		{ "IncludePath", "InputHandlers/InputHandler_Turn.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Turn.h" },
		{ "ToolTip", "Rotates the character by adding values to the control rotation.\n\nUsually relevant for the right thumbstick, for a twin-stick control scheme." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMagnitudeToTurn_MetaData[] = {
		{ "Category", "Turn" },
		{ "Comment", "/**\n\x09 * Minimum magnitude required for the turn to be accepted.\n\x09 * This is only relevant for analog input from a gamepad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Turn.h" },
		{ "ToolTip", "Minimum magnitude required for the turn to be accepted.\nThis is only relevant for analog input from a gamepad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Turn" },
		{ "Comment", "/** How fast the rotation interpolation happens. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Turn.h" },
		{ "ToolTip", "How fast the rotation interpolation happens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockRotationTags_MetaData[] = {
		{ "Category", "Turn" },
		{ "Comment", "/** If any of these tags are present, rotation is blocked. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_Turn.h" },
		{ "ToolTip", "If any of these tags are present, rotation is blocked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMagnitudeToTurn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockRotationTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandler_Turn_CanTurn, "CanTurn" }, // 1770321982
		{ &Z_Construct_UFunction_UInputHandler_Turn_Turn, "Turn" }, // 3235887930
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_Turn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputHandler_Turn_Statics::NewProp_MinimumMagnitudeToTurn = { "MinimumMagnitudeToTurn", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Turn, MinimumMagnitudeToTurn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumMagnitudeToTurn_MetaData), NewProp_MinimumMagnitudeToTurn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputHandler_Turn_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Turn, TurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeed_MetaData), NewProp_TurnSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_Turn_Statics::NewProp_BlockRotationTags = { "BlockRotationTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_Turn, BlockRotationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockRotationTags_MetaData), NewProp_BlockRotationTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_Turn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Turn_Statics::NewProp_MinimumMagnitudeToTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Turn_Statics::NewProp_TurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_Turn_Statics::NewProp_BlockRotationTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Turn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_Turn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Turn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_Turn_Statics::ClassParams = {
	&UInputHandler_Turn::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputHandler_Turn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Turn_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_Turn_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_Turn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_Turn()
{
	if (!Z_Registration_Info_UClass_UInputHandler_Turn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_Turn.OuterSingleton, Z_Construct_UClass_UInputHandler_Turn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_Turn.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_Turn>()
{
	return UInputHandler_Turn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_Turn);
UInputHandler_Turn::~UInputHandler_Turn() {}
// End Class UInputHandler_Turn

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_Turn, UInputHandler_Turn::StaticClass, TEXT("UInputHandler_Turn"), &Z_Registration_Info_UClass_UInputHandler_Turn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_Turn), 4135350688U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_3462438680(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
