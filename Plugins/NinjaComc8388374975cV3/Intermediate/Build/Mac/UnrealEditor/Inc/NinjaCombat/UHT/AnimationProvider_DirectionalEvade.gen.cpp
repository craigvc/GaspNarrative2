// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/Animation/AnimationProvider_DirectionalEvade.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationProvider_DirectionalEvade() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_DirectionalEvade();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_DirectionalEvade_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimationProvider_DirectionalEvade
void UAnimationProvider_DirectionalEvade::StaticRegisterNativesUAnimationProvider_DirectionalEvade()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationProvider_DirectionalEvade);
UClass* Z_Construct_UClass_UAnimationProvider_DirectionalEvade_NoRegister()
{
	return UAnimationProvider_DirectionalEvade::StaticClass();
}
struct Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides appropriate section names for their respective evade angles. \n */" },
		{ "DisplayName", "Directional Evades" },
		{ "IncludePath", "AbilitySystem/Providers/Animation/AnimationProvider_DirectionalEvade.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_DirectionalEvade.h" },
		{ "ToolTip", "Provides appropriate section names for their respective evade angles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Directional Evade" },
		{ "Comment", "/**\n\x09 * An offset applied to the angle calculation.\n\x09 *\n\x09 * This can be useful for scenarios where the character moves in an angled world, such as a top-down game\n\x09 * and the forward reference is in a diagonal angle, such as 45 degrees.\n\x09 *\n\x09 * In those cases, since the angle may be added to the character's direction, we need to offset here at the\n\x09 * end, so for example, if the forward reference is angled at -45 degrees, we need to offset back, by adding\n\x09 * 45 degrees here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_DirectionalEvade.h" },
		{ "ToolTip", "An offset applied to the angle calculation.\n\nThis can be useful for scenarios where the character moves in an angled world, such as a top-down game\nand the forward reference is in a diagonal angle, such as 45 degrees.\n\nIn those cases, since the angle may be added to the character's direction, we need to offset here at the\nend, so for example, if the forward reference is angled at -45 degrees, we need to offset back, by adding\n45 degrees here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationProvider_DirectionalEvade>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationProvider_DirectionalEvade, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::ClassParams = {
	&UAnimationProvider_DirectionalEvade::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationProvider_DirectionalEvade()
{
	if (!Z_Registration_Info_UClass_UAnimationProvider_DirectionalEvade.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationProvider_DirectionalEvade.OuterSingleton, Z_Construct_UClass_UAnimationProvider_DirectionalEvade_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationProvider_DirectionalEvade.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimationProvider_DirectionalEvade>()
{
	return UAnimationProvider_DirectionalEvade::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationProvider_DirectionalEvade);
UAnimationProvider_DirectionalEvade::~UAnimationProvider_DirectionalEvade() {}
// End Class UAnimationProvider_DirectionalEvade

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_DirectionalEvade_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationProvider_DirectionalEvade, UAnimationProvider_DirectionalEvade::StaticClass, TEXT("UAnimationProvider_DirectionalEvade"), &Z_Registration_Info_UClass_UAnimationProvider_DirectionalEvade, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationProvider_DirectionalEvade), 411260028U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_DirectionalEvade_h_1904395971(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_DirectionalEvade_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_DirectionalEvade_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
