// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_CharacterJump.h"
#include "EnhancedInput/Public/InputActionValue.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_CharacterJump() {}

// Begin Cross Module References
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_CharacterJump();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_CharacterJump_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_CharacterJump Function CanJump
struct InputHandler_CharacterJump_eventCanJump_Parms
{
	UNinjaInputManagerComponent* Manager;
	FInputActionValue Value;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	InputHandler_CharacterJump_eventCanJump_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UInputHandler_CharacterJump_CanJump = FName(TEXT("CanJump"));
bool UInputHandler_CharacterJump::CanJump(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const
{
	UFunction* Func = FindFunctionChecked(NAME_UInputHandler_CharacterJump_CanJump);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		InputHandler_CharacterJump_eventCanJump_Parms Parms;
		Parms.Manager=Manager;
		Parms.Value=Value;
		const_cast<UInputHandler_CharacterJump*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UInputHandler_CharacterJump*>(this)->CanJump_Implementation(Manager, Value);
	}
}
struct Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Handler|Jump" },
		{ "Comment", "/**\n\x09 * Checks if the character is allowed to jump.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_CharacterJump.h" },
		{ "ToolTip", "Checks if the character is allowed to jump." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_CharacterJump_eventCanJump_Parms, Manager), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputHandler_CharacterJump_eventCanJump_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
void Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InputHandler_CharacterJump_eventCanJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InputHandler_CharacterJump_eventCanJump_Parms), &Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputHandler_CharacterJump, nullptr, "CanJump", nullptr, nullptr, Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::PropPointers), sizeof(InputHandler_CharacterJump_eventCanJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputHandler_CharacterJump_eventCanJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputHandler_CharacterJump::execCanJump)
{
	P_GET_OBJECT(UNinjaInputManagerComponent,Z_Param_Manager);
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanJump_Implementation(Z_Param_Manager,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UInputHandler_CharacterJump Function CanJump

// Begin Class UInputHandler_CharacterJump
void UInputHandler_CharacterJump::StaticRegisterNativesUInputHandler_CharacterJump()
{
	UClass* Class = UInputHandler_CharacterJump::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanJump", &UInputHandler_CharacterJump::execCanJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_CharacterJump);
UClass* Z_Construct_UClass_UInputHandler_CharacterJump_NoRegister()
{
	return UInputHandler_CharacterJump::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_CharacterJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Replicates the original Jump setup for Character owners.\n *\n * Avoid mixing default Character actions, such as this one, when you are using the Gameplay\n * Ability System as it provides a Jump Gameplay Ability that can be used instead.\n */" },
		{ "DisplayName", "Character: Jump" },
		{ "IncludePath", "InputHandlers/InputHandler_CharacterJump.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_CharacterJump.h" },
		{ "ToolTip", "Replicates the original Jump setup for Character owners.\n\nAvoid mixing default Character actions, such as this one, when you are using the Gameplay\nAbility System as it provides a Jump Gameplay Ability that can be used instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMagnitudeToJump_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/**\n\x09 * Minimum magnitude required for the jump to be accepted.\n\x09 * This is only relevant for analog input from a gamepad.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_CharacterJump.h" },
		{ "ToolTip", "Minimum magnitude required for the jump to be accepted.\nThis is only relevant for analog input from a gamepad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockJumpTags_MetaData[] = {
		{ "Category", "Jump" },
		{ "Comment", "/** Gameplay tags that, if present, will block the ability of jumping. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_CharacterJump.h" },
		{ "ToolTip", "Gameplay tags that, if present, will block the ability of jumping." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMagnitudeToJump;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockJumpTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputHandler_CharacterJump_CanJump, "CanJump" }, // 4286421980
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_CharacterJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputHandler_CharacterJump_Statics::NewProp_MinimumMagnitudeToJump = { "MinimumMagnitudeToJump", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_CharacterJump, MinimumMagnitudeToJump), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumMagnitudeToJump_MetaData), NewProp_MinimumMagnitudeToJump_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_CharacterJump_Statics::NewProp_BlockJumpTags = { "BlockJumpTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_CharacterJump, BlockJumpTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockJumpTags_MetaData), NewProp_BlockJumpTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_CharacterJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_CharacterJump_Statics::NewProp_MinimumMagnitudeToJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_CharacterJump_Statics::NewProp_BlockJumpTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterJump_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_CharacterJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_CharacterJump_Statics::ClassParams = {
	&UInputHandler_CharacterJump::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInputHandler_CharacterJump_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterJump_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterJump_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_CharacterJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_CharacterJump()
{
	if (!Z_Registration_Info_UClass_UInputHandler_CharacterJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_CharacterJump.OuterSingleton, Z_Construct_UClass_UInputHandler_CharacterJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_CharacterJump.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_CharacterJump>()
{
	return UInputHandler_CharacterJump::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_CharacterJump);
UInputHandler_CharacterJump::~UInputHandler_CharacterJump() {}
// End Class UInputHandler_CharacterJump

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterJump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_CharacterJump, UInputHandler_CharacterJump::StaticClass, TEXT("UInputHandler_CharacterJump"), &Z_Registration_Info_UClass_UInputHandler_CharacterJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_CharacterJump), 3391363379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterJump_h_2435682775(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterJump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterJump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
