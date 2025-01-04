// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_WaitTargetDataWithActorCallback.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitTargetDataWithActorCallback() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitTargetData();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAbilityTask_WaitTargetDataWithActorCallback
void UAbilityTask_WaitTargetDataWithActorCallback::StaticRegisterNativesUAbilityTask_WaitTargetDataWithActorCallback()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitTargetDataWithActorCallback);
UClass* Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_NoRegister()
{
	return UAbilityTask_WaitTargetDataWithActorCallback::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Same as the Wait Target Data, but allowing the calling ability to do work on the Spawned Actor.\n * It also attempts to retrieve the actor form the owner's Actor Pool before spawning it.\n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_WaitTargetDataWithActorCallback.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_WaitTargetDataWithActorCallback.h" },
		{ "ToolTip", "Same as the Wait Target Data, but allowing the calling ability to do work on the Spawned Actor.\nIt also attempts to retrieve the actor form the owner's Actor Pool before spawning it." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitTargetDataWithActorCallback>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_WaitTargetData,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics::ClassParams = {
	&UAbilityTask_WaitTargetDataWithActorCallback::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_WaitTargetDataWithActorCallback.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitTargetDataWithActorCallback.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_WaitTargetDataWithActorCallback.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_WaitTargetDataWithActorCallback>()
{
	return UAbilityTask_WaitTargetDataWithActorCallback::StaticClass();
}
UAbilityTask_WaitTargetDataWithActorCallback::UAbilityTask_WaitTargetDataWithActorCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitTargetDataWithActorCallback);
UAbilityTask_WaitTargetDataWithActorCallback::~UAbilityTask_WaitTargetDataWithActorCallback() {}
// End Class UAbilityTask_WaitTargetDataWithActorCallback

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_WaitTargetDataWithActorCallback_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitTargetDataWithActorCallback, UAbilityTask_WaitTargetDataWithActorCallback::StaticClass, TEXT("UAbilityTask_WaitTargetDataWithActorCallback"), &Z_Registration_Info_UClass_UAbilityTask_WaitTargetDataWithActorCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitTargetDataWithActorCallback), 3352781909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_WaitTargetDataWithActorCallback_h_3212423941(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_WaitTargetDataWithActorCallback_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_WaitTargetDataWithActorCallback_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
