// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_Stagger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_Stagger() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Stagger();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Stagger_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_Stagger Function HandleStagger
struct CombatAbility_Stagger_eventHandleStagger_Parms
{
	bool bStaggered;
};
static const FName NAME_UCombatAbility_Stagger_HandleStagger = FName(TEXT("HandleStagger"));
void UCombatAbility_Stagger::HandleStagger(bool bStaggered)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Stagger_HandleStagger);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Stagger_eventHandleStagger_Parms Parms;
		Parms.bStaggered=bStaggered ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleStagger_Implementation(bStaggered);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stagger Ability" },
		{ "Comment", "/**\n\x09 * Handles the stagger in the ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Stagger.h" },
		{ "ToolTip", "Handles the stagger in the ability." },
	};
#endif // WITH_METADATA
	static void NewProp_bStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::NewProp_bStaggered_SetBit(void* Obj)
{
	((CombatAbility_Stagger_eventHandleStagger_Parms*)Obj)->bStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::NewProp_bStaggered = { "bStaggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_Stagger_eventHandleStagger_Parms), &Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::NewProp_bStaggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::NewProp_bStaggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Stagger, nullptr, "HandleStagger", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::PropPointers), sizeof(CombatAbility_Stagger_eventHandleStagger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Stagger_eventHandleStagger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Stagger::execHandleStagger)
{
	P_GET_UBOOL(Z_Param_bStaggered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStagger_Implementation(Z_Param_bStaggered);
	P_NATIVE_END;
}
// End Class UCombatAbility_Stagger Function HandleStagger

// Begin Class UCombatAbility_Stagger
void UCombatAbility_Stagger::StaticRegisterNativesUCombatAbility_Stagger()
{
	UClass* Class = UCombatAbility_Stagger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleStagger", &UCombatAbility_Stagger::execHandleStagger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_Stagger);
UClass* Z_Construct_UClass_UCombatAbility_Stagger_NoRegister()
{
	return UCombatAbility_Stagger::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_Stagger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles a Stagger state.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_Stagger.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Stagger.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles a Stagger state." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_Stagger_HandleStagger, "HandleStagger" }, // 2457603960
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_Stagger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatAbility_Stagger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Stagger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_Stagger_Statics::ClassParams = {
	&UCombatAbility_Stagger::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Stagger_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_Stagger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_Stagger()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_Stagger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_Stagger.OuterSingleton, Z_Construct_UClass_UCombatAbility_Stagger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_Stagger.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_Stagger>()
{
	return UCombatAbility_Stagger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_Stagger);
UCombatAbility_Stagger::~UCombatAbility_Stagger() {}
// End Class UCombatAbility_Stagger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Stagger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_Stagger, UCombatAbility_Stagger::StaticClass, TEXT("UCombatAbility_Stagger"), &Z_Registration_Info_UClass_UCombatAbility_Stagger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_Stagger), 3289235480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Stagger_h_2055518505(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Stagger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Stagger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
