// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Data/NinjaCombatDamageDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatDamageDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageDataAsset();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageDataAsset_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatDamageDataAsset
void UNinjaCombatDamageDataAsset::StaticRegisterNativesUNinjaCombatDamageDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatDamageDataAsset);
UClass* Z_Construct_UClass_UNinjaCombatDamageDataAsset_NoRegister()
{
	return UNinjaCombatDamageDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configures handlers for received damage.\n */" },
		{ "IncludePath", "Data/NinjaCombatDamageDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "Configures handlers for received damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDamagePerceptionEvent_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** If set to true, sends a Perception Event for the Damage Sense, when damage is received. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "If set to true, sends a Perception Event for the Damage Sense, when damage is received." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRagdollOnDeath_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** Determines if the character will go into ragdoll during the death flow. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "Determines if the character will go into ragdoll during the death flow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifespanOnDeath_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * Lifespan applied when destroying the owner.\n\x09 *\n\x09 * A value of zero will destroy the actor immediately, once fatal damage has been applied\n\x09 * and the death flow ha reached the final state, where the actor can be removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "Lifespan applied when destroying the owner.\n\nA value of zero will destroy the actor immediately, once fatal damage has been applied\nand the death flow ha reached the final state, where the actor can be removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathTimeLimit_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * A maximum amount of time to wait for a Death Ability (or similar) to kill the character.\n\x09 *\n\x09 * Fallback mechanism that always ensures that the character will be destroyed, regardless\n\x09 * of the Abilities or other systems properly calling the Death Workflow.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "A maximum amount of time to wait for a Death Ability (or similar) to kill the character.\n\nFallback mechanism that always ensures that the character will be destroyed, regardless\nof the Abilities or other systems properly calling the Death Workflow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageHandlers_Inner_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * All damage handlers that are executed on each damage applied.\n\x09 *\n\x09 * You can trigger additional cosmetics using the Gameplay Cue framework. These handlers\n\x09 * are executed from a cue that is applied via REPLICATION, instead of the default Multicast\n\x09 * approach. This means that they are reliably executed on all clients.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "All damage handlers that are executed on each damage applied.\n\nYou can trigger additional cosmetics using the Gameplay Cue framework. These handlers\nare executed from a cue that is applied via REPLICATION, instead of the default Multicast\napproach. This means that they are reliably executed on all clients." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageHandlers_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * All damage handlers that are executed on each damage applied.\n\x09 *\n\x09 * You can trigger additional cosmetics using the Gameplay Cue framework. These handlers\n\x09 * are executed from a cue that is applied via REPLICATION, instead of the default Multicast\n\x09 * approach. This means that they are reliably executed on all clients.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/NinjaCombatDamageDataAsset.h" },
		{ "ToolTip", "All damage handlers that are executed on each damage applied.\n\nYou can trigger additional cosmetics using the Gameplay Cue framework. These handlers\nare executed from a cue that is applied via REPLICATION, instead of the default Multicast\napproach. This means that they are reliably executed on all clients." },
	};
#endif // WITH_METADATA
	static void NewProp_bGenerateDamagePerceptionEvent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDamagePerceptionEvent;
	static void NewProp_bEnableRagdollOnDeath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRagdollOnDeath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifespanOnDeath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeathTimeLimit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageHandlers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageHandlers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatDamageDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bGenerateDamagePerceptionEvent_SetBit(void* Obj)
{
	((UNinjaCombatDamageDataAsset*)Obj)->bGenerateDamagePerceptionEvent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bGenerateDamagePerceptionEvent = { "bGenerateDamagePerceptionEvent", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatDamageDataAsset), &Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bGenerateDamagePerceptionEvent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateDamagePerceptionEvent_MetaData), NewProp_bGenerateDamagePerceptionEvent_MetaData) };
void Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bEnableRagdollOnDeath_SetBit(void* Obj)
{
	((UNinjaCombatDamageDataAsset*)Obj)->bEnableRagdollOnDeath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bEnableRagdollOnDeath = { "bEnableRagdollOnDeath", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatDamageDataAsset), &Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bEnableRagdollOnDeath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRagdollOnDeath_MetaData), NewProp_bEnableRagdollOnDeath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_LifespanOnDeath = { "LifespanOnDeath", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatDamageDataAsset, LifespanOnDeath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifespanOnDeath_MetaData), NewProp_LifespanOnDeath_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_DeathTimeLimit = { "DeathTimeLimit", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatDamageDataAsset, DeathTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathTimeLimit_MetaData), NewProp_DeathTimeLimit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_DamageHandlers_Inner = { "DamageHandlers", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaCombatDamageHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageHandlers_Inner_MetaData), NewProp_DamageHandlers_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_DamageHandlers = { "DamageHandlers", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatDamageDataAsset, DamageHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageHandlers_MetaData), NewProp_DamageHandlers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bGenerateDamagePerceptionEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_bEnableRagdollOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_LifespanOnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_DeathTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_DamageHandlers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::NewProp_DamageHandlers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::ClassParams = {
	&UNinjaCombatDamageDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatDamageDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatDamageDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatDamageDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaCombatDamageDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatDamageDataAsset.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatDamageDataAsset>()
{
	return UNinjaCombatDamageDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatDamageDataAsset);
UNinjaCombatDamageDataAsset::~UNinjaCombatDamageDataAsset() {}
// End Class UNinjaCombatDamageDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Data_NinjaCombatDamageDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatDamageDataAsset, UNinjaCombatDamageDataAsset::StaticClass, TEXT("UNinjaCombatDamageDataAsset"), &Z_Registration_Info_UClass_UNinjaCombatDamageDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatDamageDataAsset), 3515772182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Data_NinjaCombatDamageDataAsset_h_857272448(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Data_NinjaCombatDamageDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Data_NinjaCombatDamageDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
