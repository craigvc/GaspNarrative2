// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/States/AnimNotifyState_ComboWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_ComboWindow() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ComboWindow();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ComboWindow_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_ComboWindow
void UAnimNotifyState_ComboWindow::StaticRegisterNativesUAnimNotifyState_ComboWindow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_ComboWindow);
UClass* Z_Construct_UClass_UAnimNotifyState_ComboWindow_NoRegister()
{
	return UAnimNotifyState_ComboWindow::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Opens a combo window, allowing follow-up attacks to be executed.\n */" },
		{ "DisplayName", "Combo Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/States/AnimNotifyState_ComboWindow.h" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_ComboWindow.h" },
		{ "ToolTip", "Opens a combo window, allowing follow-up attacks to be executed." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_ComboWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics::ClassParams = {
	&UAnimNotifyState_ComboWindow::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_ComboWindow()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_ComboWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_ComboWindow.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_ComboWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_ComboWindow.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotifyState_ComboWindow>()
{
	return UAnimNotifyState_ComboWindow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_ComboWindow);
UAnimNotifyState_ComboWindow::~UAnimNotifyState_ComboWindow() {}
// End Class UAnimNotifyState_ComboWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ComboWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_ComboWindow, UAnimNotifyState_ComboWindow::StaticClass, TEXT("UAnimNotifyState_ComboWindow"), &Z_Registration_Info_UClass_UAnimNotifyState_ComboWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_ComboWindow), 130606416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ComboWindow_h_3678940415(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ComboWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ComboWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
