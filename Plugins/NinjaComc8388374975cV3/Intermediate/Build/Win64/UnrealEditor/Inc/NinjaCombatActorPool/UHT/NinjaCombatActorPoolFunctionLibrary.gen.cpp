// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/NinjaCombatActorPoolFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatActorPoolFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin Class UNinjaCombatActorPoolFunctionLibrary Function GetCombatActorPool
struct Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics
{
	struct NinjaCombatActorPoolFunctionLibrary_eventGetCombatActorPool_Parms
	{
		const AActor* PoolOwner;
		UNinjaCombatActorPoolComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Pool" },
		{ "Comment", "/**\n\x09 * Retrieves a Combat Actor Pool from a given owner, via the interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatActorPoolFunctionLibrary.h" },
		{ "ToolTip", "Retrieves a Combat Actor Pool from a given owner, via the interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::NewProp_PoolOwner = { "PoolOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolFunctionLibrary_eventGetCombatActorPool_Parms, PoolOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolOwner_MetaData), NewProp_PoolOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolFunctionLibrary_eventGetCombatActorPool_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::NewProp_PoolOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary, nullptr, "GetCombatActorPool", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::NinjaCombatActorPoolFunctionLibrary_eventGetCombatActorPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::NinjaCombatActorPoolFunctionLibrary_eventGetCombatActorPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatActorPoolFunctionLibrary::execGetCombatActorPool)
{
	P_GET_OBJECT(AActor,Z_Param_PoolOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatActorPoolComponent**)Z_Param__Result=UNinjaCombatActorPoolFunctionLibrary::GetCombatActorPool(Z_Param_PoolOwner);
	P_NATIVE_END;
}
// End Class UNinjaCombatActorPoolFunctionLibrary Function GetCombatActorPool

// Begin Class UNinjaCombatActorPoolFunctionLibrary Function TryGetActorFromPool
struct Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics
{
	struct NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms
	{
		const AActor* PoolOwner;
		TSubclassOf<AActor> PoolableActorClass;
		bool bActivate;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Pool" },
		{ "Comment", "/**\n\x09 * Tries to retrieve a poolable actor from a pool owner.\n\x09 *\n\x09 * @param PoolOwner\x09\x09\x09\x09Owner of the pool, implementing the Combat Projectile Interface.\n\x09 * @param PoolableActorClass\x09""Class of the poolable actor to be retrieved.\n\x09 * @param bActivate\x09\x09\x09\x09If true the actor is immediately activated. Otherwise, it is only reserved.\n\x09 * @return\x09\x09\x09\x09\x09\x09The pooled actor, ready to use.\n\x09 */" },
		{ "CPP_Default_bActivate", "true" },
		{ "ModuleRelativePath", "Public/NinjaCombatActorPoolFunctionLibrary.h" },
		{ "ToolTip", "Tries to retrieve a poolable actor from a pool owner.\n\n@param PoolOwner                             Owner of the pool, implementing the Combat Projectile Interface.\n@param PoolableActorClass    Class of the poolable actor to be retrieved.\n@param bActivate                             If true the actor is immediately activated. Otherwise, it is only reserved.\n@return                                              The pooled actor, ready to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolOwner;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PoolableActorClass;
	static void NewProp_bActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_PoolOwner = { "PoolOwner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms, PoolOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolOwner_MetaData), NewProp_PoolOwner_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_PoolableActorClass = { "PoolableActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms, PoolableActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_bActivate_SetBit(void* Obj)
{
	((NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms*)Obj)->bActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms), &Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_PoolOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_PoolableActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_bActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary, nullptr, "TryGetActorFromPool", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::NinjaCombatActorPoolFunctionLibrary_eventTryGetActorFromPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatActorPoolFunctionLibrary::execTryGetActorFromPool)
{
	P_GET_OBJECT(AActor,Z_Param_PoolOwner);
	P_GET_OBJECT(UClass,Z_Param_PoolableActorClass);
	P_GET_UBOOL(Z_Param_bActivate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UNinjaCombatActorPoolFunctionLibrary::TryGetActorFromPool(Z_Param_PoolOwner,Z_Param_PoolableActorClass,Z_Param_bActivate);
	P_NATIVE_END;
}
// End Class UNinjaCombatActorPoolFunctionLibrary Function TryGetActorFromPool

// Begin Class UNinjaCombatActorPoolFunctionLibrary
void UNinjaCombatActorPoolFunctionLibrary::StaticRegisterNativesUNinjaCombatActorPoolFunctionLibrary()
{
	UClass* Class = UNinjaCombatActorPoolFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCombatActorPool", &UNinjaCombatActorPoolFunctionLibrary::execGetCombatActorPool },
		{ "TryGetActorFromPool", &UNinjaCombatActorPoolFunctionLibrary::execTryGetActorFromPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatActorPoolFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_NoRegister()
{
	return UNinjaCombatActorPoolFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Support functions the Combat Actor Pool.\n */" },
		{ "IncludePath", "NinjaCombatActorPoolFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaCombatActorPoolFunctionLibrary.h" },
		{ "ToolTip", "Support functions the Combat Actor Pool." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_GetCombatActorPool, "GetCombatActorPool" }, // 871048284
		{ &Z_Construct_UFunction_UNinjaCombatActorPoolFunctionLibrary_TryGetActorFromPool, "TryGetActorFromPool" }, // 1145275599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatActorPoolFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics::ClassParams = {
	&UNinjaCombatActorPoolFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatActorPoolFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatActorPoolFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatActorPoolFunctionLibrary.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<UNinjaCombatActorPoolFunctionLibrary>()
{
	return UNinjaCombatActorPoolFunctionLibrary::StaticClass();
}
UNinjaCombatActorPoolFunctionLibrary::UNinjaCombatActorPoolFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatActorPoolFunctionLibrary);
UNinjaCombatActorPoolFunctionLibrary::~UNinjaCombatActorPoolFunctionLibrary() {}
// End Class UNinjaCombatActorPoolFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_NinjaCombatActorPoolFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatActorPoolFunctionLibrary, UNinjaCombatActorPoolFunctionLibrary::StaticClass, TEXT("UNinjaCombatActorPoolFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaCombatActorPoolFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatActorPoolFunctionLibrary), 235697629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_NinjaCombatActorPoolFunctionLibrary_h_855933606(TEXT("/Script/NinjaCombatActorPool"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_NinjaCombatActorPoolFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_NinjaCombatActorPoolFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
