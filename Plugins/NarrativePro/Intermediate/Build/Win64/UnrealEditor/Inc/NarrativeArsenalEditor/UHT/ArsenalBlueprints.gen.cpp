// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenalEditor/Public/ArsenalBlueprints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArsenalBlueprints() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectItemBlueprint();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectItemBlueprint_NoRegister();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UWeaponItemBlueprint();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UWeaponItemBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenalEditor();
// End Cross Module References

// Begin Class UWeaponItemBlueprint
void UWeaponItemBlueprint::StaticRegisterNativesUWeaponItemBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponItemBlueprint);
UClass* Z_Construct_UClass_UWeaponItemBlueprint_NoRegister()
{
	return UWeaponItemBlueprint::StaticClass();
}
struct Z_Construct_UClass_UWeaponItemBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A custom Narrative item that equips a weapon visual to the player, grants some abilities, and modifies our attack power. \n */" },
		{ "IncludePath", "ArsenalBlueprints.h" },
		{ "ModuleRelativePath", "Public/ArsenalBlueprints.h" },
		{ "ToolTip", "A custom Narrative item that equips a weapon visual to the player, grants some abilities, and modifies our attack power." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponItemBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponItemBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItemBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponItemBlueprint_Statics::ClassParams = {
	&UWeaponItemBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItemBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponItemBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponItemBlueprint()
{
	if (!Z_Registration_Info_UClass_UWeaponItemBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponItemBlueprint.OuterSingleton, Z_Construct_UClass_UWeaponItemBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponItemBlueprint.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UWeaponItemBlueprint>()
{
	return UWeaponItemBlueprint::StaticClass();
}
UWeaponItemBlueprint::UWeaponItemBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponItemBlueprint);
UWeaponItemBlueprint::~UWeaponItemBlueprint() {}
// End Class UWeaponItemBlueprint

// Begin Class UGameplayEffectItemBlueprint
void UGameplayEffectItemBlueprint::StaticRegisterNativesUGameplayEffectItemBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectItemBlueprint);
UClass* Z_Construct_UClass_UGameplayEffectItemBlueprint_NoRegister()
{
	return UGameplayEffectItemBlueprint::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A narrative item that grants a gameplay effect to the user when used! Very useful for things like potions. \n */" },
		{ "IncludePath", "ArsenalBlueprints.h" },
		{ "ModuleRelativePath", "Public/ArsenalBlueprints.h" },
		{ "ToolTip", "A narrative item that grants a gameplay effect to the user when used! Very useful for things like potions." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectItemBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics::ClassParams = {
	&UGameplayEffectItemBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectItemBlueprint()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectItemBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectItemBlueprint.OuterSingleton, Z_Construct_UClass_UGameplayEffectItemBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectItemBlueprint.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UGameplayEffectItemBlueprint>()
{
	return UGameplayEffectItemBlueprint::StaticClass();
}
UGameplayEffectItemBlueprint::UGameplayEffectItemBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectItemBlueprint);
UGameplayEffectItemBlueprint::~UGameplayEffectItemBlueprint() {}
// End Class UGameplayEffectItemBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprints_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponItemBlueprint, UWeaponItemBlueprint::StaticClass, TEXT("UWeaponItemBlueprint"), &Z_Registration_Info_UClass_UWeaponItemBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponItemBlueprint), 459970581U) },
		{ Z_Construct_UClass_UGameplayEffectItemBlueprint, UGameplayEffectItemBlueprint::StaticClass, TEXT("UGameplayEffectItemBlueprint"), &Z_Registration_Info_UClass_UGameplayEffectItemBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectItemBlueprint), 492337219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprints_h_2237171778(TEXT("/Script/NarrativeArsenalEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprints_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
