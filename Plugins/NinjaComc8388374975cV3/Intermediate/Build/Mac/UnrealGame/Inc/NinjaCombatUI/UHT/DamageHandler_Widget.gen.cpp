// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatUI/Public/Damage/Handlers/DamageHandler_Widget.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageHandler_Widget() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UDamageHandler_Widget();
NINJACOMBATUI_API UClass* Z_Construct_UClass_UDamageHandler_Widget_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatUI();
// End Cross Module References

// Begin Class UDamageHandler_Widget
void UDamageHandler_Widget::StaticRegisterNativesUDamageHandler_Widget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageHandler_Widget);
UClass* Z_Construct_UClass_UDamageHandler_Widget_NoRegister()
{
	return UDamageHandler_Widget::StaticClass();
}
struct Z_Construct_UClass_UDamageHandler_Widget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Forwards the damage event to a widget component in the owner.\n *\n * It will expect to find one or more Ninja Combat Widget Components in the owner, by the provided Gameplay Tag.\n * For the components found, it will forward the Cue Parameters, applying any filter if necessary.\n */" },
		{ "DisplayName", "Widget Component" },
		{ "IncludePath", "Damage/Handlers/DamageHandler_Widget.h" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Widget.h" },
		{ "ToolTip", "Forwards the damage event to a widget component in the owner.\n\nIt will expect to find one or more Ninja Combat Widget Components in the owner, by the provided Gameplay Tag.\nFor the components found, it will forward the Cue Parameters, applying any filter if necessary." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComponentTag_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** Component Tag used to retrieve the proper Combat Widget Component. */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Widget.h" },
		{ "ToolTip", "Component Tag used to retrieve the proper Combat Widget Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyOnLocalInstigator_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * If set, only handles the event for the local Damage Instigator.\n\x09 * Useful for a health bar or other aspects that should only be seen by the instigator.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Widget.h" },
		{ "ToolTip", "If set, only handles the event for the local Damage Instigator.\nUseful for a health bar or other aspects that should only be seen by the instigator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFilterCues_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** If set to true, enables filtering of the Cues. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Widget.h" },
		{ "ToolTip", "If set to true, enables filtering of the Cues." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptedCues_MetaData[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/** Gameplay Cues accepted by this handler. */" },
		{ "EditCondition", "bFilterCues" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/Damage/Handlers/DamageHandler_Widget.h" },
		{ "ToolTip", "Gameplay Cues accepted by this handler." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetComponentTag;
	static void NewProp_bOnlyOnLocalInstigator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyOnLocalInstigator;
	static void NewProp_bFilterCues_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterCues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AcceptedCues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageHandler_Widget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_WidgetComponentTag = { "WidgetComponentTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageHandler_Widget, WidgetComponentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetComponentTag_MetaData), NewProp_WidgetComponentTag_MetaData) }; // 1298103297
void Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bOnlyOnLocalInstigator_SetBit(void* Obj)
{
	((UDamageHandler_Widget*)Obj)->bOnlyOnLocalInstigator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bOnlyOnLocalInstigator = { "bOnlyOnLocalInstigator", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageHandler_Widget), &Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bOnlyOnLocalInstigator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyOnLocalInstigator_MetaData), NewProp_bOnlyOnLocalInstigator_MetaData) };
void Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bFilterCues_SetBit(void* Obj)
{
	((UDamageHandler_Widget*)Obj)->bFilterCues = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bFilterCues = { "bFilterCues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDamageHandler_Widget), &Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bFilterCues_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFilterCues_MetaData), NewProp_bFilterCues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_AcceptedCues = { "AcceptedCues", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageHandler_Widget, AcceptedCues), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptedCues_MetaData), NewProp_AcceptedCues_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageHandler_Widget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_WidgetComponentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bOnlyOnLocalInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_bFilterCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageHandler_Widget_Statics::NewProp_AcceptedCues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Widget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageHandler_Widget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDamageHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Widget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageHandler_Widget_Statics::ClassParams = {
	&UDamageHandler_Widget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageHandler_Widget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Widget_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageHandler_Widget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageHandler_Widget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageHandler_Widget()
{
	if (!Z_Registration_Info_UClass_UDamageHandler_Widget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageHandler_Widget.OuterSingleton, Z_Construct_UClass_UDamageHandler_Widget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageHandler_Widget.OuterSingleton;
}
template<> NINJACOMBATUI_API UClass* StaticClass<UDamageHandler_Widget>()
{
	return UDamageHandler_Widget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageHandler_Widget);
UDamageHandler_Widget::~UDamageHandler_Widget() {}
// End Class UDamageHandler_Widget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_Damage_Handlers_DamageHandler_Widget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageHandler_Widget, UDamageHandler_Widget::StaticClass, TEXT("UDamageHandler_Widget"), &Z_Registration_Info_UClass_UDamageHandler_Widget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageHandler_Widget), 796208263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_Damage_Handlers_DamageHandler_Widget_h_1792919491(TEXT("/Script/NinjaCombatUI"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_Damage_Handlers_DamageHandler_Widget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_Damage_Handlers_DamageHandler_Widget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
