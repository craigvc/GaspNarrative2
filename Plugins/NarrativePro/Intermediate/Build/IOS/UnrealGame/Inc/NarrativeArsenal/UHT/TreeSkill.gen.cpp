// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/SkillTrees/TreeSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeSkill() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreePerk_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreeSkill();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTreeSkill_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FPerkConfig();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FPerkConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerkConfig;
class UScriptStruct* FPerkConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerkConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerkConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkConfig, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("PerkConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PerkConfig.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FPerkConfig>()
{
	return FPerkConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerkConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents a perk in our skill. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "Represents a perk in our skill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perk_MetaData[] = {
		{ "Category", "Perk Config" },
		{ "Comment", "//The perk \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The perk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerkCords_MetaData[] = {
		{ "Category", "Perk Config" },
		{ "Comment", "//The location the perk should display at inside the skill tree UI. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The location the perk should display at inside the skill tree UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[] = {
		{ "Category", "Perk Config" },
		{ "Comment", "//Child perks this skill should link to go in here. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "Child perks this skill should link to go in here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Perk;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerkCords;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LinkedTo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LinkedTo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_Perk = { "Perk", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerkConfig, Perk), Z_Construct_UClass_UClass, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perk_MetaData), NewProp_Perk_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_PerkCords = { "PerkCords", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerkConfig, PerkCords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerkCords_MetaData), NewProp_PerkCords_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_LinkedTo_Inner = { "LinkedTo", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTreePerk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerkConfig, LinkedTo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedTo_MetaData), NewProp_LinkedTo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_Perk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_PerkCords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_LinkedTo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkConfig_Statics::NewProp_LinkedTo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"PerkConfig",
	Z_Construct_UScriptStruct_FPerkConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkConfig_Statics::PropPointers),
	sizeof(FPerkConfig),
	alignof(FPerkConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerkConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerkConfig()
{
	if (!Z_Registration_Info_UScriptStruct_PerkConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerkConfig.InnerSingleton, Z_Construct_UScriptStruct_FPerkConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerkConfig.InnerSingleton;
}
// End ScriptStruct FPerkConfig

// Begin Class UTreeSkill
void UTreeSkill::StaticRegisterNativesUTreeSkill()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTreeSkill);
UClass* Z_Construct_UClass_UTreeSkill_NoRegister()
{
	return UTreeSkill::StaticClass();
}
struct Z_Construct_UClass_UTreeSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a skill in the skill tree. For example Combat, Sneak, etc. Each game will implement their own skills by subclassing this! \n */" },
		{ "IncludePath", "SkillTrees/TreeSkill.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Represents a skill in the skill tree. For example Combat, Sneak, etc. Each game will implement their own skills by subclassing this!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perks_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//All of the perks this skill should have go in here. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "All of the perks this skill should have go in here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDisplayName_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The display name of this skill. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The display name of this skill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDescription_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The description of this skill. \n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The description of this skill." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillLevel_MetaData[] = {
		{ "Category", "Tree Skill" },
		{ "Comment", "//The level this skill is at\n" },
		{ "ModuleRelativePath", "Public/SkillTrees/TreeSkill.h" },
		{ "ToolTip", "The level this skill is at" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Perks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Perks;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillDisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SkillDescription;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeSkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_Perks_Inner = { "Perks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerkConfig, METADATA_PARAMS(0, nullptr) }; // 651204576
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_Perks = { "Perks", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, Perks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perks_MetaData), NewProp_Perks_MetaData) }; // 651204576
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDisplayName = { "SkillDisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, SkillDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDisplayName_MetaData), NewProp_SkillDisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDescription = { "SkillDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, SkillDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDescription_MetaData), NewProp_SkillDescription_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillLevel = { "SkillLevel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTreeSkill, SkillLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillLevel_MetaData), NewProp_SkillLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTreeSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_Perks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_Perks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTreeSkill_Statics::NewProp_SkillLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTreeSkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTreeSkill_Statics::ClassParams = {
	&UTreeSkill::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTreeSkill_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSkill_Statics::Class_MetaDataParams), Z_Construct_UClass_UTreeSkill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTreeSkill()
{
	if (!Z_Registration_Info_UClass_UTreeSkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTreeSkill.OuterSingleton, Z_Construct_UClass_UTreeSkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTreeSkill.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UTreeSkill>()
{
	return UTreeSkill::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeSkill);
UTreeSkill::~UTreeSkill() {}
// End Class UTreeSkill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerkConfig::StaticStruct, Z_Construct_UScriptStruct_FPerkConfig_Statics::NewStructOps, TEXT("PerkConfig"), &Z_Registration_Info_UScriptStruct_PerkConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerkConfig), 651204576U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTreeSkill, UTreeSkill::StaticClass, TEXT("UTreeSkill"), &Z_Registration_Info_UClass_UTreeSkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTreeSkill), 3469208572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_4197964990(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreeSkill_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
