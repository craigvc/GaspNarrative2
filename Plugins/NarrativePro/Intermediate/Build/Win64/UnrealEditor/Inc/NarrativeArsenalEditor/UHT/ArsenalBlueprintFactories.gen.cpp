// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenalEditor/Public/ArsenalBlueprintFactories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArsenalBlueprintFactories() {}

// Begin Cross Module References
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectItemBlueprintFactory();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_NoRegister();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UWeaponItemBlueprintFactory();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UWeaponItemBlueprintFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenalEditor();
// End Cross Module References

// Begin Class UWeaponItemBlueprintFactory
void UWeaponItemBlueprintFactory::StaticRegisterNativesUWeaponItemBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponItemBlueprintFactory);
UClass* Z_Construct_UClass_UWeaponItemBlueprintFactory_NoRegister()
{
	return UWeaponItemBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ArsenalBlueprintFactories.h" },
		{ "ModuleRelativePath", "Public/ArsenalBlueprintFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponItemBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics::ClassParams = {
	&UWeaponItemBlueprintFactory::StaticClass,
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
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponItemBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UWeaponItemBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponItemBlueprintFactory.OuterSingleton, Z_Construct_UClass_UWeaponItemBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponItemBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UWeaponItemBlueprintFactory>()
{
	return UWeaponItemBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponItemBlueprintFactory);
UWeaponItemBlueprintFactory::~UWeaponItemBlueprintFactory() {}
// End Class UWeaponItemBlueprintFactory

// Begin Class UGameplayEffectItemBlueprintFactory
void UGameplayEffectItemBlueprintFactory::StaticRegisterNativesUGameplayEffectItemBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectItemBlueprintFactory);
UClass* Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_NoRegister()
{
	return UGameplayEffectItemBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ArsenalBlueprintFactories.h" },
		{ "ModuleRelativePath", "Public/ArsenalBlueprintFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectItemBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics::ClassParams = {
	&UGameplayEffectItemBlueprintFactory::StaticClass,
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
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectItemBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectItemBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectItemBlueprintFactory.OuterSingleton, Z_Construct_UClass_UGameplayEffectItemBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectItemBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UGameplayEffectItemBlueprintFactory>()
{
	return UGameplayEffectItemBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectItemBlueprintFactory);
UGameplayEffectItemBlueprintFactory::~UGameplayEffectItemBlueprintFactory() {}
// End Class UGameplayEffectItemBlueprintFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprintFactories_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponItemBlueprintFactory, UWeaponItemBlueprintFactory::StaticClass, TEXT("UWeaponItemBlueprintFactory"), &Z_Registration_Info_UClass_UWeaponItemBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponItemBlueprintFactory), 1873612618U) },
		{ Z_Construct_UClass_UGameplayEffectItemBlueprintFactory, UGameplayEffectItemBlueprintFactory::StaticClass, TEXT("UGameplayEffectItemBlueprintFactory"), &Z_Registration_Info_UClass_UGameplayEffectItemBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectItemBlueprintFactory), 4071511198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprintFactories_h_3386953964(TEXT("/Script/NarrativeArsenalEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprintFactories_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_ArsenalBlueprintFactories_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
