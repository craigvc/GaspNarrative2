// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryGameplay/Public/Animation/AnimNotify_SendEquipmentEvent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_SendEquipmentEvent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UAnimNotify_SendEquipmentEvent();
NINJAINVENTORYGAMEPLAY_API UClass* Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryGameplay();
// End Cross Module References

// Begin Class UAnimNotify_SendEquipmentEvent
void UAnimNotify_SendEquipmentEvent::StaticRegisterNativesUAnimNotify_SendEquipmentEvent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_SendEquipmentEvent);
UClass* Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_NoRegister()
{
	return UAnimNotify_SendEquipmentEvent::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sends an Equipment Gameplay Event.\n */" },
		{ "DisplayName", "Send Equipment Event" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_SendEquipmentEvent.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotify_SendEquipmentEvent.h" },
		{ "ToolTip", "Sends an Equipment Gameplay Event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Categories", "Inventory.Event" },
		{ "Category", "Notify: Send Equipment Event" },
		{ "Comment", "/** Tag representing the event, matching the ongoing gameplay ability. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotify_SendEquipmentEvent.h" },
		{ "ToolTip", "Tag representing the event, matching the ongoing gameplay ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentTags_MetaData[] = {
		{ "Category", "Notify: Send Equipment Event" },
		{ "Comment", "/**\n\x09 * All gameplay tags used to match with equipment that has been pre-selected in a State Ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotify_SendEquipmentEvent.h" },
		{ "ToolTip", "All gameplay tags used to match with equipment that has been pre-selected in a State Ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_SendEquipmentEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_SendEquipmentEvent, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::NewProp_EquipmentTags = { "EquipmentTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_SendEquipmentEvent, EquipmentTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentTags_MetaData), NewProp_EquipmentTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::NewProp_EquipmentTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryGameplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::ClassParams = {
	&UAnimNotify_SendEquipmentEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_SendEquipmentEvent()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_SendEquipmentEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_SendEquipmentEvent.OuterSingleton, Z_Construct_UClass_UAnimNotify_SendEquipmentEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_SendEquipmentEvent.OuterSingleton;
}
template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<UAnimNotify_SendEquipmentEvent>()
{
	return UAnimNotify_SendEquipmentEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_SendEquipmentEvent);
UAnimNotify_SendEquipmentEvent::~UAnimNotify_SendEquipmentEvent() {}
// End Class UAnimNotify_SendEquipmentEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotify_SendEquipmentEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_SendEquipmentEvent, UAnimNotify_SendEquipmentEvent::StaticClass, TEXT("UAnimNotify_SendEquipmentEvent"), &Z_Registration_Info_UClass_UAnimNotify_SendEquipmentEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_SendEquipmentEvent), 7078046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotify_SendEquipmentEvent_h_1518548428(TEXT("/Script/NinjaInventoryGameplay"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotify_SendEquipmentEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotify_SendEquipmentEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
