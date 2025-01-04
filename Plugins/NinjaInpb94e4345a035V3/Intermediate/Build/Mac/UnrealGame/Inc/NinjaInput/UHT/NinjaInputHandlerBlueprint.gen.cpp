// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInput/Public/NinjaInputHandlerBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaInputHandlerBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandlerBlueprint();
NINJAINPUT_API UClass* Z_Construct_UClass_UNinjaInputHandlerBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInput();
// End Cross Module References

// Begin Class UNinjaInputHandlerBlueprint
void UNinjaInputHandlerBlueprint::StaticRegisterNativesUNinjaInputHandlerBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaInputHandlerBlueprint);
UClass* Z_Construct_UClass_UNinjaInputHandlerBlueprint_NoRegister()
{
	return UNinjaInputHandlerBlueprint::StaticClass();
}
struct Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Input Handlers are used by the Ninja Input plugin to process incoming actions from the Enhanced Input.\n */" },
		{ "IncludePath", "NinjaInputHandlerBlueprint.h" },
		{ "ModuleRelativePath", "Public/NinjaInputHandlerBlueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Input Handlers are used by the Ninja Input plugin to process incoming actions from the Enhanced Input." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaInputHandlerBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics::ClassParams = {
	&UNinjaInputHandlerBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaInputHandlerBlueprint()
{
	if (!Z_Registration_Info_UClass_UNinjaInputHandlerBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaInputHandlerBlueprint.OuterSingleton, Z_Construct_UClass_UNinjaInputHandlerBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaInputHandlerBlueprint.OuterSingleton;
}
template<> NINJAINPUT_API UClass* StaticClass<UNinjaInputHandlerBlueprint>()
{
	return UNinjaInputHandlerBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaInputHandlerBlueprint);
UNinjaInputHandlerBlueprint::~UNinjaInputHandlerBlueprint() {}
// End Class UNinjaInputHandlerBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandlerBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaInputHandlerBlueprint, UNinjaInputHandlerBlueprint::StaticClass, TEXT("UNinjaInputHandlerBlueprint"), &Z_Registration_Info_UClass_UNinjaInputHandlerBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaInputHandlerBlueprint), 3573020022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandlerBlueprint_h_983046037(TEXT("/Script/NinjaInput"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandlerBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandlerBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
