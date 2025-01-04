// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/ViewModel/ViewModel_StatusEffects.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewModel_StatusEffects() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffect();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatViewModel();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_StatusEffects();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UViewModel_StatusEffects_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UViewModel_StatusEffects Function GetActiveStatusEffects
struct Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics
{
	struct ViewModel_StatusEffects_eventGetActiveStatusEffects_Parms
	{
		TArray<FActiveGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|UI|View Model" },
		{ "Comment", "/**\n\x09 * Provides all status effects relevant to the Combat UI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_StatusEffects.h" },
		{ "ToolTip", "Provides all status effects relevant to the Combat UI." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffect, METADATA_PARAMS(0, nullptr) }; // 3944901025
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ViewModel_StatusEffects_eventGetActiveStatusEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3944901025
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewModel_StatusEffects, nullptr, "GetActiveStatusEffects", nullptr, nullptr, Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::ViewModel_StatusEffects_eventGetActiveStatusEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::ViewModel_StatusEffects_eventGetActiveStatusEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewModel_StatusEffects::execGetActiveStatusEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActiveGameplayEffect>*)Z_Param__Result=P_THIS->GetActiveStatusEffects();
	P_NATIVE_END;
}
// End Class UViewModel_StatusEffects Function GetActiveStatusEffects

// Begin Class UViewModel_StatusEffects
void UViewModel_StatusEffects::StaticRegisterNativesUViewModel_StatusEffects()
{
	UClass* Class = UViewModel_StatusEffects::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveStatusEffects", &UViewModel_StatusEffects::execGetActiveStatusEffects },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewModel_StatusEffects);
UClass* Z_Construct_UClass_UViewModel_StatusEffects_NoRegister()
{
	return UViewModel_StatusEffects::StaticClass();
}
struct Z_Construct_UClass_UViewModel_StatusEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tracks status effects so they can be added to the UI.\n *\n * Gameplay Effects with the \"CombatStatus\" Gameplay Effect UI Data Component can be obtained\n * by this Viewmodel and provided to something like a Grid Component in the UI, displaying all\n * effects applied to the Combat Actor that owns it.\n */" },
		{ "DisplayName", "Status Effects" },
		{ "IncludePath", "UI/ViewModel/ViewModel_StatusEffects.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/ViewModel/ViewModel_StatusEffects.h" },
		{ "ToolTip", "Tracks status effects so they can be added to the UI.\n\nGameplay Effects with the \"CombatStatus\" Gameplay Effect UI Data Component can be obtained\nby this Viewmodel and provided to something like a Grid Component in the UI, displaying all\neffects applied to the Combat Actor that owns it." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewModel_StatusEffects_GetActiveStatusEffects, "GetActiveStatusEffects" }, // 1848703850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewModel_StatusEffects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UViewModel_StatusEffects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatViewModel,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_StatusEffects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewModel_StatusEffects_Statics::ClassParams = {
	&UViewModel_StatusEffects::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewModel_StatusEffects_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewModel_StatusEffects_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewModel_StatusEffects()
{
	if (!Z_Registration_Info_UClass_UViewModel_StatusEffects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewModel_StatusEffects.OuterSingleton, Z_Construct_UClass_UViewModel_StatusEffects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewModel_StatusEffects.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UViewModel_StatusEffects>()
{
	return UViewModel_StatusEffects::StaticClass();
}
UViewModel_StatusEffects::UViewModel_StatusEffects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewModel_StatusEffects);
UViewModel_StatusEffects::~UViewModel_StatusEffects() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UViewModel_StatusEffects, GetActiveStatusEffects)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UViewModel_StatusEffects)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UViewModel_StatusEffects, GetActiveStatusEffects)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UViewModel_StatusEffects);
// End Class UViewModel_StatusEffects

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_StatusEffects_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewModel_StatusEffects, UViewModel_StatusEffects::StaticClass, TEXT("UViewModel_StatusEffects"), &Z_Registration_Info_UClass_UViewModel_StatusEffects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewModel_StatusEffects), 3705259754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_StatusEffects_h_1706734647(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_StatusEffects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_StatusEffects_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
