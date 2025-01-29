// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/InteractionFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractionFunctionLibrary();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractionFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UInteractionFunctionLibrary
void UInteractionFunctionLibrary::StaticRegisterNativesUInteractionFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionFunctionLibrary);
UClass* Z_Construct_UClass_UInteractionFunctionLibrary_NoRegister()
{
	return UInteractionFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UInteractionFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Interaction/InteractionFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractionFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionFunctionLibrary_Statics::ClassParams = {
	&UInteractionFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UInteractionFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionFunctionLibrary.OuterSingleton, Z_Construct_UClass_UInteractionFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionFunctionLibrary.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UInteractionFunctionLibrary>()
{
	return UInteractionFunctionLibrary::StaticClass();
}
UInteractionFunctionLibrary::UInteractionFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionFunctionLibrary);
UInteractionFunctionLibrary::~UInteractionFunctionLibrary() {}
// End Class UInteractionFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionFunctionLibrary, UInteractionFunctionLibrary::StaticClass, TEXT("UInteractionFunctionLibrary"), &Z_Registration_Info_UClass_UInteractionFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionFunctionLibrary), 2982217805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionFunctionLibrary_h_3948306821(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
