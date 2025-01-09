// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Camera/NarrativeCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCameraComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCameraMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNarrativeCameraComponent Function SetCameraMode
struct Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics
{
	struct NarrativeCameraComponent_eventSetCameraMode_Parms
	{
		TSubclassOf<UNarrativeCameraMode> NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//Set the camera mode to the specified mode. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraComponent.h" },
		{ "ToolTip", "Set the camera mode to the specified mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCameraComponent_eventSetCameraMode_Parms, NewMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraComponent, nullptr, "SetCameraMode", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::NarrativeCameraComponent_eventSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::NarrativeCameraComponent_eventSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraComponent::execSetCameraMode)
{
	P_GET_OBJECT(UClass,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraMode(Z_Param_NewMode);
	P_NATIVE_END;
}
// End Class UNarrativeCameraComponent Function SetCameraMode

// Begin Class UNarrativeCameraComponent Function SetCameraModeToDefault
struct Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//Set the camera mode back to the default mode. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraComponent.h" },
		{ "ToolTip", "Set the camera mode back to the default mode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCameraComponent, nullptr, "SetCameraModeToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCameraComponent::execSetCameraModeToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraModeToDefault();
	P_NATIVE_END;
}
// End Class UNarrativeCameraComponent Function SetCameraModeToDefault

// Begin Class UNarrativeCameraComponent
void UNarrativeCameraComponent::StaticRegisterNativesUNarrativeCameraComponent()
{
	UClass* Class = UNarrativeCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCameraMode", &UNarrativeCameraComponent::execSetCameraMode },
		{ "SetCameraModeToDefault", &UNarrativeCameraComponent::execSetCameraModeToDefault },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCameraComponent);
UClass* Z_Construct_UClass_UNarrativeCameraComponent_NoRegister()
{
	return UNarrativeCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Narrative pro comes with a custom camera component to support handling different camera modes, and blending between them. \n */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/NarrativeCameraComponent.h" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Narrative pro comes with a custom camera component to support handling different camera modes, and blending between them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//The default camera mode to use. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraComponent.h" },
		{ "ToolTip", "The default camera mode to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraMode_MetaData[] = {
		{ "Category", "Narrative Camera" },
		{ "Comment", "//The camera mode currently being used. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraComponent.h" },
		{ "ToolTip", "The camera mode currently being used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeInstances_MetaData[] = {
		{ "Comment", "//Store all the camera modes in here and reuse them as we go. \n" },
		{ "ModuleRelativePath", "Public/Camera/NarrativeCameraComponent.h" },
		{ "ToolTip", "Store all the camera modes in here and reuse them as we go." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModeInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraMode, "SetCameraMode" }, // 70402480
		{ &Z_Construct_UFunction_UNarrativeCameraComponent_SetCameraModeToDefault, "SetCameraModeToDefault" }, // 3764976448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraComponent, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_CurrentCameraMode = { "CurrentCameraMode", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraComponent, CurrentCameraMode), Z_Construct_UClass_UNarrativeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCameraMode_MetaData), NewProp_CurrentCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_CameraModeInstances_Inner = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_CameraModeInstances = { "CameraModeInstances", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeCameraComponent, CameraModeInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeInstances_MetaData), NewProp_CameraModeInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_DefaultCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_CurrentCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_CameraModeInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeCameraComponent_Statics::NewProp_CameraModeInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCameraComponent_Statics::ClassParams = {
	&UNarrativeCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCameraComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCameraComponent.OuterSingleton, Z_Construct_UClass_UNarrativeCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCameraComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeCameraComponent>()
{
	return UNarrativeCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCameraComponent);
UNarrativeCameraComponent::~UNarrativeCameraComponent() {}
// End Class UNarrativeCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCameraComponent, UNarrativeCameraComponent::StaticClass, TEXT("UNarrativeCameraComponent"), &Z_Registration_Info_UClass_UNarrativeCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCameraComponent), 3786498751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraComponent_h_3130939366(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Camera_NarrativeCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
