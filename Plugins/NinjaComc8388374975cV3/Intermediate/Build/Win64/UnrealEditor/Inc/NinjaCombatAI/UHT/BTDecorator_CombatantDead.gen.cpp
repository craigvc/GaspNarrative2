// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatAI/Public/AI/BehaviorTree/BTDecorator_CombatantDead.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_CombatantDead() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
NINJACOMBATAI_API UClass* Z_Construct_UClass_UBTDecorator_CombatantDead();
NINJACOMBATAI_API UClass* Z_Construct_UClass_UBTDecorator_CombatantDead_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatAI();
// End Cross Module References

// Begin Class UBTDecorator_CombatantDead
void UBTDecorator_CombatantDead::StaticRegisterNativesUBTDecorator_CombatantDead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_CombatantDead);
UClass* Z_Construct_UClass_UBTDecorator_CombatantDead_NoRegister()
{
	return UBTDecorator_CombatantDead::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_CombatantDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n * Checks if a combat actor is dead, based on the damage manager.\n * You can also check if the combatant is alive by inverting the check.\n */" },
		{ "DisplayName", "Combatant is Dead" },
		{ "IncludePath", "AI/BehaviorTree/BTDecorator_CombatantDead.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTDecorator_CombatantDead.h" },
		{ "ToolTip", "Checks if a combat actor is dead, based on the damage manager.\nYou can also check if the combatant is alive by inverting the check." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatantKey_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Blackboard entry containing the actor to check. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTDecorator_CombatantDead.h" },
		{ "ToolTip", "Blackboard entry containing the actor to check." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CombatantKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_CombatantDead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::NewProp_CombatantKey = { "CombatantKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_CombatantDead, CombatantKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatantKey_MetaData), NewProp_CombatantKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::NewProp_CombatantKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::ClassParams = {
	&UBTDecorator_CombatantDead::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_CombatantDead()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_CombatantDead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_CombatantDead.OuterSingleton, Z_Construct_UClass_UBTDecorator_CombatantDead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_CombatantDead.OuterSingleton;
}
template<> NINJACOMBATAI_API UClass* StaticClass<UBTDecorator_CombatantDead>()
{
	return UBTDecorator_CombatantDead::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_CombatantDead);
UBTDecorator_CombatantDead::~UBTDecorator_CombatantDead() {}
// End Class UBTDecorator_CombatantDead

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTDecorator_CombatantDead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_CombatantDead, UBTDecorator_CombatantDead::StaticClass, TEXT("UBTDecorator_CombatantDead"), &Z_Registration_Info_UClass_UBTDecorator_CombatantDead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_CombatantDead), 585841132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTDecorator_CombatantDead_h_2260200538(TEXT("/Script/NinjaCombatAI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTDecorator_CombatantDead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatAI_Public_AI_BehaviorTree_BTDecorator_CombatantDead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
