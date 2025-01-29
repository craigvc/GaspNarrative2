// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/NavigationMarkerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationMarkerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ANavigationMarkerActor();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ANavigationMarkerActor_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class ANavigationMarkerActor Function GetMarkerComponent
struct Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics
{
	struct NavigationMarkerActor_eventGetMarkerComponent_Parms
	{
		UNavigationMarkerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/NavigationMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationMarkerActor_eventGetMarkerComponent_Parms, ReturnValue), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavigationMarkerActor, nullptr, "GetMarkerComponent", nullptr, nullptr, Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::NavigationMarkerActor_eventGetMarkerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::NavigationMarkerActor_eventGetMarkerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANavigationMarkerActor::execGetMarkerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNavigationMarkerComponent**)Z_Param__Result=P_THIS->GetMarkerComponent();
	P_NATIVE_END;
}
// End Class ANavigationMarkerActor Function GetMarkerComponent

// Begin Class ANavigationMarkerActor
void ANavigationMarkerActor::StaticRegisterNativesANavigationMarkerActor()
{
	UClass* Class = ANavigationMarkerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMarkerComponent", &ANavigationMarkerActor::execGetMarkerComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationMarkerActor);
UClass* Z_Construct_UClass_ANavigationMarkerActor_NoRegister()
{
	return ANavigationMarkerActor::StaticClass();
}
struct Z_Construct_UClass_ANavigationMarkerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**Just an empty actor with a navigation marker on it. */" },
		{ "IncludePath", "NavigationMarkerActor.h" },
		{ "ModuleRelativePath", "Public/NavigationMarkerActor.h" },
		{ "ToolTip", "Just an empty actor with a navigation marker on it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavigationMarkerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavigationMarkerActor_GetMarkerComponent, "GetMarkerComponent" }, // 473840605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationMarkerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationMarkerActor_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationMarkerActor, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationMarkerActor_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANavigationMarkerActor, MarkerComponent), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationMarkerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationMarkerActor_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationMarkerActor_Statics::NewProp_MarkerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationMarkerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANavigationMarkerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationMarkerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationMarkerActor_Statics::ClassParams = {
	&ANavigationMarkerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANavigationMarkerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationMarkerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationMarkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANavigationMarkerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANavigationMarkerActor()
{
	if (!Z_Registration_Info_UClass_ANavigationMarkerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationMarkerActor.OuterSingleton, Z_Construct_UClass_ANavigationMarkerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANavigationMarkerActor.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<ANavigationMarkerActor>()
{
	return ANavigationMarkerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationMarkerActor);
ANavigationMarkerActor::~ANavigationMarkerActor() {}
// End Class ANavigationMarkerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationMarkerActor, ANavigationMarkerActor::StaticClass, TEXT("ANavigationMarkerActor"), &Z_Registration_Info_UClass_ANavigationMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationMarkerActor), 2532675756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerActor_h_1078903925(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
