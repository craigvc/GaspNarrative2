// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/InputHandlers/InputHandler_AbilityClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputHandler_AbilityClass() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityActivation();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityClass();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputHandler_AbilityClass_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UInputHandler_AbilityClass
void UInputHandler_AbilityClass::StaticRegisterNativesUInputHandler_AbilityClass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputHandler_AbilityClass);
UClass* Z_Construct_UClass_UInputHandler_AbilityClass_NoRegister()
{
	return UInputHandler_AbilityClass::StaticClass();
}
struct Z_Construct_UClass_UInputHandler_AbilityClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Triggers and interrupts Gameplay Abilities targeted by their class definition.\n *\n * Tracks the Triggered event which will basically activate an ability, but it's also prepared to handle\n * the Completed and Cancelled events which in turn, will interrupt the ability.\n */" },
		{ "DisplayName", "GAS: Activate Ability by Class" },
		{ "IncludePath", "InputHandlers/InputHandler_AbilityClass.h" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityClass.h" },
		{ "ToolTip", "Triggers and interrupts Gameplay Abilities targeted by their class definition.\n\nTracks the Triggered event which will basically activate an ability, but it's also prepared to handle\nthe Completed and Cancelled events which in turn, will interrupt the ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "Category", "Ability Activation" },
		{ "Comment", "/** Gameplay Ability class used to trigger an ability. */" },
		{ "ModuleRelativePath", "Public/InputHandlers/InputHandler_AbilityClass.h" },
		{ "ToolTip", "Gameplay Ability class used to trigger an ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputHandler_AbilityClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInputHandler_AbilityClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputHandler_AbilityClass, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputHandler_AbilityClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputHandler_AbilityClass_Statics::NewProp_AbilityClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputHandler_AbilityClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputHandler_AbilityActivation,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputHandler_AbilityClass_Statics::ClassParams = {
	&UInputHandler_AbilityClass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputHandler_AbilityClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityClass_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputHandler_AbilityClass_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputHandler_AbilityClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputHandler_AbilityClass()
{
	if (!Z_Registration_Info_UClass_UInputHandler_AbilityClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputHandler_AbilityClass.OuterSingleton, Z_Construct_UClass_UInputHandler_AbilityClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputHandler_AbilityClass.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UInputHandler_AbilityClass>()
{
	return UInputHandler_AbilityClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputHandler_AbilityClass);
UInputHandler_AbilityClass::~UInputHandler_AbilityClass() {}
// End Class UInputHandler_AbilityClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputHandler_AbilityClass, UInputHandler_AbilityClass::StaticClass, TEXT("UInputHandler_AbilityClass"), &Z_Registration_Info_UClass_UInputHandler_AbilityClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputHandler_AbilityClass), 4041962634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityClass_h_329008706(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_AbilityClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
