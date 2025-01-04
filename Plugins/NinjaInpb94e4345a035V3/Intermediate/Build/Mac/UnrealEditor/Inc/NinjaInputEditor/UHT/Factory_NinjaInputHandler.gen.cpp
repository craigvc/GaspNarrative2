// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInputEditor/Public/Factories/Factory_NinjaInputHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory_NinjaInputHandler() {}

// Begin Cross Module References
NINJAINPUTEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaInputHandler();
NINJAINPUTEDITOR_API UClass* Z_Construct_UClass_UFactory_NinjaInputHandler_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_NinjaInputEditor();
// End Cross Module References

// Begin Class UFactory_NinjaInputHandler
void UFactory_NinjaInputHandler::StaticRegisterNativesUFactory_NinjaInputHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory_NinjaInputHandler);
UClass* Z_Construct_UClass_UFactory_NinjaInputHandler_NoRegister()
{
	return UFactory_NinjaInputHandler::StaticClass();
}
struct Z_Construct_UClass_UFactory_NinjaInputHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/Factory_NinjaInputHandler.h" },
		{ "ModuleRelativePath", "Public/Factories/Factory_NinjaInputHandler.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory_NinjaInputHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFactory_NinjaInputHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInputEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaInputHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_NinjaInputHandler_Statics::ClassParams = {
	&UFactory_NinjaInputHandler::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_NinjaInputHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UFactory_NinjaInputHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFactory_NinjaInputHandler()
{
	if (!Z_Registration_Info_UClass_UFactory_NinjaInputHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory_NinjaInputHandler.OuterSingleton, Z_Construct_UClass_UFactory_NinjaInputHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFactory_NinjaInputHandler.OuterSingleton;
}
template<> NINJAINPUTEDITOR_API UClass* StaticClass<UFactory_NinjaInputHandler>()
{
	return UFactory_NinjaInputHandler::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory_NinjaInputHandler);
UFactory_NinjaInputHandler::~UFactory_NinjaInputHandler() {}
// End Class UFactory_NinjaInputHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputEditor_Public_Factories_Factory_NinjaInputHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFactory_NinjaInputHandler, UFactory_NinjaInputHandler::StaticClass, TEXT("UFactory_NinjaInputHandler"), &Z_Registration_Info_UClass_UFactory_NinjaInputHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory_NinjaInputHandler), 2730499167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputEditor_Public_Factories_Factory_NinjaInputHandler_h_3541547695(TEXT("/Script/NinjaInputEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputEditor_Public_Factories_Factory_NinjaInputHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInputEditor_Public_Factories_Factory_NinjaInputHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
