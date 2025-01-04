// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Interfaces/CombatCastInterface.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatCastInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatCastInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatCastInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatCastInterface Function SetCastOwner
struct CombatCastInterface_eventSetCastOwner_Parms
{
	AActor* CastOwner;
};
void ICombatCastInterface::SetCastOwner(AActor* CastOwner)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCastOwner instead.");
}
static FName NAME_UCombatCastInterface_SetCastOwner = FName(TEXT("SetCastOwner"));
void ICombatCastInterface::Execute_SetCastOwner(UObject* O, AActor* CastOwner)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatCastInterface::StaticClass()));
	CombatCastInterface_eventSetCastOwner_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatCastInterface_SetCastOwner);
	if (Func)
	{
		Parms.CastOwner=CastOwner;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatCastInterface*)(O->GetNativeInterfaceAddress(UCombatCastInterface::StaticClass())))
	{
		I->SetCastOwner_Implementation(CastOwner);
	}
}
struct Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Interface" },
		{ "Comment", "/**\n\x09 * Sets the owner of this cast effect, usually a Gameplay Ability's Avatar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatCastInterface.h" },
		{ "ToolTip", "Sets the owner of this cast effect, usually a Gameplay Ability's Avatar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::NewProp_CastOwner = { "CastOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCastInterface_eventSetCastOwner_Parms, CastOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::NewProp_CastOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatCastInterface, nullptr, "SetCastOwner", nullptr, nullptr, Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::PropPointers), sizeof(CombatCastInterface_eventSetCastOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatCastInterface_eventSetCastOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatCastInterface_SetCastOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatCastInterface_SetCastOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatCastInterface::execSetCastOwner)
{
	P_GET_OBJECT(AActor,Z_Param_CastOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastOwner_Implementation(Z_Param_CastOwner);
	P_NATIVE_END;
}
// End Interface UCombatCastInterface Function SetCastOwner

// Begin Interface UCombatCastInterface Function SetGameplayEffectHandle
struct CombatCastInterface_eventSetGameplayEffectHandle_Parms
{
	FGameplayEffectSpecHandle Handle;
};
void ICombatCastInterface::SetGameplayEffectHandle(FGameplayEffectSpecHandle& Handle)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetGameplayEffectHandle instead.");
}
static FName NAME_UCombatCastInterface_SetGameplayEffectHandle = FName(TEXT("SetGameplayEffectHandle"));
void ICombatCastInterface::Execute_SetGameplayEffectHandle(UObject* O, FGameplayEffectSpecHandle& Handle)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatCastInterface::StaticClass()));
	CombatCastInterface_eventSetGameplayEffectHandle_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatCastInterface_SetGameplayEffectHandle);
	if (Func)
	{
		Parms.Handle=Handle;
		O->ProcessEvent(Func, &Parms);
		Handle=Parms.Handle;
	}
	else if (auto I = (ICombatCastInterface*)(O->GetNativeInterfaceAddress(UCombatCastInterface::StaticClass())))
	{
		I->SetGameplayEffectHandle_Implementation(Handle);
	}
}
struct Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Interface" },
		{ "Comment", "/**\n\x09 * Sets the Gameplay Effect Handle applied to targets collected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatCastInterface.h" },
		{ "ToolTip", "Sets the Gameplay Effect Handle applied to targets collected." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatCastInterface_eventSetGameplayEffectHandle_Parms, Handle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatCastInterface, nullptr, "SetGameplayEffectHandle", nullptr, nullptr, Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::PropPointers), sizeof(CombatCastInterface_eventSetGameplayEffectHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatCastInterface_eventSetGameplayEffectHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatCastInterface::execSetGameplayEffectHandle)
{
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameplayEffectHandle_Implementation(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// End Interface UCombatCastInterface Function SetGameplayEffectHandle

// Begin Interface UCombatCastInterface Function StartCast
void ICombatCastInterface::StartCast()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartCast instead.");
}
static FName NAME_UCombatCastInterface_StartCast = FName(TEXT("StartCast"));
void ICombatCastInterface::Execute_StartCast(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatCastInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCombatCastInterface_StartCast);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ICombatCastInterface*)(O->GetNativeInterfaceAddress(UCombatCastInterface::StaticClass())))
	{
		I->StartCast_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatCastInterface_StartCast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Interface" },
		{ "Comment", "/**\n\x09 * Effectively starts the cast, once all basic requirements were provided.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatCastInterface.h" },
		{ "ToolTip", "Effectively starts the cast, once all basic requirements were provided." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatCastInterface_StartCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatCastInterface, nullptr, "StartCast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatCastInterface_StartCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatCastInterface_StartCast_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatCastInterface_StartCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatCastInterface_StartCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatCastInterface::execStartCast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCast_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatCastInterface Function StartCast

// Begin Interface UCombatCastInterface
void UCombatCastInterface::StaticRegisterNativesUCombatCastInterface()
{
	UClass* Class = UCombatCastInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCastOwner", &ICombatCastInterface::execSetCastOwner },
		{ "SetGameplayEffectHandle", &ICombatCastInterface::execSetGameplayEffectHandle },
		{ "StartCast", &ICombatCastInterface::execStartCast },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatCastInterface);
UClass* Z_Construct_UClass_UCombatCastInterface_NoRegister()
{
	return UCombatCastInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatCastInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatCastInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatCastInterface_SetCastOwner, "SetCastOwner" }, // 2841044334
		{ &Z_Construct_UFunction_UCombatCastInterface_SetGameplayEffectHandle, "SetGameplayEffectHandle" }, // 1938417961
		{ &Z_Construct_UFunction_UCombatCastInterface_StartCast, "StartCast" }, // 3308697305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatCastInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatCastInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCastInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatCastInterface_Statics::ClassParams = {
	&UCombatCastInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatCastInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatCastInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatCastInterface()
{
	if (!Z_Registration_Info_UClass_UCombatCastInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatCastInterface.OuterSingleton, Z_Construct_UClass_UCombatCastInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatCastInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatCastInterface>()
{
	return UCombatCastInterface::StaticClass();
}
UCombatCastInterface::UCombatCastInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatCastInterface);
UCombatCastInterface::~UCombatCastInterface() {}
// End Interface UCombatCastInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatCastInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatCastInterface, UCombatCastInterface::StaticClass, TEXT("UCombatCastInterface"), &Z_Registration_Info_UClass_UCombatCastInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatCastInterface), 3593470449U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatCastInterface_h_3216938332(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatCastInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_CombatCastInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
