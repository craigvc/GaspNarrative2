// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/Async/NinjaGASAction_WaitForAbilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASAction_WaitForAbilitySystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_NoRegister();
NINJAGAS_API UFunction* Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Delegate FAbilityAsyncActionSignature
struct Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaGAS, nullptr, "AbilityAsyncActionSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAbilityAsyncActionSignature_DelegateWrapper(const FMulticastScriptDelegate& AbilityAsyncActionSignature)
{
	AbilityAsyncActionSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FAbilityAsyncActionSignature

// Begin Class UNinjaGASAction_WaitForAbilitySystem Function CreateAction
struct Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics
{
	struct NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms
	{
		AActor* AbilityOwner;
		float CheckInterval;
		float MaxWait;
		UNinjaGASAction_WaitForAbilitySystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ninja GAS|Async" },
		{ "Comment", "/**\n\x09 * Creates the Action to wait for an Ability System Component in an Actor.\n\x09 *\n\x09 * @param AbilityOwner\x09\x09Owner of the Ability System Component, must be valid.\n\x09 * @param CheckInterval\x09\x09How often the task will check for a valid Ability System Component.\n\x09 * @param MaxWait\x09\x09\x09Maximum time to wait in seconds.\n\x09 * @return\x09\x09\x09\x09\x09""Configured instance of the async action.\n\x09 */" },
		{ "CPP_Default_MaxWait", "2.000000" },
		{ "DefaultToSelf", "AbilityOwner" },
		{ "DisplayName", "Wait For Ability System" },
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Creates the Action to wait for an Ability System Component in an Actor.\n\n@param AbilityOwner          Owner of the Ability System Component, must be valid.\n@param CheckInterval         How often the task will check for a valid Ability System Component.\n@param MaxWait                       Maximum time to wait in seconds.\n@return                                      Configured instance of the async action." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWait;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_AbilityOwner = { "AbilityOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms, AbilityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_CheckInterval = { "CheckInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms, CheckInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_MaxWait = { "MaxWait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms, MaxWait), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms, ReturnValue), Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_AbilityOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_CheckInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_MaxWait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem, nullptr, "CreateAction", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::NinjaGASAction_WaitForAbilitySystem_eventCreateAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAction_WaitForAbilitySystem::execCreateAction)
{
	P_GET_OBJECT(AActor,Z_Param_AbilityOwner);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CheckInterval);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxWait);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaGASAction_WaitForAbilitySystem**)Z_Param__Result=UNinjaGASAction_WaitForAbilitySystem::CreateAction(Z_Param_AbilityOwner,Z_Param_CheckInterval,Z_Param_MaxWait);
	P_NATIVE_END;
}
// End Class UNinjaGASAction_WaitForAbilitySystem Function CreateAction

// Begin Class UNinjaGASAction_WaitForAbilitySystem Function GetAbilityOwner
struct Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics
{
	struct NinjaGASAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Async" },
		{ "Comment", "/**\n\x09 * Provides the Ability Owner set to this task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Provides the Ability Owner set to this task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem, nullptr, "GetAbilityOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NinjaGASAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::NinjaGASAction_WaitForAbilitySystem_eventGetAbilityOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAction_WaitForAbilitySystem::execGetAbilityOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetAbilityOwner();
	P_NATIVE_END;
}
// End Class UNinjaGASAction_WaitForAbilitySystem Function GetAbilityOwner

// Begin Class UNinjaGASAction_WaitForAbilitySystem
void UNinjaGASAction_WaitForAbilitySystem::StaticRegisterNativesUNinjaGASAction_WaitForAbilitySystem()
{
	UClass* Class = UNinjaGASAction_WaitForAbilitySystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAction", &UNinjaGASAction_WaitForAbilitySystem::execCreateAction },
		{ "GetAbilityOwner", &UNinjaGASAction_WaitForAbilitySystem::execGetAbilityOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASAction_WaitForAbilitySystem);
UClass* Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_NoRegister()
{
	return UNinjaGASAction_WaitForAbilitySystem::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Waits for an Ability System to become available and initialized.\n */" },
		{ "IncludePath", "Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "Waits for an Ability System to become available and initialized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** The task has completed and the ASC is available. */" },
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "The task has completed and the ASC is available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "Comment", "/** The action has failed. */" },
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "The action has failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimedOut_MetaData[] = {
		{ "Comment", "/** The action has timed-out. */" },
		{ "ModuleRelativePath", "Public/Async/NinjaGASAction_WaitForAbilitySystem.h" },
		{ "ToolTip", "The action has timed-out." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimedOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_CreateAction, "CreateAction" }, // 3754667964
		{ &Z_Construct_UFunction_UNinjaGASAction_WaitForAbilitySystem_GetAbilityOwner, "GetAbilityOwner" }, // 4175073446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASAction_WaitForAbilitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAction_WaitForAbilitySystem, OnCompleted), Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 2128635674
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAction_WaitForAbilitySystem, OnCancelled), Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 2128635674
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::NewProp_OnTimedOut = { "OnTimedOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAction_WaitForAbilitySystem, OnTimedOut), Z_Construct_UDelegateFunction_NinjaGAS_AbilityAsyncActionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimedOut_MetaData), NewProp_OnTimedOut_MetaData) }; // 2128635674
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::NewProp_OnCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::NewProp_OnTimedOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::ClassParams = {
	&UNinjaGASAction_WaitForAbilitySystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem()
{
	if (!Z_Registration_Info_UClass_UNinjaGASAction_WaitForAbilitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASAction_WaitForAbilitySystem.OuterSingleton, Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASAction_WaitForAbilitySystem.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASAction_WaitForAbilitySystem>()
{
	return UNinjaGASAction_WaitForAbilitySystem::StaticClass();
}
UNinjaGASAction_WaitForAbilitySystem::UNinjaGASAction_WaitForAbilitySystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASAction_WaitForAbilitySystem);
UNinjaGASAction_WaitForAbilitySystem::~UNinjaGASAction_WaitForAbilitySystem() {}
// End Class UNinjaGASAction_WaitForAbilitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Async_NinjaGASAction_WaitForAbilitySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASAction_WaitForAbilitySystem, UNinjaGASAction_WaitForAbilitySystem::StaticClass, TEXT("UNinjaGASAction_WaitForAbilitySystem"), &Z_Registration_Info_UClass_UNinjaGASAction_WaitForAbilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASAction_WaitForAbilitySystem), 2206629746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Async_NinjaGASAction_WaitForAbilitySystem_h_4200545850(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Async_NinjaGASAction_WaitForAbilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Async_NinjaGASAction_WaitForAbilitySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
