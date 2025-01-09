// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/Widgets/NarrativeCommonVideoPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonVideoPlayer() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonVideoPlayer();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonVideoPlayer();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonVideoPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeCommonVideoPlayer Function BPClose
struct Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common Video Player" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonVideoPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonVideoPlayer, nullptr, "BPClose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonVideoPlayer::execBPClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPClose();
	P_NATIVE_END;
}
// End Class UNarrativeCommonVideoPlayer Function BPClose

// Begin Class UNarrativeCommonVideoPlayer Function BPPlay
struct Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common Video Player" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonVideoPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonVideoPlayer, nullptr, "BPPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonVideoPlayer::execBPPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPPlay();
	P_NATIVE_END;
}
// End Class UNarrativeCommonVideoPlayer Function BPPlay

// Begin Class UNarrativeCommonVideoPlayer Function BPPlayFromStart
struct Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common Video Player" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonVideoPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonVideoPlayer, nullptr, "BPPlayFromStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonVideoPlayer::execBPPlayFromStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPPlayFromStart();
	P_NATIVE_END;
}
// End Class UNarrativeCommonVideoPlayer Function BPPlayFromStart

// Begin Class UNarrativeCommonVideoPlayer Function BPSetVideo
struct Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics
{
	struct NarrativeCommonVideoPlayer_eventBPSetVideo_Parms
	{
		UMediaSource* NewVideo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common Video Player" },
		{ "Comment", "//BP exposed wrapper for non-bp callable parent functions\n" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonVideoPlayer.h" },
		{ "ToolTip", "BP exposed wrapper for non-bp callable parent functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVideo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::NewProp_NewVideo = { "NewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonVideoPlayer_eventBPSetVideo_Parms, NewVideo), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::NewProp_NewVideo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonVideoPlayer, nullptr, "BPSetVideo", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::NarrativeCommonVideoPlayer_eventBPSetVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::NarrativeCommonVideoPlayer_eventBPSetVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonVideoPlayer::execBPSetVideo)
{
	P_GET_OBJECT(UMediaSource,Z_Param_NewVideo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPSetVideo(Z_Param_NewVideo);
	P_NATIVE_END;
}
// End Class UNarrativeCommonVideoPlayer Function BPSetVideo

// Begin Class UNarrativeCommonVideoPlayer
void UNarrativeCommonVideoPlayer::StaticRegisterNativesUNarrativeCommonVideoPlayer()
{
	UClass* Class = UNarrativeCommonVideoPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPClose", &UNarrativeCommonVideoPlayer::execBPClose },
		{ "BPPlay", &UNarrativeCommonVideoPlayer::execBPPlay },
		{ "BPPlayFromStart", &UNarrativeCommonVideoPlayer::execBPPlayFromStart },
		{ "BPSetVideo", &UNarrativeCommonVideoPlayer::execBPSetVideo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonVideoPlayer);
UClass* Z_Construct_UClass_UNarrativeCommonVideoPlayer_NoRegister()
{
	return UNarrativeCommonVideoPlayer::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Narrative Common Widgets" },
		{ "Comment", "/**\n * Base class for common video player, with a few functions exposed to make it more BP friendly. \n */" },
		{ "IncludePath", "Widgets/NarrativeCommonVideoPlayer.h" },
		{ "ModuleRelativePath", "Public/Widgets/NarrativeCommonVideoPlayer.h" },
		{ "ToolTip", "Base class for common video player, with a few functions exposed to make it more BP friendly." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPClose, "BPClose" }, // 1282767779
		{ &Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlay, "BPPlay" }, // 3735055685
		{ &Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPPlayFromStart, "BPPlayFromStart" }, // 3396824269
		{ &Z_Construct_UFunction_UNarrativeCommonVideoPlayer_BPSetVideo, "BPSetVideo" }, // 784598571
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonVideoPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonVideoPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics::ClassParams = {
	&UNarrativeCommonVideoPlayer::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonVideoPlayer()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonVideoPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonVideoPlayer.OuterSingleton, Z_Construct_UClass_UNarrativeCommonVideoPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonVideoPlayer.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonVideoPlayer>()
{
	return UNarrativeCommonVideoPlayer::StaticClass();
}
UNarrativeCommonVideoPlayer::UNarrativeCommonVideoPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonVideoPlayer);
UNarrativeCommonVideoPlayer::~UNarrativeCommonVideoPlayer() {}
// End Class UNarrativeCommonVideoPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonVideoPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonVideoPlayer, UNarrativeCommonVideoPlayer::StaticClass, TEXT("UNarrativeCommonVideoPlayer"), &Z_Registration_Info_UClass_UNarrativeCommonVideoPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonVideoPlayer), 3423486454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonVideoPlayer_h_3114068629(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonVideoPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_Widgets_NarrativeCommonVideoPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
