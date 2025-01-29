// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/Widgets/NarrativeCommonTextBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonTextBlock() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonTextBlock();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeCommonTextBlock
void UNarrativeCommonTextBlock::StaticRegisterNativesUNarrativeCommonTextBlock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonTextBlock);
UClass* Z_Construct_UClass_UNarrativeCommonTextBlock_NoRegister()
{
	return UNarrativeCommonTextBlock::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonTextBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Narrative Common Widgets" },
		{ "Comment", "/**\n * Base class for text blocks in Narrative plugin - currently just here incase we need behavior in future \n */" },
		{ "IncludePath", "Widgets/NarrativeCommonTextBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonTextBlock.h" },
		{ "PrioritizeCategories", "Content" },
		{ "ToolTip", "Base class for text blocks in Narrative plugin - currently just here incase we need behavior in future" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonTextBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeCommonTextBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonTextBlock,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonTextBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonTextBlock_Statics::ClassParams = {
	&UNarrativeCommonTextBlock::StaticClass,
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
	0x00B000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonTextBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonTextBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonTextBlock()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonTextBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonTextBlock.OuterSingleton, Z_Construct_UClass_UNarrativeCommonTextBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonTextBlock.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonTextBlock>()
{
	return UNarrativeCommonTextBlock::StaticClass();
}
UNarrativeCommonTextBlock::UNarrativeCommonTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonTextBlock);
UNarrativeCommonTextBlock::~UNarrativeCommonTextBlock() {}
// End Class UNarrativeCommonTextBlock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonTextBlock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonTextBlock, UNarrativeCommonTextBlock::StaticClass, TEXT("UNarrativeCommonTextBlock"), &Z_Registration_Info_UClass_UNarrativeCommonTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonTextBlock), 2162245772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonTextBlock_h_1373032875(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonTextBlock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
