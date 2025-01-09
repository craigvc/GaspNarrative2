// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeQuestEditor/Private/QuestTaskBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTaskBlueprintFactory() {}

// Begin Cross Module References
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeConditionFactory();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeConditionFactory_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory_NoRegister();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory();
NARRATIVEQUESTEDITOR_API UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
UPackage* Z_Construct_UPackage__Script_NarrativeQuestEditor();
// End Cross Module References

// Begin Class UQuestTaskBlueprintFactory
void UQuestTaskBlueprintFactory::StaticRegisterNativesUQuestTaskBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestTaskBlueprintFactory);
UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory_NoRegister()
{
	return UQuestTaskBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating a new QuestTaskBlueprint \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuestTaskBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/QuestTaskBlueprintFactory.h" },
		{ "ToolTip", "Factory for creating a new QuestTaskBlueprint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestTaskBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::ClassParams = {
	&UQuestTaskBlueprintFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestTaskBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UQuestTaskBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestTaskBlueprintFactory.OuterSingleton, Z_Construct_UClass_UQuestTaskBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestTaskBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UQuestTaskBlueprintFactory>()
{
	return UQuestTaskBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestTaskBlueprintFactory);
UQuestTaskBlueprintFactory::~UQuestTaskBlueprintFactory() {}
// End Class UQuestTaskBlueprintFactory

// Begin Class UNarrativeEventBlueprintFactory
void UNarrativeEventBlueprintFactory::StaticRegisterNativesUNarrativeEventBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEventBlueprintFactory);
UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory_NoRegister()
{
	return UNarrativeEventBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sticking events and conditions in here too because adding 4 code files for boilerplate factories feels overkill \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuestTaskBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/QuestTaskBlueprintFactory.h" },
		{ "ToolTip", "Sticking events and conditions in here too because adding 4 code files for boilerplate factories feels overkill" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEventBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::ClassParams = {
	&UNarrativeEventBlueprintFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeEventBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory.OuterSingleton, Z_Construct_UClass_UNarrativeEventBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UNarrativeEventBlueprintFactory>()
{
	return UNarrativeEventBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEventBlueprintFactory);
UNarrativeEventBlueprintFactory::~UNarrativeEventBlueprintFactory() {}
// End Class UNarrativeEventBlueprintFactory

// Begin Class UNarrativeConditionFactory
void UNarrativeConditionFactory::StaticRegisterNativesUNarrativeConditionFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeConditionFactory);
UClass* Z_Construct_UClass_UNarrativeConditionFactory_NoRegister()
{
	return UNarrativeConditionFactory::StaticClass();
}
struct Z_Construct_UClass_UNarrativeConditionFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "QuestTaskBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/QuestTaskBlueprintFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeConditionFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeConditionFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeQuestEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeConditionFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeConditionFactory_Statics::ClassParams = {
	&UNarrativeConditionFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeConditionFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeConditionFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeConditionFactory()
{
	if (!Z_Registration_Info_UClass_UNarrativeConditionFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeConditionFactory.OuterSingleton, Z_Construct_UClass_UNarrativeConditionFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeConditionFactory.OuterSingleton;
}
template<> NARRATIVEQUESTEDITOR_API UClass* StaticClass<UNarrativeConditionFactory>()
{
	return UNarrativeConditionFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeConditionFactory);
UNarrativeConditionFactory::~UNarrativeConditionFactory() {}
// End Class UNarrativeConditionFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestTaskBlueprintFactory, UQuestTaskBlueprintFactory::StaticClass, TEXT("UQuestTaskBlueprintFactory"), &Z_Registration_Info_UClass_UQuestTaskBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestTaskBlueprintFactory), 3243714105U) },
		{ Z_Construct_UClass_UNarrativeEventBlueprintFactory, UNarrativeEventBlueprintFactory::StaticClass, TEXT("UNarrativeEventBlueprintFactory"), &Z_Registration_Info_UClass_UNarrativeEventBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEventBlueprintFactory), 2992371731U) },
		{ Z_Construct_UClass_UNarrativeConditionFactory, UNarrativeConditionFactory::StaticClass, TEXT("UNarrativeConditionFactory"), &Z_Registration_Info_UClass_UNarrativeConditionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeConditionFactory), 233168458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_3664890937(TEXT("/Script/NarrativeQuestEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeQuestEditor_Private_QuestTaskBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
