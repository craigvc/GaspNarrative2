// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/Target/TargetProvider_TargetingSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetProvider_TargetingSystem() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetProvider_TargetingSystem();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetProvider_TargetingSystem_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetProvider_TargetingSystem
void UTargetProvider_TargetingSystem::StaticRegisterNativesUTargetProvider_TargetingSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetProvider_TargetingSystem);
UClass* Z_Construct_UClass_UTargetProvider_TargetingSystem_NoRegister()
{
	return UTargetProvider_TargetingSystem::StaticClass();
}
struct Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Collects a target using the Gameplay Targeting System.\n */" },
		{ "DisplayName", "Targeting System Provider" },
		{ "IncludePath", "AbilitySystem/Providers/Target/TargetProvider_TargetingSystem.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Target/TargetProvider_TargetingSystem.h" },
		{ "ToolTip", "Collects a target using the Gameplay Targeting System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[] = {
		{ "Category", "Warping Target Provider" },
		{ "Comment", "/** The Targeting Preset used by the targeting system. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Target/TargetProvider_TargetingSystem.h" },
		{ "ToolTip", "The Targeting Preset used by the targeting system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteAsync_MetaData[] = {
		{ "Category", "Warping Target Provider" },
		{ "Comment", "/** Defines if the targeting will execute asynchronously. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Target/TargetProvider_TargetingSystem.h" },
		{ "ToolTip", "Defines if the targeting will execute asynchronously." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
	static void NewProp_bExecuteAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetProvider_TargetingSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetProvider_TargetingSystem, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingPreset_MetaData), NewProp_TargetingPreset_MetaData) };
void Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::NewProp_bExecuteAsync_SetBit(void* Obj)
{
	((UTargetProvider_TargetingSystem*)Obj)->bExecuteAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::NewProp_bExecuteAsync = { "bExecuteAsync", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetProvider_TargetingSystem), &Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::NewProp_bExecuteAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExecuteAsync_MetaData), NewProp_bExecuteAsync_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::NewProp_TargetingPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::NewProp_bExecuteAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatMotionWarpingTargetProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::ClassParams = {
	&UTargetProvider_TargetingSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetProvider_TargetingSystem()
{
	if (!Z_Registration_Info_UClass_UTargetProvider_TargetingSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetProvider_TargetingSystem.OuterSingleton, Z_Construct_UClass_UTargetProvider_TargetingSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetProvider_TargetingSystem.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetProvider_TargetingSystem>()
{
	return UTargetProvider_TargetingSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetProvider_TargetingSystem);
UTargetProvider_TargetingSystem::~UTargetProvider_TargetingSystem() {}
// End Class UTargetProvider_TargetingSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Target_TargetProvider_TargetingSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetProvider_TargetingSystem, UTargetProvider_TargetingSystem::StaticClass, TEXT("UTargetProvider_TargetingSystem"), &Z_Registration_Info_UClass_UTargetProvider_TargetingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetProvider_TargetingSystem), 1081706588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Target_TargetProvider_TargetingSystem_h_3797391603(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Target_TargetProvider_TargetingSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Target_TargetProvider_TargetingSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
