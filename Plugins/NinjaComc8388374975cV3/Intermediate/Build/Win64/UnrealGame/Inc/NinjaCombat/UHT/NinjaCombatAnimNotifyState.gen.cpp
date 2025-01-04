// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/NinjaCombatAnimNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAnimNotifyState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAnimNotifyState
void UNinjaCombatAnimNotifyState::StaticRegisterNativesUNinjaCombatAnimNotifyState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAnimNotifyState);
UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState_NoRegister()
{
	return UNinjaCombatAnimNotifyState::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Notify State that facilitates retrieving combat components.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/NinjaCombatAnimNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimNotifyState.h" },
		{ "ToolTip", "Base Notify State that facilitates retrieving combat components." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAnimNotifyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics::ClassParams = {
	&UNinjaCombatAnimNotifyState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001130A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAnimNotifyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAnimNotifyState.OuterSingleton, Z_Construct_UClass_UNinjaCombatAnimNotifyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAnimNotifyState.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAnimNotifyState>()
{
	return UNinjaCombatAnimNotifyState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAnimNotifyState);
UNinjaCombatAnimNotifyState::~UNinjaCombatAnimNotifyState() {}
// End Class UNinjaCombatAnimNotifyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotifyState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAnimNotifyState, UNinjaCombatAnimNotifyState::StaticClass, TEXT("UNinjaCombatAnimNotifyState"), &Z_Registration_Info_UClass_UNinjaCombatAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAnimNotifyState), 1176134888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotifyState_h_3840399131(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimNotifyState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
