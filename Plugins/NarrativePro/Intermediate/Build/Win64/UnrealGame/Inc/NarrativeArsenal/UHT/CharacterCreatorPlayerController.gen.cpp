// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/CharacterCreatorPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ACharacterCreatorPlayerController();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ACharacterCreatorPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ACharacterCreatorPlayerController
void ACharacterCreatorPlayerController::StaticRegisterNativesACharacterCreatorPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterCreatorPlayerController);
UClass* Z_Construct_UClass_ACharacterCreatorPlayerController_NoRegister()
{
	return ACharacterCreatorPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACharacterCreatorPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for character creator PC, decided to use a cpp base for this as updating save file in BP was annoying with regards to refs etc. \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CharacterCreator/CharacterCreatorPlayerController.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/CharacterCreatorPlayerController.h" },
		{ "ToolTip", "Base class for character creator PC, decided to use a cpp base for this as updating save file in BP was annoying with regards to refs etc." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterCreatorPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterCreatorPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreatorPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterCreatorPlayerController_Statics::ClassParams = {
	&ACharacterCreatorPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterCreatorPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterCreatorPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterCreatorPlayerController()
{
	if (!Z_Registration_Info_UClass_ACharacterCreatorPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterCreatorPlayerController.OuterSingleton, Z_Construct_UClass_ACharacterCreatorPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterCreatorPlayerController.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ACharacterCreatorPlayerController>()
{
	return ACharacterCreatorPlayerController::StaticClass();
}
ACharacterCreatorPlayerController::ACharacterCreatorPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterCreatorPlayerController);
ACharacterCreatorPlayerController::~ACharacterCreatorPlayerController() {}
// End Class ACharacterCreatorPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterCreatorPlayerController, ACharacterCreatorPlayerController::StaticClass, TEXT("ACharacterCreatorPlayerController"), &Z_Registration_Info_UClass_ACharacterCreatorPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterCreatorPlayerController), 1647372916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorPlayerController_h_3029720504(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_CharacterCreatorPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
