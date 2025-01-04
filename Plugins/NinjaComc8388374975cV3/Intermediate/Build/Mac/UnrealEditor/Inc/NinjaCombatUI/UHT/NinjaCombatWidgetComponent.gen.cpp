// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/UI/Components/NinjaCombatWidgetComponent.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatWidgetComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatWidgetComponent();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UNinjaCombatWidgetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UNinjaCombatWidgetComponent Function HandleGameplayCue
struct Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics
{
	struct NinjaCombatWidgetComponent_eventHandleGameplayCue_Parms
	{
		FGameplayCueParameters CueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Widget Component" },
		{ "Comment", "/**\n\x09 * Handles a Gameplay Cue. Useful for reacting to damage, such as displaying a health bar.\n\x09 *\n\x09 * You can call this from your own Damage Handling pipeline, but it's recommended to use\n\x09 * the provided Damage Handlers provided by the system.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Components/NinjaCombatWidgetComponent.h" },
		{ "ToolTip", "Handles a Gameplay Cue. Useful for reacting to damage, such as displaying a health bar.\n\nYou can call this from your own Damage Handling pipeline, but it's recommended to use\nthe provided Damage Handlers provided by the system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::NewProp_CueParameters = { "CueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWidgetComponent_eventHandleGameplayCue_Parms, CueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CueParameters_MetaData), NewProp_CueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::NewProp_CueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWidgetComponent, nullptr, "HandleGameplayCue", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::NinjaCombatWidgetComponent_eventHandleGameplayCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::NinjaCombatWidgetComponent_eventHandleGameplayCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWidgetComponent::execHandleGameplayCue)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_CueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGameplayCue(Z_Param_Out_CueParameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatWidgetComponent Function HandleGameplayCue

// Begin Class UNinjaCombatWidgetComponent Function SetCombatTarget
struct Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Sets the owner as the combat target for the current widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/Components/NinjaCombatWidgetComponent.h" },
		{ "ToolTip", "Sets the owner as the combat target for the current widget." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatWidgetComponent, nullptr, "SetCombatTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatWidgetComponent::execSetCombatTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCombatTarget();
	P_NATIVE_END;
}
// End Class UNinjaCombatWidgetComponent Function SetCombatTarget

// Begin Class UNinjaCombatWidgetComponent
void UNinjaCombatWidgetComponent::StaticRegisterNativesUNinjaCombatWidgetComponent()
{
	UClass* Class = UNinjaCombatWidgetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleGameplayCue", &UNinjaCombatWidgetComponent::execHandleGameplayCue },
		{ "SetCombatTarget", &UNinjaCombatWidgetComponent::execSetCombatTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatWidgetComponent);
UClass* Z_Construct_UClass_UNinjaCombatWidgetComponent_NoRegister()
{
	return UNinjaCombatWidgetComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/**\n * Widget Component that will properly set the owner for widgets implementing the proper interface.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UI/Components/NinjaCombatWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/Components/NinjaCombatWidgetComponent.h" },
		{ "ToolTip", "Widget Component that will properly set the owner for widgets implementing the proper interface." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatWidgetComponent_HandleGameplayCue, "HandleGameplayCue" }, // 371942028
		{ &Z_Construct_UFunction_UNinjaCombatWidgetComponent_SetCombatTarget, "SetCombatTarget" }, // 575580333
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics::ClassParams = {
	&UNinjaCombatWidgetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatWidgetComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatWidgetComponent.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UNinjaCombatWidgetComponent>()
{
	return UNinjaCombatWidgetComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatWidgetComponent);
UNinjaCombatWidgetComponent::~UNinjaCombatWidgetComponent() {}
// End Class UNinjaCombatWidgetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Components_NinjaCombatWidgetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatWidgetComponent, UNinjaCombatWidgetComponent::StaticClass, TEXT("UNinjaCombatWidgetComponent"), &Z_Registration_Info_UClass_UNinjaCombatWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatWidgetComponent), 3528185367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Components_NinjaCombatWidgetComponent_h_3710389613(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Components_NinjaCombatWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Components_NinjaCombatWidgetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
