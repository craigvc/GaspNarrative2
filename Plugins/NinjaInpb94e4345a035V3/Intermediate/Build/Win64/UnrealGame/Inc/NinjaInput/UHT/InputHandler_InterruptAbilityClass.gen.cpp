// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_InterruptAbilityClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_InterruptAbilityClass() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityInterruption();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityClass();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_InterruptAbilityClass
void UInputHandler_InterruptAbilityClass::StaticRegisterNativesUInputHandler_InterruptAbilityClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_InterruptAbilityClass);
UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityClass_NoRegister()
{
	return UInputHandler_InterruptAbilityClass::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interrupts a Gameplay Ability by Class.\n */" },
		{ "DisplayName", "GAS: Interrupt Ability by Class" },
		{ "IncludePath", "InputHandlers/InputHandler_InterruptAbilityClass.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityClass.h" },
		{ "ToolTip", "Interrupts a Gameplay Ability by Class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Ability Interruption" },
		{ "Comment", "/** Gameplay Ability Class used to interrupt an ability. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_InterruptAbilityClass.h" },
		{ "ToolTip", "Gameplay Ability Class used to interrupt an ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_InterruptAbilityClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_InterruptAbilityClass, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::NewProp_AbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_AbilityInterruption,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::ClassParams = {
	&UInputHandler_InterruptAbilityClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_InterruptAbilityClass()
{
	if (!Z_Registration_Info_UClass_UInputHandler_InterruptAbilityClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_InterruptAbilityClass.OuterSingleton, Z_Construct_UClass_UInputHandler_InterruptAbilityClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_InterruptAbilityClass.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_InterruptAbilityClass>()
{
	return UInputHandler_InterruptAbilityClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_InterruptAbilityClass);
UInputHandler_InterruptAbilityClass::~UInputHandler_InterruptAbilityClass() {}
// End Class UInputHandler_InterruptAbilityClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_InterruptAbilityClass, UInputHandler_InterruptAbilityClass::StaticClass, TEXT("UInputHandler_InterruptAbilityClass"), &Z_Registration_Info_UClass_UInputHandler_InterruptAbilityClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_InterruptAbilityClass), 3049564221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityClass_h_973784544(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_InterruptAbilityClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
