// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_InterruptAbilityInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_InterruptAbilityInput() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityInput();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityInput_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_InterruptAbilityInput
void UInputHandler_InterruptAbilityInput::StaticRegisterNativesUInputHandler_InterruptAbilityInput()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_InterruptAbilityInput);
UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityInput_NoRegister()
{
	return UInputHandler_InterruptAbilityInput::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interrupts a Gameplay Ability by Input ID.\n */" },
		{ "DisplayName", "GAS: Interrupt Ability by Input" },
		{ "IncludePath", "InputHandlers/InputHandler_InterruptAbilityInput.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityInput.h" },
		{ "ToolTip", "Interrupts a Gameplay Ability by Input ID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[] = {
		{ "Category", "Ability Interruption" },
		{ "Comment", "/** Input ID to be sent to the Ability System Component. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityInput.h" },
		{ "ToolTip", "Input ID to be sent to the Ability System Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_InterruptAbilityInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_InterruptAbilityInput, InputID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputID_MetaData), NewProp_InputID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::NewProp_InputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_AbilityInterruption,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::ClassParams = {
	&UInputHandler_InterruptAbilityInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityInput()
{
	if (!Z_Registration_Info_UClass_UInputHandler_InterruptAbilityInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_InterruptAbilityInput.OuterSingleton, Z_Construct_UClass_UInputHandler_InterruptAbilityInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_InterruptAbilityInput.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_InterruptAbilityInput>()
{
	return UInputHandler_InterruptAbilityInput::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_InterruptAbilityInput);
UInputHandler_InterruptAbilityInput::~UInputHandler_InterruptAbilityInput() {}
// End Class UInputHandler_InterruptAbilityInput

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityInput_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_InterruptAbilityInput, UInputHandler_InterruptAbilityInput::StaticClass, TEXT("UInputHandler_InterruptAbilityInput"), &Z_Registration_Info_UClass_UInputHandler_InterruptAbilityInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_InterruptAbilityInput), 3011924923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityInput_h_1549136949(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityInput_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
