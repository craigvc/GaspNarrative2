// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Interfaces/HUDEventDispatcherInterface.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDEventDispatcherInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UHUDEventDispatcherInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UHUDEventDispatcherInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Interface UHUDEventDispatcherInterface Function HandleInputEvent
struct HUDEventDispatcherInterface_eventHandleInputEvent_Parms
{
	FGameplayTag InputEventTag;
};
void IHUDEventDispatcherInterface::HandleInputEvent(FGameplayTag InputEventTag)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HandleInputEvent instead.");
}
static FName NAME_UHUDEventDispatcherInterface_HandleInputEvent = FName(TEXT("HandleInputEvent"));
void IHUDEventDispatcherInterface::Execute_HandleInputEvent(UObject* O, FGameplayTag InputEventTag)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHUDEventDispatcherInterface::StaticClass()));
	HUDEventDispatcherInterface_eventHandleInputEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHUDEventDispatcherInterface_HandleInputEvent);
	if (Func)
	{
		Parms.InputEventTag=InputEventTag;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHUDEventDispatcherInterface*)(O->GetNativeInterfaceAddress(UHUDEventDispatcherInterface::StaticClass())))
	{
		I->HandleInputEvent_Implementation(InputEventTag);
	}
}
struct Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD Event Dispatcher Interface" },
		{ "Comment", "/**\n\x09 * Handles an Input Event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/HUDEventDispatcherInterface.h" },
		{ "ToolTip", "Handles an Input Event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputEventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::NewProp_InputEventTag = { "InputEventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HUDEventDispatcherInterface_eventHandleInputEvent_Parms, InputEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::NewProp_InputEventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDEventDispatcherInterface, nullptr, "HandleInputEvent", nullptr, nullptr, Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::PropPointers), sizeof(HUDEventDispatcherInterface_eventHandleInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(HUDEventDispatcherInterface_eventHandleInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHUDEventDispatcherInterface::execHandleInputEvent)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InputEventTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInputEvent_Implementation(Z_Param_InputEventTag);
	P_NATIVE_END;
}
// End Interface UHUDEventDispatcherInterface Function HandleInputEvent

// Begin Interface UHUDEventDispatcherInterface
void UHUDEventDispatcherInterface::StaticRegisterNativesUHUDEventDispatcherInterface()
{
	UClass* Class = UHUDEventDispatcherInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleInputEvent", &IHUDEventDispatcherInterface::execHandleInputEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHUDEventDispatcherInterface);
UClass* Z_Construct_UClass_UHUDEventDispatcherInterface_NoRegister()
{
	return UHUDEventDispatcherInterface::StaticClass();
}
struct Z_Construct_UClass_UHUDEventDispatcherInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "HUD Event Dispatcher Interface" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/HUDEventDispatcherInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUDEventDispatcherInterface_HandleInputEvent, "HandleInputEvent" }, // 2772546901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHUDEventDispatcherInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHUDEventDispatcherInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDEventDispatcherInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHUDEventDispatcherInterface_Statics::ClassParams = {
	&UHUDEventDispatcherInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDEventDispatcherInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHUDEventDispatcherInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHUDEventDispatcherInterface()
{
	if (!Z_Registration_Info_UClass_UHUDEventDispatcherInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHUDEventDispatcherInterface.OuterSingleton, Z_Construct_UClass_UHUDEventDispatcherInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHUDEventDispatcherInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UHUDEventDispatcherInterface>()
{
	return UHUDEventDispatcherInterface::StaticClass();
}
UHUDEventDispatcherInterface::UHUDEventDispatcherInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDEventDispatcherInterface);
UHUDEventDispatcherInterface::~UHUDEventDispatcherInterface() {}
// End Interface UHUDEventDispatcherInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_HUDEventDispatcherInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHUDEventDispatcherInterface, UHUDEventDispatcherInterface::StaticClass, TEXT("UHUDEventDispatcherInterface"), &Z_Registration_Info_UClass_UHUDEventDispatcherInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHUDEventDispatcherInterface), 2626267837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_HUDEventDispatcherInterface_h_3969386677(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_HUDEventDispatcherInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_HUDEventDispatcherInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
