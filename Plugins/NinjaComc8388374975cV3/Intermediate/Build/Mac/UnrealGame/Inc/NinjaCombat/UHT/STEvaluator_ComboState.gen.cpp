// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Combo/STEvaluator_ComboState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTEvaluator_ComboState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_USTEvaluator_ComboState();
NINJACOMBAT_API UClass* Z_Construct_UClass_USTEvaluator_ComboState_NoRegister();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class USTEvaluator_ComboState
void USTEvaluator_ComboState::StaticRegisterNativesUSTEvaluator_ComboState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USTEvaluator_ComboState);
UClass* Z_Construct_UClass_USTEvaluator_ComboState_NoRegister()
{
	return USTEvaluator_ComboState::StaticClass();
}
struct Z_Construct_UClass_USTEvaluator_ComboState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n * Exposes the current combo state in the backing character's Combat Component.\n */" },
		{ "DisplayName", "Combo State" },
		{ "IncludePath", "AbilitySystem/Combo/STEvaluator_ComboState.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Exposes the current combo state in the backing character's Combat Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "Category", "Context" },
		{ "Comment", "/** Reference to the Actor owning the Combat Component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboState.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatComboManagerInterface" },
		{ "ToolTip", "Reference to the Actor owning the Combat Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInComboWindow_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Informs if the Combo Window is currently open. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboState.h" },
		{ "ToolTip", "Informs if the Combo Window is currently open." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCount_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Current count for the combo. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboState.h" },
		{ "ToolTip", "Current count for the combo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Amount of targets hit from the current attack. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Combo/STEvaluator_ComboState.h" },
		{ "ToolTip", "Amount of targets hit from the current attack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComboWindow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTEvaluator_ComboState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_ComboState, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_bInComboWindow_SetBit(void* Obj)
{
	((USTEvaluator_ComboState*)Obj)->bInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_bInComboWindow = { "bInComboWindow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USTEvaluator_ComboState), &Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_bInComboWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInComboWindow_MetaData), NewProp_bInComboWindow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_ComboState, ComboCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCount_MetaData), NewProp_ComboCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTEvaluator_ComboState, TargetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCount_MetaData), NewProp_TargetCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTEvaluator_ComboState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_bInComboWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_ComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTEvaluator_ComboState_Statics::NewProp_TargetCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_ComboState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTEvaluator_ComboState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStateTreeEvaluatorBlueprintBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_ComboState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTEvaluator_ComboState_Statics::ClassParams = {
	&USTEvaluator_ComboState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USTEvaluator_ComboState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_ComboState_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTEvaluator_ComboState_Statics::Class_MetaDataParams), Z_Construct_UClass_USTEvaluator_ComboState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTEvaluator_ComboState()
{
	if (!Z_Registration_Info_UClass_USTEvaluator_ComboState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTEvaluator_ComboState.OuterSingleton, Z_Construct_UClass_USTEvaluator_ComboState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTEvaluator_ComboState.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<USTEvaluator_ComboState>()
{
	return USTEvaluator_ComboState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTEvaluator_ComboState);
USTEvaluator_ComboState::~USTEvaluator_ComboState() {}
// End Class USTEvaluator_ComboState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTEvaluator_ComboState, USTEvaluator_ComboState::StaticClass, TEXT("USTEvaluator_ComboState"), &Z_Registration_Info_UClass_USTEvaluator_ComboState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTEvaluator_ComboState), 4125257580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboState_h_2860068958(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STEvaluator_ComboState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
