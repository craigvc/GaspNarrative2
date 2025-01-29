// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/DialogueBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBlueprintGeneratedClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UDialogueBlueprintGeneratedClass
void UDialogueBlueprintGeneratedClass::StaticRegisterNativesUDialogueBlueprintGeneratedClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBlueprintGeneratedClass);
UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass_NoRegister()
{
	return UDialogueBlueprintGeneratedClass::StaticClass();
}
struct Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint generated class for Dialogue blueprints. The Dialogue compiler compiles the Dialogue and stores it in\n * the DialogueTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/\n */" },
		{ "IncludePath", "Tales/DialogueBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Tales/DialogueBlueprintGeneratedClass.h" },
		{ "ToolTip", "Blueprint generated class for Dialogue blueprints. The Dialogue compiler compiles the Dialogue and stores it in\nthe DialogueTemplate object ready for use at runtime. Good explanation at https://heapcleaner.wordpress.com/2016/06/12/inside-of-unreal-engine-blueprint/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTemplate_MetaData[] = {
		{ "Comment", "//The Dialogue template to be created \n" },
		{ "ModuleRelativePath", "Public/Tales/DialogueBlueprintGeneratedClass.h" },
		{ "ToolTip", "The Dialogue template to be created" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBlueprintGeneratedClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate = { "DialogueTemplate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBlueprintGeneratedClass, DialogueTemplate), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTemplate_MetaData), NewProp_DialogueTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::NewProp_DialogueTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::ClassParams = {
	&UDialogueBlueprintGeneratedClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::PropPointers),
	0,
	0x009200A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBlueprintGeneratedClass()
{
	if (!Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UDialogueBlueprintGeneratedClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UDialogueBlueprintGeneratedClass>()
{
	return UDialogueBlueprintGeneratedClass::StaticClass();
}
UDialogueBlueprintGeneratedClass::UDialogueBlueprintGeneratedClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBlueprintGeneratedClass);
UDialogueBlueprintGeneratedClass::~UDialogueBlueprintGeneratedClass() {}
// End Class UDialogueBlueprintGeneratedClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueBlueprintGeneratedClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBlueprintGeneratedClass, UDialogueBlueprintGeneratedClass::StaticClass, TEXT("UDialogueBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UDialogueBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBlueprintGeneratedClass), 3391566190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueBlueprintGeneratedClass_h_988257922(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_DialogueBlueprintGeneratedClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
