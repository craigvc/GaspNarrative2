// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatCamera/Public/GameFramework/NinjaCombatCameraAnchorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatCameraAnchorActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_ANinjaCombatCameraAnchorActor();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_ANinjaCombatCameraAnchorActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombatCamera();
// End Cross Module References

// Begin Class ANinjaCombatCameraAnchorActor Function GetCamera
struct Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics
{
	struct NinjaCombatCameraAnchorActor_eventGetCamera_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Camera" },
		{ "Comment", "/**\n\x09 * Provides the Camera Component assigned to this actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCameraAnchorActor.h" },
		{ "ToolTip", "Provides the Camera Component assigned to this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCameraAnchorActor_eventGetCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCameraAnchorActor, nullptr, "GetCamera", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::NinjaCombatCameraAnchorActor_eventGetCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::NinjaCombatCameraAnchorActor_eventGetCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCameraAnchorActor::execGetCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetCamera();
	P_NATIVE_END;
}
// End Class ANinjaCombatCameraAnchorActor Function GetCamera

// Begin Class ANinjaCombatCameraAnchorActor Function SetSource
struct Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics
{
	struct NinjaCombatCameraAnchorActor_eventSetSource_Parms
	{
		AActor* Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Camera" },
		{ "Comment", "/**\n\x09 * Sets the source for this anchor point. Usually the player pawn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCameraAnchorActor.h" },
		{ "ToolTip", "Sets the source for this anchor point. Usually the player pawn." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCameraAnchorActor_eventSetSource_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCameraAnchorActor, nullptr, "SetSource", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::NinjaCombatCameraAnchorActor_eventSetSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::NinjaCombatCameraAnchorActor_eventSetSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCameraAnchorActor::execSetSource)
{
	P_GET_OBJECT(AActor,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSource(Z_Param_Source);
	P_NATIVE_END;
}
// End Class ANinjaCombatCameraAnchorActor Function SetSource

// Begin Class ANinjaCombatCameraAnchorActor
void ANinjaCombatCameraAnchorActor::StaticRegisterNativesANinjaCombatCameraAnchorActor()
{
	UClass* Class = ANinjaCombatCameraAnchorActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCamera", &ANinjaCombatCameraAnchorActor::execGetCamera },
		{ "SetSource", &ANinjaCombatCameraAnchorActor::execSetSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatCameraAnchorActor);
UClass* Z_Construct_UClass_ANinjaCombatCameraAnchorActor_NoRegister()
{
	return ANinjaCombatCameraAnchorActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An actor with a camera that can be used as an anchor for camera animations.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatCameraAnchorActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCameraAnchorActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An actor with a camera that can be used as an anchor for camera animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowSource_MetaData[] = {
		{ "Category", "Camera Anchor" },
		{ "Comment", "/** If set to true, will follow the source. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCameraAnchorActor.h" },
		{ "ToolTip", "If set to true, will follow the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Camera used for the animation viewport. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCameraAnchorActor.h" },
		{ "ToolTip", "Camera used for the animation viewport." },
	};
#endif // WITH_METADATA
	static void NewProp_bFollowSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_GetCamera, "GetCamera" }, // 2706921068
		{ &Z_Construct_UFunction_ANinjaCombatCameraAnchorActor_SetSource, "SetSource" }, // 2775172281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatCameraAnchorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::NewProp_bFollowSource_SetBit(void* Obj)
{
	((ANinjaCombatCameraAnchorActor*)Obj)->bFollowSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::NewProp_bFollowSource = { "bFollowSource", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatCameraAnchorActor), &Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::NewProp_bFollowSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowSource_MetaData), NewProp_bFollowSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x014400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatCameraAnchorActor, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::NewProp_bFollowSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::ClassParams = {
	&ANinjaCombatCameraAnchorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatCameraAnchorActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatCameraAnchorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatCameraAnchorActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatCameraAnchorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatCameraAnchorActor.OuterSingleton;
}
template<> NINJACOMBATCAMERA_API UClass* StaticClass<ANinjaCombatCameraAnchorActor>()
{
	return ANinjaCombatCameraAnchorActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatCameraAnchorActor);
ANinjaCombatCameraAnchorActor::~ANinjaCombatCameraAnchorActor() {}
// End Class ANinjaCombatCameraAnchorActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_GameFramework_NinjaCombatCameraAnchorActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatCameraAnchorActor, ANinjaCombatCameraAnchorActor::StaticClass, TEXT("ANinjaCombatCameraAnchorActor"), &Z_Registration_Info_UClass_ANinjaCombatCameraAnchorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatCameraAnchorActor), 2839748489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_GameFramework_NinjaCombatCameraAnchorActor_h_730663173(TEXT("/Script/NinjaCombatCamera"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_GameFramework_NinjaCombatCameraAnchorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_GameFramework_NinjaCombatCameraAnchorActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
