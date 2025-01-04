// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/NinjaFactionPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionPlayerController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
NINJAFACTIONS_API UClass* Z_Construct_UClass_ANinjaFactionPlayerController();
NINJAFACTIONS_API UClass* Z_Construct_UClass_ANinjaFactionPlayerController_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UNinjaFactionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class ANinjaFactionPlayerController
void ANinjaFactionPlayerController::StaticRegisterNativesANinjaFactionPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaFactionPlayerController);
UClass* Z_Construct_UClass_ANinjaFactionPlayerController_NoRegister()
{
	return ANinjaFactionPlayerController::StaticClass();
}
struct Z_Construct_UClass_ANinjaFactionPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Player Controller provided by the Ninja Faction System.\n *\n * It handles the integration with the Faction Component/Subsystem, connecting these elements\n * to Unreal Engine's Team Resolution Framework/Perception System.\n *\n * Using this controller is not mandatory. You are free to implement equivalent functionality\n * in your own Player Controller, in any other way you see fit, as this particular controller\n * is not directly used by the Faction Framework in any way.\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GameFramework/NinjaFactionPlayerController.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionPlayerController.h" },
		{ "ToolTip", "Base Player Controller provided by the Ninja Faction System.\n\nIt handles the integration with the Faction Component/Subsystem, connecting these elements\nto Unreal Engine's Team Resolution Framework/Perception System.\n\nUsing this controller is not mandatory. You are free to implement equivalent functionality\nin your own Player Controller, in any other way you see fit, as this particular controller\nis not directly used by the Faction Framework in any way." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionComponent_MetaData[] = {
		{ "Comment", "/** Cached faction component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionPlayerController.h" },
		{ "ToolTip", "Cached faction component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FactionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaFactionPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaFactionPlayerController_Statics::NewProp_FactionComponent = { "FactionComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaFactionPlayerController, FactionComponent), Z_Construct_UClass_UNinjaFactionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionComponent_MetaData), NewProp_FactionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaFactionPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaFactionPlayerController_Statics::NewProp_FactionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaFactionPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaFactionPlayerController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaFactionPlayerController, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaFactionPlayerController_Statics::ClassParams = {
	&ANinjaFactionPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaFactionPlayerController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionPlayerController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaFactionPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaFactionPlayerController()
{
	if (!Z_Registration_Info_UClass_ANinjaFactionPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaFactionPlayerController.OuterSingleton, Z_Construct_UClass_ANinjaFactionPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaFactionPlayerController.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<ANinjaFactionPlayerController>()
{
	return ANinjaFactionPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaFactionPlayerController);
ANinjaFactionPlayerController::~ANinjaFactionPlayerController() {}
// End Class ANinjaFactionPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaFactionPlayerController, ANinjaFactionPlayerController::StaticClass, TEXT("ANinjaFactionPlayerController"), &Z_Registration_Info_UClass_ANinjaFactionPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaFactionPlayerController), 1227265566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionPlayerController_h_2497688783(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
