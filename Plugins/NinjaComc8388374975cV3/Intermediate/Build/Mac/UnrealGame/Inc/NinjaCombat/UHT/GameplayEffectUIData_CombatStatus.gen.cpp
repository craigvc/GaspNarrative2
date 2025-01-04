// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectUIData_CombatStatus() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectUIData();
NINJACOMBAT_API UClass* Z_Construct_UClass_UGameplayEffectUIData_CombatStatus();
NINJACOMBAT_API UClass* Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UGameplayEffectUIData_CombatStatus
void UGameplayEffectUIData_CombatStatus::StaticRegisterNativesUGameplayEffectUIData_CombatStatus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectUIData_CombatStatus);
UClass* Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_NoRegister()
{
	return UGameplayEffectUIData_CombatStatus::StaticClass();
}
struct Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * A Component that allows you to describe a Status Effect applied from the Combat System.\n * It can be used on widgets using the \"Status Effect\" Viewmodel.\n */" },
		{ "IncludePath", "AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h" },
		{ "ToolTip", "A Component that allows you to describe a Status Effect applied from the Combat System.\nIt can be used on widgets using the \"Status Effect\" Viewmodel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** An optional text that describes the effect. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h" },
		{ "ToolTip", "An optional text that describes the effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconWidgetClass_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** Widget used to represent this status in the UI. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Effects/Components/GameplayEffectUIData_CombatStatus.h" },
		{ "ToolTip", "Widget used to represent this status in the UI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IconWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectUIData_CombatStatus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectUIData_CombatStatus, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::NewProp_IconWidgetClass = { "IconWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayEffectUIData_CombatStatus, IconWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconWidgetClass_MetaData), NewProp_IconWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::NewProp_IconWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectUIData,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::ClassParams = {
	&UGameplayEffectUIData_CombatStatus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::PropPointers),
	0,
	0x003130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayEffectUIData_CombatStatus()
{
	if (!Z_Registration_Info_UClass_UGameplayEffectUIData_CombatStatus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectUIData_CombatStatus.OuterSingleton, Z_Construct_UClass_UGameplayEffectUIData_CombatStatus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayEffectUIData_CombatStatus.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UGameplayEffectUIData_CombatStatus>()
{
	return UGameplayEffectUIData_CombatStatus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectUIData_CombatStatus);
UGameplayEffectUIData_CombatStatus::~UGameplayEffectUIData_CombatStatus() {}
// End Class UGameplayEffectUIData_CombatStatus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Components_GameplayEffectUIData_CombatStatus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectUIData_CombatStatus, UGameplayEffectUIData_CombatStatus::StaticClass, TEXT("UGameplayEffectUIData_CombatStatus"), &Z_Registration_Info_UClass_UGameplayEffectUIData_CombatStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectUIData_CombatStatus), 2465157803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Components_GameplayEffectUIData_CombatStatus_h_3504715280(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Components_GameplayEffectUIData_CombatStatus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Effects_Components_GameplayEffectUIData_CombatStatus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
