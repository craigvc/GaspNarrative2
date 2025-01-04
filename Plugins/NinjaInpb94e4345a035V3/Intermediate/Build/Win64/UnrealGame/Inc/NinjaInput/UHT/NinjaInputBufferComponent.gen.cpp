// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Components/NinjaInputBufferComponent.h"
#include "NinjaInput/Public/Types/FBufferedInputCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputBufferComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UInputBufferInterface_NoRegister();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputBufferComponent();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputBufferComponent_NoRegister();
NINJAINPUT_API UEnum* Z_Construct_UEnum_NinjaInput_EInputBufferMode();
NINJAINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FBufferedInputCommand();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputBufferComponent Function CanAddToBuffer
struct Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics
{
	struct NinjaInputBufferComponent_eventCanAddToBuffer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Buffer Component" },
		{ "Comment", "/**\n     * Helper method to determine if entries can be added to the buffer, based on mode/current commands.\n     *\n     * @return\n     *      A boolean value informing if the Buffer is currently usable. This considers both the\n     *      Buffer state and also the Input Buffer Mode currently in use.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputBufferComponent.h" },
		{ "ToolTip", "Helper method to determine if entries can be added to the buffer, based on mode/current commands.\n\n@return\n     A boolean value informing if the Buffer is currently usable. This considers both the\n     Buffer state and also the Input Buffer Mode currently in use." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaInputBufferComponent_eventCanAddToBuffer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaInputBufferComponent_eventCanAddToBuffer_Parms), &Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputBufferComponent, nullptr, "CanAddToBuffer", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::NinjaInputBufferComponent_eventCanAddToBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::NinjaInputBufferComponent_eventCanAddToBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputBufferComponent::execCanAddToBuffer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanAddToBuffer();
	P_NATIVE_END;
}
// End Class UNinjaInputBufferComponent Function CanAddToBuffer

// Begin Class UNinjaInputBufferComponent Function GetInputBufferComponent
struct Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics
{
	struct NinjaInputBufferComponent_eventGetInputBufferComponent_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Input|Input Buffer Component" },
		{ "Comment", "/**\n     * Provides the Input Buffer enabled for this component's owner.\n     *\n     * @return\n     *      The Input Buffer enabled for the current owner. It may be null in case no buffers\n     *      were configured and the Main Input Manager Component's buffer is disabled. \n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputBufferComponent.h" },
		{ "ToolTip", "Provides the Input Buffer enabled for this component's owner.\n\n@return\n     The Input Buffer enabled for the current owner. It may be null in case no buffers\n     were configured and the Main Input Manager Component's buffer is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaInputBufferComponent_eventGetInputBufferComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaInputBufferComponent, nullptr, "GetInputBufferComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::NinjaInputBufferComponent_eventGetInputBufferComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::NinjaInputBufferComponent_eventGetInputBufferComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaInputBufferComponent::execGetInputBufferComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetInputBufferComponent();
	P_NATIVE_END;
}
// End Class UNinjaInputBufferComponent Function GetInputBufferComponent

// Begin Class UNinjaInputBufferComponent
void UNinjaInputBufferComponent::StaticRegisterNativesUNinjaInputBufferComponent()
{
	UClass* Class = UNinjaInputBufferComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanAddToBuffer", &UNinjaInputBufferComponent::execCanAddToBuffer },
		{ "GetInputBufferComponent", &UNinjaInputBufferComponent::execGetInputBufferComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputBufferComponent);
UClass* Z_Construct_UClass_UNinjaInputBufferComponent_NoRegister()
{
	return UNinjaInputBufferComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputBufferComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaInput" },
		{ "Comment", "/**\n * Base implementation for an Input Buffer.\n *\n * Not only serves as a base implementation for the Buffer Interface, but also provides some\n * support methods that can be useful for most implementations.\n */" },
		{ "IncludePath", "Components/NinjaInputBufferComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputBufferComponent.h" },
		{ "ToolTip", "Base implementation for an Input Buffer.\n\nNot only serves as a base implementation for the Buffer Interface, but also provides some\nsupport methods that can be useful for most implementations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferedCommands_MetaData[] = {
		{ "Comment", "/** List of buffered inputs to be released later. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputBufferComponent.h" },
		{ "ToolTip", "List of buffered inputs to be released later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBufferMode_MetaData[] = {
		{ "Category", "Input Buffer" },
		{ "Comment", "/**\n     * Determines how the Input Buffer will operate.\n     */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputBufferComponent.h" },
		{ "ToolTip", "Determines how the Input Buffer will operate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingInputBuffer_MetaData[] = {
		{ "Comment", "/** Informs the current state of the Input Buffer. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaInputBufferComponent.h" },
		{ "ToolTip", "Informs the current state of the Input Buffer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BufferedCommands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferedCommands;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputBufferMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputBufferMode;
	static void NewProp_bUsingInputBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingInputBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaInputBufferComponent_CanAddToBuffer, "CanAddToBuffer" }, // 1637456151
		{ &Z_Construct_UFunction_UNinjaInputBufferComponent_GetInputBufferComponent, "GetInputBufferComponent" }, // 4068936649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputBufferComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_BufferedCommands_Inner = { "BufferedCommands", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBufferedInputCommand, METADATA_PARAMS(0, nullptr) }; // 4108219980
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_BufferedCommands = { "BufferedCommands", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputBufferComponent, BufferedCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferedCommands_MetaData), NewProp_BufferedCommands_MetaData) }; // 4108219980
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_InputBufferMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_InputBufferMode = { "InputBufferMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaInputBufferComponent, InputBufferMode), Z_Construct_UEnum_NinjaInput_EInputBufferMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBufferMode_MetaData), NewProp_InputBufferMode_MetaData) }; // 242582671
void Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_bUsingInputBuffer_SetBit(void* Obj)
{
	((UNinjaInputBufferComponent*)Obj)->bUsingInputBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_bUsingInputBuffer = { "bUsingInputBuffer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaInputBufferComponent), &Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_bUsingInputBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingInputBuffer_MetaData), NewProp_bUsingInputBuffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaInputBufferComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_BufferedCommands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_BufferedCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_InputBufferMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_InputBufferMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaInputBufferComponent_Statics::NewProp_bUsingInputBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputBufferComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaInputBufferComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputBufferComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInputBufferInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaInputBufferComponent, IInputBufferInterface), false },  // 634529503
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputBufferComponent_Statics::ClassParams = {
	&UNinjaInputBufferComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaInputBufferComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputBufferComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputBufferComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputBufferComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputBufferComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaInputBufferComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputBufferComponent.OuterSingleton, Z_Construct_UClass_UNinjaInputBufferComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputBufferComponent.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputBufferComponent>()
{
	return UNinjaInputBufferComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputBufferComponent);
UNinjaInputBufferComponent::~UNinjaInputBufferComponent() {}
// End Class UNinjaInputBufferComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputBufferComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputBufferComponent, UNinjaInputBufferComponent::StaticClass, TEXT("UNinjaInputBufferComponent"), &Z_Registration_Info_UClass_UNinjaInputBufferComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputBufferComponent), 278687397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputBufferComponent_h_2068942337(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputBufferComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputBufferComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
