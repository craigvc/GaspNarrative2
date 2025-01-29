// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/InteractionSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractionSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractionSubsystem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UInteractionSubsystem
void UInteractionSubsystem::StaticRegisterNativesUInteractionSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionSubsystem);
UClass* Z_Construct_UClass_UInteractionSubsystem_NoRegister()
{
	return UInteractionSubsystem::StaticClass();
}
struct Z_Construct_UClass_UInteractionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Right now just serves as a place we can cache interactables so the gameplay debugger category can easily access\n */" },
		{ "IncludePath", "Interaction/InteractionSubsystem.h" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionSubsystem.h" },
		{ "ToolTip", "Right now just serves as a place we can cache interactables so the gameplay debugger category can easily access" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableActors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/InteractionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActors_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InteractableActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionSubsystem_Statics::NewProp_InteractableActors_ElementProp = { "InteractableActors", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeInteractableComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UInteractionSubsystem_Statics::NewProp_InteractableActors = { "InteractableActors", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionSubsystem, InteractableActors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableActors_MetaData), NewProp_InteractableActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSubsystem_Statics::NewProp_InteractableActors_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionSubsystem_Statics::NewProp_InteractableActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionSubsystem_Statics::ClassParams = {
	&UInteractionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInteractionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionSubsystem()
{
	if (!Z_Registration_Info_UClass_UInteractionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionSubsystem.OuterSingleton, Z_Construct_UClass_UInteractionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionSubsystem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UInteractionSubsystem>()
{
	return UInteractionSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionSubsystem);
UInteractionSubsystem::~UInteractionSubsystem() {}
// End Class UInteractionSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionSubsystem, UInteractionSubsystem::StaticClass, TEXT("UInteractionSubsystem"), &Z_Registration_Info_UClass_UInteractionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionSubsystem), 1033782685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionSubsystem_h_3737734559(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
