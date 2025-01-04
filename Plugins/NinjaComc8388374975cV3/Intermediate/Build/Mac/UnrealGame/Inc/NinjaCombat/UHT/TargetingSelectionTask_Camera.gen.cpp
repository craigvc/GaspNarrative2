// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingSelectionTask_Camera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSelectionTask_Camera() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingSelectionTask_Camera();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingSelectionTask_Camera_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingSelectionTask_Camera
void UTargetingSelectionTask_Camera::StaticRegisterNativesUTargetingSelectionTask_Camera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSelectionTask_Camera);
UClass* Z_Construct_UClass_UTargetingSelectionTask_Camera_NoRegister()
{
	return UTargetingSelectionTask_Camera::StaticClass();
}
struct Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Selects an actor located at the camera center.\n */" },
		{ "IncludePath", "Targeting/TargetingSelectionTask_Camera.h" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingSelectionTask_Camera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Selects an actor located at the camera center." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Distance for the line trace. */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingSelectionTask_Camera.h" },
		{ "ToolTip", "Distance for the line trace." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Collision channel for the trace. */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingSelectionTask_Camera.h" },
		{ "ToolTip", "Collision channel for the trace." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSelectionTask_Camera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSelectionTask_Camera, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSelectionTask_Camera, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::NewProp_TraceChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::ClassParams = {
	&UTargetingSelectionTask_Camera::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingSelectionTask_Camera()
{
	if (!Z_Registration_Info_UClass_UTargetingSelectionTask_Camera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSelectionTask_Camera.OuterSingleton, Z_Construct_UClass_UTargetingSelectionTask_Camera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingSelectionTask_Camera.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingSelectionTask_Camera>()
{
	return UTargetingSelectionTask_Camera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSelectionTask_Camera);
UTargetingSelectionTask_Camera::~UTargetingSelectionTask_Camera() {}
// End Class UTargetingSelectionTask_Camera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_Camera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSelectionTask_Camera, UTargetingSelectionTask_Camera::StaticClass, TEXT("UTargetingSelectionTask_Camera"), &Z_Registration_Info_UClass_UTargetingSelectionTask_Camera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSelectionTask_Camera), 1117594649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_Camera_h_1479916907(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_Camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_Camera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
