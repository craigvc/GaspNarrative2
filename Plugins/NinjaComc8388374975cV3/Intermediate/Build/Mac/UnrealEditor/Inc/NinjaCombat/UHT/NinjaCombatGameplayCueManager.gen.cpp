// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/NinjaCombatGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatGameplayCueManager() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayCueManager();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayCueManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatGameplayCueManager
void UNinjaCombatGameplayCueManager::StaticRegisterNativesUNinjaCombatGameplayCueManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatGameplayCueManager);
UClass* Z_Construct_UClass_UNinjaCombatGameplayCueManager_NoRegister()
{
	return UNinjaCombatGameplayCueManager::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Makes the default Cue Manager aware of the Combat Component for handling Cues.\n *\n * This must be added to the project's configuration class, in the DefaultGame.ini file.\n * \n * <pre>\n * [/Script/GameplayAbilities.AbilitySystemGlobals]\n * GlobalGameplayCueManagerClass=\"/Script/NinjaCombat.NinjaCombatGameplayCueManager\"\n * </pre>\n *\n * Also, while you are there, make sure to configure the Gameplay Cue path, so the system\n * won't scan the entire project, potentially slowing down the whole thing (same category).\n *\n * <pre>\n * [/Script/GameplayAbilities.AbilitySystemGlobals]\n * GameplayCueNotifyPaths=\"/Game/Cues\"\n * </pre>\n */" },
		{ "IncludePath", "AbilitySystem/NinjaCombatGameplayCueManager.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaCombatGameplayCueManager.h" },
		{ "ToolTip", "Makes the default Cue Manager aware of the Combat Component for handling Cues.\n\nThis must be added to the project's configuration class, in the DefaultGame.ini file.\n\n<pre>\n[/Script/GameplayAbilities.AbilitySystemGlobals]\nGlobalGameplayCueManagerClass=\"/Script/NinjaCombat.NinjaCombatGameplayCueManager\"\n</pre>\n\nAlso, while you are there, make sure to configure the Gameplay Cue path, so the system\nwon't scan the entire project, potentially slowing down the whole thing (same category).\n\n<pre>\n[/Script/GameplayAbilities.AbilitySystemGlobals]\nGameplayCueNotifyPaths=\"/Game/Cues\"\n</pre>" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatGameplayCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics::ClassParams = {
	&UNinjaCombatGameplayCueManager::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatGameplayCueManager()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatGameplayCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatGameplayCueManager.OuterSingleton, Z_Construct_UClass_UNinjaCombatGameplayCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatGameplayCueManager.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatGameplayCueManager>()
{
	return UNinjaCombatGameplayCueManager::StaticClass();
}
UNinjaCombatGameplayCueManager::UNinjaCombatGameplayCueManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatGameplayCueManager);
UNinjaCombatGameplayCueManager::~UNinjaCombatGameplayCueManager() {}
// End Class UNinjaCombatGameplayCueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayCueManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatGameplayCueManager, UNinjaCombatGameplayCueManager::StaticClass, TEXT("UNinjaCombatGameplayCueManager"), &Z_Registration_Info_UClass_UNinjaCombatGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatGameplayCueManager), 573813138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayCueManager_h_79413338(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatGameplayCueManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
