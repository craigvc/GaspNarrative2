// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/Interfaces/BatchGameplayAbilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatchGameplayAbilityInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJAGAS_API UClass* Z_Construct_UClass_UBatchGameplayAbilityInterface();
NINJAGAS_API UClass* Z_Construct_UClass_UBatchGameplayAbilityInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Interface UBatchGameplayAbilityInterface Function EndAbilityFromBatch
void IBatchGameplayAbilityInterface::EndAbilityFromBatch()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndAbilityFromBatch instead.");
}
static FName NAME_UBatchGameplayAbilityInterface_EndAbilityFromBatch = FName(TEXT("EndAbilityFromBatch"));
void IBatchGameplayAbilityInterface::Execute_EndAbilityFromBatch(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBatchGameplayAbilityInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBatchGameplayAbilityInterface_EndAbilityFromBatch);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBatchGameplayAbilityInterface*)(O->GetNativeInterfaceAddress(UBatchGameplayAbilityInterface::StaticClass())))
	{
		I->EndAbilityFromBatch_Implementation();
	}
}
struct Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Batch Gameplay Ability" },
		{ "Comment", "/**\n\x09 * Analogous to \"K2_EndAbility\" function, but exposed to identify that this is triggered by a batched RPC. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/BatchGameplayAbilityInterface.h" },
		{ "ToolTip", "Analogous to \"K2_EndAbility\" function, but exposed to identify that this is triggered by a batched RPC." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBatchGameplayAbilityInterface, nullptr, "EndAbilityFromBatch", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBatchGameplayAbilityInterface::execEndAbilityFromBatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndAbilityFromBatch_Implementation();
	P_NATIVE_END;
}
// End Interface UBatchGameplayAbilityInterface Function EndAbilityFromBatch

// Begin Interface UBatchGameplayAbilityInterface
void UBatchGameplayAbilityInterface::StaticRegisterNativesUBatchGameplayAbilityInterface()
{
	UClass* Class = UBatchGameplayAbilityInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndAbilityFromBatch", &IBatchGameplayAbilityInterface::execEndAbilityFromBatch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBatchGameplayAbilityInterface);
UClass* Z_Construct_UClass_UBatchGameplayAbilityInterface_NoRegister()
{
	return UBatchGameplayAbilityInterface::StaticClass();
}
struct Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BatchGameplayAbilityInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBatchGameplayAbilityInterface_EndAbilityFromBatch, "EndAbilityFromBatch" }, // 1863075519
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBatchGameplayAbilityInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics::ClassParams = {
	&UBatchGameplayAbilityInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBatchGameplayAbilityInterface()
{
	if (!Z_Registration_Info_UClass_UBatchGameplayAbilityInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBatchGameplayAbilityInterface.OuterSingleton, Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBatchGameplayAbilityInterface.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UBatchGameplayAbilityInterface>()
{
	return UBatchGameplayAbilityInterface::StaticClass();
}
UBatchGameplayAbilityInterface::UBatchGameplayAbilityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBatchGameplayAbilityInterface);
UBatchGameplayAbilityInterface::~UBatchGameplayAbilityInterface() {}
// End Interface UBatchGameplayAbilityInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBatchGameplayAbilityInterface, UBatchGameplayAbilityInterface::StaticClass, TEXT("UBatchGameplayAbilityInterface"), &Z_Registration_Info_UClass_UBatchGameplayAbilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBatchGameplayAbilityInterface), 3213682849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_1027574804(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
