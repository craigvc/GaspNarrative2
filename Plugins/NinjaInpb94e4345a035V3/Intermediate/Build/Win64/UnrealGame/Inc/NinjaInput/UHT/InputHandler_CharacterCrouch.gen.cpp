// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_CharacterCrouch.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_CharacterCrouch() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_CharacterCrouch();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_CharacterCrouch_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_CharacterCrouch
void UInputHandler_CharacterCrouch::StaticRegisterNativesUInputHandler_CharacterCrouch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_CharacterCrouch);
UClass* Z_Construct_UClass_UInputHandler_CharacterCrouch_NoRegister()
{
	return UInputHandler_CharacterCrouch::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Replicates the original Crouch setup for Character owners.\n *\n * Avoid mixing default Character actions, such as this one, when you are using the Gameplay\n * Ability System and try to consolidate every ability to be triggered by GAS.\n */" },
		{ "DisplayName", "Character: Crouch" },
		{ "IncludePath", "InputHandlers/InputHandler_CharacterCrouch.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_CharacterCrouch.h" },
		{ "ToolTip", "Replicates the original Crouch setup for Character owners.\n\nAvoid mixing default Character actions, such as this one, when you are using the Gameplay\nAbility System and try to consolidate every ability to be triggered by GAS." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockCrouchTags_MetaData[] = {
		{ "Category", "Character Crouch" },
		{ "Comment", "/** Gameplay tags that, if present, will block the ability of crouching/un-crouching. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_CharacterCrouch.h" },
		{ "ToolTip", "Gameplay tags that, if present, will block the ability of crouching/un-crouching." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockCrouchTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_CharacterCrouch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::NewProp_BlockCrouchTags = { "BlockCrouchTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_CharacterCrouch, BlockCrouchTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockCrouchTags_MetaData), NewProp_BlockCrouchTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::NewProp_BlockCrouchTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaInputHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::ClassParams = {
	&UInputHandler_CharacterCrouch::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_CharacterCrouch()
{
	if (!Z_Registration_Info_UClass_UInputHandler_CharacterCrouch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_CharacterCrouch.OuterSingleton, Z_Construct_UClass_UInputHandler_CharacterCrouch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_CharacterCrouch.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_CharacterCrouch>()
{
	return UInputHandler_CharacterCrouch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_CharacterCrouch);
UInputHandler_CharacterCrouch::~UInputHandler_CharacterCrouch() {}
// End Class UInputHandler_CharacterCrouch

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterCrouch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_CharacterCrouch, UInputHandler_CharacterCrouch::StaticClass, TEXT("UInputHandler_CharacterCrouch"), &Z_Registration_Info_UClass_UInputHandler_CharacterCrouch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_CharacterCrouch), 2589037926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterCrouch_h_2390588363(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterCrouch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_CharacterCrouch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
