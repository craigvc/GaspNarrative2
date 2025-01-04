// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Combo/STTask_SetComboCount.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTTask_SetComboCount() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_USTTask_SetComboCount();
NINJACOMBAT_API UClass* Z_Construct_UClass_USTTask_SetComboCount_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeTaskBlueprintBase();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class USTTask_SetComboCount
void USTTask_SetComboCount::StaticRegisterNativesUSTTask_SetComboCount()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTTask_SetComboCount);
UClass* Z_Construct_UClass_USTTask_SetComboCount_NoRegister()
{
	return USTTask_SetComboCount::StaticClass();
}
struct Z_Construct_UClass_USTTask_SetComboCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n * Sets a combo count to a specific value.\n */" },
		{ "DisplayName", "Set Combo Count" },
		{ "IncludePath", "AbilitySystem/Combo/STTask_SetComboCount.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_SetComboCount.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Sets a combo count to a specific value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "/** Reference to the Actor owning the Combat Component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_SetComboCount.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatComboManagerInterface" },
		{ "ToolTip", "Reference to the Actor owning the Combat Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCount_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** New value for the combo count. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_SetComboCount.h" },
		{ "ToolTip", "New value for the combo count." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldComplete_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Comment", "/** If set to true, return a run status of \"succeeded\". Otherwise, returns \"running\".*/" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STTask_SetComboCount.h" },
		{ "ToolTip", "If set to true, return a run status of \"succeeded\". Otherwise, returns \"running\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static void NewProp_bShouldComplete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTTask_SetComboCount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTask_SetComboCount, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTask_SetComboCount, ComboCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCount_MetaData), NewProp_ComboCount_MetaData) };
void Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_bShouldComplete_SetBit(void* Obj)
{
	((USTTask_SetComboCount*)Obj)->bShouldComplete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_bShouldComplete = { "bShouldComplete", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USTTask_SetComboCount), &Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_bShouldComplete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldComplete_MetaData), NewProp_bShouldComplete_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTTask_SetComboCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_ComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTask_SetComboCount_Statics::NewProp_bShouldComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_SetComboCount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTTask_SetComboCount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeTaskBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_SetComboCount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTTask_SetComboCount_Statics::ClassParams = {
	&USTTask_SetComboCount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USTTask_SetComboCount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_SetComboCount_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTTask_SetComboCount_Statics::Class_MetaDataParams), Z_Construct_UClass_USTTask_SetComboCount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTTask_SetComboCount()
{
	if (!Z_Registration_Info_UClass_USTTask_SetComboCount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTTask_SetComboCount.OuterSingleton, Z_Construct_UClass_USTTask_SetComboCount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTTask_SetComboCount.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<USTTask_SetComboCount>()
{
	return USTTask_SetComboCount::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTTask_SetComboCount);
USTTask_SetComboCount::~USTTask_SetComboCount() {}
// End Class USTTask_SetComboCount

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_SetComboCount_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTTask_SetComboCount, USTTask_SetComboCount::StaticClass, TEXT("USTTask_SetComboCount"), &Z_Registration_Info_UClass_USTTask_SetComboCount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTTask_SetComboCount), 4266460428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_SetComboCount_h_1124697600(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_SetComboCount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_SetComboCount_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
