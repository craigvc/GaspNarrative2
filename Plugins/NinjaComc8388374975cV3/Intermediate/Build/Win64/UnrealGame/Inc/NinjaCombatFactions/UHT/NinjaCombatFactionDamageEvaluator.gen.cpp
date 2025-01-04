// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatFactions/Public/Components/NinjaCombatFactionDamageEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatFactionDamageEvaluator() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageModifierInterface_NoRegister();
NINJACOMBATFACTIONS_API UClass* Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator();
NINJACOMBATFACTIONS_API UClass* Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatFactions();
// End Cross Module References

// Begin Class UNinjaCombatFactionDamageEvaluator
void UNinjaCombatFactionDamageEvaluator::StaticRegisterNativesUNinjaCombatFactionDamageEvaluator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatFactionDamageEvaluator);
UClass* Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_NoRegister()
{
	return UNinjaCombatFactionDamageEvaluator::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Evaluates damage based on the target and instigator factions.\n * \n * Can be added to a Game State or Game Mode, which are common implementations for\n * the Combat Damage Modifier interface, which is also implemented by this component.\n */" },
		{ "IncludePath", "Components/NinjaCombatFactionDamageEvaluator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatFactionDamageEvaluator.h" },
		{ "ToolTip", "Evaluates damage based on the target and instigator factions.\n\nCan be added to a Game State or Game Mode, which are common implementations for\nthe Combat Damage Modifier interface, which is also implemented by this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCancelFriendlyDamage_MetaData[] = {
		{ "Category", "Damage Evaluator" },
		{ "Comment", "/**\n\x09 * Determines if friendly damage is fully cancelled.\n\x09 * This completely dismisses the damage, cancelling the damage flow.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatFactionDamageEvaluator.h" },
		{ "ToolTip", "Determines if friendly damage is fully cancelled.\nThis completely dismisses the damage, cancelling the damage flow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableFriendlyDamage_MetaData[] = {
		{ "Category", "Damage Evaluator" },
		{ "Comment", "/**\n\x09 * Determines if friendly damage is nullified.\n\x09 * This still triggers other parts of the damage flow, such as hit reactions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatFactionDamageEvaluator.h" },
		{ "ToolTip", "Determines if friendly damage is nullified.\nThis still triggers other parts of the damage flow, such as hit reactions." },
	};
#endif // WITH_METADATA
	static void NewProp_bCancelFriendlyDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelFriendlyDamage;
	static void NewProp_bDisableFriendlyDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableFriendlyDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatFactionDamageEvaluator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bCancelFriendlyDamage_SetBit(void* Obj)
{
	((UNinjaCombatFactionDamageEvaluator*)Obj)->bCancelFriendlyDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bCancelFriendlyDamage = { "bCancelFriendlyDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatFactionDamageEvaluator), &Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bCancelFriendlyDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCancelFriendlyDamage_MetaData), NewProp_bCancelFriendlyDamage_MetaData) };
void Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bDisableFriendlyDamage_SetBit(void* Obj)
{
	((UNinjaCombatFactionDamageEvaluator*)Obj)->bDisableFriendlyDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bDisableFriendlyDamage = { "bDisableFriendlyDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatFactionDamageEvaluator), &Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bDisableFriendlyDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableFriendlyDamage_MetaData), NewProp_bDisableFriendlyDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bCancelFriendlyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::NewProp_bDisableFriendlyDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatDamageModifierInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatFactionDamageEvaluator, ICombatDamageModifierInterface), false },  // 2649860269
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::ClassParams = {
	&UNinjaCombatFactionDamageEvaluator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatFactionDamageEvaluator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatFactionDamageEvaluator.OuterSingleton, Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatFactionDamageEvaluator.OuterSingleton;
}
template<> NINJACOMBATFACTIONS_API UClass* StaticClass<UNinjaCombatFactionDamageEvaluator>()
{
	return UNinjaCombatFactionDamageEvaluator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatFactionDamageEvaluator);
UNinjaCombatFactionDamageEvaluator::~UNinjaCombatFactionDamageEvaluator() {}
// End Class UNinjaCombatFactionDamageEvaluator

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_Components_NinjaCombatFactionDamageEvaluator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator, UNinjaCombatFactionDamageEvaluator::StaticClass, TEXT("UNinjaCombatFactionDamageEvaluator"), &Z_Registration_Info_UClass_UNinjaCombatFactionDamageEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatFactionDamageEvaluator), 1637158991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_Components_NinjaCombatFactionDamageEvaluator_h_2083923165(TEXT("/Script/NinjaCombatFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_Components_NinjaCombatFactionDamageEvaluator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_Components_NinjaCombatFactionDamageEvaluator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
