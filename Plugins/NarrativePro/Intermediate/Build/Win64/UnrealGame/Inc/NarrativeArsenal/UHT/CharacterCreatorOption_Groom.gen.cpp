// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Options/CharacterCreatorOption_Groom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorOption_Groom() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Groom_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Groom();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Groom_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorOption_Groom
void UCharacterCreatorOption_Groom::StaticRegisterNativesUCharacterCreatorOption_Groom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorOption_Groom);
UClass* Z_Construct_UClass_UCharacterCreatorOption_Groom_NoRegister()
{
	return UCharacterCreatorOption_Groom::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A groom option, eyelashes, a moustache, beard etc. Probably not something you'll use in a shipped game as grooms are very expensive but nice to have the option there! \n */" },
		{ "IncludePath", "CharacterCreator/Options/CharacterCreatorOption_Groom.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Groom.h" },
		{ "ToolTip", "A groom option, eyelashes, a moustache, beard etc. Probably not something you'll use in a shipped game as grooms are very expensive but nice to have the option there!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grooms_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The grooms you can select for this option\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Groom.h" },
		{ "ToolTip", "The grooms you can select for this option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grooms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Grooms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorOption_Groom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::NewProp_Grooms_Inner = { "Grooms", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorItem_Groom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::NewProp_Grooms = { "Grooms", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Groom, Grooms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grooms_MetaData), NewProp_Grooms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::NewProp_Grooms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::NewProp_Grooms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterCreatorOption,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::ClassParams = {
	&UCharacterCreatorOption_Groom::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorOption_Groom()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorOption_Groom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorOption_Groom.OuterSingleton, Z_Construct_UClass_UCharacterCreatorOption_Groom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorOption_Groom.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorOption_Groom>()
{
	return UCharacterCreatorOption_Groom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorOption_Groom);
UCharacterCreatorOption_Groom::~UCharacterCreatorOption_Groom() {}
// End Class UCharacterCreatorOption_Groom

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Groom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorOption_Groom, UCharacterCreatorOption_Groom::StaticClass, TEXT("UCharacterCreatorOption_Groom"), &Z_Registration_Info_UClass_UCharacterCreatorOption_Groom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorOption_Groom), 3594281592U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Groom_h_3334423622(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Groom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Groom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
