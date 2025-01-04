// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatFactions/Public/GameFramework/NinjaCombatGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageModifierInterface_NoRegister();
NINJACOMBATFACTIONS_API UClass* Z_Construct_UClass_ANinjaCombatGameMode();
NINJACOMBATFACTIONS_API UClass* Z_Construct_UClass_ANinjaCombatGameMode_NoRegister();
NINJACOMBATFACTIONS_API UClass* Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatFactions();
// End Cross Module References

// Begin Class ANinjaCombatGameMode
void ANinjaCombatGameMode::StaticRegisterNativesANinjaCombatGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatGameMode);
UClass* Z_Construct_UClass_ANinjaCombatGameMode_NoRegister()
{
	return ANinjaCombatGameMode::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A game mode that can be used to modify damage, considering the Ninja Factions plugin. \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/NinjaCombatGameMode.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A game mode that can be used to modify damage, considering the Ninja Factions plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableFriendlyDamage_MetaData[] = {
		{ "Category", "Damage Evaluator" },
		{ "Comment", "/** Determines if friendly damage should be enabled or disabled. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatGameMode.h" },
		{ "ToolTip", "Determines if friendly damage should be enabled or disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvaluator_MetaData[] = {
		{ "Category", "Damage Evaluator" },
		{ "Comment", "/** Damage Evaluator for the actual damage modification. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatGameMode.h" },
		{ "ToolTip", "Damage Evaluator for the actual damage modification." },
	};
#endif // WITH_METADATA
	static void NewProp_bDisableFriendlyDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableFriendlyDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageEvaluator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ANinjaCombatGameMode_Statics::NewProp_bDisableFriendlyDamage_SetBit(void* Obj)
{
	((ANinjaCombatGameMode*)Obj)->bDisableFriendlyDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatGameMode_Statics::NewProp_bDisableFriendlyDamage = { "bDisableFriendlyDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatGameMode), &Z_Construct_UClass_ANinjaCombatGameMode_Statics::NewProp_bDisableFriendlyDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableFriendlyDamage_MetaData), NewProp_bDisableFriendlyDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatGameMode_Statics::NewProp_DamageEvaluator = { "DamageEvaluator", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatGameMode, DamageEvaluator), Z_Construct_UClass_UNinjaCombatFactionDamageEvaluator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEvaluator_MetaData), NewProp_DamageEvaluator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatGameMode_Statics::NewProp_bDisableFriendlyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatGameMode_Statics::NewProp_DamageEvaluator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaCombatGameMode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatDamageModifierInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatGameMode, ICombatDamageModifierInterface), false },  // 2649860269
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatGameMode_Statics::ClassParams = {
	&ANinjaCombatGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaCombatGameMode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatGameMode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatGameMode()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatGameMode.OuterSingleton, Z_Construct_UClass_ANinjaCombatGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatGameMode.OuterSingleton;
}
template<> NINJACOMBATFACTIONS_API UClass* StaticClass<ANinjaCombatGameMode>()
{
	return ANinjaCombatGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatGameMode);
ANinjaCombatGameMode::~ANinjaCombatGameMode() {}
// End Class ANinjaCombatGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_GameFramework_NinjaCombatGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatGameMode, ANinjaCombatGameMode::StaticClass, TEXT("ANinjaCombatGameMode"), &Z_Registration_Info_UClass_ANinjaCombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatGameMode), 298921354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_GameFramework_NinjaCombatGameMode_h_2412470513(TEXT("/Script/NinjaCombatFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_GameFramework_NinjaCombatGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatFactions_Public_GameFramework_NinjaCombatGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
