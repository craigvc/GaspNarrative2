// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatTargetReceiverInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatTargetReceiverInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetReceiverInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetReceiverInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatTargetReceiverInterface Function ReceiveCombatTarget
struct CombatTargetReceiverInterface_eventReceiveCombatTarget_Parms
{
	AActor* CombatTarget;
};
void ICombatTargetReceiverInterface::ReceiveCombatTarget(AActor* CombatTarget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveCombatTarget instead.");
}
static FName NAME_UCombatTargetReceiverInterface_ReceiveCombatTarget = FName(TEXT("ReceiveCombatTarget"));
void ICombatTargetReceiverInterface::Execute_ReceiveCombatTarget(UObject* O, AActor* CombatTarget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetReceiverInterface::StaticClass()));
	CombatTargetReceiverInterface_eventReceiveCombatTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetReceiverInterface_ReceiveCombatTarget);
	if (Func)
	{
		Parms.CombatTarget=CombatTarget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetReceiverInterface*)(O->GetNativeInterfaceAddress(UCombatTargetReceiverInterface::StaticClass())))
	{
		I->ReceiveCombatTarget_Implementation(CombatTarget);
	}
}
struct Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Target Receiver Interface" },
		{ "Comment", "/**\n\x09 * Receives the Combat Target from a source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatTargetReceiverInterface.h" },
		{ "ToolTip", "Receives the Combat Target from a source." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetReceiverInterface_eventReceiveCombatTarget_Parms, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::NewProp_CombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetReceiverInterface, nullptr, "ReceiveCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::PropPointers), sizeof(CombatTargetReceiverInterface_eventReceiveCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetReceiverInterface_eventReceiveCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetReceiverInterface::execReceiveCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveCombatTarget_Implementation(Z_Param_CombatTarget);
	P_NATIVE_END;
}
// End Interface UCombatTargetReceiverInterface Function ReceiveCombatTarget

// Begin Interface UCombatTargetReceiverInterface
void UCombatTargetReceiverInterface::StaticRegisterNativesUCombatTargetReceiverInterface()
{
	UClass* Class = UCombatTargetReceiverInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReceiveCombatTarget", &ICombatTargetReceiverInterface::execReceiveCombatTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatTargetReceiverInterface);
UClass* Z_Construct_UClass_UCombatTargetReceiverInterface_NoRegister()
{
	return UCombatTargetReceiverInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatTargetReceiverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatTargetReceiverInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatTargetReceiverInterface_ReceiveCombatTarget, "ReceiveCombatTarget" }, // 3095870430
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatTargetReceiverInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatTargetReceiverInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetReceiverInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatTargetReceiverInterface_Statics::ClassParams = {
	&UCombatTargetReceiverInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetReceiverInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatTargetReceiverInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatTargetReceiverInterface()
{
	if (!Z_Registration_Info_UClass_UCombatTargetReceiverInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatTargetReceiverInterface.OuterSingleton, Z_Construct_UClass_UCombatTargetReceiverInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatTargetReceiverInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatTargetReceiverInterface>()
{
	return UCombatTargetReceiverInterface::StaticClass();
}
UCombatTargetReceiverInterface::UCombatTargetReceiverInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatTargetReceiverInterface);
UCombatTargetReceiverInterface::~UCombatTargetReceiverInterface() {}
// End Interface UCombatTargetReceiverInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatTargetReceiverInterface, UCombatTargetReceiverInterface::StaticClass, TEXT("UCombatTargetReceiverInterface"), &Z_Registration_Info_UClass_UCombatTargetReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatTargetReceiverInterface), 1762387683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_4079490768(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetReceiverInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
