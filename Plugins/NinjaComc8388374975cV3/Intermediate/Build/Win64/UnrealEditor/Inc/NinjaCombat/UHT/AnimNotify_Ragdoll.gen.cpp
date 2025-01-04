// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/Notifies/AnimNotify_Ragdoll.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Ragdoll() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Ragdoll();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Ragdoll_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotify_Ragdoll
void UAnimNotify_Ragdoll::StaticRegisterNativesUAnimNotify_Ragdoll()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Ragdoll);
UClass* Z_Construct_UClass_UAnimNotify_Ragdoll_NoRegister()
{
	return UAnimNotify_Ragdoll::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Ragdoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actives the ragdoll system in the combatant's mesh.\n */" },
		{ "DisplayName", "Ragdoll" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Notifies/AnimNotify_Ragdoll.h" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_Ragdoll.h" },
		{ "ToolTip", "Actives the ragdoll system in the combatant's mesh." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Ragdoll>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotify_Ragdoll_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Ragdoll_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Ragdoll_Statics::ClassParams = {
	&UAnimNotify_Ragdoll::StaticClass,
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
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Ragdoll_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Ragdoll_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Ragdoll()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Ragdoll.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Ragdoll.OuterSingleton, Z_Construct_UClass_UAnimNotify_Ragdoll_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Ragdoll.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotify_Ragdoll>()
{
	return UAnimNotify_Ragdoll::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Ragdoll);
UAnimNotify_Ragdoll::~UAnimNotify_Ragdoll() {}
// End Class UAnimNotify_Ragdoll

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Ragdoll_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Ragdoll, UAnimNotify_Ragdoll::StaticClass, TEXT("UAnimNotify_Ragdoll"), &Z_Registration_Info_UClass_UAnimNotify_Ragdoll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Ragdoll), 690923802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Ragdoll_h_2856532397(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Ragdoll_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Ragdoll_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
