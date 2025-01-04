// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_InterruptAbilityTag.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_InterruptAbilityTag() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityTag();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityTag_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_InterruptAbilityTag
void UInputHandler_InterruptAbilityTag::StaticRegisterNativesUInputHandler_InterruptAbilityTag()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_InterruptAbilityTag);
UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityTag_NoRegister()
{
	return UInputHandler_InterruptAbilityTag::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interrupts a Gameplay Ability by gameplay tags.\n */" },
		{ "DisplayName", "GAS: Interrupt Ability by Tags" },
		{ "IncludePath", "InputHandlers/InputHandler_InterruptAbilityTag.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityTag.h" },
		{ "ToolTip", "Interrupts a Gameplay Ability by gameplay tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[] = {
		{ "Category", "Ability Interruption" },
		{ "Comment", "/** Gameplay tags used to trigger one or many abilities. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityTag.h" },
		{ "ToolTip", "Gameplay tags used to trigger one or many abilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelFilterTags_MetaData[] = {
		{ "Category", "Ability Interruption" },
		{ "Comment", "/**\n     * Tags used to filter-out abilities that should not be cancelled.\n     */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityTag.h" },
		{ "ToolTip", "Tags used to filter-out abilities that should not be cancelled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelFilterTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_InterruptAbilityTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_InterruptAbilityTag, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTags_MetaData), NewProp_AbilityTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::NewProp_CancelFilterTags = { "CancelFilterTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_InterruptAbilityTag, CancelFilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelFilterTags_MetaData), NewProp_CancelFilterTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::NewProp_CancelFilterTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_AbilityInterruption,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::ClassParams = {
	&UInputHandler_InterruptAbilityTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityTag()
{
	if (!Z_Registration_Info_UClass_UInputHandler_InterruptAbilityTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_InterruptAbilityTag.OuterSingleton, Z_Construct_UClass_UInputHandler_InterruptAbilityTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_InterruptAbilityTag.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_InterruptAbilityTag>()
{
	return UInputHandler_InterruptAbilityTag::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_InterruptAbilityTag);
UInputHandler_InterruptAbilityTag::~UInputHandler_InterruptAbilityTag() {}
// End Class UInputHandler_InterruptAbilityTag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityTag_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_InterruptAbilityTag, UInputHandler_InterruptAbilityTag::StaticClass, TEXT("UInputHandler_InterruptAbilityTag"), &Z_Registration_Info_UClass_UInputHandler_InterruptAbilityTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_InterruptAbilityTag), 2056666655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityTag_h_2849610234(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityTag_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
