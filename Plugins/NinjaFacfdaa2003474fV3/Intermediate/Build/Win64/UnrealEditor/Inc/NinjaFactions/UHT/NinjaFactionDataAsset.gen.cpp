// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/Data/NinjaFactionDataAsset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionDataAsset() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class UNinjaFactionDataAsset
void UNinjaFactionDataAsset::StaticRegisterNativesUNinjaFactionDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaFactionDataAsset);
UClass* Z_Construct_UClass_UNinjaFactionDataAsset_NoRegister()
{
	return UNinjaFactionDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaFactionDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains information about a Faction.\n *\n * Factions are an extension of Generic Teams, introduced by Unreal Engine's AI Module. Factions\n * will provide everything expected by the core Perception/Team systems, but also allow designers\n * to establish such relationships in a declarative way.\n */" },
		{ "DisplayName", "Faction Data" },
		{ "IncludePath", "Data/NinjaFactionDataAsset.h" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Contains information about a Faction.\n\nFactions are an extension of Generic Teams, introduced by Unreal Engine's AI Module. Factions\nwill provide everything expected by the core Perception/Team systems, but also allow designers\nto establish such relationships in a declarative way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Name displayed for this faction, using the Localization System. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Name displayed for this faction, using the Localization System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionTag_MetaData[] = {
		{ "Categories", "Factions.ID" },
		{ "Category", "Faction" },
		{ "Comment", "/**  Gameplay Tag uniquely identifies this Faction. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Gameplay Tag uniquely identifies this Faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeamId_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** Team ID assigned to this faction, to be used by Unreal Engine's core framework. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Team ID assigned to this faction, to be used by Unreal Engine's core framework." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/** A color that represents this faction. */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "A color that represents this faction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/**\n     * Optional Gameplay Tags that can further define this faction.\n     *\n     * It can be used to provide macro-categories that later on can be used to sort factions in the\n     * game's user interface, or to define faction traits such as preys and predators.\n     */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Optional Gameplay Tags that can further define this faction.\n\nIt can be used to provide macro-categories that later on can be used to sort factions in the\ngame's user interface, or to define faction traits such as preys and predators." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttitudeTowardsMyFaction_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/**\n     * Default attitude between members of this faction.\n     *\n     * For regular attitude checks that won't depend on reputation, this defines how teams members\n     * behave towards each other. If reputation is involved, this will be used to determine the\n     * attitude towards a pawn without the backing attribute, but with this Faction's Tag.\n     */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Default attitude between members of this faction.\n\nFor regular attitude checks that won't depend on reputation, this defines how teams members\nbehave towards each other. If reputation is involved, this will be used to determine the\nattitude towards a pawn without the backing attribute, but with this Faction's Tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttitudeTowardsOtherFactions_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/**\n     * Default attitude between members of this faction and a different one.\n     *\n     * For regular attitude checks that won't depend on reputation, this defines how this team\n     * behave towards another team. If reputation is involved, this will be used to determine the\n     * attitude towards a pawn without the backing attribute, and without this Faction's Tag.\n     */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "ToolTip", "Default attitude between members of this faction and a different one.\n\nFor regular attitude checks that won't depend on reputation, this defines how this team\nbehave towards another team. If reputation is involved, this will be used to determine the\nattitude towards a pawn without the backing attribute, and without this Faction's Tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeMatrix_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "/**\n     * Attitudes that are different from the default settings.\n     * \n     * The table must use the FactionAlignmentTableRow as the row type. Only relevant if the\n     * attitude solver uses the table. A reputation-based solver, for example, might not use it.\n     */" },
		{ "ModuleRelativePath", "Public/Data/NinjaFactionDataAsset.h" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/NinjaFactions.FactionAlignmentTableRow" },
		{ "ToolTip", "Attitudes that are different from the default settings.\n\nThe table must use the FactionAlignmentTableRow as the row type. Only relevant if the\nattitude solver uses the table. A reputation-based solver, for example, might not use it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeamId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttitudeTowardsMyFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAttitudeTowardsOtherFactions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttitudeMatrix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaFactionDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_FactionTag = { "FactionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, FactionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTag_MetaData), NewProp_FactionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_TeamId = { "TeamId", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, TeamId), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeamId_MetaData), NewProp_TeamId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 3352185621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_DefaultAttitudeTowardsMyFaction = { "DefaultAttitudeTowardsMyFaction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, DefaultAttitudeTowardsMyFaction), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttitudeTowardsMyFaction_MetaData), NewProp_DefaultAttitudeTowardsMyFaction_MetaData) }; // 2991328252
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_DefaultAttitudeTowardsOtherFactions = { "DefaultAttitudeTowardsOtherFactions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, DefaultAttitudeTowardsOtherFactions), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttitudeTowardsOtherFactions_MetaData), NewProp_DefaultAttitudeTowardsOtherFactions_MetaData) }; // 2991328252
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_AttitudeMatrix = { "AttitudeMatrix", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaFactionDataAsset, AttitudeMatrix), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeMatrix_MetaData), NewProp_AttitudeMatrix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaFactionDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_FactionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_TeamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_DefaultAttitudeTowardsMyFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_DefaultAttitudeTowardsOtherFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaFactionDataAsset_Statics::NewProp_AttitudeMatrix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaFactionDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaFactionDataAsset_Statics::ClassParams = {
	&UNinjaFactionDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaFactionDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaFactionDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaFactionDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaFactionDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaFactionDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaFactionDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaFactionDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaFactionDataAsset.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<UNinjaFactionDataAsset>()
{
	return UNinjaFactionDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaFactionDataAsset);
UNinjaFactionDataAsset::~UNinjaFactionDataAsset() {}
// End Class UNinjaFactionDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Data_NinjaFactionDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaFactionDataAsset, UNinjaFactionDataAsset::StaticClass, TEXT("UNinjaFactionDataAsset"), &Z_Registration_Info_UClass_UNinjaFactionDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaFactionDataAsset), 3694519241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Data_NinjaFactionDataAsset_h_1128129976(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Data_NinjaFactionDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Data_NinjaFactionDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
