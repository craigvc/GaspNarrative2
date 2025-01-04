// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_Evade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_Evade() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Evade();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Evade_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_Evade Function GrantEvadingEffect
struct Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Applies the Evading Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Applies the Evading Effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Evade, nullptr, "GrantEvadingEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Evade::execGrantEvadingEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantEvadingEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_Evade Function GrantEvadingEffect

// Begin Class UCombatAbility_Evade Function GrantInvulnerabilityEffect
struct Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Applies the Invulnerability Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Applies the Invulnerability Effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Evade, nullptr, "GrantInvulnerabilityEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Evade::execGrantInvulnerabilityEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GrantInvulnerabilityEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_Evade Function GrantInvulnerabilityEffect

// Begin Class UCombatAbility_Evade Function RevokeEvadingEffect
struct Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Revokes the active Evading Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Revokes the active Evading Effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Evade, nullptr, "RevokeEvadingEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Evade::execRevokeEvadingEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevokeEvadingEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_Evade Function RevokeEvadingEffect

// Begin Class UCombatAbility_Evade Function RevokeInvulnerabilityEffect
struct Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Revokes the active Invulnerability Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Revokes the active Invulnerability Effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Evade, nullptr, "RevokeInvulnerabilityEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Evade::execRevokeInvulnerabilityEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RevokeInvulnerabilityEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_Evade Function RevokeInvulnerabilityEffect

// Begin Class UCombatAbility_Evade
void UCombatAbility_Evade::StaticRegisterNativesUCombatAbility_Evade()
{
	UClass* Class = UCombatAbility_Evade::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GrantEvadingEffect", &UCombatAbility_Evade::execGrantEvadingEffect },
		{ "GrantInvulnerabilityEffect", &UCombatAbility_Evade::execGrantInvulnerabilityEffect },
		{ "RevokeEvadingEffect", &UCombatAbility_Evade::execRevokeEvadingEffect },
		{ "RevokeInvulnerabilityEffect", &UCombatAbility_Evade::execRevokeInvulnerabilityEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_Evade);
UClass* Z_Construct_UClass_UCombatAbility_Evade_NoRegister()
{
	return UCombatAbility_Evade::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_Evade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implementation of the Evade Mechanic, including the handling of the Invulnerability Effect.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implementation of the Evade Mechanic, including the handling of the Invulnerability Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvadingEffectClass_MetaData[] = {
		{ "Category", "Combat Ability|Evade" },
		{ "Comment", "/** Gameplay Effect applied for the Evade. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Gameplay Effect applied for the Evade." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvulnerabilityEffectClass_MetaData[] = {
		{ "Category", "Combat Ability|Evade" },
		{ "Comment", "/** Gameplay Effect applied on Invulnerability. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Gameplay Effect applied on Invulnerability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvulnerabilityEventTask_MetaData[] = {
		{ "Comment", "/** Handles Invulnerability Effects. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Evade.h" },
		{ "ToolTip", "Handles Invulnerability Effects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EvadingEffectClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InvulnerabilityEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvulnerabilityEventTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_Evade_GrantEvadingEffect, "GrantEvadingEffect" }, // 1847334011
		{ &Z_Construct_UFunction_UCombatAbility_Evade_GrantInvulnerabilityEffect, "GrantInvulnerabilityEffect" }, // 2344188140
		{ &Z_Construct_UFunction_UCombatAbility_Evade_RevokeEvadingEffect, "RevokeEvadingEffect" }, // 3309461762
		{ &Z_Construct_UFunction_UCombatAbility_Evade_RevokeInvulnerabilityEffect, "RevokeInvulnerabilityEffect" }, // 2181364338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_Evade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Evade_Statics::NewProp_EvadingEffectClass = { "EvadingEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Evade, EvadingEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvadingEffectClass_MetaData), NewProp_EvadingEffectClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Evade_Statics::NewProp_InvulnerabilityEffectClass = { "InvulnerabilityEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Evade, InvulnerabilityEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvulnerabilityEffectClass_MetaData), NewProp_InvulnerabilityEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Evade_Statics::NewProp_InvulnerabilityEventTask = { "InvulnerabilityEventTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Evade, InvulnerabilityEventTask), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvulnerabilityEventTask_MetaData), NewProp_InvulnerabilityEventTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_Evade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Evade_Statics::NewProp_EvadingEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Evade_Statics::NewProp_InvulnerabilityEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Evade_Statics::NewProp_InvulnerabilityEventTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Evade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_Evade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Evade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_Evade_Statics::ClassParams = {
	&UCombatAbility_Evade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_Evade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Evade_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Evade_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_Evade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_Evade()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_Evade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_Evade.OuterSingleton, Z_Construct_UClass_UCombatAbility_Evade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_Evade.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_Evade>()
{
	return UCombatAbility_Evade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_Evade);
UCombatAbility_Evade::~UCombatAbility_Evade() {}
// End Class UCombatAbility_Evade

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Evade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_Evade, UCombatAbility_Evade::StaticClass, TEXT("UCombatAbility_Evade"), &Z_Registration_Info_UClass_UCombatAbility_Evade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_Evade), 3533372058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Evade_h_1851034450(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Evade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Evade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
