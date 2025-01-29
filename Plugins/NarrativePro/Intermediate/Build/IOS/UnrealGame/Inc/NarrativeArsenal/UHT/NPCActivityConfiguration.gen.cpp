// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCActivityConfiguration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCActivityConfiguration() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UActivityGroup_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCActivityConfiguration
void UNPCActivityConfiguration::StaticRegisterNativesUNPCActivityConfiguration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCActivityConfiguration);
UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister()
{
	return UNPCActivityConfiguration::StaticClass();
}
struct Z_Construct_UClass_UNPCActivityConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines what activities an NPC can do, and what goal generators they will have.\n */" },
		{ "IncludePath", "AI/Activities/NPCActivityConfiguration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "Defines what activities an NPC can do, and what goal generators they will have." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackActivity_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The fallback activity to run if we don' have a valid activity in our activity groups to run \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The fallback activity to run if we don' have a valid activity in our activity groups to run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityGroups_Inner_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The activities the NPC can run\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The activities the NPC can run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityGroups_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The activities the NPC can run\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The activities the NPC can run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalGenerators_Inner_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The goal generators the NPC can use to generate goals - you can add your own goals manually, goals do not have to be added via generators if you dont want \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The goal generators the NPC can use to generate goals - you can add your own goals manually, goals do not have to be added via generators if you dont want" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalGenerators_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The goal generators the NPC can use to generate goals - you can add your own goals manually, goals do not have to be added via generators if you dont want \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityConfiguration.h" },
		{ "ToolTip", "The goal generators the NPC can use to generate goals - you can add your own goals manually, goals do not have to be added via generators if you dont want" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivityGroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalGenerators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GoalGenerators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCActivityConfiguration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_FallbackActivity = { "FallbackActivity", nullptr, (EPropertyFlags)0x011600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityConfiguration, FallbackActivity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackActivity_MetaData), NewProp_FallbackActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_ActivityGroups_Inner = { "ActivityGroups", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActivityGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityGroups_Inner_MetaData), NewProp_ActivityGroups_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_ActivityGroups = { "ActivityGroups", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityConfiguration, ActivityGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityGroups_MetaData), NewProp_ActivityGroups_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators_Inner = { "GoalGenerators", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCGoalGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalGenerators_Inner_MetaData), NewProp_GoalGenerators_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators = { "GoalGenerators", nullptr, (EPropertyFlags)0x011400800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityConfiguration, GoalGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalGenerators_MetaData), NewProp_GoalGenerators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_FallbackActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_ActivityGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_ActivityGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityConfiguration_Statics::NewProp_GoalGenerators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCActivityConfiguration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCActivityConfiguration_Statics::ClassParams = {
	&UNPCActivityConfiguration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityConfiguration_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCActivityConfiguration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCActivityConfiguration()
{
	if (!Z_Registration_Info_UClass_UNPCActivityConfiguration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCActivityConfiguration.OuterSingleton, Z_Construct_UClass_UNPCActivityConfiguration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCActivityConfiguration.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCActivityConfiguration>()
{
	return UNPCActivityConfiguration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCActivityConfiguration);
UNPCActivityConfiguration::~UNPCActivityConfiguration() {}
// End Class UNPCActivityConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCActivityConfiguration, UNPCActivityConfiguration::StaticClass, TEXT("UNPCActivityConfiguration"), &Z_Registration_Info_UClass_UNPCActivityConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCActivityConfiguration), 3442807721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_801334793(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityConfiguration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
