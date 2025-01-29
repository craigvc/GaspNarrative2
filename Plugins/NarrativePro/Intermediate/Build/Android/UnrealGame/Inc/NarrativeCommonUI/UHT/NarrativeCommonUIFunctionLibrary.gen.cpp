// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeCommonUI/Public/NarrativeCommonUIFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCommonUIFunctionLibrary() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonVideoPlayer_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeCommonUI();
// End Cross Module References

// Begin Class UNarrativeCommonUIFunctionLibrary Function PlayCommonVideoPlayer
struct Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics
{
	struct NarrativeCommonUIFunctionLibrary_eventPlayCommonVideoPlayer_Parms
	{
		UCommonVideoPlayer* VideoPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Tell a common video player to play, as the play function isn't exposed to blueprints.\n" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUIFunctionLibrary.h" },
		{ "ToolTip", "Tell a common video player to play, as the play function isn't exposed to blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoPlayer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::NewProp_VideoPlayer = { "VideoPlayer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPlayCommonVideoPlayer_Parms, VideoPlayer), Z_Construct_UClass_UCommonVideoPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoPlayer_MetaData), NewProp_VideoPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::NewProp_VideoPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary, nullptr, "PlayCommonVideoPlayer", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::NarrativeCommonUIFunctionLibrary_eventPlayCommonVideoPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::NarrativeCommonUIFunctionLibrary_eventPlayCommonVideoPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonUIFunctionLibrary::execPlayCommonVideoPlayer)
{
	P_GET_OBJECT(UCommonVideoPlayer,Z_Param_VideoPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNarrativeCommonUIFunctionLibrary::PlayCommonVideoPlayer(Z_Param_VideoPlayer);
	P_NATIVE_END;
}
// End Class UNarrativeCommonUIFunctionLibrary Function PlayCommonVideoPlayer

// Begin Class UNarrativeCommonUIFunctionLibrary Function PushHUDNotification
struct Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics
{
	struct NarrativeCommonUIFunctionLibrary_eventPushHUDNotification_Parms
	{
		const UObject* WorldContextObject;
		FText Message;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Add a notification to the Narrative HUD, provided one has been created \n" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "DisplayName", "Show Narrative HUD Notification" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUIFunctionLibrary.h" },
		{ "ToolTip", "Add a notification to the Narrative HUD, provided one has been created" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushHUDNotification_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushHUDNotification_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushHUDNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary, nullptr, "PushHUDNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NarrativeCommonUIFunctionLibrary_eventPushHUDNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::NarrativeCommonUIFunctionLibrary_eventPushHUDNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonUIFunctionLibrary::execPushHUDNotification)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNarrativeCommonUIFunctionLibrary::PushHUDNotification(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UNarrativeCommonUIFunctionLibrary Function PushHUDNotification

// Begin Class UNarrativeCommonUIFunctionLibrary Function PushMajorHUDNotification
struct Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics
{
	struct NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms
	{
		const UObject* WorldContextObject;
		FText Message;
		FText Subtitle;
		float Duration;
		bool bOverrideCurrentNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Add a major notification to the Narrative HUD, provided one has been created \n" },
		{ "CPP_Default_bOverrideCurrentNotification", "true" },
		{ "CPP_Default_Duration", "5.000000" },
		{ "DisplayName", "Show Major Narrative HUD Notification" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUIFunctionLibrary.h" },
		{ "ToolTip", "Add a major notification to the Narrative HUD, provided one has been created" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Subtitle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bOverrideCurrentNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms, Subtitle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit(void* Obj)
{
	((NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms*)Obj)->bOverrideCurrentNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification = { "bOverrideCurrentNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms), &Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentNotification_MetaData), NewProp_bOverrideCurrentNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_Subtitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NewProp_bOverrideCurrentNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary, nullptr, "PushMajorHUDNotification", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::NarrativeCommonUIFunctionLibrary_eventPushMajorHUDNotification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonUIFunctionLibrary::execPushMajorHUDNotification)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_GET_PROPERTY(FTextProperty,Z_Param_Subtitle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bOverrideCurrentNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNarrativeCommonUIFunctionLibrary::PushMajorHUDNotification(Z_Param_WorldContextObject,Z_Param_Message,Z_Param_Subtitle,Z_Param_Duration,Z_Param_bOverrideCurrentNotification);
	P_NATIVE_END;
}
// End Class UNarrativeCommonUIFunctionLibrary Function PushMajorHUDNotification

// Begin Class UNarrativeCommonUIFunctionLibrary Function SetCommonVideoPlayerSource
struct Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics
{
	struct NarrativeCommonUIFunctionLibrary_eventSetCommonVideoPlayerSource_Parms
	{
		UCommonVideoPlayer* VideoPlayer;
		UMediaSource* NewVideo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative Common UI" },
		{ "Comment", "//Tell a common video player to set its source, as the play function isn't exposed to blueprints.\n" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUIFunctionLibrary.h" },
		{ "ToolTip", "Tell a common video player to set its source, as the play function isn't exposed to blueprints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoPlayer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVideo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::NewProp_VideoPlayer = { "VideoPlayer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventSetCommonVideoPlayerSource_Parms, VideoPlayer), Z_Construct_UClass_UCommonVideoPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoPlayer_MetaData), NewProp_VideoPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::NewProp_NewVideo = { "NewVideo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCommonUIFunctionLibrary_eventSetCommonVideoPlayerSource_Parms, NewVideo), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::NewProp_VideoPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::NewProp_NewVideo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary, nullptr, "SetCommonVideoPlayerSource", nullptr, nullptr, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::NarrativeCommonUIFunctionLibrary_eventSetCommonVideoPlayerSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::NarrativeCommonUIFunctionLibrary_eventSetCommonVideoPlayerSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeCommonUIFunctionLibrary::execSetCommonVideoPlayerSource)
{
	P_GET_OBJECT(UCommonVideoPlayer,Z_Param_VideoPlayer);
	P_GET_OBJECT(UMediaSource,Z_Param_NewVideo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNarrativeCommonUIFunctionLibrary::SetCommonVideoPlayerSource(Z_Param_VideoPlayer,Z_Param_NewVideo);
	P_NATIVE_END;
}
// End Class UNarrativeCommonUIFunctionLibrary Function SetCommonVideoPlayerSource

// Begin Class UNarrativeCommonUIFunctionLibrary
void UNarrativeCommonUIFunctionLibrary::StaticRegisterNativesUNarrativeCommonUIFunctionLibrary()
{
	UClass* Class = UNarrativeCommonUIFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayCommonVideoPlayer", &UNarrativeCommonUIFunctionLibrary::execPlayCommonVideoPlayer },
		{ "PushHUDNotification", &UNarrativeCommonUIFunctionLibrary::execPushHUDNotification },
		{ "PushMajorHUDNotification", &UNarrativeCommonUIFunctionLibrary::execPushMajorHUDNotification },
		{ "SetCommonVideoPlayerSource", &UNarrativeCommonUIFunctionLibrary::execSetCommonVideoPlayerSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeCommonUIFunctionLibrary);
UClass* Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_NoRegister()
{
	return UNarrativeCommonUIFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NarrativeCommonUIFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NarrativeCommonUIFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PlayCommonVideoPlayer, "PlayCommonVideoPlayer" }, // 1505202915
		{ &Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushHUDNotification, "PushHUDNotification" }, // 3979196658
		{ &Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_PushMajorHUDNotification, "PushMajorHUDNotification" }, // 4115205045
		{ &Z_Construct_UFunction_UNarrativeCommonUIFunctionLibrary_SetCommonVideoPlayerSource, "SetCommonVideoPlayerSource" }, // 471022610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeCommonUIFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeCommonUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics::ClassParams = {
	&UNarrativeCommonUIFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNarrativeCommonUIFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeCommonUIFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeCommonUIFunctionLibrary.OuterSingleton;
}
template<> NARRATIVECOMMONUI_API UClass* StaticClass<UNarrativeCommonUIFunctionLibrary>()
{
	return UNarrativeCommonUIFunctionLibrary::StaticClass();
}
UNarrativeCommonUIFunctionLibrary::UNarrativeCommonUIFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeCommonUIFunctionLibrary);
UNarrativeCommonUIFunctionLibrary::~UNarrativeCommonUIFunctionLibrary() {}
// End Class UNarrativeCommonUIFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUIFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeCommonUIFunctionLibrary, UNarrativeCommonUIFunctionLibrary::StaticClass, TEXT("UNarrativeCommonUIFunctionLibrary"), &Z_Registration_Info_UClass_UNarrativeCommonUIFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeCommonUIFunctionLibrary), 2482089763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUIFunctionLibrary_h_1039834328(TEXT("/Script/NarrativeCommonUI"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUIFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUIFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
