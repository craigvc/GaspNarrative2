// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityInput() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityActivation();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInput();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityInput
void UInputHandler_AbilityInput::StaticRegisterNativesUInputHandler_AbilityInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityInput);
UClass* Z_Construct_UClass_UInputHandler_AbilityInput_NoRegister()
{
	return UInputHandler_AbilityInput::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers and interrupts Gameplay Abilities through their Input IDs.\n * \n * Tracks the Triggered event which will basically activate an ability, but it's also prepared to handle\n * the Completed and Cancelled events which in turn, will interrupt the ability.\n */" },
		{ "DisplayName", "GAS: Activate Ability by Input" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityInput.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityInput.h" },
		{ "ToolTip", "Triggers and interrupts Gameplay Abilities through their Input IDs.\n\nTracks the Triggered event which will basically activate an ability, but it's also prepared to handle\nthe Completed and Cancelled events which in turn, will interrupt the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/** Input ID to be sent to the Ability System Component. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityInput.h" },
		{ "ToolTip", "Input ID to be sent to the Ability System Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputHandler_AbilityInput_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_AbilityInput, InputID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputID_MetaData), NewProp_InputID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_AbilityInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityInput_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_AbilityActivation,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityInput_Statics::ClassParams = {
	&UInputHandler_AbilityInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_AbilityInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityInput_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityInput()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityInput.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityInput.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityInput>()
{
	return UInputHandler_AbilityInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityInput);
UInputHandler_AbilityInput::~UInputHandler_AbilityInput() {}
// End Class UInputHandler_AbilityInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityInput, UInputHandler_AbilityInput::StaticClass, TEXT("UInputHandler_AbilityInput"), &Z_Registration_Info_UClass_UInputHandler_AbilityInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityInput), 300389254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInput_h_876972759(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
