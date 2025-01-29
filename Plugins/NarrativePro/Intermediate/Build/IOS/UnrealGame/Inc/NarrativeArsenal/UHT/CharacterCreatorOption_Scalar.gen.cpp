// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorOption_Scalar() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Scalar();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Scalar_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorOption_Scalar
void UCharacterCreatorOption_Scalar::StaticRegisterNativesUCharacterCreatorOption_Scalar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorOption_Scalar);
UClass* Z_Construct_UClass_UCharacterCreatorOption_Scalar_NoRegister()
{
	return UCharacterCreatorOption_Scalar::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A global scalar value option that can be changed in the character creator - could be anything, height, pupil size, any sort of scalar you require. \n */" },
		{ "IncludePath", "CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ToolTip", "A global scalar value option that can be changed in the character creator - could be anything, height, pupil size, any sort of scalar you require." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarTagID_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Scalars" },
		{ "Category", "Scalar Value" },
		{ "Comment", "//The ID you can use to reference this scalar value \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ToolTip", "The ID you can use to reference this scalar value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Scalar Value" },
		{ "Comment", "//The min value this scalar can go to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ToolTip", "The min value this scalar can go to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Scalar Value" },
		{ "Comment", "//The max value this scalar can go to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ToolTip", "The max value this scalar can go to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepValue_MetaData[] = {
		{ "Category", "Scalar Value" },
		{ "Comment", "//The scalars UI slider will use this step size\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ToolTip", "The scalars UI slider will use this step size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Scalar Value" },
		{ "Comment", "//The default value the scalar will be set to \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Scalar.h" },
		{ "ToolTip", "The default value the scalar will be set to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarTagID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorOption_Scalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_ScalarTagID = { "ScalarTagID", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Scalar, ScalarTagID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarTagID_MetaData), NewProp_ScalarTagID_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Scalar, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Scalar, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_StepValue = { "StepValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Scalar, StepValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepValue_MetaData), NewProp_StepValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Scalar, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_ScalarTagID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_StepValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterCreatorOption,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::ClassParams = {
	&UCharacterCreatorOption_Scalar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorOption_Scalar()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorOption_Scalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorOption_Scalar.OuterSingleton, Z_Construct_UClass_UCharacterCreatorOption_Scalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorOption_Scalar.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorOption_Scalar>()
{
	return UCharacterCreatorOption_Scalar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorOption_Scalar);
UCharacterCreatorOption_Scalar::~UCharacterCreatorOption_Scalar() {}
// End Class UCharacterCreatorOption_Scalar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Scalar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorOption_Scalar, UCharacterCreatorOption_Scalar::StaticClass, TEXT("UCharacterCreatorOption_Scalar"), &Z_Registration_Info_UClass_UCharacterCreatorOption_Scalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorOption_Scalar), 2044554735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Scalar_h_2990980557(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Scalar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Scalar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
