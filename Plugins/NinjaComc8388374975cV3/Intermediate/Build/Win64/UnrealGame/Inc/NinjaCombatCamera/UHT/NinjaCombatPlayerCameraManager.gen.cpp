// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatCamera/Public/Camera/NinjaCombatPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatPlayerCameraManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_ANinjaCombatPlayerCameraManager();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_ANinjaCombatPlayerCameraManager_NoRegister();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_UCombatCameraManagerInterface_NoRegister();
NINJACOMBATCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCombatCameraBlendInfo();
UPackage* Z_Construct_UPackage__Script_NinjaCombatCamera();
// End Cross Module References

// Begin ScriptStruct FCombatCameraBlendInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo;
class UScriptStruct* FCombatCameraBlendInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatCameraBlendInfo, (UObject*)Z_Construct_UPackage__Script_NinjaCombatCamera(), TEXT("CombatCameraBlendInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo.OuterSingleton;
}
template<> NINJACOMBATCAMERA_API UScriptStruct* StaticStruct<FCombatCameraBlendInfo>()
{
	return FCombatCameraBlendInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[] = {
		{ "Category", "Combat Camera" },
		{ "Comment", "/** Time taken to blend between cameras. */" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ToolTip", "Time taken to blend between cameras." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFunction_MetaData[] = {
		{ "Category", "Combat Camera" },
		{ "Comment", "/** Functions for blending between cameras. */" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ToolTip", "Functions for blending between cameras." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendExp_MetaData[] = {
		{ "Category", "Combat Camera" },
		{ "Comment", "/** Exponent, used by certain blend functions to control the shape of the curve. */" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ToolTip", "Exponent, used by certain blend functions to control the shape of the curve." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatCameraBlendInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraBlendInfo, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendTime_MetaData), NewProp_BlendTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewProp_BlendFunction = { "BlendFunction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraBlendInfo, BlendFunction), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFunction_MetaData), NewProp_BlendFunction_MetaData) }; // 2076869023
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewProp_BlendExp = { "BlendExp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraBlendInfo, BlendExp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendExp_MetaData), NewProp_BlendExp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewProp_BlendFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewProp_BlendExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatCamera,
	nullptr,
	&NewStructOps,
	"CombatCameraBlendInfo",
	Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::PropPointers),
	sizeof(FCombatCameraBlendInfo),
	alignof(FCombatCameraBlendInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatCameraBlendInfo()
{
	if (!Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo.InnerSingleton, Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo.InnerSingleton;
}
// End ScriptStruct FCombatCameraBlendInfo

// Begin Class ANinjaCombatPlayerCameraManager
void ANinjaCombatPlayerCameraManager::StaticRegisterNativesANinjaCombatPlayerCameraManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatPlayerCameraManager);
UClass* Z_Construct_UClass_ANinjaCombatPlayerCameraManager_NoRegister()
{
	return ANinjaCombatPlayerCameraManager::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Camera Manager that exposes Camera Functionality to the Camera System.\n *\n * Just an implementation for the Combat Camera Manager interface, but any other Player Camera\n * Manager, implementing the correct interface, can be used by the Combat System.\n */" },
		{ "IncludePath", "Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ToolTip", "A Camera Manager that exposes Camera Functionality to the Camera System.\n\nJust an implementation for the Combat Camera Manager interface, but any other Player Camera\nManager, implementing the correct interface, can be used by the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[] = {
		{ "Category", "Combat Camera" },
		{ "Comment", "/** Configuration when blending from the Player Camera to the Animation Camera. */" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ToolTip", "Configuration when blending from the Player Camera to the Animation Camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[] = {
		{ "Category", "Combat Camera" },
		{ "Comment", "/** Configuration when blending from the Animation Camera to the Player Camera. */" },
		{ "ModuleRelativePath", "Public/Camera/NinjaCombatPlayerCameraManager.h" },
		{ "ToolTip", "Configuration when blending from the Animation Camera to the Player Camera." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatPlayerCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatPlayerCameraManager, BlendIn), Z_Construct_UScriptStruct_FCombatCameraBlendInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendIn_MetaData), NewProp_BlendIn_MetaData) }; // 3849985395
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatPlayerCameraManager, BlendOut), Z_Construct_UScriptStruct_FCombatCameraBlendInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOut_MetaData), NewProp_BlendOut_MetaData) }; // 3849985395
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::NewProp_BlendIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::NewProp_BlendOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatCameraManagerInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatPlayerCameraManager, ICombatCameraManagerInterface), false },  // 354783409
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::ClassParams = {
	&ANinjaCombatPlayerCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatPlayerCameraManager()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatPlayerCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatPlayerCameraManager.OuterSingleton, Z_Construct_UClass_ANinjaCombatPlayerCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatPlayerCameraManager.OuterSingleton;
}
template<> NINJACOMBATCAMERA_API UClass* StaticClass<ANinjaCombatPlayerCameraManager>()
{
	return ANinjaCombatPlayerCameraManager::StaticClass();
}
ANinjaCombatPlayerCameraManager::ANinjaCombatPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatPlayerCameraManager);
ANinjaCombatPlayerCameraManager::~ANinjaCombatPlayerCameraManager() {}
// End Class ANinjaCombatPlayerCameraManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Camera_NinjaCombatPlayerCameraManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatCameraBlendInfo::StaticStruct, Z_Construct_UScriptStruct_FCombatCameraBlendInfo_Statics::NewStructOps, TEXT("CombatCameraBlendInfo"), &Z_Registration_Info_UScriptStruct_CombatCameraBlendInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatCameraBlendInfo), 3849985395U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatPlayerCameraManager, ANinjaCombatPlayerCameraManager::StaticClass, TEXT("ANinjaCombatPlayerCameraManager"), &Z_Registration_Info_UClass_ANinjaCombatPlayerCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatPlayerCameraManager), 4201864248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Camera_NinjaCombatPlayerCameraManager_h_2066526562(TEXT("/Script/NinjaCombatCamera"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Camera_NinjaCombatPlayerCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Camera_NinjaCombatPlayerCameraManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Camera_NinjaCombatPlayerCameraManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Camera_NinjaCombatPlayerCameraManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
