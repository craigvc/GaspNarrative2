// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Types/FProcessedInputSetup.h"
#include "NinjaInput/Public/Types/FProcessedBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFProcessedInputSetup() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FProcessedBinding();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FProcessedInputSetup();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin ScriptStruct FProcessedInputSetup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcessedInputSetup;
class UScriptStruct* FProcessedInputSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessedInputSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcessedInputSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessedInputSetup, (UObject*)Z_Construct_UPackage__Script_NinjaInput(), TEXT("ProcessedInputSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ProcessedInputSetup.OuterSingleton;
}
template<> NINJAINPUT_API UScriptStruct* StaticStruct<FProcessedInputSetup>()
{
	return FProcessedInputSetup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProcessedInputSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a fully processed Input Setup.\n */" },
		{ "ModuleRelativePath", "Public/Types/FProcessedInputSetup.h" },
		{ "ToolTip", "Information about a fully processed Input Setup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "Comment", "/** Data Asset that has been processed. */" },
		{ "ModuleRelativePath", "Public/Types/FProcessedInputSetup.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Data Asset that has been processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessedBindings_MetaData[] = {
		{ "Comment", "/** All bindings created for this setup. */" },
		{ "ModuleRelativePath", "Public/Types/FProcessedInputSetup.h" },
		{ "ToolTip", "All bindings created for this setup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProcessedBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcessedBindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessedInputSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessedInputSetup, SourceData), Z_Construct_UClass_UNinjaInputSetupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewProp_ProcessedBindings_Inner = { "ProcessedBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProcessedBinding, METADATA_PARAMS(0, nullptr) }; // 4247583361
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewProp_ProcessedBindings = { "ProcessedBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessedInputSetup, ProcessedBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessedBindings_MetaData), NewProp_ProcessedBindings_MetaData) }; // 4247583361
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewProp_SourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewProp_ProcessedBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewProp_ProcessedBindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
	nullptr,
	&NewStructOps,
	"ProcessedInputSetup",
	Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::PropPointers),
	sizeof(FProcessedInputSetup),
	alignof(FProcessedInputSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProcessedInputSetup()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessedInputSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcessedInputSetup.InnerSingleton, Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProcessedInputSetup.InnerSingleton;
}
// End ScriptStruct FProcessedInputSetup

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedInputSetup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProcessedInputSetup::StaticStruct, Z_Construct_UScriptStruct_FProcessedInputSetup_Statics::NewStructOps, TEXT("ProcessedInputSetup"), &Z_Registration_Info_UScriptStruct_ProcessedInputSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcessedInputSetup), 1038581348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedInputSetup_h_1771703196(TEXT("/Script/NinjaInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedInputSetup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedInputSetup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
