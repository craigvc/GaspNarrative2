// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatCore/Public/Interfaces/CombatActorAwareInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatActorAwareInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBATCORE_API UClass* Z_Construct_UClass_UCombatActorAwareInterface();
NINJACOMBATCORE_API UClass* Z_Construct_UClass_UCombatActorAwareInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatCore();
// End Cross Module References

// Begin Interface UCombatActorAwareInterface Function SetCombatActor
struct CombatActorAwareInterface_eventSetCombatActor_Parms
{
	AActor* NewCombatActor;
};
void ICombatActorAwareInterface::SetCombatActor(AActor* NewCombatActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCombatActor instead.");
}
static FName NAME_UCombatActorAwareInterface_SetCombatActor = FName(TEXT("SetCombatActor"));
void ICombatActorAwareInterface::Execute_SetCombatActor(UObject* O, AActor* NewCombatActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatActorAwareInterface::StaticClass()));
	CombatActorAwareInterface_eventSetCombatActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatActorAwareInterface_SetCombatActor);
	if (Func)
	{
		Parms.NewCombatActor=NewCombatActor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatActorAwareInterface*)(O->GetNativeInterfaceAddress(UCombatActorAwareInterface::StaticClass())))
	{
		I->SetCombatActor_Implementation(NewCombatActor);
	}
}
struct Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Actor Aware Interface" },
		{ "Comment", "/**\n\x09 * Sets the combat actor assigned to the object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/CombatActorAwareInterface.h" },
		{ "ToolTip", "Sets the combat actor assigned to the object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCombatActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::NewProp_NewCombatActor = { "NewCombatActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatActorAwareInterface_eventSetCombatActor_Parms, NewCombatActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::NewProp_NewCombatActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatActorAwareInterface, nullptr, "SetCombatActor", nullptr, nullptr, Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::PropPointers), sizeof(CombatActorAwareInterface_eventSetCombatActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatActorAwareInterface_eventSetCombatActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatActorAwareInterface::execSetCombatActor)
{
	P_GET_OBJECT(AActor,Z_Param_NewCombatActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatActor_Implementation(Z_Param_NewCombatActor);
	P_NATIVE_END;
}
// End Interface UCombatActorAwareInterface Function SetCombatActor

// Begin Interface UCombatActorAwareInterface
void UCombatActorAwareInterface::StaticRegisterNativesUCombatActorAwareInterface()
{
	UClass* Class = UCombatActorAwareInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCombatActor", &ICombatActorAwareInterface::execSetCombatActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatActorAwareInterface);
UClass* Z_Construct_UClass_UCombatActorAwareInterface_NoRegister()
{
	return UCombatActorAwareInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatActorAwareInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/CombatActorAwareInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatActorAwareInterface_SetCombatActor, "SetCombatActor" }, // 3263836908
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatActorAwareInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatActorAwareInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatActorAwareInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatActorAwareInterface_Statics::ClassParams = {
	&UCombatActorAwareInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatActorAwareInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatActorAwareInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatActorAwareInterface()
{
	if (!Z_Registration_Info_UClass_UCombatActorAwareInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatActorAwareInterface.OuterSingleton, Z_Construct_UClass_UCombatActorAwareInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatActorAwareInterface.OuterSingleton;
}
template<> NINJACOMBATCORE_API UClass* StaticClass<UCombatActorAwareInterface>()
{
	return UCombatActorAwareInterface::StaticClass();
}
UCombatActorAwareInterface::UCombatActorAwareInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatActorAwareInterface);
UCombatActorAwareInterface::~UCombatActorAwareInterface() {}
// End Interface UCombatActorAwareInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatActorAwareInterface, UCombatActorAwareInterface::StaticClass, TEXT("UCombatActorAwareInterface"), &Z_Registration_Info_UClass_UCombatActorAwareInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatActorAwareInterface), 1763291407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_3879711445(TEXT("/Script/NinjaCombatCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCore_Public_Interfaces_CombatActorAwareInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
