// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeNavigator/Public/NavigatorStatics.h"
#include "NarrativeNavigator/Public/NavigationMarkerComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigatorStatics() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigatorStatics();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigatorStatics_NoRegister();
NARRATIVENAVIGATOR_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationMarkerSettings();
UPackage* Z_Construct_UPackage__Script_NarrativeNavigator();
// End Cross Module References

// Begin Class UNavigatorStatics Function AddNavigationMarkerToActor
struct Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics
{
	struct NavigatorStatics_eventAddNavigationMarkerToActor_Parms
	{
		AActor* ActorToMark;
		FNavigationMarkerSettings MarkerSettings;
		FGameplayTagContainer MarkerDomain;
		UNavigationMarkerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Navigation" },
		{ "Comment", "// Add a navigation marker to the given actor! Navigator will automatically destroy the marker when the Navigation marker or its owning actor are destroyed. \n" },
		{ "ModuleRelativePath", "Public/NavigatorStatics.h" },
		{ "ToolTip", "Add a navigation marker to the given actor! Navigator will automatically destroy the marker when the Navigation marker or its owning actor are destroyed." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerDomain_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToMark;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerDomain;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_ActorToMark = { "ActorToMark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigatorStatics_eventAddNavigationMarkerToActor_Parms, ActorToMark), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_MarkerSettings = { "MarkerSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigatorStatics_eventAddNavigationMarkerToActor_Parms, MarkerSettings), Z_Construct_UScriptStruct_FNavigationMarkerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSettings_MetaData), NewProp_MarkerSettings_MetaData) }; // 1503443034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_MarkerDomain = { "MarkerDomain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigatorStatics_eventAddNavigationMarkerToActor_Parms, MarkerDomain), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerDomain_MetaData), NewProp_MarkerDomain_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigatorStatics_eventAddNavigationMarkerToActor_Parms, ReturnValue), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_ActorToMark,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_MarkerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_MarkerDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigatorStatics, nullptr, "AddNavigationMarkerToActor", nullptr, nullptr, Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NavigatorStatics_eventAddNavigationMarkerToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::NavigatorStatics_eventAddNavigationMarkerToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigatorStatics::execAddNavigationMarkerToActor)
{
	P_GET_OBJECT(AActor,Z_Param_ActorToMark);
	P_GET_STRUCT_REF(FNavigationMarkerSettings,Z_Param_Out_MarkerSettings);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_MarkerDomain);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNavigationMarkerComponent**)Z_Param__Result=UNavigatorStatics::AddNavigationMarkerToActor(Z_Param_ActorToMark,Z_Param_Out_MarkerSettings,Z_Param_Out_MarkerDomain);
	P_NATIVE_END;
}
// End Class UNavigatorStatics Function AddNavigationMarkerToActor

// Begin Class UNavigatorStatics
void UNavigatorStatics::StaticRegisterNativesUNavigatorStatics()
{
	UClass* Class = UNavigatorStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNavigationMarkerToActor", &UNavigatorStatics::execAddNavigationMarkerToActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigatorStatics);
UClass* Z_Construct_UClass_UNavigatorStatics_NoRegister()
{
	return UNavigatorStatics::StaticClass();
}
struct Z_Construct_UClass_UNavigatorStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NavigatorStatics.h" },
		{ "ModuleRelativePath", "Public/NavigatorStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigatorStatics_AddNavigationMarkerToActor, "AddNavigationMarkerToActor" }, // 3348083645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigatorStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNavigatorStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeNavigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigatorStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigatorStatics_Statics::ClassParams = {
	&UNavigatorStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigatorStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigatorStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigatorStatics()
{
	if (!Z_Registration_Info_UClass_UNavigatorStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigatorStatics.OuterSingleton, Z_Construct_UClass_UNavigatorStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigatorStatics.OuterSingleton;
}
template<> NARRATIVENAVIGATOR_API UClass* StaticClass<UNavigatorStatics>()
{
	return UNavigatorStatics::StaticClass();
}
UNavigatorStatics::UNavigatorStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigatorStatics);
UNavigatorStatics::~UNavigatorStatics() {}
// End Class UNavigatorStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigatorStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigatorStatics, UNavigatorStatics::StaticClass, TEXT("UNavigatorStatics"), &Z_Registration_Info_UClass_UNavigatorStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigatorStatics), 3647220898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigatorStatics_h_3795023568(TEXT("/Script/NarrativeNavigator"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigatorStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigatorStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
