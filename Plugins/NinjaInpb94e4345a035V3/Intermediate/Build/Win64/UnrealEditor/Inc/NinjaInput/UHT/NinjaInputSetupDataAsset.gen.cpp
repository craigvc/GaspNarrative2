// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Data/NinjaInputSetupDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputSetupDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputSetupDataAsset
void UNinjaInputSetupDataAsset::StaticRegisterNativesUNinjaInputSetupDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputSetupDataAsset);
UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister()
{
	return UNinjaInputSetupDataAsset::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Centralized way to share input configurations between multiple pawns/characters/controllers.\n */" },
		{ "IncludePath", "Data/NinjaInputSetupDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/NinjaInputSetupDataAsset.h" },
		{ "ToolTip", "Centralized way to share input configurations between multiple pawns/characters/controllers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Input Setup" },
		{ "Comment", "/**\n     * Priority determined for this Input Mapping Context.\n     */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInputSetupDataAsset.h" },
		{ "ToolTip", "Priority determined for this Input Mapping Context." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input Setup" },
		{ "Comment", "/**\n     * Input Mapping Contexts added by this configuration.\n     */" },
		{ "ModuleRelativePath", "Public/Data/NinjaInputSetupDataAsset.h" },
		{ "ToolTip", "Input Mapping Contexts added by this configuration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandlers_MetaData[] = {
		{ "Category", "Input Setup" },
		{ "Comment", "/**\n     * All instances of Input Handlers relevant to this Input Mapping Context.\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/NinjaInputSetupDataAsset.h" },
		{ "ToolTip", "All instances of Input Handlers relevant to this Input Mapping Context." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHandlers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputHandlers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputSetupDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputSetupDataAsset, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputSetupDataAsset, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_InputHandlers_Inner = { "InputHandlers", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaInputHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_InputHandlers = { "InputHandlers", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputSetupDataAsset, InputHandlers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandlers_MetaData), NewProp_InputHandlers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_InputHandlers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::NewProp_InputHandlers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::ClassParams = {
	&UNinjaInputSetupDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset()
{
	if (!Z_Registration_Info_UClass_UNinjaInputSetupDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputSetupDataAsset.OuterSingleton, Z_Construct_UClass_UNinjaInputSetupDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputSetupDataAsset.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputSetupDataAsset>()
{
	return UNinjaInputSetupDataAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputSetupDataAsset);
UNinjaInputSetupDataAsset::~UNinjaInputSetupDataAsset() {}
// End Class UNinjaInputSetupDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Data_NinjaInputSetupDataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputSetupDataAsset, UNinjaInputSetupDataAsset::StaticClass, TEXT("UNinjaInputSetupDataAsset"), &Z_Registration_Info_UClass_UNinjaInputSetupDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputSetupDataAsset), 2204961125U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Data_NinjaInputSetupDataAsset_h_104771984(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Data_NinjaInputSetupDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Data_NinjaInputSetupDataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
