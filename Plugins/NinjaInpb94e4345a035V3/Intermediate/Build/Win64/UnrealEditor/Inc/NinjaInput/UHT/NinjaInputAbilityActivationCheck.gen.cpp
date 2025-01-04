// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/NinjaInputAbilityActivationCheck.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputAbilityActivationCheck() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputAbilityActivationCheck();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputAbilityActivationCheck_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputAbilityActivationCheck Function ShouldActivate
struct NinjaInputAbilityActivationCheck_eventShouldActivate_Parms
{
	FInputActionValue Value;
	const UInputAction* InputAction;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaInputAbilityActivationCheck_eventShouldActivate_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNinjaInputAbilityActivationCheck_ShouldActivate = FName(TEXT("ShouldActivate"));
bool UNinjaInputAbilityActivationCheck::ShouldActivate(FInputActionValue const& Value, const UInputAction* InputAction) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInputAbilityActivationCheck_ShouldActivate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaInputAbilityActivationCheck_eventShouldActivate_Parms Parms;
		Parms.Value=Value;
		Parms.InputAction=InputAction;
		const_cast<UNinjaInputAbilityActivationCheck*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaInputAbilityActivationCheck*>(this)->ShouldActivate_Implementation(Value, InputAction);
	}
}
struct Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability Activation Check" },
		{ "Comment", "/**\n\x09 * Evaluates if an Ability should activate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/NinjaInputAbilityActivationCheck.h" },
		{ "ToolTip", "Evaluates if an Ability should activate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputAbilityActivationCheck_eventShouldActivate_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputAbilityActivationCheck_eventShouldActivate_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
void Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputAbilityActivationCheck_eventShouldActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputAbilityActivationCheck_eventShouldActivate_Parms), &Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputAbilityActivationCheck, nullptr, "ShouldActivate", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::PropPointers), sizeof(NinjaInputAbilityActivationCheck_eventShouldActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaInputAbilityActivationCheck_eventShouldActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputAbilityActivationCheck::execShouldActivate)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldActivate_Implementation(Z_Param_Out_Value,Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UNinjaInputAbilityActivationCheck Function ShouldActivate

// Begin Class UNinjaInputAbilityActivationCheck
void UNinjaInputAbilityActivationCheck::StaticRegisterNativesUNinjaInputAbilityActivationCheck()
{
	UClass* Class = UNinjaInputAbilityActivationCheck::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ShouldActivate", &UNinjaInputAbilityActivationCheck::execShouldActivate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputAbilityActivationCheck);
UClass* Z_Construct_UClass_UNinjaInputAbilityActivationCheck_NoRegister()
{
	return UNinjaInputAbilityActivationCheck::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaInput" },
		{ "Comment", "/**\n * Evaluates the appropriate rules for an ability activation.\n *\n * Some triggers may have straightforward values, like true or false on expected scenarios. Other\n * triggers might have different values such as false values for triggered events. These cases or\n * other more complex assessments can be done with evaluators.\n */" },
		{ "IncludePath", "InputHandlers/NinjaInputAbilityActivationCheck.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputHandlers/NinjaInputAbilityActivationCheck.h" },
		{ "ToolTip", "Evaluates the appropriate rules for an ability activation.\n\nSome triggers may have straightforward values, like true or false on expected scenarios. Other\ntriggers might have different values such as false values for triggered events. These cases or\nother more complex assessments can be done with evaluators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonValuedTriggerClasses_MetaData[] = {
		{ "Category", "Ability Activation Check" },
		{ "Comment", "/**\n\x09 * All triggers that are handled as exceptions.\n\x09 *\n\x09 * These handlers are (oddly) designed in the Enhanced Input System to trigger without having\n\x09 * a true value, meaning that you need to always handle these activations as \"true\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/NinjaInputAbilityActivationCheck.h" },
		{ "ToolTip", "All triggers that are handled as exceptions.\n\nThese handlers are (oddly) designed in the Enhanced Input System to trigger without having\na true value, meaning that you need to always handle these activations as \"true\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NonValuedTriggerClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NonValuedTriggerClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInputAbilityActivationCheck_ShouldActivate, "ShouldActivate" }, // 2350882619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputAbilityActivationCheck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::NewProp_NonValuedTriggerClasses_Inner = { "NonValuedTriggerClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::NewProp_NonValuedTriggerClasses = { "NonValuedTriggerClasses", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputAbilityActivationCheck, NonValuedTriggerClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonValuedTriggerClasses_MetaData), NewProp_NonValuedTriggerClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::NewProp_NonValuedTriggerClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::NewProp_NonValuedTriggerClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::ClassParams = {
	&UNinjaInputAbilityActivationCheck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputAbilityActivationCheck()
{
	if (!Z_Registration_Info_UClass_UNinjaInputAbilityActivationCheck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputAbilityActivationCheck.OuterSingleton, Z_Construct_UClass_UNinjaInputAbilityActivationCheck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputAbilityActivationCheck.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputAbilityActivationCheck>()
{
	return UNinjaInputAbilityActivationCheck::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputAbilityActivationCheck);
UNinjaInputAbilityActivationCheck::~UNinjaInputAbilityActivationCheck() {}
// End Class UNinjaInputAbilityActivationCheck

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_NinjaInputAbilityActivationCheck_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputAbilityActivationCheck, UNinjaInputAbilityActivationCheck::StaticClass, TEXT("UNinjaInputAbilityActivationCheck"), &Z_Registration_Info_UClass_UNinjaInputAbilityActivationCheck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputAbilityActivationCheck), 2712168908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_NinjaInputAbilityActivationCheck_h_3560141735(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_NinjaInputAbilityActivationCheck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_NinjaInputAbilityActivationCheck_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
