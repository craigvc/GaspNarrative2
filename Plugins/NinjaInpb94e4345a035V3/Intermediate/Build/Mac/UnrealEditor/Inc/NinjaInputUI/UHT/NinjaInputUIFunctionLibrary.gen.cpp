// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInputUI/Public/NinjaInputUIFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputUIFunctionLibrary() {}

// Begin Cross Module References
COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseCaptureMode();
NINJAINPUTUI_API UClass* Z_Construct_UClass_UNinjaInputUIFunctionLibrary();
NINJAINPUTUI_API UClass* Z_Construct_UClass_UNinjaInputUIFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInputUI();
// End Cross Module References

// Begin Class UNinjaInputUIFunctionLibrary Function SetInputMode
struct Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics
{
	struct NinjaInputUIFunctionLibrary_eventSetInputMode_Parms
	{
		APlayerController* PlayerController;
		ECommonInputMode InputMode;
		EMouseCaptureMode MouseCaptureMode;
		bool bShowMouseCursor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|User Interface" },
		{ "Comment", "/**\n\x09 * Sets a new Input Mode to a local player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaInputUIFunctionLibrary.h" },
		{ "ToolTip", "Sets a new Input Mode to a local player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MouseCaptureMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MouseCaptureMode;
	static void NewProp_bShowMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouseCursor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputUIFunctionLibrary_eventSetInputMode_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputUIFunctionLibrary_eventSetInputMode_Parms, InputMode), Z_Construct_UEnum_CommonInput_ECommonInputMode, METADATA_PARAMS(0, nullptr) }; // 4013108250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_MouseCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_MouseCaptureMode = { "MouseCaptureMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputUIFunctionLibrary_eventSetInputMode_Parms, MouseCaptureMode), Z_Construct_UEnum_Engine_EMouseCaptureMode, METADATA_PARAMS(0, nullptr) }; // 2576598572
void Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_bShowMouseCursor_SetBit(void* Obj)
{
	((NinjaInputUIFunctionLibrary_eventSetInputMode_Parms*)Obj)->bShowMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_bShowMouseCursor = { "bShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputUIFunctionLibrary_eventSetInputMode_Parms), &Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_bShowMouseCursor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_MouseCaptureMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_MouseCaptureMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NewProp_bShowMouseCursor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputUIFunctionLibrary, nullptr, "SetInputMode", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NinjaInputUIFunctionLibrary_eventSetInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::NinjaInputUIFunctionLibrary_eventSetInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputUIFunctionLibrary::execSetInputMode)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_ENUM(ECommonInputMode,Z_Param_InputMode);
	P_GET_ENUM(EMouseCaptureMode,Z_Param_MouseCaptureMode);
	P_GET_UBOOL(Z_Param_bShowMouseCursor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaInputUIFunctionLibrary::SetInputMode(Z_Param_PlayerController,ECommonInputMode(Z_Param_InputMode),EMouseCaptureMode(Z_Param_MouseCaptureMode),Z_Param_bShowMouseCursor);
	P_NATIVE_END;
}
// End Class UNinjaInputUIFunctionLibrary Function SetInputMode

// Begin Class UNinjaInputUIFunctionLibrary
void UNinjaInputUIFunctionLibrary::StaticRegisterNativesUNinjaInputUIFunctionLibrary()
{
	UClass* Class = UNinjaInputUIFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetInputMode", &UNinjaInputUIFunctionLibrary::execSetInputMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputUIFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaInputUIFunctionLibrary_NoRegister()
{
	return UNinjaInputUIFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Set of support functions for the UI layer on Ninja Input. \n */" },
		{ "IncludePath", "NinjaInputUIFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaInputUIFunctionLibrary.h" },
		{ "ToolTip", "Set of support functions for the UI layer on Ninja Input." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInputUIFunctionLibrary_SetInputMode, "SetInputMode" }, // 2156390573
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputUIFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInputUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics::ClassParams = {
	&UNinjaInputUIFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputUIFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaInputUIFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputUIFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaInputUIFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputUIFunctionLibrary.OuterSingleton;
}
template<> NINJAINPUTUI_API UClass* StaticClass<UNinjaInputUIFunctionLibrary>()
{
	return UNinjaInputUIFunctionLibrary::StaticClass();
}
UNinjaInputUIFunctionLibrary::UNinjaInputUIFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputUIFunctionLibrary);
UNinjaInputUIFunctionLibrary::~UNinjaInputUIFunctionLibrary() {}
// End Class UNinjaInputUIFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_NinjaInputUIFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputUIFunctionLibrary, UNinjaInputUIFunctionLibrary::StaticClass, TEXT("UNinjaInputUIFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaInputUIFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputUIFunctionLibrary), 2135862204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_NinjaInputUIFunctionLibrary_h_4074539085(TEXT("/Script/NinjaInputUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_NinjaInputUIFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputUI_Public_NinjaInputUIFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
