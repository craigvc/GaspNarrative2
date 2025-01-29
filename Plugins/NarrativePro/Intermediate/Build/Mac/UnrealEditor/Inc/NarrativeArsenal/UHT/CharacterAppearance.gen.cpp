// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Character/CharacterAppearance.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorAttributes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAppearance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearance();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearance_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearanceBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearanceBase_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterAppearanceBase
void UCharacterAppearanceBase::StaticRegisterNativesUCharacterAppearanceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAppearanceBase);
UClass* Z_Construct_UClass_UCharacterAppearanceBase_NoRegister()
{
	return UCharacterAppearanceBase::StaticClass();
}
struct Z_Construct_UClass_UCharacterAppearanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines what a character should look like without any items on - ie their default skin. \n */" },
		{ "IncludePath", "Character/CharacterAppearance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/CharacterAppearance.h" },
		{ "ToolTip", "Defines what a character should look like without any items on - ie their default skin." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAppearanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterAppearanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAppearanceBase_Statics::ClassParams = {
	&UCharacterAppearanceBase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAppearanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAppearanceBase()
{
	if (!Z_Registration_Info_UClass_UCharacterAppearanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAppearanceBase.OuterSingleton, Z_Construct_UClass_UCharacterAppearanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAppearanceBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterAppearanceBase>()
{
	return UCharacterAppearanceBase::StaticClass();
}
UCharacterAppearanceBase::UCharacterAppearanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAppearanceBase);
UCharacterAppearanceBase::~UCharacterAppearanceBase() {}
// End Class UCharacterAppearanceBase

// Begin Class UCharacterAppearance
void UCharacterAppearance::StaticRegisterNativesUCharacterAppearance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAppearance);
UClass* Z_Construct_UClass_UCharacterAppearance_NoRegister()
{
	return UCharacterAppearance::StaticClass();
}
struct Z_Construct_UClass_UCharacterAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines what a character should look like without any items on - ie their default skin.\n * This is the standard appearance asset, useful for metahumans. For more custom character types, simply subclass UCharacterAppearanceBase. \n * You can do this in blueprint if required. \n */" },
		{ "IncludePath", "Character/CharacterAppearance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Character/CharacterAppearance.h" },
		{ "ToolTip", "Defines what a character should look like without any items on - ie their default skin.\nThis is the standard appearance asset, useful for metahumans. For more custom character types, simply subclass UCharacterAppearanceBase.\nYou can do this in blueprint if required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterAttributes_MetaData[] = {
		{ "Category", "Appearance|Attributes" },
		{ "Comment", "/** The attribute set for the character */" },
		{ "ModuleRelativePath", "Public/Character/CharacterAppearance.h" },
		{ "ToolTip", "The attribute set for the character" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAppearance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_CharacterAttributes = { "CharacterAttributes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAppearance, CharacterAttributes), Z_Construct_UScriptStruct_FCharacterCreatorAttributeSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterAttributes_MetaData), NewProp_CharacterAttributes_MetaData) }; // 420917075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAppearance_Statics::NewProp_CharacterAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAppearance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterAppearanceBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAppearance_Statics::ClassParams = {
	&UCharacterAppearance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAppearance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAppearance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAppearance()
{
	if (!Z_Registration_Info_UClass_UCharacterAppearance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAppearance.OuterSingleton, Z_Construct_UClass_UCharacterAppearance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAppearance.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterAppearance>()
{
	return UCharacterAppearance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAppearance);
UCharacterAppearance::~UCharacterAppearance() {}
// End Class UCharacterAppearance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterAppearance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAppearanceBase, UCharacterAppearanceBase::StaticClass, TEXT("UCharacterAppearanceBase"), &Z_Registration_Info_UClass_UCharacterAppearanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAppearanceBase), 2854902520U) },
		{ Z_Construct_UClass_UCharacterAppearance, UCharacterAppearance::StaticClass, TEXT("UCharacterAppearance"), &Z_Registration_Info_UClass_UCharacterAppearance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAppearance), 1044123197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterAppearance_h_818395243(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterAppearance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_CharacterAppearance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
