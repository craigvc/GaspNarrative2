// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityTag.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityTag() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityActivation();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityTag_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityTag
void UInputHandler_AbilityTag::StaticRegisterNativesUInputHandler_AbilityTag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityTag);
UClass* Z_Construct_UClass_UInputHandler_AbilityTag_NoRegister()
{
	return UInputHandler_AbilityTag::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers and interrupts Gameplay Abilities using a Gameplay Tag.\n *\n * Tracks the Triggered event which will basically activate an ability, but it's also prepared to handle\n * the Completed and Cancelled events which in turn, will interrupt the ability.\n */" },
		{ "DisplayName", "GAS: Activate Ability by Tags" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityTag.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityTag.h" },
		{ "ToolTip", "Triggers and interrupts Gameplay Abilities using a Gameplay Tag.\n\nTracks the Triggered event which will basically activate an ability, but it's also prepared to handle\nthe Completed and Cancelled events which in turn, will interrupt the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/** Gameplay tags used to trigger one or many abilities. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityTag.h" },
		{ "ToolTip", "Gameplay tags used to trigger one or many abilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelFilterTags_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/**\n\x09 * Tags used to filter-out abilities that should not be cancelled.\n\x09 * \n\x09 * These are relevant in two scenarios:\n\x09 *\n\x09 * 1. Toggling is enabled and the ability is being interrupted.\n\x09 * 2. Tracking the Completed or Cancelled states, which will interrupt the ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityTag.h" },
		{ "ToolTip", "Tags used to filter-out abilities that should not be cancelled.\n\nThese are relevant in two scenarios:\n\n1. Toggling is enabled and the ability is being interrupted.\n2. Tracking the Completed or Cancelled states, which will interrupt the ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelFilterTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_AbilityTag_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_AbilityTag, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTags_MetaData), NewProp_AbilityTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_AbilityTag_Statics::NewProp_CancelFilterTags = { "CancelFilterTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_AbilityTag, CancelFilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelFilterTags_MetaData), NewProp_CancelFilterTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_AbilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityTag_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityTag_Statics::NewProp_CancelFilterTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_AbilityActivation,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityTag_Statics::ClassParams = {
	&UInputHandler_AbilityTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_AbilityTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityTag_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityTag()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityTag.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityTag.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityTag>()
{
	return UInputHandler_AbilityTag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityTag);
UInputHandler_AbilityTag::~UInputHandler_AbilityTag() {}
// End Class UInputHandler_AbilityTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityTag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityTag, UInputHandler_AbilityTag::StaticClass, TEXT("UInputHandler_AbilityTag"), &Z_Registration_Info_UClass_UInputHandler_AbilityTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityTag), 2008309353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityTag_h_1719235528(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityTag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
