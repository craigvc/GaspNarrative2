// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Damage/Handlers/DamageHandler_PhysicalAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler_PhysicalAnimation() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_PhysicalAnimation();
NINJACOMBAT_API UClass* Z_Construct_UClass_UDamageHandler_PhysicalAnimation_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UDamageHandler_PhysicalAnimation
void UDamageHandler_PhysicalAnimation::StaticRegisterNativesUDamageHandler_PhysicalAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageHandler_PhysicalAnimation);
UClass* Z_Construct_UClass_UDamageHandler_PhysicalAnimation_NoRegister()
{
	return UDamageHandler_PhysicalAnimation::StaticClass();
}
struct Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Plays a Physical Animation for damage.\n */" },
		{ "DisplayName", "Physical Animation" },
		{ "IncludePath", "Damage/Handlers/DamageHandler_PhysicalAnimation.h" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_PhysicalAnimation.h" },
		{ "ToolTip", "Plays a Physical Animation for damage." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageHandler_PhysicalAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDamageHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics::ClassParams = {
	&UDamageHandler_PhysicalAnimation::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageHandler_PhysicalAnimation()
{
	if (!Z_Registration_Info_UClass_UDamageHandler_PhysicalAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageHandler_PhysicalAnimation.OuterSingleton, Z_Construct_UClass_UDamageHandler_PhysicalAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageHandler_PhysicalAnimation.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UDamageHandler_PhysicalAnimation>()
{
	return UDamageHandler_PhysicalAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler_PhysicalAnimation);
UDamageHandler_PhysicalAnimation::~UDamageHandler_PhysicalAnimation() {}
// End Class UDamageHandler_PhysicalAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_PhysicalAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageHandler_PhysicalAnimation, UDamageHandler_PhysicalAnimation::StaticClass, TEXT("UDamageHandler_PhysicalAnimation"), &Z_Registration_Info_UClass_UDamageHandler_PhysicalAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageHandler_PhysicalAnimation), 2764640182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_PhysicalAnimation_h_1381556095(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_PhysicalAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_Handlers_DamageHandler_PhysicalAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
