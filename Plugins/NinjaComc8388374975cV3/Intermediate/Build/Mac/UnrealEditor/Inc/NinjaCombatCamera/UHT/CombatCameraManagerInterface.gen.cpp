// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatCamera/Public/Interfaces/CombatCameraManagerInterface.h"
#include "NinjaCombatCamera/Public/Types/FCombatCameraAnimationParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCameraManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_UCombatCameraManagerInterface();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_UCombatCameraManagerInterface_NoRegister();
NINJACOMBATCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCombatCameraAnimationParameters();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatCamera();
// End Cross Module References

// Begin Interface UCombatCameraManagerInterface Function PlayCombatCameraAnimation
struct CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms
{
	AActor* Anchor;
	UCameraAnimationSequence* Animation;
	FCombatCameraAnimationParameters Parameters;
};
void ICombatCameraManagerInterface::PlayCombatCameraAnimation(AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayCombatCameraAnimation instead.");
}
static FName NAME_UCombatCameraManagerInterface_PlayCombatCameraAnimation = FName(TEXT("PlayCombatCameraAnimation"));
void ICombatCameraManagerInterface::Execute_PlayCombatCameraAnimation(UObject* O, AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatCameraManagerInterface::StaticClass()));
	CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatCameraManagerInterface_PlayCombatCameraAnimation);
	if (Func)
	{
		Parms.Anchor=Anchor;
		Parms.Animation=Animation;
		Parms.Parameters=Parameters;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatCameraManagerInterface*)(O->GetNativeInterfaceAddress(UCombatCameraManagerInterface::StaticClass())))
	{
		I->PlayCombatCameraAnimation_Implementation(Anchor,Animation,Parameters);
	}
}
struct Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Manager Interface" },
		{ "Comment", "/**\n\x09 * Plays a Combat Camera Animation, with requested parameters.\n\x09 *\n\x09 * @param Anchor\x09\x09""An actor with a camara, used as a focus/anchor point.\n\x09 * @param Animation\x09\x09""Camera Animation Sequence to play.\n\x09 * @param Parameters\x09""Camera Animation Parameters set to the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatCameraManagerInterface.h" },
		{ "ToolTip", "Plays a Combat Camera Animation, with requested parameters.\n\n@param Anchor                An actor with a camara, used as a focus/anchor point.\n@param Animation             Camera Animation Sequence to play.\n@param Parameters    Camera Animation Parameters set to the animation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms, Anchor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms, Animation), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms, Parameters), Z_Construct_UScriptStruct_FCombatCameraAnimationParameters, METADATA_PARAMS(0, nullptr) }; // 1791019398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatCameraManagerInterface, nullptr, "PlayCombatCameraAnimation", nullptr, nullptr, Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::PropPointers), sizeof(CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatCameraManagerInterface_eventPlayCombatCameraAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatCameraManagerInterface::execPlayCombatCameraAnimation)
{
	P_GET_OBJECT(AActor,Z_Param_Anchor);
	P_GET_OBJECT(UCameraAnimationSequence,Z_Param_Animation);
	P_GET_STRUCT(FCombatCameraAnimationParameters,Z_Param_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayCombatCameraAnimation_Implementation(Z_Param_Anchor,Z_Param_Animation,Z_Param_Parameters);
	P_NATIVE_END;
}
// End Interface UCombatCameraManagerInterface Function PlayCombatCameraAnimation

// Begin Interface UCombatCameraManagerInterface Function StopCombatCameraAnimation
void ICombatCameraManagerInterface::StopCombatCameraAnimation()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopCombatCameraAnimation instead.");
}
static FName NAME_UCombatCameraManagerInterface_StopCombatCameraAnimation = FName(TEXT("StopCombatCameraAnimation"));
void ICombatCameraManagerInterface::Execute_StopCombatCameraAnimation(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatCameraManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatCameraManagerInterface_StopCombatCameraAnimation);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatCameraManagerInterface*)(O->GetNativeInterfaceAddress(UCombatCameraManagerInterface::StaticClass())))
	{
		I->StopCombatCameraAnimation_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera Manager Interface" },
		{ "Comment", "/**\n\x09 * Stops the ongoing Combat Camera Animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatCameraManagerInterface.h" },
		{ "ToolTip", "Stops the ongoing Combat Camera Animation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatCameraManagerInterface, nullptr, "StopCombatCameraAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatCameraManagerInterface::execStopCombatCameraAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCombatCameraAnimation_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatCameraManagerInterface Function StopCombatCameraAnimation

// Begin Interface UCombatCameraManagerInterface
void UCombatCameraManagerInterface::StaticRegisterNativesUCombatCameraManagerInterface()
{
	UClass* Class = UCombatCameraManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayCombatCameraAnimation", &ICombatCameraManagerInterface::execPlayCombatCameraAnimation },
		{ "StopCombatCameraAnimation", &ICombatCameraManagerInterface::execStopCombatCameraAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatCameraManagerInterface);
UClass* Z_Construct_UClass_UCombatCameraManagerInterface_NoRegister()
{
	return UCombatCameraManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatCameraManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatCameraManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatCameraManagerInterface_PlayCombatCameraAnimation, "PlayCombatCameraAnimation" }, // 3685432356
		{ &Z_Construct_UFunction_UCombatCameraManagerInterface_StopCombatCameraAnimation, "StopCombatCameraAnimation" }, // 1268975494
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatCameraManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatCameraManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCameraManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatCameraManagerInterface_Statics::ClassParams = {
	&UCombatCameraManagerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCameraManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatCameraManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatCameraManagerInterface()
{
	if (!Z_Registration_Info_UClass_UCombatCameraManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatCameraManagerInterface.OuterSingleton, Z_Construct_UClass_UCombatCameraManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatCameraManagerInterface.OuterSingleton;
}
template<> NINJACOMBATCAMERA_API UClass* StaticClass<UCombatCameraManagerInterface>()
{
	return UCombatCameraManagerInterface::StaticClass();
}
UCombatCameraManagerInterface::UCombatCameraManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCameraManagerInterface);
UCombatCameraManagerInterface::~UCombatCameraManagerInterface() {}
// End Interface UCombatCameraManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatCameraManagerInterface, UCombatCameraManagerInterface::StaticClass, TEXT("UCombatCameraManagerInterface"), &Z_Registration_Info_UClass_UCombatCameraManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatCameraManagerInterface), 354783409U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_2576909424(TEXT("/Script/NinjaCombatCamera"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
