// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AI/BehaviorTree/BTService_SelectGameplayAbility.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SelectGameplayAbility() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UBTService_SelectGameplayAbility();
NINJAGAS_API UClass* Z_Construct_UClass_UBTService_SelectGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UBTService_SelectGameplayAbility
void UBTService_SelectGameplayAbility::StaticRegisterNativesUBTService_SelectGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_SelectGameplayAbility);
UClass* Z_Construct_UClass_UBTService_SelectGameplayAbility_NoRegister()
{
	return UBTService_SelectGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n * Selects a Gameplay Ability from a list, optionally forcing changes between current and new selections.\n */" },
		{ "DisplayName", "Select Gameplay Ability" },
		{ "IncludePath", "AI/BehaviorTree/BTService_SelectGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_SelectGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Selects a Gameplay Ability from a list, optionally forcing changes between current and new selections." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClassKey_MetaData[] = {
		{ "Category", "Ability Selection" },
		{ "Comment", "/** Blackboard storing the selected ability. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_SelectGameplayAbility.h" },
		{ "ToolTip", "Blackboard storing the selected ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Ability Selection" },
		{ "Comment", "/** Gameplay Abilities to pick from. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTService_SelectGameplayAbility.h" },
		{ "ToolTip", "Gameplay Abilities to pick from." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityClassKey;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SelectGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::NewProp_AbilityClassKey = { "AbilityClassKey", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectGameplayAbility, AbilityClassKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClassKey_MetaData), NewProp_AbilityClassKey_MetaData) }; // 3940742986
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SelectGameplayAbility, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::NewProp_AbilityClassKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::NewProp_Abilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::ClassParams = {
	&UBTService_SelectGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_SelectGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBTService_SelectGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SelectGameplayAbility.OuterSingleton, Z_Construct_UClass_UBTService_SelectGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_SelectGameplayAbility.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UBTService_SelectGameplayAbility>()
{
	return UBTService_SelectGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SelectGameplayAbility);
UBTService_SelectGameplayAbility::~UBTService_SelectGameplayAbility() {}
// End Class UBTService_SelectGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_SelectGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SelectGameplayAbility, UBTService_SelectGameplayAbility::StaticClass, TEXT("UBTService_SelectGameplayAbility"), &Z_Registration_Info_UClass_UBTService_SelectGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SelectGameplayAbility), 671448373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_SelectGameplayAbility_h_2261372389(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_SelectGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTService_SelectGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
