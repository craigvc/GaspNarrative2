// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/QuestBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBlueprintGeneratedClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UQuestBlueprintGeneratedClass
void UQuestBlueprintGeneratedClass::StaticRegisterNativesUQuestBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass_NoRegister()
{
	return UQuestBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint generated class for quest blueprints. The quest compiler compiles the quest and stores it in\n * the QuestTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/\n */" },
		{ "IncludePath", "Tales/QuestBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Tales/QuestBlueprintGeneratedClass.h" },
		{ "ToolTip", "Blueprint generated class for quest blueprints. The quest compiler compiles the quest and stores it in\nthe QuestTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTemplate_MetaData[] = {
		{ "Comment", "//The quest template to be created \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestBlueprintGeneratedClass.h" },
		{ "ToolTip", "The quest template to be created" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate = { "QuestTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestBlueprintGeneratedClass, QuestTemplate), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTemplate_MetaData), NewProp_QuestTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::NewProp_QuestTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::ClassParams = {
	&UQuestBlueprintGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::PropPointers),
	0,
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UQuestBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UQuestBlueprintGeneratedClass>()
{
	return UQuestBlueprintGeneratedClass::StaticClass();
}
UQuestBlueprintGeneratedClass::UQuestBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBlueprintGeneratedClass);
UQuestBlueprintGeneratedClass::~UQuestBlueprintGeneratedClass() {}
// End Class UQuestBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestBlueprintGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestBlueprintGeneratedClass, UQuestBlueprintGeneratedClass::StaticClass, TEXT("UQuestBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UQuestBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestBlueprintGeneratedClass), 3300180560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestBlueprintGeneratedClass_h_3263598339(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestBlueprintGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
