// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeDialogueSequence.h"
#include "Runtime/CinematicCamera/Public/CineCameraSettings.h"
#include "Runtime/MovieScene/Public/MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeDialogueSequence() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPlateCropSettings();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UDialogue_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDialogueSequence();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FShotTrackingSettings();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum EAnchorOriginRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnchorOriginRule;
static UEnum* EAnchorOriginRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnchorOriginRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnchorOriginRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EAnchorOriginRule"));
	}
	return Z_Registration_Info_UEnum_EAnchorOriginRule.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EAnchorOriginRule>()
{
	return EAnchorOriginRule_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AOR_ConversationCenter.DisplayName", "Conversation Center" },
		{ "AOR_ConversationCenter.Name", "EAnchorOriginRule::AOR_ConversationCenter" },
		{ "AOR_ConversationCenter.ToolTip", "The shot will be anchored to the middle point between all the speakers" },
		{ "AOR_Custom.DisplayName", "Custom" },
		{ "AOR_Custom.Name", "EAnchorOriginRule::AOR_Custom" },
		{ "AOR_Custom.ToolTip", "The shots anchor will use the Custom Avatar ID typed in." },
		{ "AOR_Disabled.DisplayName", "Disabled" },
		{ "AOR_Disabled.Name", "EAnchorOriginRule::AOR_Disabled" },
		{ "AOR_Disabled.ToolTip", "The shot won't be anchored/track, it is disabled." },
		{ "AOR_Listener.DisplayName", "Listener" },
		{ "AOR_Listener.Name", "EAnchorOriginRule::AOR_Listener" },
		{ "AOR_Listener.ToolTip", "The shots anchor will be the person the listener the line is directed at." },
		{ "AOR_Speaker.DisplayName", "Speaker" },
		{ "AOR_Speaker.Name", "EAnchorOriginRule::AOR_Speaker" },
		{ "AOR_Speaker.ToolTip", "The shots anchor will be the person saying the line." },
		{ "BlueprintType", "true" },
		{ "Comment", "//If we're using an anchored shot, defines the location of the anchor\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If we're using an anchored shot, defines the location of the anchor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnchorOriginRule::AOR_Disabled", (int64)EAnchorOriginRule::AOR_Disabled },
		{ "EAnchorOriginRule::AOR_ConversationCenter", (int64)EAnchorOriginRule::AOR_ConversationCenter },
		{ "EAnchorOriginRule::AOR_Speaker", (int64)EAnchorOriginRule::AOR_Speaker },
		{ "EAnchorOriginRule::AOR_Listener", (int64)EAnchorOriginRule::AOR_Listener },
		{ "EAnchorOriginRule::AOR_Custom", (int64)EAnchorOriginRule::AOR_Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EAnchorOriginRule",
	"EAnchorOriginRule",
	Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule()
{
	if (!Z_Registration_Info_UEnum_EAnchorOriginRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnchorOriginRule.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnchorOriginRule.InnerSingleton;
}
// End Enum EAnchorOriginRule

// Begin Enum EAnchorRotationRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnchorRotationRule;
static UEnum* EAnchorRotationRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnchorRotationRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnchorRotationRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EAnchorRotationRule"));
	}
	return Z_Registration_Info_UEnum_EAnchorRotationRule.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EAnchorRotationRule>()
{
	return EAnchorRotationRule_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ARR_AnchorActorForwardVector.DisplayName", "Anchor Avatar" },
		{ "ARR_AnchorActorForwardVector.Name", "EAnchorRotationRule::ARR_AnchorActorForwardVector" },
		{ "ARR_AnchorActorForwardVector.ToolTip", "The anchor rotation will use the forward vector of the avatar we're using." },
		{ "ARR_Conversation.DisplayName", "Conversation Direction" },
		{ "ARR_Conversation.Name", "EAnchorRotationRule::ARR_Conversation" },
		{ "ARR_Conversation.ToolTip", "Anchor rot will be the offset vector from the speaker to the listener" },
		{ "BlueprintType", "true" },
		{ "Comment", "//If we're using an anchored shot, defines the rotation of the anchor\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If we're using an anchored shot, defines the rotation of the anchor" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnchorRotationRule::ARR_AnchorActorForwardVector", (int64)EAnchorRotationRule::ARR_AnchorActorForwardVector },
		{ "EAnchorRotationRule::ARR_Conversation", (int64)EAnchorRotationRule::ARR_Conversation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EAnchorRotationRule",
	"EAnchorRotationRule",
	Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule()
{
	if (!Z_Registration_Info_UEnum_EAnchorRotationRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnchorRotationRule.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnchorRotationRule.InnerSingleton;
}
// End Enum EAnchorRotationRule

// Begin Enum EShotTrackingRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShotTrackingRule;
static UEnum* EShotTrackingRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShotTrackingRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShotTrackingRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EShotTrackingRule"));
	}
	return Z_Registration_Info_UEnum_EShotTrackingRule.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EShotTrackingRule>()
{
	return EShotTrackingRule_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Defines how the tracking should work\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "STR_Custom.DisplayName", "Custom" },
		{ "STR_Custom.Name", "EShotTrackingRule::STR_Custom" },
		{ "STR_Custom.ToolTip", "The shot will track the Custom Avatar ID typed in." },
		{ "STR_Disabled.DisplayName", "Disabled" },
		{ "STR_Disabled.Name", "EShotTrackingRule::STR_Disabled" },
		{ "STR_Disabled.ToolTip", "The shot wont track, it is disabled." },
		{ "STR_Listener.DisplayName", "Listener" },
		{ "STR_Listener.Name", "EShotTrackingRule::STR_Listener" },
		{ "STR_Listener.ToolTip", "The shot will track the person the listener the line is directed at." },
		{ "STR_Speaker.DisplayName", "Speaker" },
		{ "STR_Speaker.Name", "EShotTrackingRule::STR_Speaker" },
		{ "STR_Speaker.ToolTip", "The shot will track the person saying the line." },
		{ "ToolTip", "Defines how the tracking should work" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShotTrackingRule::STR_Disabled", (int64)EShotTrackingRule::STR_Disabled },
		{ "EShotTrackingRule::STR_Speaker", (int64)EShotTrackingRule::STR_Speaker },
		{ "EShotTrackingRule::STR_Listener", (int64)EShotTrackingRule::STR_Listener },
		{ "EShotTrackingRule::STR_Custom", (int64)EShotTrackingRule::STR_Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EShotTrackingRule",
	"EShotTrackingRule",
	Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule()
{
	if (!Z_Registration_Info_UEnum_EShotTrackingRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShotTrackingRule.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShotTrackingRule.InnerSingleton;
}
// End Enum EShotTrackingRule

// Begin ScriptStruct FShotTrackingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShotTrackingSettings;
class UScriptStruct* FShotTrackingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShotTrackingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShotTrackingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShotTrackingSettings, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ShotTrackingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ShotTrackingSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FShotTrackingSettings>()
{
	return FShotTrackingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShotTrackingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarToTrack_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/**What avatar should we track */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "What avatar should we track" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedAvatarCustomID_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/** If TrackedAvatar is custom, this is the ID of the avatar to use as the override */" },
		{ "EditCondition", "AvatarToTrack == EShotTrackingRule::STR_Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If TrackedAvatar is custom, this is the ID of the avatar to use as the override" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackBoneNudge_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/** Offset the tracking in actors local space. */" },
		{ "EditCondition", "AvatarToTrack != EShotTrackingRule::STR_Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Offset the tracking in actors local space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateTrackingEveryFrame_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/**If true the camera will update the tracking every frame. This is important if your character head is moving around a lot. */" },
		{ "EditCondition", "AvatarToTrack != EShotTrackingRule::STR_Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If true the camera will update the tracking every frame. This is important if your character head is moving around a lot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateTrackingInterpSpeed_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/** If Update Tracking every frame is turned on, how fast should we interp towards the head as it moves around  */" },
		{ "EditCondition", "AvatarToTrack != EShotTrackingRule::STR_Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If Update Tracking every frame is turned on, how fast should we interp towards the head as it moves around" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AvatarToTrack_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AvatarToTrack;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedAvatarCustomID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackBoneNudge;
	static void NewProp_bUpdateTrackingEveryFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateTrackingEveryFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateTrackingInterpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShotTrackingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_AvatarToTrack_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_AvatarToTrack = { "AvatarToTrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotTrackingSettings, AvatarToTrack), Z_Construct_UEnum_NarrativeArsenal_EShotTrackingRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarToTrack_MetaData), NewProp_AvatarToTrack_MetaData) }; // 2455177096
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_TrackedAvatarCustomID = { "TrackedAvatarCustomID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotTrackingSettings, TrackedAvatarCustomID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedAvatarCustomID_MetaData), NewProp_TrackedAvatarCustomID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_TrackBoneNudge = { "TrackBoneNudge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotTrackingSettings, TrackBoneNudge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackBoneNudge_MetaData), NewProp_TrackBoneNudge_MetaData) };
void Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_bUpdateTrackingEveryFrame_SetBit(void* Obj)
{
	((FShotTrackingSettings*)Obj)->bUpdateTrackingEveryFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_bUpdateTrackingEveryFrame = { "bUpdateTrackingEveryFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FShotTrackingSettings), &Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_bUpdateTrackingEveryFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateTrackingEveryFrame_MetaData), NewProp_bUpdateTrackingEveryFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_UpdateTrackingInterpSpeed = { "UpdateTrackingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShotTrackingSettings, UpdateTrackingInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateTrackingInterpSpeed_MetaData), NewProp_UpdateTrackingInterpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_AvatarToTrack_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_AvatarToTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_TrackedAvatarCustomID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_TrackBoneNudge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_bUpdateTrackingEveryFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewProp_UpdateTrackingInterpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"ShotTrackingSettings",
	Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::PropPointers),
	sizeof(FShotTrackingSettings),
	alignof(FShotTrackingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShotTrackingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_ShotTrackingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShotTrackingSettings.InnerSingleton, Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShotTrackingSettings.InnerSingleton;
}
// End ScriptStruct FShotTrackingSettings

// Begin Class UNarrativeDialogueSequence Function EndSequence
static const FName NAME_UNarrativeDialogueSequence_EndSequence = FName(TEXT("EndSequence"));
void UNarrativeDialogueSequence::EndSequence()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeDialogueSequence_EndSequence);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		EndSequence_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Sequence" },
		{ "Comment", "/** Plays the level sequence. Pretty rare you'd ever want to override this in BP but the option is there! */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Plays the level sequence. Pretty rare you'd ever want to override this in BP but the option is there!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeDialogueSequence, nullptr, "EndSequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeDialogueSequence::execEndSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndSequence_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeDialogueSequence Function EndSequence

// Begin Class UNarrativeDialogueSequence Function GetGraphDisplayText
struct NarrativeDialogueSequence_eventGetGraphDisplayText_Parms
{
	FText ReturnValue;
};
static const FName NAME_UNarrativeDialogueSequence_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
FText UNarrativeDialogueSequence::GetGraphDisplayText()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeDialogueSequence_GetGraphDisplayText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeDialogueSequence_eventGetGraphDisplayText_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetGraphDisplayText_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Sequence" },
		{ "Comment", "/**Define the text that will show up on a node if this event is added to it */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Define the text that will show up on a node if this event is added to it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeDialogueSequence_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeDialogueSequence, nullptr, "GetGraphDisplayText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::PropPointers), sizeof(NarrativeDialogueSequence_eventGetGraphDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeDialogueSequence_eventGetGraphDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeDialogueSequence::execGetGraphDisplayText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeDialogueSequence Function GetGraphDisplayText

// Begin Class UNarrativeDialogueSequence Function GetShotAnchorTransform
struct NarrativeDialogueSequence_eventGetShotAnchorTransform_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UNarrativeDialogueSequence_GetShotAnchorTransform = FName(TEXT("GetShotAnchorTransform"));
FTransform UNarrativeDialogueSequence::GetShotAnchorTransform()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeDialogueSequence_GetShotAnchorTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeDialogueSequence_eventGetShotAnchorTransform_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetShotAnchorTransform_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Sequence" },
		{ "Comment", "/**Return the space the sequence will be shot in. Defaults to using the anchor actors head location. This is that if \n\x09\x09""different height characters are used, the shot will be lined up correctly regardless of height. Also applies some extra\n\x09\x09offsetting to adhere to the 180 degree rule if bUse180DegreeRule is checked. */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Return the space the sequence will be shot in. Defaults to using the anchor actors head location. This is that if\n               different height characters are used, the shot will be lined up correctly regardless of height. Also applies some extra\n               offsetting to adhere to the 180 degree rule if bUse180DegreeRule is checked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeDialogueSequence_eventGetShotAnchorTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeDialogueSequence, nullptr, "GetShotAnchorTransform", nullptr, nullptr, Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::PropPointers), sizeof(NarrativeDialogueSequence_eventGetShotAnchorTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeDialogueSequence_eventGetShotAnchorTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeDialogueSequence::execGetShotAnchorTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetShotAnchorTransform_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeDialogueSequence Function GetShotAnchorTransform

// Begin Class UNarrativeDialogueSequence Function OnStop
static const FName NAME_UNarrativeDialogueSequence_OnStop = FName(TEXT("OnStop"));
void UNarrativeDialogueSequence::OnStop()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeDialogueSequence_OnStop);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Sequence" },
		{ "Comment", "//Called before the shot is stopped and its sequence player is de-initialized. \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Called before the shot is stopped and its sequence player is de-initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeDialogueSequence, nullptr, "OnStop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeDialogueSequence Function OnStop

// Begin Class UNarrativeDialogueSequence Function PlaySequence
static const FName NAME_UNarrativeDialogueSequence_PlaySequence = FName(TEXT("PlaySequence"));
void UNarrativeDialogueSequence::PlaySequence()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeDialogueSequence_PlaySequence);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		PlaySequence_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Sequence" },
		{ "Comment", "/** Plays the level sequence. Pretty rare you'd ever want to override this in BP but the option is there! */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Plays the level sequence. Pretty rare you'd ever want to override this in BP but the option is there!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeDialogueSequence, nullptr, "PlaySequence", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeDialogueSequence::execPlaySequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaySequence_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeDialogueSequence Function PlaySequence

// Begin Class UNarrativeDialogueSequence
void UNarrativeDialogueSequence::StaticRegisterNativesUNarrativeDialogueSequence()
{
	UClass* Class = UNarrativeDialogueSequence::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndSequence", &UNarrativeDialogueSequence::execEndSequence },
		{ "GetGraphDisplayText", &UNarrativeDialogueSequence::execGetGraphDisplayText },
		{ "GetShotAnchorTransform", &UNarrativeDialogueSequence::execGetShotAnchorTransform },
		{ "PlaySequence", &UNarrativeDialogueSequence::execPlaySequence },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeDialogueSequence);
UClass* Z_Construct_UClass_UNarrativeDialogueSequence_NoRegister()
{
	return UNarrativeDialogueSequence::StaticClass();
}
struct Z_Construct_UClass_UNarrativeDialogueSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Encapsulates a Level Sequence, along with all extra data needed to play that level sequence in the context of a dialogue \n */" },
		{ "IncludePath", "Tales/NarrativeDialogueSequence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Encapsulates a Level Sequence, along with all extra data needed to play that level sequence in the context of a dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyShotName_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//The sequences to use - one will be selected at random \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "The sequences to use - one will be selected at random" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceAssets_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//The sequences to use - one will be selected at random \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "The sequences to use - one will be selected at random" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropSettings_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/** Controls the crop settings. */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Controls the crop settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRestart_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** If narrative tries playing this sequence but it already started playing it from an earlier node, should we restart the shot or just let the existing one continue? */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If narrative tries playing this sequence but it already started playing it from an earlier node, should we restart the shot or just let the existing one continue?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorOriginRule_MetaData[] = {
		{ "Category", "Anchoring" },
		{ "Comment", "/** Sequence origin will be relative to the selected item */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Sequence origin will be relative to the selected item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorOriginNudge_MetaData[] = {
		{ "Category", "Anchoring" },
		{ "Comment", "/**Allows you to nudge the shot upwards, downwards, etc. Extra offset applied to shot transform. Applied in speakers transform space. */" },
		{ "EditCondition", "AnchorOriginRule != EAnchorOriginRule::AOR_Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Allows you to nudge the shot upwards, downwards, etc. Extra offset applied to shot transform. Applied in speakers transform space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorRotationRule_MetaData[] = {
		{ "Category", "Anchoring" },
		{ "Comment", "/**Sequence rotation will be relative to the selected item*/" },
		{ "EditCondition", "AnchorOriginRule != EAnchorOriginRule::AOR_Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Sequence rotation will be relative to the selected item" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorAvatarCustomID_MetaData[] = {
		{ "Category", "Anchoring" },
		{ "Comment", "/** If AnchorAvatar is custom, this is the ID of the avatar to use as the override */" },
		{ "EditCondition", "AnchorOriginRule == EAnchorOriginRule::AOR_Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If AnchorAvatar is custom, this is the ID of the avatar to use as the override" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUse180DegreeRule_MetaData[] = {
		{ "Category", "Framing" },
		{ "Comment", "/**Force the player and all other speakers to be on opposite sides of the screen using Y-axis movement and Yaw. \n\x09\x09You wouldn't want this enabled for ultra close up shots, or if you want your character to be in the middle of the screen, \n\x09\x09""but otherwise you should enable this as the 180 degree rule is a classic cinematography rule*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "Force the player and all other speakers to be on opposite sides of the screen using Y-axis movement and Yaw.\n               You wouldn't want this enabled for ultra close up shots, or if you want your character to be in the middle of the screen,\n               but otherwise you should enable this as the 180 degree rule is a classic cinematography rule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitsY180DegreeRule_MetaData[] = {
		{ "Category", "Framing" },
		{ "Comment", "/** If using 180 degree rule, how many degrees of yaw to push the shots in either direction */" },
		{ "EditCondition", "bUse180DegreeRule" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If using 180 degree rule, how many degrees of yaw to push the shots in either direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DegreesYaw180DegreeRule_MetaData[] = {
		{ "Category", "Framing" },
		{ "Comment", "/** If using 180 degree rule, how many degrees of yaw to push the shots in either direction */" },
		{ "EditCondition", "bUse180DegreeRule" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If using 180 degree rule, how many degrees of yaw to push the shots in either direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTrackingSettings_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/**What avatar should the camera track on if this is enabled */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "What avatar should the camera track on if this is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusTrackingSettings_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/**What avatar should the camera track on if this is enabled */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "What avatar should the camera track on if this is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFocusPoint_MetaData[] = {
		{ "Category", "Tracking/Focus" },
		{ "Comment", "/**If true the camera will draw a box showing focus point */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "If true the camera will draw a box showing focus point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Listener_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorActor_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAtActor_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusActor_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceActor_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cinecam_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//The cinecam spawned in by the sequence \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
		{ "ToolTip", "The cinecam spawned in by the sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[] = {
		{ "Category", "Sequence" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeDialogueSequence.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_FriendlyShotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceAssets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CropSettings;
	static void NewProp_bShouldRestart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRestart;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnchorOriginRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnchorOriginRule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorOriginNudge;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnchorRotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnchorRotationRule;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnchorAvatarCustomID;
	static void NewProp_bUse180DegreeRule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse180DegreeRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitsY180DegreeRule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DegreesYaw180DegreeRule;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtTrackingSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusTrackingSettings;
	static void NewProp_bDrawDebugFocusPoint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFocusPoint;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Listener;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AnchorActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LookAtActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FocusActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SequenceActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Cinecam;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Dialogue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeDialogueSequence_EndSequence, "EndSequence" }, // 4196154800
		{ &Z_Construct_UFunction_UNarrativeDialogueSequence_GetGraphDisplayText, "GetGraphDisplayText" }, // 86485933
		{ &Z_Construct_UFunction_UNarrativeDialogueSequence_GetShotAnchorTransform, "GetShotAnchorTransform" }, // 917486418
		{ &Z_Construct_UFunction_UNarrativeDialogueSequence_OnStop, "OnStop" }, // 3146743432
		{ &Z_Construct_UFunction_UNarrativeDialogueSequence_PlaySequence, "PlaySequence" }, // 2984495963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeDialogueSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_FriendlyShotName = { "FriendlyShotName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, FriendlyShotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FriendlyShotName_MetaData), NewProp_FriendlyShotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_SequenceAssets_Inner = { "SequenceAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_SequenceAssets = { "SequenceAssets", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, SequenceAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceAssets_MetaData), NewProp_SequenceAssets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSettings_MetaData), NewProp_PlaybackSettings_MetaData) }; // 3768999938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_CropSettings = { "CropSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, CropSettings), Z_Construct_UScriptStruct_FPlateCropSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropSettings_MetaData), NewProp_CropSettings_MetaData) }; // 3980497676
void Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bShouldRestart_SetBit(void* Obj)
{
	((UNarrativeDialogueSequence*)Obj)->bShouldRestart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bShouldRestart = { "bShouldRestart", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNarrativeDialogueSequence), &Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bShouldRestart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldRestart_MetaData), NewProp_bShouldRestart_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorOriginRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorOriginRule = { "AnchorOriginRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, AnchorOriginRule), Z_Construct_UEnum_NarrativeArsenal_EAnchorOriginRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorOriginRule_MetaData), NewProp_AnchorOriginRule_MetaData) }; // 887019820
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorOriginNudge = { "AnchorOriginNudge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, AnchorOriginNudge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorOriginNudge_MetaData), NewProp_AnchorOriginNudge_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorRotationRule = { "AnchorRotationRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, AnchorRotationRule), Z_Construct_UEnum_NarrativeArsenal_EAnchorRotationRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorRotationRule_MetaData), NewProp_AnchorRotationRule_MetaData) }; // 394070100
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorAvatarCustomID = { "AnchorAvatarCustomID", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, AnchorAvatarCustomID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorAvatarCustomID_MetaData), NewProp_AnchorAvatarCustomID_MetaData) };
void Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bUse180DegreeRule_SetBit(void* Obj)
{
	((UNarrativeDialogueSequence*)Obj)->bUse180DegreeRule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bUse180DegreeRule = { "bUse180DegreeRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeDialogueSequence), &Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bUse180DegreeRule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUse180DegreeRule_MetaData), NewProp_bUse180DegreeRule_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_UnitsY180DegreeRule = { "UnitsY180DegreeRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, UnitsY180DegreeRule), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitsY180DegreeRule_MetaData), NewProp_UnitsY180DegreeRule_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_DegreesYaw180DegreeRule = { "DegreesYaw180DegreeRule", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, DegreesYaw180DegreeRule), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DegreesYaw180DegreeRule_MetaData), NewProp_DegreesYaw180DegreeRule_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_LookAtTrackingSettings = { "LookAtTrackingSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, LookAtTrackingSettings), Z_Construct_UScriptStruct_FShotTrackingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtTrackingSettings_MetaData), NewProp_LookAtTrackingSettings_MetaData) }; // 803217605
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_FocusTrackingSettings = { "FocusTrackingSettings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, FocusTrackingSettings), Z_Construct_UScriptStruct_FShotTrackingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusTrackingSettings_MetaData), NewProp_FocusTrackingSettings_MetaData) }; // 803217605
void Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bDrawDebugFocusPoint_SetBit(void* Obj)
{
	((UNarrativeDialogueSequence*)Obj)->bDrawDebugFocusPoint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bDrawDebugFocusPoint = { "bDrawDebugFocusPoint", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeDialogueSequence), &Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bDrawDebugFocusPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugFocusPoint_MetaData), NewProp_bDrawDebugFocusPoint_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, Speaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Listener = { "Listener", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, Listener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Listener_MetaData), NewProp_Listener_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorActor = { "AnchorActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, AnchorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorActor_MetaData), NewProp_AnchorActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_LookAtActor = { "LookAtActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, LookAtActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAtActor_MetaData), NewProp_LookAtActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_FocusActor = { "FocusActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, FocusActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusActor_MetaData), NewProp_FocusActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_SequenceActor = { "SequenceActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, SequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceActor_MetaData), NewProp_SequenceActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Cinecam = { "Cinecam", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, Cinecam), Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cinecam_MetaData), NewProp_Cinecam_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeDialogueSequence, Dialogue), Z_Construct_UClass_UDialogue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dialogue_MetaData), NewProp_Dialogue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeDialogueSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_FriendlyShotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_SequenceAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_SequenceAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_PlaybackSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_CropSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bShouldRestart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorOriginRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorOriginRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorOriginNudge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorRotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorRotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorAvatarCustomID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bUse180DegreeRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_UnitsY180DegreeRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_DegreesYaw180DegreeRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_LookAtTrackingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_FocusTrackingSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_bDrawDebugFocusPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Listener,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_AnchorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_LookAtActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_FocusActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_SequenceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Cinecam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeDialogueSequence_Statics::NewProp_Dialogue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSequence_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeDialogueSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeDialogueSequence_Statics::ClassParams = {
	&UNarrativeDialogueSequence::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeDialogueSequence_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSequence_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeDialogueSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeDialogueSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeDialogueSequence()
{
	if (!Z_Registration_Info_UClass_UNarrativeDialogueSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeDialogueSequence.OuterSingleton, Z_Construct_UClass_UNarrativeDialogueSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeDialogueSequence.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeDialogueSequence>()
{
	return UNarrativeDialogueSequence::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeDialogueSequence);
UNarrativeDialogueSequence::~UNarrativeDialogueSequence() {}
// End Class UNarrativeDialogueSequence

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnchorOriginRule_StaticEnum, TEXT("EAnchorOriginRule"), &Z_Registration_Info_UEnum_EAnchorOriginRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 887019820U) },
		{ EAnchorRotationRule_StaticEnum, TEXT("EAnchorRotationRule"), &Z_Registration_Info_UEnum_EAnchorRotationRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 394070100U) },
		{ EShotTrackingRule_StaticEnum, TEXT("EShotTrackingRule"), &Z_Registration_Info_UEnum_EShotTrackingRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2455177096U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FShotTrackingSettings::StaticStruct, Z_Construct_UScriptStruct_FShotTrackingSettings_Statics::NewStructOps, TEXT("ShotTrackingSettings"), &Z_Registration_Info_UScriptStruct_ShotTrackingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShotTrackingSettings), 803217605U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeDialogueSequence, UNarrativeDialogueSequence::StaticClass, TEXT("UNarrativeDialogueSequence"), &Z_Registration_Info_UClass_UNarrativeDialogueSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeDialogueSequence), 2348804754U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_696746407(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
