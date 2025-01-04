// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatActorPool/Public/Interfaces/CombatPoolProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatPoolProviderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UCombatPoolProviderInterface();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UCombatPoolProviderInterface_NoRegister();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatActorPool();
// End Cross Module References

// Begin Interface UCombatPoolProviderInterface Function GetActorPool
struct CombatPoolProviderInterface_eventGetActorPool_Parms
{
	UNinjaCombatActorPoolComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatPoolProviderInterface_eventGetActorPool_Parms()
		: ReturnValue(NULL)
	{
	}
};
UNinjaCombatActorPoolComponent* ICombatPoolProviderInterface::GetActorPool() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorPool instead.");
	CombatPoolProviderInterface_eventGetActorPool_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UCombatPoolProviderInterface_GetActorPool = FName(TEXT("GetActorPool"));
UNinjaCombatActorPoolComponent* ICombatPoolProviderInterface::Execute_GetActorPool(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatPoolProviderInterface::StaticClass()));
	CombatPoolProviderInterface_eventGetActorPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatPoolProviderInterface_GetActorPool);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ICombatPoolProviderInterface*)(O->GetNativeInterfaceAddress(UCombatPoolProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetActorPool_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Pool Provider Interface" },
		{ "Comment", "/**\n\x09 * Provides the Actor Pool Component available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolProviderInterface.h" },
		{ "ToolTip", "Provides the Actor Pool Component available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatPoolProviderInterface_eventGetActorPool_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatActorPoolComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatPoolProviderInterface, nullptr, "GetActorPool", nullptr, nullptr, Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::PropPointers), sizeof(CombatPoolProviderInterface_eventGetActorPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatPoolProviderInterface_eventGetActorPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatPoolProviderInterface::execGetActorPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatActorPoolComponent**)Z_Param__Result=P_THIS->GetActorPool_Implementation();
	P_NATIVE_END;
}
// End Interface UCombatPoolProviderInterface Function GetActorPool

// Begin Interface UCombatPoolProviderInterface
void UCombatPoolProviderInterface::StaticRegisterNativesUCombatPoolProviderInterface()
{
	UClass* Class = UCombatPoolProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActorPool", &ICombatPoolProviderInterface::execGetActorPool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatPoolProviderInterface);
UClass* Z_Construct_UClass_UCombatPoolProviderInterface_NoRegister()
{
	return UCombatPoolProviderInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatPoolProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatPoolProviderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatPoolProviderInterface_GetActorPool, "GetActorPool" }, // 425571602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatPoolProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatPoolProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatPoolProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatPoolProviderInterface_Statics::ClassParams = {
	&UCombatPoolProviderInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatPoolProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatPoolProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatPoolProviderInterface()
{
	if (!Z_Registration_Info_UClass_UCombatPoolProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatPoolProviderInterface.OuterSingleton, Z_Construct_UClass_UCombatPoolProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatPoolProviderInterface.OuterSingleton;
}
template<> NINJACOMBATACTORPOOL_API UClass* StaticClass<UCombatPoolProviderInterface>()
{
	return UCombatPoolProviderInterface::StaticClass();
}
UCombatPoolProviderInterface::UCombatPoolProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatPoolProviderInterface);
UCombatPoolProviderInterface::~UCombatPoolProviderInterface() {}
// End Interface UCombatPoolProviderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatPoolProviderInterface, UCombatPoolProviderInterface::StaticClass, TEXT("UCombatPoolProviderInterface"), &Z_Registration_Info_UClass_UCombatPoolProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatPoolProviderInterface), 2172538366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_1448492746(TEXT("/Script/NinjaCombatActorPool"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Interfaces_CombatPoolProviderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
