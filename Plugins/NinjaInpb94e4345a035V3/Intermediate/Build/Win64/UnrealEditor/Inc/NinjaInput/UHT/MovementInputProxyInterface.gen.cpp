// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Interfaces/MovementInputProxyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovementInputProxyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NINJAINPUT_API UClass* Z_Construct_UClass_UMovementInputProxyInterface();
NINJAINPUT_API UClass* Z_Construct_UClass_UMovementInputProxyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Interface UMovementInputProxyInterface Function PrepareAndAddMovementInput
struct MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms
{
	FVector WorldDirection;
	float ScaleValue;
	bool bForce;
};
void IMovementInputProxyInterface::PrepareAndAddMovementInput(FVector WorldDirection, float ScaleValue, bool bForce)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareAndAddMovementInput instead.");
}
static FName NAME_UMovementInputProxyInterface_PrepareAndAddMovementInput = FName(TEXT("PrepareAndAddMovementInput"));
void IMovementInputProxyInterface::Execute_PrepareAndAddMovementInput(UObject* O, FVector WorldDirection, float ScaleValue, bool bForce)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMovementInputProxyInterface::StaticClass()));
	MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMovementInputProxyInterface_PrepareAndAddMovementInput);
	if (Func)
	{
		Parms.WorldDirection=WorldDirection;
		Parms.ScaleValue=ScaleValue;
		Parms.bForce=bForce;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMovementInputProxyInterface*)(O->GetNativeInterfaceAddress(UMovementInputProxyInterface::StaticClass())))
	{
		I->PrepareAndAddMovementInput_Implementation(WorldDirection,ScaleValue,bForce);
	}
}
struct Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement Input Proxy Interface" },
		{ "Comment", "/**\n\x09 * Analogous to \"AddMovementInput\", but allows the implementation to perform additional steps.\n\x09 * Useful for example to store input values for replication, before sending them to the actual movement function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/MovementInputProxyInterface.h" },
		{ "ToolTip", "Analogous to \"AddMovementInput\", but allows the implementation to perform additional steps.\nUseful for example to store input values for replication, before sending them to the actual movement function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
	static void NewProp_bForce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms, ScaleValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
{
	((MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms*)Obj)->bForce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms), &Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_ScaleValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovementInputProxyInterface, nullptr, "PrepareAndAddMovementInput", nullptr, nullptr, Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::PropPointers), sizeof(MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovementInputProxyInterface_eventPrepareAndAddMovementInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMovementInputProxyInterface::execPrepareAndAddMovementInput)
{
	P_GET_STRUCT(FVector,Z_Param_WorldDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareAndAddMovementInput_Implementation(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce);
	P_NATIVE_END;
}
// End Interface UMovementInputProxyInterface Function PrepareAndAddMovementInput

// Begin Interface UMovementInputProxyInterface
void UMovementInputProxyInterface::StaticRegisterNativesUMovementInputProxyInterface()
{
	UClass* Class = UMovementInputProxyInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrepareAndAddMovementInput", &IMovementInputProxyInterface::execPrepareAndAddMovementInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovementInputProxyInterface);
UClass* Z_Construct_UClass_UMovementInputProxyInterface_NoRegister()
{
	return UMovementInputProxyInterface::StaticClass();
}
struct Z_Construct_UClass_UMovementInputProxyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/MovementInputProxyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovementInputProxyInterface_PrepareAndAddMovementInput, "PrepareAndAddMovementInput" }, // 4118881415
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovementInputProxyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovementInputProxyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementInputProxyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovementInputProxyInterface_Statics::ClassParams = {
	&UMovementInputProxyInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovementInputProxyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovementInputProxyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovementInputProxyInterface()
{
	if (!Z_Registration_Info_UClass_UMovementInputProxyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovementInputProxyInterface.OuterSingleton, Z_Construct_UClass_UMovementInputProxyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovementInputProxyInterface.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UMovementInputProxyInterface>()
{
	return UMovementInputProxyInterface::StaticClass();
}
UMovementInputProxyInterface::UMovementInputProxyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovementInputProxyInterface);
UMovementInputProxyInterface::~UMovementInputProxyInterface() {}
// End Interface UMovementInputProxyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_MovementInputProxyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovementInputProxyInterface, UMovementInputProxyInterface::StaticClass, TEXT("UMovementInputProxyInterface"), &Z_Registration_Info_UClass_UMovementInputProxyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovementInputProxyInterface), 4128803468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_MovementInputProxyInterface_h_57678321(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_MovementInputProxyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_MovementInputProxyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
