// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFNinjaCombatGameplayEffectContext() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContext();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FNinjaCombatGameplayEffectContext
static_assert(std::is_polymorphic<FNinjaCombatGameplayEffectContext>() == std::is_polymorphic<FGameplayEffectContext>(), "USTRUCT FNinjaCombatGameplayEffectContext cannot be polymorphic unless super FGameplayEffectContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext;
class UScriptStruct* FNinjaCombatGameplayEffectContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("NinjaCombatGameplayEffectContext"));
	}
	return Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FNinjaCombatGameplayEffectContext>()
{
	return FNinjaCombatGameplayEffectContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enhances the default effect context to add details from the combat system.\n * \n * This is not directly used by the Combat/Ability System. Instead, a proxy object is used so you\n * can use any other Effect Context struct as long as you provide an appropriate proxy for it.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h" },
		{ "ToolTip", "Enhances the default effect context to add details from the combat system.\n\nThis is not directly used by the Combat/Ability System. Instead, a proxy object is used so you\ncan use any other Effect Context struct as long as you provide an appropriate proxy for it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousHealthOnTarget_MetaData[] = {
		{ "Comment", "/** Amount of health before this context was applied. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h" },
		{ "ToolTip", "Amount of health before this context was applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousStaminaOnTarget_MetaData[] = {
		{ "Comment", "/** Amount of stamina before this context was applied. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h" },
		{ "ToolTip", "Amount of stamina before this context was applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageApplied_MetaData[] = {
		{ "Comment", "/** The amount of damage applied in this context. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h" },
		{ "ToolTip", "The amount of damage applied in this context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MitigationCost_MetaData[] = {
		{ "Comment", "/** The amount of damage applied that was mitigated. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Types/FNinjaCombatGameplayEffectContext.h" },
		{ "ToolTip", "The amount of damage applied that was mitigated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealthOnTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousStaminaOnTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageApplied;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigationCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNinjaCombatGameplayEffectContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_PreviousHealthOnTarget = { "PreviousHealthOnTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaCombatGameplayEffectContext, PreviousHealthOnTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousHealthOnTarget_MetaData), NewProp_PreviousHealthOnTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_PreviousStaminaOnTarget = { "PreviousStaminaOnTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaCombatGameplayEffectContext, PreviousStaminaOnTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousStaminaOnTarget_MetaData), NewProp_PreviousStaminaOnTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_DamageApplied = { "DamageApplied", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaCombatGameplayEffectContext, DamageApplied), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageApplied_MetaData), NewProp_DamageApplied_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_MitigationCost = { "MitigationCost", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNinjaCombatGameplayEffectContext, MitigationCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MitigationCost_MetaData), NewProp_MitigationCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_PreviousHealthOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_PreviousStaminaOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_DamageApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewProp_MitigationCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	Z_Construct_UScriptStruct_FGameplayEffectContext,
	&NewStructOps,
	"NinjaCombatGameplayEffectContext",
	Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::PropPointers),
	sizeof(FNinjaCombatGameplayEffectContext),
	alignof(FNinjaCombatGameplayEffectContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext()
{
	if (!Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext.InnerSingleton, Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext.InnerSingleton;
}
// End ScriptStruct FNinjaCombatGameplayEffectContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayEffectContext_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNinjaCombatGameplayEffectContext::StaticStruct, Z_Construct_UScriptStruct_FNinjaCombatGameplayEffectContext_Statics::NewStructOps, TEXT("NinjaCombatGameplayEffectContext"), &Z_Registration_Info_UScriptStruct_NinjaCombatGameplayEffectContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNinjaCombatGameplayEffectContext), 20103506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayEffectContext_h_3388607466(TEXT("/Script/NinjaCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayEffectContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Types_FNinjaCombatGameplayEffectContext_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
