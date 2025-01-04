// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Types/FProcessedBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFProcessedBinding() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FProcessedBinding();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin ScriptStruct FProcessedBinding
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcessedBinding;
class UScriptStruct* FProcessedBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessedBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcessedBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcessedBinding, (UObject*)Z_Construct_UPackage__Script_NinjaInput(), TEXT("ProcessedBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ProcessedBinding.OuterSingleton;
}
template<> NINJAINPUT_API UScriptStruct* StaticStruct<FProcessedBinding>()
{
	return FProcessedBinding::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProcessedBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores a registered binding that can be accessed later.\n */" },
		{ "ModuleRelativePath", "Public/Types/FProcessedBinding.h" },
		{ "ToolTip", "Stores a registered binding that can be accessed later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Comment", "/** Input Action that this binding is observing. */" },
		{ "ModuleRelativePath", "Public/Types/FProcessedBinding.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Input Action that this binding is observing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcessedBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProcessedBinding_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProcessedBinding, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcessedBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcessedBinding_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessedBinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcessedBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
	nullptr,
	&NewStructOps,
	"ProcessedBinding",
	Z_Construct_UScriptStruct_FProcessedBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessedBinding_Statics::PropPointers),
	sizeof(FProcessedBinding),
	alignof(FProcessedBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcessedBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProcessedBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProcessedBinding()
{
	if (!Z_Registration_Info_UScriptStruct_ProcessedBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcessedBinding.InnerSingleton, Z_Construct_UScriptStruct_FProcessedBinding_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProcessedBinding.InnerSingleton;
}
// End ScriptStruct FProcessedBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedBinding_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProcessedBinding::StaticStruct, Z_Construct_UScriptStruct_FProcessedBinding_Statics::NewStructOps, TEXT("ProcessedBinding"), &Z_Registration_Info_UScriptStruct_ProcessedBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcessedBinding), 4247583361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedBinding_h_2626637689(TEXT("/Script/NinjaInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FProcessedBinding_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
