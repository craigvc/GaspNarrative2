// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Interaction/InteractableRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableRenderingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractableRenderingComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UInteractableRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UInteractableRenderingComponent
void UInteractableRenderingComponent::StaticRegisterNativesUInteractableRenderingComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableRenderingComponent);
UClass* Z_Construct_UClass_UInteractableRenderingComponent_NoRegister()
{
	return UInteractableRenderingComponent::StaticClass();
}
struct Z_Construct_UClass_UInteractableRenderingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Object LOD Lighting VirtualTexture Transform HLOD Collision TextureStreaming Mobile Physics Tags AssetUserData Activation Cooking Rendering Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Interaction/InteractableRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/InteractableRenderingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableRenderingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInteractableRenderingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableRenderingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableRenderingComponent_Statics::ClassParams = {
	&UInteractableRenderingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableRenderingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableRenderingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractableRenderingComponent()
{
	if (!Z_Registration_Info_UClass_UInteractableRenderingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableRenderingComponent.OuterSingleton, Z_Construct_UClass_UInteractableRenderingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableRenderingComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UInteractableRenderingComponent>()
{
	return UInteractableRenderingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableRenderingComponent);
UInteractableRenderingComponent::~UInteractableRenderingComponent() {}
// End Class UInteractableRenderingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableRenderingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableRenderingComponent, UInteractableRenderingComponent::StaticClass, TEXT("UInteractableRenderingComponent"), &Z_Registration_Info_UClass_UInteractableRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableRenderingComponent), 2572757707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableRenderingComponent_h_3741587794(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableRenderingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
