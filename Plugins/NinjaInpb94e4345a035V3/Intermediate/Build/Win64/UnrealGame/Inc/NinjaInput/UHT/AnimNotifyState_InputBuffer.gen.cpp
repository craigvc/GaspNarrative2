// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/Animation/AnimNotifyState_InputBuffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_InputBuffer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
NINJAINPUT_API UClass* Z_Construct_UClass_UAnimNotifyState_InputBuffer();
NINJAINPUT_API UClass* Z_Construct_UClass_UAnimNotifyState_InputBuffer_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UAnimNotifyState_InputBuffer
void UAnimNotifyState_InputBuffer::StaticRegisterNativesUAnimNotifyState_InputBuffer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_InputBuffer);
UClass* Z_Construct_UClass_UAnimNotifyState_InputBuffer_NoRegister()
{
	return UAnimNotifyState_InputBuffer::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Enables the all Input Buffers available to the owner, during the notify duration.\n */" },
		{ "DisplayName", "Input Buffer" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifyState_InputBuffer.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyState_InputBuffer.h" },
		{ "ToolTip", "Enables the all Input Buffers available to the owner, during the notify duration." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_InputBuffer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics::ClassParams = {
	&UAnimNotifyState_InputBuffer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_InputBuffer()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_InputBuffer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_InputBuffer.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_InputBuffer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_InputBuffer.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UAnimNotifyState_InputBuffer>()
{
	return UAnimNotifyState_InputBuffer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_InputBuffer);
UAnimNotifyState_InputBuffer::~UAnimNotifyState_InputBuffer() {}
// End Class UAnimNotifyState_InputBuffer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Animation_AnimNotifyState_InputBuffer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_InputBuffer, UAnimNotifyState_InputBuffer::StaticClass, TEXT("UAnimNotifyState_InputBuffer"), &Z_Registration_Info_UClass_UAnimNotifyState_InputBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_InputBuffer), 2225505004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Animation_AnimNotifyState_InputBuffer_h_31141771(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Animation_AnimNotifyState_InputBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Animation_AnimNotifyState_InputBuffer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
