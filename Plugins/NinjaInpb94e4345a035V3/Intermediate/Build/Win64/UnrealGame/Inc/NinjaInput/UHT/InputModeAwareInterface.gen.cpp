// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Interfaces/InputModeAwareInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputModeAwareInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputModeAwareInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputModeAwareInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Interface UInputModeAwareInterface Function GetPlayerInputMode
struct InputModeAwareInterface_eventGetPlayerInputMode_Parms
{
	FGameplayTag ReturnValue;
};
FGameplayTag IInputModeAwareInterface::GetPlayerInputMode() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerInputMode instead.");
	InputModeAwareInterface_eventGetPlayerInputMode_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInputModeAwareInterface_GetPlayerInputMode = FName(TEXT("GetPlayerInputMode"));
FGameplayTag IInputModeAwareInterface::Execute_GetPlayerInputMode(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputModeAwareInterface::StaticClass()));
	InputModeAwareInterface_eventGetPlayerInputMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputModeAwareInterface_GetPlayerInputMode);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInputModeAwareInterface*)(O->GetNativeInterfaceAddress(UInputModeAwareInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetPlayerInputMode_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mode Aware Interface" },
		{ "Comment", "/**\n\x09 * Provides the Input Mode currently in use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputModeAwareInterface.h" },
		{ "ToolTip", "Provides the Input Mode currently in use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModeAwareInterface_eventGetPlayerInputMode_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModeAwareInterface, nullptr, "GetPlayerInputMode", nullptr, nullptr, Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::PropPointers), sizeof(InputModeAwareInterface_eventGetPlayerInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputModeAwareInterface_eventGetPlayerInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputModeAwareInterface::execGetPlayerInputMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetPlayerInputMode_Implementation();
	P_NATIVE_END;
}
// End Interface UInputModeAwareInterface Function GetPlayerInputMode

// Begin Interface UInputModeAwareInterface Function SetPlayerInputMode
struct InputModeAwareInterface_eventSetPlayerInputMode_Parms
{
	FGameplayTag InputModeTag;
};
void IInputModeAwareInterface::SetPlayerInputMode(FGameplayTag InputModeTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayerInputMode instead.");
}
static FName NAME_UInputModeAwareInterface_SetPlayerInputMode = FName(TEXT("SetPlayerInputMode"));
void IInputModeAwareInterface::Execute_SetPlayerInputMode(UObject* O, FGameplayTag InputModeTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputModeAwareInterface::StaticClass()));
	InputModeAwareInterface_eventSetPlayerInputMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputModeAwareInterface_SetPlayerInputMode);
	if (Func)
	{
		Parms.InputModeTag=InputModeTag;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInputModeAwareInterface*)(O->GetNativeInterfaceAddress(UInputModeAwareInterface::StaticClass())))
	{
		I->SetPlayerInputMode_Implementation(InputModeTag);
	}
}
struct Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Mode Aware Interface" },
		{ "Comment", "/**\n\x09 * Provides a new Input Mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputModeAwareInterface.h" },
		{ "ToolTip", "Provides a new Input Mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputModeTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::NewProp_InputModeTag = { "InputModeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputModeAwareInterface_eventSetPlayerInputMode_Parms, InputModeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::NewProp_InputModeTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputModeAwareInterface, nullptr, "SetPlayerInputMode", nullptr, nullptr, Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::PropPointers), sizeof(InputModeAwareInterface_eventSetPlayerInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputModeAwareInterface_eventSetPlayerInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputModeAwareInterface::execSetPlayerInputMode)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InputModeTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerInputMode_Implementation(Z_Param_InputModeTag);
	P_NATIVE_END;
}
// End Interface UInputModeAwareInterface Function SetPlayerInputMode

// Begin Interface UInputModeAwareInterface
void UInputModeAwareInterface::StaticRegisterNativesUInputModeAwareInterface()
{
	UClass* Class = UInputModeAwareInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerInputMode", &IInputModeAwareInterface::execGetPlayerInputMode },
		{ "SetPlayerInputMode", &IInputModeAwareInterface::execSetPlayerInputMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputModeAwareInterface);
UClass* Z_Construct_UClass_UInputModeAwareInterface_NoRegister()
{
	return UInputModeAwareInterface::StaticClass();
}
struct Z_Construct_UClass_UInputModeAwareInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/InputModeAwareInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputModeAwareInterface_GetPlayerInputMode, "GetPlayerInputMode" }, // 3286670933
		{ &Z_Construct_UFunction_UInputModeAwareInterface_SetPlayerInputMode, "SetPlayerInputMode" }, // 1975499108
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputModeAwareInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputModeAwareInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModeAwareInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModeAwareInterface_Statics::ClassParams = {
	&UInputModeAwareInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModeAwareInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModeAwareInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModeAwareInterface()
{
	if (!Z_Registration_Info_UClass_UInputModeAwareInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModeAwareInterface.OuterSingleton, Z_Construct_UClass_UInputModeAwareInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModeAwareInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputModeAwareInterface>()
{
	return UInputModeAwareInterface::StaticClass();
}
UInputModeAwareInterface::UInputModeAwareInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModeAwareInterface);
UInputModeAwareInterface::~UInputModeAwareInterface() {}
// End Interface UInputModeAwareInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModeAwareInterface, UInputModeAwareInterface::StaticClass, TEXT("UInputModeAwareInterface"), &Z_Registration_Info_UClass_UInputModeAwareInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModeAwareInterface), 347998340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_1928317788(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
