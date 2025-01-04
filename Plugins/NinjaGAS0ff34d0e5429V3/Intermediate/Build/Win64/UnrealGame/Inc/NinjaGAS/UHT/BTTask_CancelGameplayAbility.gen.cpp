// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_CancelGameplayAbility() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAGAS_API UClass* Z_Construct_UClass_UBTTask_CancelGameplayAbility();
NINJAGAS_API UClass* Z_Construct_UClass_UBTTask_CancelGameplayAbility_NoRegister();
NINJAGAS_API UEnum* Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Class UBTTask_CancelGameplayAbility
void UBTTask_CancelGameplayAbility::StaticRegisterNativesUBTTask_CancelGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_CancelGameplayAbility);
UClass* Z_Construct_UClass_UBTTask_CancelGameplayAbility_NoRegister()
{
	return UBTTask_CancelGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Ninja GAS" },
		{ "Comment", "/**\n * Cancels a gameplay ability.\n */" },
		{ "DisplayName", "Cancel Gameplay Ability" },
		{ "IncludePath", "AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ToolTip", "Cancels a gameplay ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancellationMode_MetaData[] = {
		{ "Category", "Gameplay Ability Cancellation" },
		{ "Comment", "/** Determines how we want to cancel the ability. */" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ToolTip", "Determines how we want to cancel the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClassKey_MetaData[] = {
		{ "Category", "Gameplay Ability Cancellation" },
		{ "Comment", "/** The blackboard location used to retrieve the ability class. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::BlackboardClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ToolTip", "The blackboard location used to retrieve the ability class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Gameplay Ability Cancellation" },
		{ "Comment", "/** Ability Class directly provided to this task, used for cancellation. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::AbilityClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ToolTip", "Ability Class directly provided to this task, used for cancellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTargetTags_MetaData[] = {
		{ "Category", "Gameplay Ability Cancellation" },
		{ "Comment", "/** Gameplay Tags used to cancel the ability. All Tags must be present. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::GameplayTags" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ToolTip", "Gameplay Tags used to cancel the ability. All Tags must be present." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelFilterTags_MetaData[] = {
		{ "Category", "Gameplay Ability Cancellation" },
		{ "Comment", "/** If cancelling via tags, this is a filter that prevents an ability to be cancelled. */" },
		{ "EditCondition", "ActivationMode == EAgentAbilityActivationMode::GameplayTags" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AI/BehaviorTree/BTTask_CancelGameplayAbility.h" },
		{ "ToolTip", "If cancelling via tags, this is a filter that prevents an ability to be cancelled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CancellationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CancellationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityClassKey;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTargetTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelFilterTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_CancelGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_CancellationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_CancellationMode = { "CancellationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CancelGameplayAbility, CancellationMode), Z_Construct_UEnum_NinjaGAS_EAgentAbilityActivationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancellationMode_MetaData), NewProp_CancellationMode_MetaData) }; // 3428651183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_AbilityClassKey = { "AbilityClassKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CancelGameplayAbility, AbilityClassKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClassKey_MetaData), NewProp_AbilityClassKey_MetaData) }; // 3940742986
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CancelGameplayAbility, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_AbilityTargetTags = { "AbilityTargetTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CancelGameplayAbility, AbilityTargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTargetTags_MetaData), NewProp_AbilityTargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_CancelFilterTags = { "CancelFilterTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CancelGameplayAbility, CancelFilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelFilterTags_MetaData), NewProp_CancelFilterTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_CancellationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_CancellationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_AbilityClassKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_AbilityTargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::NewProp_CancelFilterTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::ClassParams = {
	&UBTTask_CancelGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_CancelGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBTTask_CancelGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_CancelGameplayAbility.OuterSingleton, Z_Construct_UClass_UBTTask_CancelGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_CancelGameplayAbility.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UBTTask_CancelGameplayAbility>()
{
	return UBTTask_CancelGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_CancelGameplayAbility);
UBTTask_CancelGameplayAbility::~UBTTask_CancelGameplayAbility() {}
// End Class UBTTask_CancelGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_CancelGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_CancelGameplayAbility, UBTTask_CancelGameplayAbility::StaticClass, TEXT("UBTTask_CancelGameplayAbility"), &Z_Registration_Info_UClass_UBTTask_CancelGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_CancelGameplayAbility), 1373588662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_CancelGameplayAbility_h_1377822612(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_CancelGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_BehaviorTree_BTTask_CancelGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
