// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryCore/Public/Async/NinjaInventoryAction_BaseWait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInventoryAction_BaseWait() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_BaseWait();
NINJAINVENTORYCORE_API UClass* Z_Construct_UClass_UNinjaInventoryAction_BaseWait_NoRegister();
NINJAINVENTORYCORE_API UFunction* Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryCore();
// End Cross Module References

// Begin Delegate FInventoryAsyncActionSignature
struct Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaInventoryCore, nullptr, "InventoryAsyncActionSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInventoryAsyncActionSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryAsyncActionSignature)
{
	InventoryAsyncActionSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FInventoryAsyncActionSignature

// Begin Class UNinjaInventoryAction_BaseWait Function AccumulateElapsedTime
struct Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Inventory|Async" },
		{ "Comment", "/**\n\x09 * Accumulates the Elapsed time based on the current timer settings.\n\x09 * Cancels the Action if the elapsed time exceeds the maximum wait.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
		{ "ToolTip", "Accumulates the Elapsed time based on the current timer settings.\nCancels the Action if the elapsed time exceeds the maximum wait." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_BaseWait, nullptr, "AccumulateElapsedTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_BaseWait::execAccumulateElapsedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AccumulateElapsedTime();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_BaseWait Function AccumulateElapsedTime

// Begin Class UNinjaInventoryAction_BaseWait Function Complete
struct Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Action" },
		{ "Comment", "/**\n\x09 * Similar to \"Cancel\", but broadcasts the completed event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
		{ "ToolTip", "Similar to \"Cancel\", but broadcasts the completed event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_BaseWait, nullptr, "Complete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_BaseWait::execComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Complete();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_BaseWait Function Complete

// Begin Class UNinjaInventoryAction_BaseWait Function ExecuteAction
static const FName NAME_UNinjaInventoryAction_BaseWait_ExecuteAction = FName(TEXT("ExecuteAction"));
void UNinjaInventoryAction_BaseWait::ExecuteAction()
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaInventoryAction_BaseWait_ExecuteAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ExecuteAction_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Action" },
		{ "Comment", "/**\n\x09 * Actually executes the code related to this wait action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
		{ "ToolTip", "Actually executes the code related to this wait action." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInventoryAction_BaseWait, nullptr, "ExecuteAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInventoryAction_BaseWait::execExecuteAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteAction_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaInventoryAction_BaseWait Function ExecuteAction

// Begin Class UNinjaInventoryAction_BaseWait
void UNinjaInventoryAction_BaseWait::StaticRegisterNativesUNinjaInventoryAction_BaseWait()
{
	UClass* Class = UNinjaInventoryAction_BaseWait::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AccumulateElapsedTime", &UNinjaInventoryAction_BaseWait::execAccumulateElapsedTime },
		{ "Complete", &UNinjaInventoryAction_BaseWait::execComplete },
		{ "ExecuteAction", &UNinjaInventoryAction_BaseWait::execExecuteAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInventoryAction_BaseWait);
UClass* Z_Construct_UClass_UNinjaInventoryAction_BaseWait_NoRegister()
{
	return UNinjaInventoryAction_BaseWait::StaticClass();
}
struct Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for cancellable async actions.\n */" },
		{ "IncludePath", "Async/NinjaInventoryAction_BaseWait.h" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
		{ "ToolTip", "Base class for cancellable async actions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/** The task has completed and the object is available. */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
		{ "ToolTip", "The task has completed and the object is available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[] = {
		{ "Comment", "/** The action has failed and the reason will most likely be logged. */" },
		{ "ModuleRelativePath", "Public/Async/NinjaInventoryAction_BaseWait.h" },
		{ "ToolTip", "The action has failed and the reason will most likely be logged." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_AccumulateElapsedTime, "AccumulateElapsedTime" }, // 3719938142
		{ &Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_Complete, "Complete" }, // 4112126484
		{ &Z_Construct_UFunction_UNinjaInventoryAction_BaseWait_ExecuteAction, "ExecuteAction" }, // 2705402475
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInventoryAction_BaseWait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAction_BaseWait, OnCompleted), Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1363022179
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInventoryAction_BaseWait, OnCancelled), Z_Construct_UDelegateFunction_NinjaInventoryCore_InventoryAsyncActionSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCancelled_MetaData), NewProp_OnCancelled_MetaData) }; // 1363022179
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::NewProp_OnCancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCancellableAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::ClassParams = {
	&UNinjaInventoryAction_BaseWait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInventoryAction_BaseWait()
{
	if (!Z_Registration_Info_UClass_UNinjaInventoryAction_BaseWait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInventoryAction_BaseWait.OuterSingleton, Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInventoryAction_BaseWait.OuterSingleton;
}
template<> NINJAINVENTORYCORE_API UClass* StaticClass<UNinjaInventoryAction_BaseWait>()
{
	return UNinjaInventoryAction_BaseWait::StaticClass();
}
UNinjaInventoryAction_BaseWait::UNinjaInventoryAction_BaseWait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInventoryAction_BaseWait);
UNinjaInventoryAction_BaseWait::~UNinjaInventoryAction_BaseWait() {}
// End Class UNinjaInventoryAction_BaseWait

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInventoryAction_BaseWait, UNinjaInventoryAction_BaseWait::StaticClass, TEXT("UNinjaInventoryAction_BaseWait"), &Z_Registration_Info_UClass_UNinjaInventoryAction_BaseWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInventoryAction_BaseWait), 658813801U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_490523440(TEXT("/Script/NinjaInventoryCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
