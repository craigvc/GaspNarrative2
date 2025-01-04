// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInventoryEditor/Private/NarrativeItemBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeItemBlueprintFactory() {}

// Begin Cross Module References
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory();
NARRATIVEINVENTORYEDITOR_API UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
UPackage* Z_Construct_UPackage__Script_NarrativeInventoryEditor();
// End Cross Module References

// Begin Class UNarrativeItemBlueprintFactory
void UNarrativeItemBlueprintFactory::StaticRegisterNativesUNarrativeItemBlueprintFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeItemBlueprintFactory);
UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory_NoRegister()
{
	return UNarrativeItemBlueprintFactory::StaticClass();
}
struct Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for creating a new NarrativeItemBlueprint \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NarrativeItemBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/NarrativeItemBlueprintFactory.h" },
		{ "ToolTip", "Factory for creating a new NarrativeItemBlueprint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeItemBlueprintFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInventoryEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::ClassParams = {
	&UNarrativeItemBlueprintFactory::StaticClass,
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
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeItemBlueprintFactory()
{
	if (!Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory.OuterSingleton, Z_Construct_UClass_UNarrativeItemBlueprintFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory.OuterSingleton;
}
template<> NARRATIVEINVENTORYEDITOR_API UClass* StaticClass<UNarrativeItemBlueprintFactory>()
{
	return UNarrativeItemBlueprintFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeItemBlueprintFactory);
UNarrativeItemBlueprintFactory::~UNarrativeItemBlueprintFactory() {}
// End Class UNarrativeItemBlueprintFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeItemBlueprintFactory, UNarrativeItemBlueprintFactory::StaticClass, TEXT("UNarrativeItemBlueprintFactory"), &Z_Registration_Info_UClass_UNarrativeItemBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeItemBlueprintFactory), 2003338654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_3149090990(TEXT("/Script/NarrativeInventoryEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventoryEditor_Private_NarrativeItemBlueprintFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
