// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Teams/FactionDefinition.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionDefinition() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UFactionDefinition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UFactionDefinition_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UFactionDefinition
void UFactionDefinition::StaticRegisterNativesUFactionDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactionDefinition);
UClass* Z_Construct_UClass_UFactionDefinition_NoRegister()
{
	return UFactionDefinition::StaticClass();
}
struct Z_Construct_UClass_UFactionDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a faction, along with friendly factions, neutral, enemies, and so on. \n */" },
		{ "IncludePath", "Teams/FactionDefinition.h" },
		{ "ModuleRelativePath", "Public/Teams/FactionDefinition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Defines a faction, along with friendly factions, neutral, enemies, and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionID_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "//The faction this definition applies to - ideally this should use gameplaytags instead as C++ enum is annoying for BP users \n" },
		{ "ModuleRelativePath", "Public/Teams/FactionDefinition.h" },
		{ "ToolTip", "The faction this definition applies to - ideally this should use gameplaytags instead as C++ enum is annoying for BP users" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionTag_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "//The tag identifying the faction - this needs to be converted to a uint8\n" },
		{ "ModuleRelativePath", "Public/Teams/FactionDefinition.h" },
		{ "ToolTip", "The tag identifying the faction - this needs to be converted to a uint8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyFactions_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "//Factions we're friendly with \n" },
		{ "ModuleRelativePath", "Public/Teams/FactionDefinition.h" },
		{ "ToolTip", "Factions we're friendly with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyFactions_MetaData[] = {
		{ "Category", "Faction" },
		{ "Comment", "//Factions we're enemies of \n" },
		{ "ModuleRelativePath", "Public/Teams/FactionDefinition.h" },
		{ "ToolTip", "Factions we're enemies of" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FactionID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FactionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendlyFactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FriendlyFactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FriendlyFactions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyFactions_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyFactions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyFactions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FactionID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FactionID = { "FactionID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactionDefinition, FactionID), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionID_MetaData), NewProp_FactionID_MetaData) }; // 696033230
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FactionTag = { "FactionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactionDefinition, FactionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionTag_MetaData), NewProp_FactionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FriendlyFactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FriendlyFactions_Inner = { "FriendlyFactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(0, nullptr) }; // 696033230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FriendlyFactions = { "FriendlyFactions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactionDefinition, FriendlyFactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyFactions_MetaData), NewProp_FriendlyFactions_MetaData) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_EnemyFactions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_EnemyFactions_Inner = { "EnemyFactions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(0, nullptr) }; // 696033230
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFactionDefinition_Statics::NewProp_EnemyFactions = { "EnemyFactions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFactionDefinition, EnemyFactions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyFactions_MetaData), NewProp_EnemyFactions_MetaData) }; // 696033230
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactionDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FactionID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FactionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FactionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FriendlyFactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FriendlyFactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_FriendlyFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_EnemyFactions_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_EnemyFactions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactionDefinition_Statics::NewProp_EnemyFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFactionDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactionDefinition_Statics::ClassParams = {
	&UFactionDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFactionDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactionDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactionDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactionDefinition()
{
	if (!Z_Registration_Info_UClass_UFactionDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactionDefinition.OuterSingleton, Z_Construct_UClass_UFactionDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactionDefinition.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UFactionDefinition>()
{
	return UFactionDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionDefinition);
UFactionDefinition::~UFactionDefinition() {}
// End Class UFactionDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_FactionDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactionDefinition, UFactionDefinition::StaticClass, TEXT("UFactionDefinition"), &Z_Registration_Info_UClass_UFactionDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactionDefinition), 917781094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_FactionDefinition_h_2176820018(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_FactionDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Teams_FactionDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
