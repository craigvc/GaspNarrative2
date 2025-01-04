// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/Notifies/AnimNotify_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Death() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Death();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Death_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotify();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotify_Death
void UAnimNotify_Death::StaticRegisterNativesUAnimNotify_Death()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Death);
UClass* Z_Construct_UClass_UAnimNotify_Death_NoRegister()
{
	return UAnimNotify_Death::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends a Gameplay Event to notify that the main part of the Death animation has completed.\n *\n * Even though the Death Ability and Death Logic have mechanisms to accomodate a looping death montage,\n * this is useful to notify the Ability that the main part of the animation has played and from now on,\n * everything else is a loop.\n */" },
		{ "DisplayName", "Death" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/Notifies/AnimNotify_Death.h" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_Death.h" },
		{ "ToolTip", "Sends a Gameplay Event to notify that the main part of the Death animation has completed.\n\nEven though the Death Ability and Death Logic have mechanisms to accomodate a looping death montage,\nthis is useful to notify the Ability that the main part of the animation has played and from now on,\neverything else is a loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRagdollPhysics_MetaData[] = {
		{ "Category", "Death" },
		{ "Comment", "/**\n\x09 * Activates ragdoll on death.\n\x09 *\n\x09 * Same behavior as the ragdoll notify, so if both are set to happen at the same frame, then\n\x09 * you don't need to use both of them in the animation sequence/montage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/Notifies/AnimNotify_Death.h" },
		{ "ToolTip", "Activates ragdoll on death.\n\nSame behavior as the ragdoll notify, so if both are set to happen at the same frame, then\nyou don't need to use both of them in the animation sequence/montage." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableRagdollPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRagdollPhysics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Death>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bEnableRagdollPhysics_SetBit(void* Obj)
{
	((UAnimNotify_Death*)Obj)->bEnableRagdollPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bEnableRagdollPhysics = { "bEnableRagdollPhysics", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Death), &Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bEnableRagdollPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRagdollPhysics_MetaData), NewProp_bEnableRagdollPhysics_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bEnableRagdollPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_Death_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Death_Statics::ClassParams = {
	&UAnimNotify_Death::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Death_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Death()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Death.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Death.OuterSingleton, Z_Construct_UClass_UAnimNotify_Death_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Death.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotify_Death>()
{
	return UAnimNotify_Death::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Death);
UAnimNotify_Death::~UAnimNotify_Death() {}
// End Class UAnimNotify_Death

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Death_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Death, UAnimNotify_Death::StaticClass, TEXT("UAnimNotify_Death"), &Z_Registration_Info_UClass_UAnimNotify_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Death), 75314059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Death_h_1151743388(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_Notifies_AnimNotify_Death_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
