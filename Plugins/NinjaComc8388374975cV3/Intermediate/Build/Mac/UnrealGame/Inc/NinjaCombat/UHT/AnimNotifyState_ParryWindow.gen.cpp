// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/States/AnimNotifyState_ParryWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_ParryWindow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ParryWindow();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ParryWindow_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_ParryWindow
void UAnimNotifyState_ParryWindow::StaticRegisterNativesUAnimNotifyState_ParryWindow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_ParryWindow);
UClass* Z_Construct_UClass_UAnimNotifyState_ParryWindow_NoRegister()
{
	return UAnimNotifyState_ParryWindow::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Opens a parry window, allowing opportunity attacks to be executed.\n */" },
		{ "DisplayName", "Parry Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/States/AnimNotifyState_ParryWindow.h" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_ParryWindow.h" },
		{ "ToolTip", "Opens a parry window, allowing opportunity attacks to be executed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParryWindowEffectClass_MetaData[] = {
		{ "Comment", "/** Gameplay Effect that represents the parry window. */" },
		{ "ModuleRelativePath", "Public/Animation/States/AnimNotifyState_ParryWindow.h" },
		{ "ToolTip", "Gameplay Effect that represents the parry window." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParryWindowEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_ParryWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::NewProp_ParryWindowEffectClass = { "ParryWindowEffectClass", nullptr, (EPropertyFlags)0x0024080000000010, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_ParryWindow, ParryWindowEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParryWindowEffectClass_MetaData), NewProp_ParryWindowEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::NewProp_ParryWindowEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::ClassParams = {
	&UAnimNotifyState_ParryWindow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_ParryWindow()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_ParryWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_ParryWindow.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_ParryWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_ParryWindow.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimNotifyState_ParryWindow>()
{
	return UAnimNotifyState_ParryWindow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_ParryWindow);
UAnimNotifyState_ParryWindow::~UAnimNotifyState_ParryWindow() {}
// End Class UAnimNotifyState_ParryWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ParryWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_ParryWindow, UAnimNotifyState_ParryWindow::StaticClass, TEXT("UAnimNotifyState_ParryWindow"), &Z_Registration_Info_UClass_UAnimNotifyState_ParryWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_ParryWindow), 2786139683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ParryWindow_h_1223305848(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ParryWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_States_AnimNotifyState_ParryWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
