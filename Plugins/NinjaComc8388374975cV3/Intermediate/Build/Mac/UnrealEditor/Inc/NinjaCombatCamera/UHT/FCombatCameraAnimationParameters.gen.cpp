// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatCamera/Public/Types/FCombatCameraAnimationParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCombatCameraAnimationParameters() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINECAMERAS_API UEnum* Z_Construct_UEnum_EngineCameras_ECameraAnimationEasingType();
ENGINECAMERAS_API UEnum* Z_Construct_UEnum_EngineCameras_ECameraAnimationPlaySpace();
NINJACOMBATCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCombatCameraAnimationParameters();
UPackage* Z_Construct_UPackage__Script_NinjaCombatCamera();
// End Cross Module References

// Begin ScriptStruct FCombatCameraAnimationParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters;
class UScriptStruct* FCombatCameraAnimationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCombatCameraAnimationParameters, (UObject*)Z_Construct_UPackage__Script_NinjaCombatCamera(), TEXT("CombatCameraAnimationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters.OuterSingleton;
}
template<> NINJACOMBATCAMERA_API UScriptStruct* StaticStruct<FCombatCameraAnimationParameters>()
{
	return FCombatCameraAnimationParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Analogous to the original Camera Animation Parameters, which is not exported.\n */" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
		{ "ToolTip", "Analogous to the original Camera Animation Parameters, which is not exported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EaseInType_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EaseInDuration_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutType_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutDuration_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomStartTime_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationOverride_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserPlaySpaceRot_MetaData[] = {
		{ "Category", "Camera Animation" },
		{ "ModuleRelativePath", "Public/Types/FCombatCameraAnimationParameters.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EaseInType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseInType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseInDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EaseOutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EaseOutType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseOutDuration;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartOffset;
	static void NewProp_bRandomStartTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCombatCameraAnimationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseInType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseInType = { "EaseInType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, EaseInType), Z_Construct_UEnum_EngineCameras_ECameraAnimationEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EaseInType_MetaData), NewProp_EaseInType_MetaData) }; // 7658545
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseInDuration = { "EaseInDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, EaseInDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EaseInDuration_MetaData), NewProp_EaseInDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseOutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseOutType = { "EaseOutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, EaseOutType), Z_Construct_UEnum_EngineCameras_ECameraAnimationEasingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EaseOutType_MetaData), NewProp_EaseOutType_MetaData) }; // 7658545
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseOutDuration = { "EaseOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, EaseOutDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EaseOutDuration_MetaData), NewProp_EaseOutDuration_MetaData) };
void Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((FCombatCameraAnimationParameters*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCombatCameraAnimationParameters), &Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, StartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
void Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bRandomStartTime_SetBit(void* Obj)
{
	((FCombatCameraAnimationParameters*)Obj)->bRandomStartTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bRandomStartTime = { "bRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCombatCameraAnimationParameters), &Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bRandomStartTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomStartTime_MetaData), NewProp_bRandomStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_DurationOverride = { "DurationOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, DurationOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationOverride_MetaData), NewProp_DurationOverride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, PlaySpace), Z_Construct_UEnum_EngineCameras_ECameraAnimationPlaySpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaySpace_MetaData), NewProp_PlaySpace_MetaData) }; // 1256684476
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCombatCameraAnimationParameters, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserPlaySpaceRot_MetaData), NewProp_UserPlaySpaceRot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseInType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseInType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseInDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseOutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseOutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_EaseOutDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_bRandomStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_DurationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_PlaySpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_PlaySpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewProp_UserPlaySpaceRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatCamera,
	nullptr,
	&NewStructOps,
	"CombatCameraAnimationParameters",
	Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::PropPointers),
	sizeof(FCombatCameraAnimationParameters),
	alignof(FCombatCameraAnimationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCombatCameraAnimationParameters()
{
	if (!Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters.InnerSingleton, Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters.InnerSingleton;
}
// End ScriptStruct FCombatCameraAnimationParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Types_FCombatCameraAnimationParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCombatCameraAnimationParameters::StaticStruct, Z_Construct_UScriptStruct_FCombatCameraAnimationParameters_Statics::NewStructOps, TEXT("CombatCameraAnimationParameters"), &Z_Registration_Info_UScriptStruct_CombatCameraAnimationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCombatCameraAnimationParameters), 1791019398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Types_FCombatCameraAnimationParameters_h_4074495496(TEXT("/Script/NinjaCombatCamera"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Types_FCombatCameraAnimationParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Types_FCombatCameraAnimationParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
