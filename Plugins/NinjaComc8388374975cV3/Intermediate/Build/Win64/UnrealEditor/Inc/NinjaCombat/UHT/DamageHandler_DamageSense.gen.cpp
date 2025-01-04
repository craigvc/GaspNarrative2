// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Damage/Handlers/DamageHandler_DamageSense.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler_DamageSense() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_DamageSense();
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_DamageSense_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UDamageHandler_DamageSense
void UDamageHandler_DamageSense::StaticRegisterNativesUDamageHandler_DamageSense()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageHandler_DamageSense);
UClass* Z_Construct_UClass_UDamageHandler_DamageSense_NoRegister()
{
	return UDamageHandler_DamageSense::StaticClass();
}
struct Z_Construct_UClass_UDamageHandler_DamageSense_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends a Damage Event to the AI Perception System.\n */" },
		{ "DisplayName", "Damage AI Sense" },
		{ "IncludePath", "Damage/Handlers/DamageHandler_DamageSense.h" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_DamageSense.h" },
		{ "ToolTip", "Sends a Damage Event to the AI Perception System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageHandler_DamageSense>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageHandler_DamageSense_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDamageHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_DamageSense_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_DamageSense_Statics::ClassParams = {
	&UDamageHandler_DamageSense::StaticClass,
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
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_DamageSense_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageHandler_DamageSense_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageHandler_DamageSense()
{
	if (!Z_Registration_Info_UClass_UDamageHandler_DamageSense.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageHandler_DamageSense.OuterSingleton, Z_Construct_UClass_UDamageHandler_DamageSense_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageHandler_DamageSense.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UDamageHandler_DamageSense>()
{
	return UDamageHandler_DamageSense::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler_DamageSense);
UDamageHandler_DamageSense::~UDamageHandler_DamageSense() {}
// End Class UDamageHandler_DamageSense

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_DamageSense_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageHandler_DamageSense, UDamageHandler_DamageSense::StaticClass, TEXT("UDamageHandler_DamageSense"), &Z_Registration_Info_UClass_UDamageHandler_DamageSense, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageHandler_DamageSense), 3427029903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_DamageSense_h_2065289169(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_DamageSense_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_DamageSense_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
