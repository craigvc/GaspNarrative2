// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Interfaces/CombatTargetActorModifierInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatTargetActorModifierInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetActorModifierInterface();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetActorModifierInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Interface UCombatTargetActorModifierInterface Function ModifyActor
struct CombatTargetActorModifierInterface_eventModifyActor_Parms
{
	AGameplayAbilityTargetActor* TargetActor;
};
void ICombatTargetActorModifierInterface::ModifyActor(AGameplayAbilityTargetActor* TargetActor)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ModifyActor instead.");
}
static FName NAME_UCombatTargetActorModifierInterface_ModifyActor = FName(TEXT("ModifyActor"));
void ICombatTargetActorModifierInterface::Execute_ModifyActor(UObject* O, AGameplayAbilityTargetActor* TargetActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCombatTargetActorModifierInterface::StaticClass()));
	CombatTargetActorModifierInterface_eventModifyActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UCombatTargetActorModifierInterface_ModifyActor);
	if (Func)
	{
		Parms.TargetActor=TargetActor;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ICombatTargetActorModifierInterface*)(O->GetNativeInterfaceAddress(UCombatTargetActorModifierInterface::StaticClass())))
	{
		I->ModifyActor_Implementation(TargetActor);
	}
}
struct Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Target Actor Modifier Interface" },
		{ "Comment", "/**\n\x09 * Hook to modify a Target Actor after it has been spawned by the task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatTargetActorModifierInterface.h" },
		{ "ToolTip", "Hook to modify a Target Actor after it has been spawned by the task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatTargetActorModifierInterface_eventModifyActor_Parms, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatTargetActorModifierInterface, nullptr, "ModifyActor", nullptr, nullptr, Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::PropPointers), sizeof(CombatTargetActorModifierInterface_eventModifyActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatTargetActorModifierInterface_eventModifyActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICombatTargetActorModifierInterface::execModifyActor)
{
	P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyActor_Implementation(Z_Param_TargetActor);
	P_NATIVE_END;
}
// End Interface UCombatTargetActorModifierInterface Function ModifyActor

// Begin Interface UCombatTargetActorModifierInterface
void UCombatTargetActorModifierInterface::StaticRegisterNativesUCombatTargetActorModifierInterface()
{
	UClass* Class = UCombatTargetActorModifierInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModifyActor", &ICombatTargetActorModifierInterface::execModifyActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatTargetActorModifierInterface);
UClass* Z_Construct_UClass_UCombatTargetActorModifierInterface_NoRegister()
{
	return UCombatTargetActorModifierInterface::StaticClass();
}
struct Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Interfaces/CombatTargetActorModifierInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatTargetActorModifierInterface_ModifyActor, "ModifyActor" }, // 2219299169
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICombatTargetActorModifierInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics::ClassParams = {
	&UCombatTargetActorModifierInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatTargetActorModifierInterface()
{
	if (!Z_Registration_Info_UClass_UCombatTargetActorModifierInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatTargetActorModifierInterface.OuterSingleton, Z_Construct_UClass_UCombatTargetActorModifierInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatTargetActorModifierInterface.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatTargetActorModifierInterface>()
{
	return UCombatTargetActorModifierInterface::StaticClass();
}
UCombatTargetActorModifierInterface::UCombatTargetActorModifierInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatTargetActorModifierInterface);
UCombatTargetActorModifierInterface::~UCombatTargetActorModifierInterface() {}
// End Interface UCombatTargetActorModifierInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatTargetActorModifierInterface, UCombatTargetActorModifierInterface::StaticClass, TEXT("UCombatTargetActorModifierInterface"), &Z_Registration_Info_UClass_UCombatTargetActorModifierInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatTargetActorModifierInterface), 2957859729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_2453702116(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Interfaces_CombatTargetActorModifierInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
