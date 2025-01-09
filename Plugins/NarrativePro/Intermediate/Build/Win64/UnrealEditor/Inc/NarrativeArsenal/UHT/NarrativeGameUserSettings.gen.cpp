// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeGameUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameUserSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameUserSettings();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum ENarrativeGameplayDifficulty
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty;
static UEnum* ENarrativeGameplayDifficulty_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ENarrativeGameplayDifficulty"));
	}
	return Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeGameplayDifficulty>()
{
	return ENarrativeGameplayDifficulty_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Easy.Name", "ENarrativeGameplayDifficulty::Easy" },
		{ "Hard.Name", "ENarrativeGameplayDifficulty::Hard" },
		{ "Insane.Name", "ENarrativeGameplayDifficulty::Insane" },
		{ "Medium.Name", "ENarrativeGameplayDifficulty::Medium" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENarrativeGameplayDifficulty::Easy", (int64)ENarrativeGameplayDifficulty::Easy },
		{ "ENarrativeGameplayDifficulty::Medium", (int64)ENarrativeGameplayDifficulty::Medium },
		{ "ENarrativeGameplayDifficulty::Hard", (int64)ENarrativeGameplayDifficulty::Hard },
		{ "ENarrativeGameplayDifficulty::Insane", (int64)ENarrativeGameplayDifficulty::Insane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"ENarrativeGameplayDifficulty",
	"ENarrativeGameplayDifficulty",
	Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty()
{
	if (!Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty.InnerSingleton;
}
// End Enum ENarrativeGameplayDifficulty

// Begin Class UNarrativeGameUserSettings Function GetDialogueAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventGetDialogueAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetDialogueAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetDialogueAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::NarrativeGameUserSettings_eventGetDialogueAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::NarrativeGameUserSettings_eventGetDialogueAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetDialogueAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDialogueAudioVolume();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetDialogueAudioVolume

// Begin Class UNarrativeGameUserSettings Function GetFieldOfView
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics
{
	struct NarrativeGameUserSettings_eventGetFieldOfView_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::NarrativeGameUserSettings_eventGetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::NarrativeGameUserSettings_eventGetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetFieldOfView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFieldOfView();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetFieldOfView

// Begin Class UNarrativeGameUserSettings Function GetGameplayDifficulty
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics
{
	struct NarrativeGameUserSettings_eventGetGameplayDifficulty_Parms
	{
		ENarrativeGameplayDifficulty ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetGameplayDifficulty_Parms, ReturnValue), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(0, nullptr) }; // 4013433520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetGameplayDifficulty", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::NarrativeGameUserSettings_eventGetGameplayDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::NarrativeGameUserSettings_eventGetGameplayDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetGameplayDifficulty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ENarrativeGameplayDifficulty*)Z_Param__Result=P_THIS->GetGameplayDifficulty();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetGameplayDifficulty

// Begin Class UNarrativeGameUserSettings Function GetMusicAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventGetMusicAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetMusicAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetMusicAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::NarrativeGameUserSettings_eventGetMusicAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::NarrativeGameUserSettings_eventGetMusicAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetMusicAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMusicAudioVolume();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetMusicAudioVolume

// Begin Class UNarrativeGameUserSettings Function GetOverallAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventGetOverallAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetOverallAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetOverallAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::NarrativeGameUserSettings_eventGetOverallAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::NarrativeGameUserSettings_eventGetOverallAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetOverallAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOverallAudioVolume();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetOverallAudioVolume

// Begin Class UNarrativeGameUserSettings Function GetSFXAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventGetSFXAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetSFXAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetSFXAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::NarrativeGameUserSettings_eventGetSFXAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::NarrativeGameUserSettings_eventGetSFXAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetSFXAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSFXAudioVolume();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetSFXAudioVolume

// Begin Class UNarrativeGameUserSettings Function GetUIAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventGetUIAudioVolume_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventGetUIAudioVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "GetUIAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::NarrativeGameUserSettings_eventGetUIAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::NarrativeGameUserSettings_eventGetUIAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execGetUIAudioVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUIAudioVolume();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function GetUIAudioVolume

// Begin Class UNarrativeGameUserSettings Function InventoryWantsTile
struct Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics
{
	struct NarrativeGameUserSettings_eventInventoryWantsTile_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeGameUserSettings_eventInventoryWantsTile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameUserSettings_eventInventoryWantsTile_Parms), &Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "InventoryWantsTile", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::NarrativeGameUserSettings_eventInventoryWantsTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::NarrativeGameUserSettings_eventInventoryWantsTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execInventoryWantsTile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InventoryWantsTile();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function InventoryWantsTile

// Begin Class UNarrativeGameUserSettings Function SetDialogueAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventSetDialogueAudioVolume_Parms
	{
		float NewDialogueAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueAudioVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDialogueAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::NewProp_NewDialogueAudioVolume = { "NewDialogueAudioVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetDialogueAudioVolume_Parms, NewDialogueAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueAudioVolume_MetaData), NewProp_NewDialogueAudioVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::NewProp_NewDialogueAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetDialogueAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::NarrativeGameUserSettings_eventSetDialogueAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::NarrativeGameUserSettings_eventSetDialogueAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetDialogueAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDialogueAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueAudioVolume(Z_Param_NewDialogueAudioVolume);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetDialogueAudioVolume

// Begin Class UNarrativeGameUserSettings Function SetFieldOfView
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics
{
	struct NarrativeGameUserSettings_eventSetFieldOfView_Parms
	{
		float NewFieldOfView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFieldOfView_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFieldOfView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::NewProp_NewFieldOfView = { "NewFieldOfView", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetFieldOfView_Parms, NewFieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFieldOfView_MetaData), NewProp_NewFieldOfView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::NewProp_NewFieldOfView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::NarrativeGameUserSettings_eventSetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::NarrativeGameUserSettings_eventSetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetFieldOfView)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFieldOfView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFieldOfView(Z_Param_NewFieldOfView);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetFieldOfView

// Begin Class UNarrativeGameUserSettings Function SetGameplayDifficulty
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics
{
	struct NarrativeGameUserSettings_eventSetGameplayDifficulty_Parms
	{
		ENarrativeGameplayDifficulty NewDifficulty;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Set the current gameplay difficulty\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "Set the current gameplay difficulty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDifficulty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDifficulty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::NewProp_NewDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::NewProp_NewDifficulty = { "NewDifficulty", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetGameplayDifficulty_Parms, NewDifficulty), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDifficulty_MetaData), NewProp_NewDifficulty_MetaData) }; // 4013433520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::NewProp_NewDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::NewProp_NewDifficulty,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetGameplayDifficulty", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::NarrativeGameUserSettings_eventSetGameplayDifficulty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::NarrativeGameUserSettings_eventSetGameplayDifficulty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetGameplayDifficulty)
{
	P_GET_ENUM(ENarrativeGameplayDifficulty,Z_Param_NewDifficulty);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameplayDifficulty(ENarrativeGameplayDifficulty(Z_Param_NewDifficulty));
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetGameplayDifficulty

// Begin Class UNarrativeGameUserSettings Function SetInventoryWantsTile
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics
{
	struct NarrativeGameUserSettings_eventSetInventoryWantsTile_Parms
	{
		bool bNewInventoryWantsTile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Set whether or not inventory menu is set to tile. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "Set whether or not inventory menu is set to tile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewInventoryWantsTile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewInventoryWantsTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewInventoryWantsTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::NewProp_bNewInventoryWantsTile_SetBit(void* Obj)
{
	((NarrativeGameUserSettings_eventSetInventoryWantsTile_Parms*)Obj)->bNewInventoryWantsTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::NewProp_bNewInventoryWantsTile = { "bNewInventoryWantsTile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameUserSettings_eventSetInventoryWantsTile_Parms), &Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::NewProp_bNewInventoryWantsTile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewInventoryWantsTile_MetaData), NewProp_bNewInventoryWantsTile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::NewProp_bNewInventoryWantsTile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetInventoryWantsTile", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::NarrativeGameUserSettings_eventSetInventoryWantsTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::NarrativeGameUserSettings_eventSetInventoryWantsTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetInventoryWantsTile)
{
	P_GET_UBOOL(Z_Param_bNewInventoryWantsTile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInventoryWantsTile(Z_Param_bNewInventoryWantsTile);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetInventoryWantsTile

// Begin Class UNarrativeGameUserSettings Function SetMusicAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventSetMusicAudioVolume_Parms
	{
		float NewMusicAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMusicAudioVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMusicAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::NewProp_NewMusicAudioVolume = { "NewMusicAudioVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetMusicAudioVolume_Parms, NewMusicAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMusicAudioVolume_MetaData), NewProp_NewMusicAudioVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::NewProp_NewMusicAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetMusicAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::NarrativeGameUserSettings_eventSetMusicAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::NarrativeGameUserSettings_eventSetMusicAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetMusicAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMusicAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMusicAudioVolume(Z_Param_NewMusicAudioVolume);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetMusicAudioVolume

// Begin Class UNarrativeGameUserSettings Function SetOverallAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventSetOverallAudioVolume_Parms
	{
		float NewOverallAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOverallAudioVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOverallAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::NewProp_NewOverallAudioVolume = { "NewOverallAudioVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetOverallAudioVolume_Parms, NewOverallAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOverallAudioVolume_MetaData), NewProp_NewOverallAudioVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::NewProp_NewOverallAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetOverallAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::NarrativeGameUserSettings_eventSetOverallAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::NarrativeGameUserSettings_eventSetOverallAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetOverallAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewOverallAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverallAudioVolume(Z_Param_NewOverallAudioVolume);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetOverallAudioVolume

// Begin Class UNarrativeGameUserSettings Function SetSFXAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventSetSFXAudioVolume_Parms
	{
		float NewSFXAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSFXAudioVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSFXAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::NewProp_NewSFXAudioVolume = { "NewSFXAudioVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetSFXAudioVolume_Parms, NewSFXAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSFXAudioVolume_MetaData), NewProp_NewSFXAudioVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::NewProp_NewSFXAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetSFXAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::NarrativeGameUserSettings_eventSetSFXAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::NarrativeGameUserSettings_eventSetSFXAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetSFXAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSFXAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSFXAudioVolume(Z_Param_NewSFXAudioVolume);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetSFXAudioVolume

// Begin Class UNarrativeGameUserSettings Function SetShouldCrouchToggle
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics
{
	struct NarrativeGameUserSettings_eventSetShouldCrouchToggle_Parms
	{
		bool bNewCrouchToggles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Set whether or not crouching is a toggle or whether crouch key requires held. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "Set whether or not crouching is a toggle or whether crouch key requires held." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewCrouchToggles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewCrouchToggles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCrouchToggles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::NewProp_bNewCrouchToggles_SetBit(void* Obj)
{
	((NarrativeGameUserSettings_eventSetShouldCrouchToggle_Parms*)Obj)->bNewCrouchToggles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::NewProp_bNewCrouchToggles = { "bNewCrouchToggles", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameUserSettings_eventSetShouldCrouchToggle_Parms), &Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::NewProp_bNewCrouchToggles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewCrouchToggles_MetaData), NewProp_bNewCrouchToggles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::NewProp_bNewCrouchToggles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetShouldCrouchToggle", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::NarrativeGameUserSettings_eventSetShouldCrouchToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::NarrativeGameUserSettings_eventSetShouldCrouchToggle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetShouldCrouchToggle)
{
	P_GET_UBOOL(Z_Param_bNewCrouchToggles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldCrouchToggle(Z_Param_bNewCrouchToggles);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetShouldCrouchToggle

// Begin Class UNarrativeGameUserSettings Function SetUIAudioVolume
struct Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics
{
	struct NarrativeGameUserSettings_eventSetUIAudioVolume_Parms
	{
		float NewUIAudioVolume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewUIAudioVolume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewUIAudioVolume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::NewProp_NewUIAudioVolume = { "NewUIAudioVolume", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameUserSettings_eventSetUIAudioVolume_Parms, NewUIAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewUIAudioVolume_MetaData), NewProp_NewUIAudioVolume_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::NewProp_NewUIAudioVolume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "SetUIAudioVolume", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::NarrativeGameUserSettings_eventSetUIAudioVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::NarrativeGameUserSettings_eventSetUIAudioVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execSetUIAudioVolume)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewUIAudioVolume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUIAudioVolume(Z_Param_NewUIAudioVolume);
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function SetUIAudioVolume

// Begin Class UNarrativeGameUserSettings Function ShouldCrouchToggle
struct Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics
{
	struct NarrativeGameUserSettings_eventShouldCrouchToggle_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeGameUserSettings_eventShouldCrouchToggle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameUserSettings_eventShouldCrouchToggle_Parms), &Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeGameUserSettings, nullptr, "ShouldCrouchToggle", nullptr, nullptr, Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::NarrativeGameUserSettings_eventShouldCrouchToggle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::NarrativeGameUserSettings_eventShouldCrouchToggle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeGameUserSettings::execShouldCrouchToggle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldCrouchToggle();
	P_NATIVE_END;
}
// End Class UNarrativeGameUserSettings Function ShouldCrouchToggle

// Begin Class UNarrativeGameUserSettings
void UNarrativeGameUserSettings::StaticRegisterNativesUNarrativeGameUserSettings()
{
	UClass* Class = UNarrativeGameUserSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueAudioVolume", &UNarrativeGameUserSettings::execGetDialogueAudioVolume },
		{ "GetFieldOfView", &UNarrativeGameUserSettings::execGetFieldOfView },
		{ "GetGameplayDifficulty", &UNarrativeGameUserSettings::execGetGameplayDifficulty },
		{ "GetMusicAudioVolume", &UNarrativeGameUserSettings::execGetMusicAudioVolume },
		{ "GetOverallAudioVolume", &UNarrativeGameUserSettings::execGetOverallAudioVolume },
		{ "GetSFXAudioVolume", &UNarrativeGameUserSettings::execGetSFXAudioVolume },
		{ "GetUIAudioVolume", &UNarrativeGameUserSettings::execGetUIAudioVolume },
		{ "InventoryWantsTile", &UNarrativeGameUserSettings::execInventoryWantsTile },
		{ "SetDialogueAudioVolume", &UNarrativeGameUserSettings::execSetDialogueAudioVolume },
		{ "SetFieldOfView", &UNarrativeGameUserSettings::execSetFieldOfView },
		{ "SetGameplayDifficulty", &UNarrativeGameUserSettings::execSetGameplayDifficulty },
		{ "SetInventoryWantsTile", &UNarrativeGameUserSettings::execSetInventoryWantsTile },
		{ "SetMusicAudioVolume", &UNarrativeGameUserSettings::execSetMusicAudioVolume },
		{ "SetOverallAudioVolume", &UNarrativeGameUserSettings::execSetOverallAudioVolume },
		{ "SetSFXAudioVolume", &UNarrativeGameUserSettings::execSetSFXAudioVolume },
		{ "SetShouldCrouchToggle", &UNarrativeGameUserSettings::execSetShouldCrouchToggle },
		{ "SetUIAudioVolume", &UNarrativeGameUserSettings::execSetUIAudioVolume },
		{ "ShouldCrouchToggle", &UNarrativeGameUserSettings::execShouldCrouchToggle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeGameUserSettings);
UClass* Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister()
{
	return UNarrativeGameUserSettings::StaticClass();
}
struct Z_Construct_UClass_UNarrativeGameUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Since GameUserSettings doesnt support sound class overrides, in Narrative pro we've extended it to do so.\n */" },
		{ "IncludePath", "UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "Since GameUserSettings doesnt support sound class overrides, in Narrative pro we've extended it to do so." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallAudioVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAudioVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIAudioVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SFXAudioVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicAudioVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchToggles_MetaData[] = {
		{ "Comment", "///**If true, crouch button toggles crouch, otherwise it needs to be held for as long as you require the crouch. */\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "If true, crouch button toggles crouch, otherwise it needs to be held for as long as you require the crouch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInventoryWantsTile_MetaData[] = {
		{ "Comment", "///** Whether the inventory menu wants to display using grid or tile mode */\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "Whether the inventory menu wants to display using grid or tile mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayDifficulty_MetaData[] = {
		{ "Comment", "//The gameplay difficulty, can be read from the user settings by any gameplay elements that need it. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "The gameplay difficulty, can be read from the user settings by any gameplay elements that need it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Comment", "///** The FOV the default camera mode will use. */\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameUserSettings.h" },
		{ "ToolTip", "The FOV the default camera mode will use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UIAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SFXAudioVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MusicAudioVolume;
	static void NewProp_bCrouchToggles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchToggles;
	static void NewProp_bInventoryWantsTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInventoryWantsTile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameplayDifficulty_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameplayDifficulty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetDialogueAudioVolume, "GetDialogueAudioVolume" }, // 704720594
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetFieldOfView, "GetFieldOfView" }, // 2942690131
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetGameplayDifficulty, "GetGameplayDifficulty" }, // 138702011
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetMusicAudioVolume, "GetMusicAudioVolume" }, // 3479935305
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetOverallAudioVolume, "GetOverallAudioVolume" }, // 4086502452
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetSFXAudioVolume, "GetSFXAudioVolume" }, // 3088093670
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_GetUIAudioVolume, "GetUIAudioVolume" }, // 1505039752
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_InventoryWantsTile, "InventoryWantsTile" }, // 3375182192
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetDialogueAudioVolume, "SetDialogueAudioVolume" }, // 2791284053
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetFieldOfView, "SetFieldOfView" }, // 1200646881
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetGameplayDifficulty, "SetGameplayDifficulty" }, // 3259126872
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetInventoryWantsTile, "SetInventoryWantsTile" }, // 3133748740
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetMusicAudioVolume, "SetMusicAudioVolume" }, // 272028704
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetOverallAudioVolume, "SetOverallAudioVolume" }, // 492860267
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetSFXAudioVolume, "SetSFXAudioVolume" }, // 171716484
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetShouldCrouchToggle, "SetShouldCrouchToggle" }, // 3094144207
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_SetUIAudioVolume, "SetUIAudioVolume" }, // 2516184706
		{ &Z_Construct_UFunction_UNarrativeGameUserSettings_ShouldCrouchToggle, "ShouldCrouchToggle" }, // 787099536
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeGameUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_OverallAudioVolume = { "OverallAudioVolume", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, OverallAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallAudioVolume_MetaData), NewProp_OverallAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_DialogueAudioVolume = { "DialogueAudioVolume", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, DialogueAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueAudioVolume_MetaData), NewProp_DialogueAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_UIAudioVolume = { "UIAudioVolume", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, UIAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIAudioVolume_MetaData), NewProp_UIAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_SFXAudioVolume = { "SFXAudioVolume", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, SFXAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SFXAudioVolume_MetaData), NewProp_SFXAudioVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_MusicAudioVolume = { "MusicAudioVolume", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, MusicAudioVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicAudioVolume_MetaData), NewProp_MusicAudioVolume_MetaData) };
void Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bCrouchToggles_SetBit(void* Obj)
{
	((UNarrativeGameUserSettings*)Obj)->bCrouchToggles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bCrouchToggles = { "bCrouchToggles", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeGameUserSettings), &Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bCrouchToggles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouchToggles_MetaData), NewProp_bCrouchToggles_MetaData) };
void Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bInventoryWantsTile_SetBit(void* Obj)
{
	((UNarrativeGameUserSettings*)Obj)->bInventoryWantsTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bInventoryWantsTile = { "bInventoryWantsTile", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeGameUserSettings), &Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bInventoryWantsTile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInventoryWantsTile_MetaData), NewProp_bInventoryWantsTile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_GameplayDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_GameplayDifficulty = { "GameplayDifficulty", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, GameplayDifficulty), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayDifficulty_MetaData), NewProp_GameplayDifficulty_MetaData) }; // 4013433520
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeGameUserSettings, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_OverallAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_DialogueAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_UIAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_SFXAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_MusicAudioVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bCrouchToggles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_bInventoryWantsTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_GameplayDifficulty_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_GameplayDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeGameUserSettings_Statics::NewProp_FieldOfView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeGameUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeGameUserSettings_Statics::ClassParams = {
	&UNarrativeGameUserSettings::StaticClass,
	"GameUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeGameUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameUserSettings_Statics::PropPointers),
	0,
	0x409000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeGameUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeGameUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeGameUserSettings()
{
	if (!Z_Registration_Info_UClass_UNarrativeGameUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeGameUserSettings.OuterSingleton, Z_Construct_UClass_UNarrativeGameUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeGameUserSettings.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeGameUserSettings>()
{
	return UNarrativeGameUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeGameUserSettings);
UNarrativeGameUserSettings::~UNarrativeGameUserSettings() {}
// End Class UNarrativeGameUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENarrativeGameplayDifficulty_StaticEnum, TEXT("ENarrativeGameplayDifficulty"), &Z_Registration_Info_UEnum_ENarrativeGameplayDifficulty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4013433520U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeGameUserSettings, UNarrativeGameUserSettings::StaticClass, TEXT("UNarrativeGameUserSettings"), &Z_Registration_Info_UClass_UNarrativeGameUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeGameUserSettings), 3751405750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_3696258210(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
