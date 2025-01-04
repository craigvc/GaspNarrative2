// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/ArsenalStatics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArsenalStatics() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalStatics();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalStatics_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UArsenalStatics Function GetAttitude
struct Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics
{
	struct ArsenalStatics_eventGetAttitude_Parms
	{
		const AActor* TestActor;
		const AActor* Target;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetAttitude_Parms, TestActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestActor_MetaData), NewProp_TestActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetAttitude_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetAttitude_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_TestActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetAttitude", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::ArsenalStatics_eventGetAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::ArsenalStatics_eventGetAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetAttitude)
{
	P_GET_OBJECT(AActor,Z_Param_TestActor);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=UArsenalStatics::GetAttitude(Z_Param_TestActor,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetAttitude

// Begin Class UArsenalStatics Function GetGameEntryMapName
struct Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics
{
	struct ArsenalStatics_eventGetGameEntryMapName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the narrative pro settings with the values configured in your DefaultEngine.ini file.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the narrative pro settings with the values configured in your DefaultEngine.ini file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameEntryMapName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameEntryMapName", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::ArsenalStatics_eventGetGameEntryMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::ArsenalStatics_eventGetGameEntryMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameEntryMapName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UArsenalStatics::GetGameEntryMapName();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameEntryMapName

// Begin Class UArsenalStatics Function GetGameplayDifficultyLevel
struct Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics
{
	struct ArsenalStatics_eventGetGameplayDifficultyLevel_Parms
	{
		ENarrativeGameplayDifficulty ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the current gameplay difficulty level\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the current gameplay difficulty level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameplayDifficultyLevel_Parms, ReturnValue), Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty, METADATA_PARAMS(0, nullptr) }; // 4013433520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameplayDifficultyLevel", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::ArsenalStatics_eventGetGameplayDifficultyLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::ArsenalStatics_eventGetGameplayDifficultyLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameplayDifficultyLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ENarrativeGameplayDifficulty*)Z_Param__Result=UArsenalStatics::GetGameplayDifficultyLevel();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameplayDifficultyLevel

// Begin Class UArsenalStatics Function GetNarrativeGameUserSettings
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics
{
	struct ArsenalStatics_eventGetNarrativeGameUserSettings_Parms
	{
		UNarrativeGameUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the narrative game user settings\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the narrative game user settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameUserSettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeGameUserSettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::ArsenalStatics_eventGetNarrativeGameUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::ArsenalStatics_eventGetNarrativeGameUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeGameUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeGameUserSettings**)Z_Param__Result=UArsenalStatics::GetNarrativeGameUserSettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeGameUserSettings

// Begin Class UArsenalStatics Function GetNarrativeProSettings
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics
{
	struct ArsenalStatics_eventGetNarrativeProSettings_Parms
	{
		UArsenalSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the narrative pro settings with the values configured in your DefaultEngine.ini file.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the narrative pro settings with the values configured in your DefaultEngine.ini file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeProSettings_Parms, ReturnValue), Z_Construct_UClass_UArsenalSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeProSettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::ArsenalStatics_eventGetNarrativeProSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::ArsenalStatics_eventGetNarrativeProSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeProSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UArsenalSettings**)Z_Param__Result=UArsenalStatics::GetNarrativeProSettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeProSettings

// Begin Class UArsenalStatics Function GetNPCSequenceStartTransform
struct Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics
{
	struct ArsenalStatics_eventGetNPCSequenceStartTransform_Parms
	{
		ULevelSequence* Sequence;
		UNPCDefinition* NPC;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "//Get the key the NPC needs to be at for the first frame of the cinematic. We use this to move NPCs into the right location before we start a sequence that moves them. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the key the NPC needs to be at for the first frame of the cinematic. We use this to move NPCs into the right location before we start a sequence that moves them." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNPCSequenceStartTransform_Parms, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNPCSequenceStartTransform_Parms, NPC), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNPCSequenceStartTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNPCSequenceStartTransform", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::ArsenalStatics_eventGetNPCSequenceStartTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::ArsenalStatics_eventGetNPCSequenceStartTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNPCSequenceStartTransform)
{
	P_GET_OBJECT(ULevelSequence,Z_Param_Sequence);
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UArsenalStatics::GetNPCSequenceStartTransform(Z_Param_Sequence,Z_Param_NPC);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNPCSequenceStartTransform

// Begin Class UArsenalStatics Function IsSameTeam
struct Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics
{
	struct ArsenalStatics_eventIsSameTeam_Parms
	{
		const AActor* TestActor;
		const AActor* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//Checks we're the same team, not just that we're friendly with each other.\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Checks we're the same team, not just that we're friendly with each other." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsSameTeam_Parms, TestActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestActor_MetaData), NewProp_TestActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsSameTeam_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsSameTeam_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsSameTeam_Parms), &Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_TestActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsSameTeam", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::ArsenalStatics_eventIsSameTeam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::ArsenalStatics_eventIsSameTeam_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsSameTeam()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsSameTeam_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsSameTeam)
{
	P_GET_OBJECT(AActor,Z_Param_TestActor);
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsSameTeam(Z_Param_TestActor,Z_Param_Target);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsSameTeam

// Begin Class UArsenalStatics
void UArsenalStatics::StaticRegisterNativesUArsenalStatics()
{
	UClass* Class = UArsenalStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttitude", &UArsenalStatics::execGetAttitude },
		{ "GetGameEntryMapName", &UArsenalStatics::execGetGameEntryMapName },
		{ "GetGameplayDifficultyLevel", &UArsenalStatics::execGetGameplayDifficultyLevel },
		{ "GetNarrativeGameUserSettings", &UArsenalStatics::execGetNarrativeGameUserSettings },
		{ "GetNarrativeProSettings", &UArsenalStatics::execGetNarrativeProSettings },
		{ "GetNPCSequenceStartTransform", &UArsenalStatics::execGetNPCSequenceStartTransform },
		{ "IsSameTeam", &UArsenalStatics::execIsSameTeam },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArsenalStatics);
UClass* Z_Construct_UClass_UArsenalStatics_NoRegister()
{
	return UArsenalStatics::StaticClass();
}
struct Z_Construct_UClass_UArsenalStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Useful BP exposed functions for Narrative Pro. \n */" },
		{ "IncludePath", "ArsenalStatics.h" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Useful BP exposed functions for Narrative Pro." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UArsenalStatics_GetAttitude, "GetAttitude" }, // 3736357463
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName, "GetGameEntryMapName" }, // 465950968
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel, "GetGameplayDifficultyLevel" }, // 2440246040
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings, "GetNarrativeGameUserSettings" }, // 338520600
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings, "GetNarrativeProSettings" }, // 2359277252
		{ &Z_Construct_UFunction_UArsenalStatics_GetNPCSequenceStartTransform, "GetNPCSequenceStartTransform" }, // 3853198998
		{ &Z_Construct_UFunction_UArsenalStatics_IsSameTeam, "IsSameTeam" }, // 2741074797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArsenalStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UArsenalStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UArsenalStatics_Statics::ClassParams = {
	&UArsenalStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArsenalStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UArsenalStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UArsenalStatics()
{
	if (!Z_Registration_Info_UClass_UArsenalStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArsenalStatics.OuterSingleton, Z_Construct_UClass_UArsenalStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UArsenalStatics.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UArsenalStatics>()
{
	return UArsenalStatics::StaticClass();
}
UArsenalStatics::UArsenalStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UArsenalStatics);
UArsenalStatics::~UArsenalStatics() {}
// End Class UArsenalStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArsenalStatics, UArsenalStatics::StaticClass, TEXT("UArsenalStatics"), &Z_Registration_Info_UClass_UArsenalStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArsenalStatics), 3571301876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_981321472(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
