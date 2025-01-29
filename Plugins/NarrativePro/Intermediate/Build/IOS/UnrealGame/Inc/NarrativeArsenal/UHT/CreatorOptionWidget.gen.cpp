// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/UI/CreatorOptionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreatorOptionWidget() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCreatorOptionWidget();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCreatorOptionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCreatorOptionWidget
void UCreatorOptionWidget::StaticRegisterNativesUCreatorOptionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreatorOptionWidget);
UClass* Z_Construct_UClass_UCreatorOptionWidget_NoRegister()
{
	return UCreatorOptionWidget::StaticClass();
}
struct Z_Construct_UClass_UCreatorOptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for an option widget that allows us to edit a character creator option.\n */" },
		{ "IncludePath", "CharacterCreator/UI/CreatorOptionWidget.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/UI/CreatorOptionWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for an option widget that allows us to edit a character creator option." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatorOption_MetaData[] = {
		{ "Category", "Narrative Character Creator" },
		{ "Comment", "//The creator option that was passed in to this widget. \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CharacterCreator/UI/CreatorOptionWidget.h" },
		{ "ToolTip", "The creator option that was passed in to this widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatorOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreatorOptionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCreatorOptionWidget_Statics::NewProp_CreatorOption = { "CreatorOption", nullptr, (EPropertyFlags)0x0115000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCreatorOptionWidget, CreatorOption), Z_Construct_UClass_UCharacterCreatorOption_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatorOption_MetaData), NewProp_CreatorOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreatorOptionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreatorOptionWidget_Statics::NewProp_CreatorOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatorOptionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCreatorOptionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatorOptionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreatorOptionWidget_Statics::ClassParams = {
	&UCreatorOptionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCreatorOptionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCreatorOptionWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreatorOptionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreatorOptionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreatorOptionWidget()
{
	if (!Z_Registration_Info_UClass_UCreatorOptionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreatorOptionWidget.OuterSingleton, Z_Construct_UClass_UCreatorOptionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreatorOptionWidget.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCreatorOptionWidget>()
{
	return UCreatorOptionWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCreatorOptionWidget);
UCreatorOptionWidget::~UCreatorOptionWidget() {}
// End Class UCreatorOptionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_UI_CreatorOptionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCreatorOptionWidget, UCreatorOptionWidget::StaticClass, TEXT("UCreatorOptionWidget"), &Z_Registration_Info_UClass_UCreatorOptionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreatorOptionWidget), 1926979876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_UI_CreatorOptionWidget_h_1910675671(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_UI_CreatorOptionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_UI_CreatorOptionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
