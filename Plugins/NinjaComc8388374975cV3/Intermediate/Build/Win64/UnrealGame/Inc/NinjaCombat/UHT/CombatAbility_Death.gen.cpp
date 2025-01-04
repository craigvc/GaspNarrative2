// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_Death() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Death();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Death_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatContextAnimationAbility();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_Death Function FinishDying
static const FName NAME_UCombatAbility_Death_FinishDying = FName(TEXT("FinishDying"));
void UCombatAbility_Death::FinishDying()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Death_FinishDying);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		FinishDying_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatAbility_Death_FinishDying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Death Ability" },
		{ "Comment", "/**\n\x09 * Finishes the death event with the ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Death.h" },
		{ "ToolTip", "Finishes the death event with the ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Death_FinishDying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Death, nullptr, "FinishDying", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Death_FinishDying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Death_FinishDying_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Death_FinishDying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Death_FinishDying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Death::execFinishDying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDying_Implementation();
	P_NATIVE_END;
}
// End Class UCombatAbility_Death Function FinishDying

// Begin Class UCombatAbility_Death
void UCombatAbility_Death::StaticRegisterNativesUCombatAbility_Death()
{
	UClass* Class = UCombatAbility_Death::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishDying", &UCombatAbility_Death::execFinishDying },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_Death);
UClass* Z_Construct_UClass_UCombatAbility_Death_NoRegister()
{
	return UCombatAbility_Death::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Concrete implementation of an ability that handles the death event.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_Death.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Death.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Concrete implementation of an ability that handles the death event." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_Death_FinishDying, "FinishDying" }, // 618756552
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_Death>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCombatAbility_Death_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatContextAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Death_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_Death_Statics::ClassParams = {
	&UCombatAbility_Death::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Death_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_Death_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_Death()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_Death.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_Death.OuterSingleton, Z_Construct_UClass_UCombatAbility_Death_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_Death.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_Death>()
{
	return UCombatAbility_Death::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_Death);
UCombatAbility_Death::~UCombatAbility_Death() {}
// End Class UCombatAbility_Death

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Death_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_Death, UCombatAbility_Death::StaticClass, TEXT("UCombatAbility_Death"), &Z_Registration_Info_UClass_UCombatAbility_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_Death), 1603337946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Death_h_1437881725(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Death_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
