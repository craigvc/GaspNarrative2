// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeInteraction/Public/Interaction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteraction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UInteraction();
NARRATIVEINTERACTION_API UClass* Z_Construct_UClass_UInteraction_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeInteraction();
// End Cross Module References

// Begin Class UInteraction
void UInteraction::StaticRegisterNativesUInteraction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteraction);
UClass* Z_Construct_UClass_UInteraction_NoRegister()
{
	return UInteraction::StaticClass();
}
struct Z_Construct_UClass_UInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Interaction.h" },
		{ "ModuleRelativePath", "Public/Interaction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteraction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteraction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteraction_Statics::ClassParams = {
	&UInteraction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteraction()
{
	if (!Z_Registration_Info_UClass_UInteraction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteraction.OuterSingleton, Z_Construct_UClass_UInteraction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteraction.OuterSingleton;
}
template<> NARRATIVEINTERACTION_API UClass* StaticClass<UInteraction>()
{
	return UInteraction::StaticClass();
}
UInteraction::UInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteraction);
UInteraction::~UInteraction() {}
// End Class UInteraction

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteraction, UInteraction::StaticClass, TEXT("UInteraction"), &Z_Registration_Info_UClass_UInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteraction), 2663964737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_1684808840(TEXT("/Script/NarrativeInteraction"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
