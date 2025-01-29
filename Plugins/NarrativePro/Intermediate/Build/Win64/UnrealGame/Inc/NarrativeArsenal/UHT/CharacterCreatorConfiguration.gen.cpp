// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorConfiguration.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorConfiguration() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorConfiguration();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorForm();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorForm_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Groom_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorPage();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorPage_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorSection();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorSection_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorPage
void UCharacterCreatorPage::StaticRegisterNativesUCharacterCreatorPage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorPage);
UClass* Z_Construct_UClass_UCharacterCreatorPage_NoRegister()
{
	return UCharacterCreatorPage::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorPage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a page in the character creator\n" },
		{ "IncludePath", "CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "Defines a page in the character creator" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageID_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The gameplay tag identifying this creator section\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The gameplay tag identifying this creator section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageTitleText_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The display name for this page\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The display name for this page" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PageSections_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//All of the sections on the page\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "All of the sections on the page" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PageID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PageTitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PageSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PageSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorPage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageID = { "PageID", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorPage, PageID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageID_MetaData), NewProp_PageID_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageTitleText = { "PageTitleText", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorPage, PageTitleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageTitleText_MetaData), NewProp_PageTitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageSections_Inner = { "PageSections", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageSections = { "PageSections", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorPage, PageSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PageSections_MetaData), NewProp_PageSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorPage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorPage_Statics::NewProp_PageSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorPage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorPage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorPage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorPage_Statics::ClassParams = {
	&UCharacterCreatorPage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorPage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorPage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorPage_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorPage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorPage()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorPage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorPage.OuterSingleton, Z_Construct_UClass_UCharacterCreatorPage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorPage.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorPage>()
{
	return UCharacterCreatorPage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorPage);
UCharacterCreatorPage::~UCharacterCreatorPage() {}
// End Class UCharacterCreatorPage

// Begin Class UCharacterCreatorSection
void UCharacterCreatorSection::StaticRegisterNativesUCharacterCreatorSection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorSection);
UClass* Z_Construct_UClass_UCharacterCreatorSection_NoRegister()
{
	return UCharacterCreatorSection::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines a section of a character creator page\n" },
		{ "IncludePath", "CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "Defines a section of a character creator page" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionID_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The gameplay tag identifying this creator section\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The gameplay tag identifying this creator section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionDisplayName_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The display name for this section\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The display name for this section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "Mesh Material" },
		{ "Comment", "//The options that can be edited on this page\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The options that can be edited on this page" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SectionDisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Options_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_SectionID = { "SectionID", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorSection, SectionID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionID_MetaData), NewProp_SectionID_MetaData) }; // 1298103297
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_SectionDisplayName = { "SectionDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorSection, SectionDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionDisplayName_MetaData), NewProp_SectionDisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorOption_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorSection, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_SectionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_SectionDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_Options_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorSection_Statics::NewProp_Options,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorSection_Statics::ClassParams = {
	&UCharacterCreatorSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorSection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorSection_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorSection()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorSection.OuterSingleton, Z_Construct_UClass_UCharacterCreatorSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorSection.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorSection>()
{
	return UCharacterCreatorSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorSection);
UCharacterCreatorSection::~UCharacterCreatorSection() {}
// End Class UCharacterCreatorSection

// Begin Class UCharacterCreatorForm
void UCharacterCreatorForm::StaticRegisterNativesUCharacterCreatorForm()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorForm);
UClass* Z_Construct_UClass_UCharacterCreatorForm_NoRegister()
{
	return UCharacterCreatorForm::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorForm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A form defines a character creator options - ie Male, Female, Goblin, etc. It also defines what the character looks like by default when you switch forms.  \n */" },
		{ "IncludePath", "CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "A form defines a character creator options - ie Male, Female, Goblin, etc. It also defines what the character looks like by default when you switch forms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormDisplayName_MetaData[] = {
		{ "Category", "Form" },
		{ "Comment", "//The display name of this form - Male, Female, Dog, Cat, etc!  \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The display name of this form - Male, Female, Dog, Cat, etc!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FormTag_MetaData[] = {
		{ "Categories", "Narrative.CharacterCreator.Forms" },
		{ "Category", "Form" },
		{ "Comment", "//The forms tag ID - you can grab this ingame to determine players form - useful for items that may display differently on different genders etc \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The forms tag ID - you can grab this ingame to determine players form - useful for items that may display differently on different genders etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCreatorPages_MetaData[] = {
		{ "Category", "Form" },
		{ "Comment", "//The pages in the character creator - each page is made up of sections, and each section has settings in it that can be changed. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The pages in the character creator - each page is made up of sections, and each section has settings in it that can be changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterCreatorMeshes_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Mesh" },
		{ "Category", "Form" },
		{ "Comment", "//The default meshes the form has when selected \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The default meshes the form has when selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterCreatorGrooms_MetaData[] = {
		{ "Categories", "Narrative.Equipment.Slot.Groom" },
		{ "Category", "Form" },
		{ "Comment", "//The default grooms this form has when selected \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The default grooms this form has when selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCharacterUnarmedAnim_MetaData[] = {
		{ "Category", "Form" },
		{ "Comment", "//The animation blueprint this form should have by default \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The animation blueprint this form should have by default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_FormDisplayName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FormTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterCreatorPages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterCreatorPages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCharacterCreatorMeshes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCharacterCreatorMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultCharacterCreatorMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCharacterCreatorGrooms_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCharacterCreatorGrooms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultCharacterCreatorGrooms;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCharacterUnarmedAnim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorForm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_FormDisplayName = { "FormDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorForm, FormDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormDisplayName_MetaData), NewProp_FormDisplayName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_FormTag = { "FormTag", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorForm, FormTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FormTag_MetaData), NewProp_FormTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_CharacterCreatorPages_Inner = { "CharacterCreatorPages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorPage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_CharacterCreatorPages = { "CharacterCreatorPages", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorForm, CharacterCreatorPages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterCreatorPages_MetaData), NewProp_CharacterCreatorPages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorMeshes_ValueProp = { "DefaultCharacterCreatorMeshes", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorMeshes_Key_KeyProp = { "DefaultCharacterCreatorMeshes_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorMeshes = { "DefaultCharacterCreatorMeshes", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorForm, DefaultCharacterCreatorMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCharacterCreatorMeshes_MetaData), NewProp_DefaultCharacterCreatorMeshes_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorGrooms_ValueProp = { "DefaultCharacterCreatorGrooms", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCharacterCreatorItem_Groom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorGrooms_Key_KeyProp = { "DefaultCharacterCreatorGrooms_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorGrooms = { "DefaultCharacterCreatorGrooms", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorForm, DefaultCharacterCreatorGrooms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCharacterCreatorGrooms_MetaData), NewProp_DefaultCharacterCreatorGrooms_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterUnarmedAnim = { "DefaultCharacterUnarmedAnim", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorForm, DefaultCharacterUnarmedAnim), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCharacterUnarmedAnim_MetaData), NewProp_DefaultCharacterUnarmedAnim_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorForm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_FormDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_FormTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_CharacterCreatorPages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_CharacterCreatorPages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorGrooms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorGrooms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterCreatorGrooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorForm_Statics::NewProp_DefaultCharacterUnarmedAnim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorForm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorForm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorForm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorForm_Statics::ClassParams = {
	&UCharacterCreatorForm::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorForm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorForm_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorForm_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorForm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorForm()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorForm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorForm.OuterSingleton, Z_Construct_UClass_UCharacterCreatorForm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorForm.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorForm>()
{
	return UCharacterCreatorForm::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorForm);
UCharacterCreatorForm::~UCharacterCreatorForm() {}
// End Class UCharacterCreatorForm

// Begin Class UCharacterCreatorConfiguration
void UCharacterCreatorConfiguration::StaticRegisterNativesUCharacterCreatorConfiguration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorConfiguration);
UClass* Z_Construct_UClass_UCharacterCreatorConfiguration_NoRegister()
{
	return UCharacterCreatorConfiguration::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Asset that defines all the configurable settings for the character creator. \n */" },
		{ "IncludePath", "CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "Asset that defines all the configurable settings for the character creator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCreatorForms_MetaData[] = {
		{ "Category", "Configuration" },
		{ "Comment", "//The pages in the character creator - each page is made up of sections, and each section has settings in it that can be changed. \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorConfiguration.h" },
		{ "ToolTip", "The pages in the character creator - each page is made up of sections, and each section has settings in it that can be changed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterCreatorForms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterCreatorForms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorConfiguration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::NewProp_CharacterCreatorForms_Inner = { "CharacterCreatorForms", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorForm_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::NewProp_CharacterCreatorForms = { "CharacterCreatorForms", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorConfiguration, CharacterCreatorForms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterCreatorForms_MetaData), NewProp_CharacterCreatorForms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::NewProp_CharacterCreatorForms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::NewProp_CharacterCreatorForms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::ClassParams = {
	&UCharacterCreatorConfiguration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorConfiguration()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorConfiguration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorConfiguration.OuterSingleton, Z_Construct_UClass_UCharacterCreatorConfiguration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorConfiguration.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorConfiguration>()
{
	return UCharacterCreatorConfiguration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorConfiguration);
UCharacterCreatorConfiguration::~UCharacterCreatorConfiguration() {}
// End Class UCharacterCreatorConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorConfiguration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorPage, UCharacterCreatorPage::StaticClass, TEXT("UCharacterCreatorPage"), &Z_Registration_Info_UClass_UCharacterCreatorPage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorPage), 1121811644U) },
		{ Z_Construct_UClass_UCharacterCreatorSection, UCharacterCreatorSection::StaticClass, TEXT("UCharacterCreatorSection"), &Z_Registration_Info_UClass_UCharacterCreatorSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorSection), 1832354659U) },
		{ Z_Construct_UClass_UCharacterCreatorForm, UCharacterCreatorForm::StaticClass, TEXT("UCharacterCreatorForm"), &Z_Registration_Info_UClass_UCharacterCreatorForm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorForm), 3140456390U) },
		{ Z_Construct_UClass_UCharacterCreatorConfiguration, UCharacterCreatorConfiguration::StaticClass, TEXT("UCharacterCreatorConfiguration"), &Z_Registration_Info_UClass_UCharacterCreatorConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorConfiguration), 2828672237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorConfiguration_h_826986088(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorConfiguration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
