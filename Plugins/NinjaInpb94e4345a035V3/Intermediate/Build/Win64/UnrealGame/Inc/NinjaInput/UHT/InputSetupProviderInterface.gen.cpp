// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Interfaces/InputSetupProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputSetupProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputSetupProviderInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputSetupProviderInterface_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Interface UInputSetupProviderInterface Function GetAddedSetups
struct InputSetupProviderInterface_eventGetAddedSetups_Parms
{
	TArray<UNinjaInputSetupDataAsset*> ReturnValue;
};
TArray<UNinjaInputSetupDataAsset*> IInputSetupProviderInterface::GetAddedSetups() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAddedSetups instead.");
	InputSetupProviderInterface_eventGetAddedSetups_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInputSetupProviderInterface_GetAddedSetups = FName(TEXT("GetAddedSetups"));
TArray<UNinjaInputSetupDataAsset*> IInputSetupProviderInterface::Execute_GetAddedSetups(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputSetupProviderInterface::StaticClass()));
	InputSetupProviderInterface_eventGetAddedSetups_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputSetupProviderInterface_GetAddedSetups);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInputSetupProviderInterface*)(O->GetNativeInterfaceAddress(UInputSetupProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAddedSetups_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Setup Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides all input setups to add.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputSetupProviderInterface.h" },
		{ "ToolTip", "Provides all input setups to add." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSetupProviderInterface_eventGetAddedSetups_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSetupProviderInterface, nullptr, "GetAddedSetups", nullptr, nullptr, Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::PropPointers), sizeof(InputSetupProviderInterface_eventGetAddedSetups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputSetupProviderInterface_eventGetAddedSetups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputSetupProviderInterface::execGetAddedSetups)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInputSetupDataAsset*>*)Z_Param__Result=P_THIS->GetAddedSetups_Implementation();
	P_NATIVE_END;
}
// End Interface UInputSetupProviderInterface Function GetAddedSetups

// Begin Interface UInputSetupProviderInterface Function GetRemovedSetups
struct InputSetupProviderInterface_eventGetRemovedSetups_Parms
{
	TArray<UNinjaInputSetupDataAsset*> ReturnValue;
};
TArray<UNinjaInputSetupDataAsset*> IInputSetupProviderInterface::GetRemovedSetups() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRemovedSetups instead.");
	InputSetupProviderInterface_eventGetRemovedSetups_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UInputSetupProviderInterface_GetRemovedSetups = FName(TEXT("GetRemovedSetups"));
TArray<UNinjaInputSetupDataAsset*> IInputSetupProviderInterface::Execute_GetRemovedSetups(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInputSetupProviderInterface::StaticClass()));
	InputSetupProviderInterface_eventGetRemovedSetups_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInputSetupProviderInterface_GetRemovedSetups);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IInputSetupProviderInterface*)(O->GetNativeInterfaceAddress(UInputSetupProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetRemovedSetups_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input Setup Provider Interface" },
		{ "Comment", "/**\n\x09* Provides all input setups to remove.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/InputSetupProviderInterface.h" },
		{ "ToolTip", "Provides all input setups to remove." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InputSetupProviderInterface_eventGetRemovedSetups_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputSetupProviderInterface, nullptr, "GetRemovedSetups", nullptr, nullptr, Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::PropPointers), sizeof(InputSetupProviderInterface_eventGetRemovedSetups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::Function_MetaDataParams) };
static_assert(sizeof(InputSetupProviderInterface_eventGetRemovedSetups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInputSetupProviderInterface::execGetRemovedSetups)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNinjaInputSetupDataAsset*>*)Z_Param__Result=P_THIS->GetRemovedSetups_Implementation();
	P_NATIVE_END;
}
// End Interface UInputSetupProviderInterface Function GetRemovedSetups

// Begin Interface UInputSetupProviderInterface
void UInputSetupProviderInterface::StaticRegisterNativesUInputSetupProviderInterface()
{
	UClass* Class = UInputSetupProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAddedSetups", &IInputSetupProviderInterface::execGetAddedSetups },
		{ "GetRemovedSetups", &IInputSetupProviderInterface::execGetRemovedSetups },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputSetupProviderInterface);
UClass* Z_Construct_UClass_UInputSetupProviderInterface_NoRegister()
{
	return UInputSetupProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UInputSetupProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/InputSetupProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputSetupProviderInterface_GetAddedSetups, "GetAddedSetups" }, // 2541086161
		{ &Z_Construct_UFunction_UInputSetupProviderInterface_GetRemovedSetups, "GetRemovedSetups" }, // 3794468294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputSetupProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputSetupProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSetupProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputSetupProviderInterface_Statics::ClassParams = {
	&UInputSetupProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputSetupProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputSetupProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputSetupProviderInterface()
{
	if (!Z_Registration_Info_UClass_UInputSetupProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputSetupProviderInterface.OuterSingleton, Z_Construct_UClass_UInputSetupProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputSetupProviderInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputSetupProviderInterface>()
{
	return UInputSetupProviderInterface::StaticClass();
}
UInputSetupProviderInterface::UInputSetupProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputSetupProviderInterface);
UInputSetupProviderInterface::~UInputSetupProviderInterface() {}
// End Interface UInputSetupProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputSetupProviderInterface, UInputSetupProviderInterface::StaticClass, TEXT("UInputSetupProviderInterface"), &Z_Registration_Info_UClass_UInputSetupProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputSetupProviderInterface), 1851443804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_2534403328(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
