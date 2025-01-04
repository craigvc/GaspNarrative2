// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Types/FBufferedInputCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBufferedInputCommand() {}

// Begin Cross Module References
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandler_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputCommand();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin ScriptStruct FBufferedInputCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BufferedInputCommand;
class UScriptStruct* FBufferedInputCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BufferedInputCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BufferedInputCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBufferedInputCommand, (UObject*)Z_Construct_UPackage__Script_NinjaInput(), TEXT("BufferedInputCommand"));
	}
	return Z_Registration_Info_UScriptStruct_BufferedInputCommand.OuterSingleton;
}
template<> NINJAINPUT_API UScriptStruct* StaticStruct<FBufferedInputCommand>()
{
	return FBufferedInputCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBufferedInputCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a buffered command that may be executed later.\n */" },
		{ "HasNativeBreak", "/Script/NinjaInput.NinjaInputFunctionLibrary.BreakBufferedInputCommand" },
		{ "HasNativeMake", "/Script/NinjaInput.NinjaInputFunctionLibrary.MakeBufferedInputCommand" },
		{ "ModuleRelativePath", "Public/Types/FBufferedInputCommand.h" },
		{ "ToolTip", "Represents a buffered command that may be executed later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "Comment", "/** The manager that registered this command. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FBufferedInputCommand.h" },
		{ "ToolTip", "The manager that registered this command." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handler_MetaData[] = {
		{ "Comment", "/** Handler that must be executed. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/FBufferedInputCommand.h" },
		{ "ToolTip", "Handler that must be executed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Handler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBufferedInputCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBufferedInputCommand, Source), Z_Construct_UClass_UNinjaInputManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBufferedInputCommand, Handler), Z_Construct_UClass_UNinjaInputHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handler_MetaData), NewProp_Handler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::NewProp_Handler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
	nullptr,
	&NewStructOps,
	"BufferedInputCommand",
	Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::PropPointers),
	sizeof(FBufferedInputCommand),
	alignof(FBufferedInputCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputCommand()
{
	if (!Z_Registration_Info_UScriptStruct_BufferedInputCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BufferedInputCommand.InnerSingleton, Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BufferedInputCommand.InnerSingleton;
}
// End ScriptStruct FBufferedInputCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FBufferedInputCommand_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBufferedInputCommand::StaticStruct, Z_Construct_UScriptStruct_FBufferedInputCommand_Statics::NewStructOps, TEXT("BufferedInputCommand"), &Z_Registration_Info_UScriptStruct_BufferedInputCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBufferedInputCommand), 4108219980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FBufferedInputCommand_h_1041314934(TEXT("/Script/NinjaInput"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FBufferedInputCommand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_FBufferedInputCommand_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
