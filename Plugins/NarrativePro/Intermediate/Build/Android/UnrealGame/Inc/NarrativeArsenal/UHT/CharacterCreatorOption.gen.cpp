// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Options/CharacterCreatorOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorOption() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorOption
void UCharacterCreatorOption::StaticRegisterNativesUCharacterCreatorOption()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorOption);
UClass* Z_Construct_UClass_UCharacterCreatorOption_NoRegister()
{
	return UCharacterCreatorOption::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**Creator sections consist of options - this is the base for a creator option. */" },
		{ "IncludePath", "CharacterCreator/Options/CharacterCreatorOption.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption.h" },
		{ "ToolTip", "Creator sections consist of options - this is the base for a creator option." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionDisplayName_MetaData[] = {
		{ "Category", "Creator Option" },
		{ "Comment", "//The display name for this option - it is up to the option widget whether it wants to show this or not\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption.h" },
		{ "ToolTip", "The display name for this option - it is up to the option widget whether it wants to show this or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_OptionDisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorOption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Statics::NewProp_OptionDisplayName = { "OptionDisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption, OptionDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionDisplayName_MetaData), NewProp_OptionDisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Statics::NewProp_OptionDisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorOption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorOption_Statics::ClassParams = {
	&UCharacterCreatorOption::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorOption_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorOption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorOption()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorOption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorOption.OuterSingleton, Z_Construct_UClass_UCharacterCreatorOption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorOption.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorOption>()
{
	return UCharacterCreatorOption::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorOption);
UCharacterCreatorOption::~UCharacterCreatorOption() {}
// End Class UCharacterCreatorOption

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorOption, UCharacterCreatorOption::StaticClass, TEXT("UCharacterCreatorOption"), &Z_Registration_Info_UClass_UCharacterCreatorOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorOption), 369778940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_h_2641686451(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
