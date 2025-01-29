// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenalEditor/Public/NavigatorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigatorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UNavigatorFunctionLibrary();
NARRATIVEARSENALEDITOR_API UClass* Z_Construct_UClass_UNavigatorFunctionLibrary_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTexture2DFactoryNew_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenalEditor();
// End Cross Module References

// Begin Class UNavigatorFunctionLibrary Function GetTexture2DFactory
#if WITH_EDITOR
struct Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics
{
	struct NavigatorFunctionLibrary_eventGetTexture2DFactory_Parms
	{
		UTexture2DFactoryNew* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigator Function Library" },
		{ "ModuleRelativePath", "Public/NavigatorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigatorFunctionLibrary_eventGetTexture2DFactory_Parms, ReturnValue), Z_Construct_UClass_UTexture2DFactoryNew_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigatorFunctionLibrary, nullptr, "GetTexture2DFactory", nullptr, nullptr, Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::NavigatorFunctionLibrary_eventGetTexture2DFactory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x34042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::NavigatorFunctionLibrary_eventGetTexture2DFactory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UNavigatorFunctionLibrary::execGetTexture2DFactory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2DFactoryNew**)Z_Param__Result=UNavigatorFunctionLibrary::GetTexture2DFactory();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UNavigatorFunctionLibrary Function GetTexture2DFactory

// Begin Class UNavigatorFunctionLibrary
void UNavigatorFunctionLibrary::StaticRegisterNativesUNavigatorFunctionLibrary()
{
#if WITH_EDITOR
	UClass* Class = UNavigatorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTexture2DFactory", &UNavigatorFunctionLibrary::execGetTexture2DFactory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigatorFunctionLibrary);
UClass* Z_Construct_UClass_UNavigatorFunctionLibrary_NoRegister()
{
	return UNavigatorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNavigatorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavigatorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NavigatorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigatorFunctionLibrary_GetTexture2DFactory, "GetTexture2DFactory" }, // 1946824795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigatorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigatorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenalEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigatorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigatorFunctionLibrary_Statics::ClassParams = {
	&UNavigatorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigatorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigatorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigatorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNavigatorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigatorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNavigatorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigatorFunctionLibrary.OuterSingleton;
}
template<> NARRATIVEARSENALEDITOR_API UClass* StaticClass<UNavigatorFunctionLibrary>()
{
	return UNavigatorFunctionLibrary::StaticClass();
}
UNavigatorFunctionLibrary::UNavigatorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigatorFunctionLibrary);
UNavigatorFunctionLibrary::~UNavigatorFunctionLibrary() {}
// End Class UNavigatorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_NavigatorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigatorFunctionLibrary, UNavigatorFunctionLibrary::StaticClass, TEXT("UNavigatorFunctionLibrary"), &Z_Registration_Info_UClass_UNavigatorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigatorFunctionLibrary), 3699722052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_NavigatorFunctionLibrary_h_3933416373(TEXT("/Script/NarrativeArsenalEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_NavigatorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenalEditor_Public_NavigatorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
