// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/ArsenalStatics.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArsenalStatics() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameMode_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameState_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativePlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalStatics();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UArsenalStatics_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeCombatDeveloperSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameUserSettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeGameplayDifficulty();
NARRATIVECOMMONUI_API UClass* Z_Construct_UClass_UNarrativeUIDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UArsenalStatics Function AddFactionsToActor
struct Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics
{
	struct ArsenalStatics_eventAddFactionsToActor_Parms
	{
		AActor* Actor;
		FGameplayTagContainer Factions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//Put the actor in the given factions, provided it implements the team interface. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Put the actor in the given factions, provided it implements the team interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddFactionsToActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventAddFactionsToActor_Parms, Factions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factions_MetaData), NewProp_Factions_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::NewProp_Factions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "AddFactionsToActor", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::ArsenalStatics_eventAddFactionsToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::ArsenalStatics_eventAddFactionsToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execAddFactionsToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Factions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArsenalStatics::AddFactionsToActor(Z_Param_Actor,Z_Param_Out_Factions);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function AddFactionsToActor

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

// Begin Class UArsenalStatics Function GetCharacterCreatorMapName
struct Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics
{
	struct ArsenalStatics_eventGetCharacterCreatorMapName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the charactor creator map name defined in the Narrative Pro settings. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the charactor creator map name defined in the Narrative Pro settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetCharacterCreatorMapName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetCharacterCreatorMapName", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::ArsenalStatics_eventGetCharacterCreatorMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::ArsenalStatics_eventGetCharacterCreatorMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetCharacterCreatorMapName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UArsenalStatics::GetCharacterCreatorMapName();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetCharacterCreatorMapName

// Begin Class UArsenalStatics Function GetCombatSettings
struct Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics
{
	struct ArsenalStatics_eventGetCombatSettings_Parms
	{
		UNarrativeCombatDeveloperSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//BP getter for combat Settings. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "BP getter for combat Settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetCombatSettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeCombatDeveloperSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetCombatSettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::ArsenalStatics_eventGetCombatSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::ArsenalStatics_eventGetCombatSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetCombatSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetCombatSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetCombatSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeCombatDeveloperSettings**)Z_Param__Result=UArsenalStatics::GetCombatSettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetCombatSettings

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
		{ "Comment", "//Return the game entry map name defined in the Narrative Pro settings. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the game entry map name defined in the Narrative Pro settings." },
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

// Begin Class UArsenalStatics Function GetGameResolution
struct Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics
{
	struct ArsenalStatics_eventGetGameResolution_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Resolution" },
		{ "Comment", "//Return the current screen resolution\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the current screen resolution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetGameResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetGameResolution", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::ArsenalStatics_eventGetGameResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::ArsenalStatics_eventGetGameResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetGameResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetGameResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetGameResolution)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UArsenalStatics::GetGameResolution();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetGameResolution

// Begin Class UArsenalStatics Function GetNarrativeGameMode
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics
{
	struct ArsenalStatics_eventGetNarrativeGameMode_Parms
	{
		const UObject* WorldContextObject;
		ANarrativeGameMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the narrative game mode\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the narrative game mode" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameMode_Parms, ReturnValue), Z_Construct_UClass_ANarrativeGameMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeGameMode", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::ArsenalStatics_eventGetNarrativeGameMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::ArsenalStatics_eventGetNarrativeGameMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeGameMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeGameMode**)Z_Param__Result=UArsenalStatics::GetNarrativeGameMode(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeGameMode

// Begin Class UArsenalStatics Function GetNarrativeGameState
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics
{
	struct ArsenalStatics_eventGetNarrativeGameState_Parms
	{
		const UObject* WorldContextObject;
		ANarrativeGameState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the narrative game state\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the narrative game state" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeGameState_Parms, ReturnValue), Z_Construct_UClass_ANarrativeGameState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeGameState", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::ArsenalStatics_eventGetNarrativeGameState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::ArsenalStatics_eventGetNarrativeGameState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeGameState)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeGameState**)Z_Param__Result=UArsenalStatics::GetNarrativeGameState(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeGameState

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

// Begin Class UArsenalStatics Function GetNarrativeUISettings
struct Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics
{
	struct ArsenalStatics_eventGetNarrativeUISettings_Parms
	{
		UNarrativeUIDeveloperSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//BP getter for UI Settings.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "BP getter for UI Settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetNarrativeUISettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeUIDeveloperSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetNarrativeUISettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::ArsenalStatics_eventGetNarrativeUISettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::ArsenalStatics_eventGetNarrativeUISettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetNarrativeUISettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeUIDeveloperSettings**)Z_Param__Result=UArsenalStatics::GetNarrativeUISettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetNarrativeUISettings

// Begin Class UArsenalStatics Function GetTimeOfDay
struct Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics
{
	struct ArsenalStatics_eventGetTimeOfDay_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the ingame time of day \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the ingame time of day" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::ArsenalStatics_eventGetTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::ArsenalStatics_eventGetTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTimeOfDay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UArsenalStatics::GetTimeOfDay(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTimeOfDay

// Begin Class UArsenalStatics Function GetTimeOfDayAsString
struct Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics
{
	struct ArsenalStatics_eventGetTimeOfDayAsString_Parms
	{
		const UObject* WorldContextObject;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the ingame time of day, formatted as a string ie 16:35\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the ingame time of day, formatted as a string ie 16:35" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDayAsString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDayAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTimeOfDayAsString", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::ArsenalStatics_eventGetTimeOfDayAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::ArsenalStatics_eventGetTimeOfDayAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTimeOfDayAsString)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UArsenalStatics::GetTimeOfDayAsString(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTimeOfDayAsString

// Begin Class UArsenalStatics Function GetTimeOfDaySettings
struct Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics
{
	struct ArsenalStatics_eventGetTimeOfDaySettings_Parms
	{
		UNarrativeTimeOfDaySettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Return the time of day settings with the values configured in your DefaultGame.ini file.  \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Return the time of day settings with the values configured in your DefaultGame.ini file." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTimeOfDaySettings_Parms, ReturnValue), Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTimeOfDaySettings", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::ArsenalStatics_eventGetTimeOfDaySettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::ArsenalStatics_eventGetTimeOfDaySettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTimeOfDaySettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeTimeOfDaySettings**)Z_Param__Result=UArsenalStatics::GetTimeOfDaySettings();
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTimeOfDaySettings

// Begin Class UArsenalStatics Function GetTotalAccumulatedTime
struct Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics
{
	struct ArsenalStatics_eventGetTotalAccumulatedTime_Parms
	{
		const UObject* WorldContextObject;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Get the total accumulated time since the player started playing the game, where 2400 is one full ingame day. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Get the total accumulated time since the player started playing the game, where 2400 is one full ingame day." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTotalAccumulatedTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventGetTotalAccumulatedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "GetTotalAccumulatedTime", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::ArsenalStatics_eventGetTotalAccumulatedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::ArsenalStatics_eventGetTotalAccumulatedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execGetTotalAccumulatedTime)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UArsenalStatics::GetTotalAccumulatedTime(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function GetTotalAccumulatedTime

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

// Begin Class UArsenalStatics Function IsTimeInRange
struct Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics
{
	struct ArsenalStatics_eventIsTimeInRange_Parms
	{
		float Time;
		float RangeStart;
		float RangeEnd;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//check if the time of day provided falls in the given range - handles looping over to the next day \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "check if the time of day provided falls in the given range - handles looping over to the next day" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RangeEnd;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsTimeInRange_Parms, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsTimeInRange_Parms, RangeStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeStart_MetaData), NewProp_RangeStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventIsTimeInRange_Parms, RangeEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEnd_MetaData), NewProp_RangeEnd_MetaData) };
void Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ArsenalStatics_eventIsTimeInRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArsenalStatics_eventIsTimeInRange_Parms), &Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_RangeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "IsTimeInRange", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::ArsenalStatics_eventIsTimeInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::ArsenalStatics_eventIsTimeInRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_IsTimeInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_IsTimeInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execIsTimeInRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RangeEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UArsenalStatics::IsTimeInRange(Z_Param_Time,Z_Param_RangeStart,Z_Param_RangeEnd);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function IsTimeInRange

// Begin Class UArsenalStatics Function RemoveFactionsFromActor
struct Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics
{
	struct ArsenalStatics_eventRemoveFactionsFromActor_Parms
	{
		AActor* Actor;
		FGameplayTagContainer Factions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Teams" },
		{ "Comment", "//remove the actor from the given factions, provided it implements the team interface. \n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "remove the actor from the given factions, provided it implements the team interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Factions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Factions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveFactionsFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Factions = { "Factions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventRemoveFactionsFromActor_Parms, Factions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Factions_MetaData), NewProp_Factions_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::NewProp_Factions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "RemoveFactionsFromActor", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::ArsenalStatics_eventRemoveFactionsFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::ArsenalStatics_eventRemoveFactionsFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execRemoveFactionsFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Factions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UArsenalStatics::RemoveFactionsFromActor(Z_Param_Actor,Z_Param_Out_Factions);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function RemoveFactionsFromActor

// Begin Class UArsenalStatics Function ReplaceInputVariables
struct Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics
{
	struct ArsenalStatics_eventReplaceInputVariables_Parms
	{
		ANarrativePlayerController* PC;
		FText TextToReplace;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Wildcards" },
		{ "Comment", "//Given some text, replace any {Input.Interact} style inputs with their rich text platform specific icon equivalents, ie {Input.Attack} becomes <img id=Input.Xbox.Attack/>\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Given some text, replace any {Input.Interact} style inputs with their rich text platform specific icon equivalents, ie {Input.Attack} becomes <img id=Input.Xbox.Attack/>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TextToReplace;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventReplaceInputVariables_Parms, PC), Z_Construct_UClass_ANarrativePlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_TextToReplace = { "TextToReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventReplaceInputVariables_Parms, TextToReplace), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventReplaceInputVariables_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_PC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_TextToReplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "ReplaceInputVariables", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::ArsenalStatics_eventReplaceInputVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::ArsenalStatics_eventReplaceInputVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execReplaceInputVariables)
{
	P_GET_OBJECT(ANarrativePlayerController,Z_Param_PC);
	P_GET_PROPERTY(FTextProperty,Z_Param_TextToReplace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UArsenalStatics::ReplaceInputVariables(Z_Param_PC,Z_Param_TextToReplace);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function ReplaceInputVariables

// Begin Class UArsenalStatics Function TimeToString
struct Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics
{
	struct ArsenalStatics_eventTimeToString_Parms
	{
		float Time;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative" },
		{ "Comment", "//Convert the float time into a 24 hour string\n" },
		{ "ModuleRelativePath", "Public/ArsenalStatics.h" },
		{ "ToolTip", "Convert the float time into a 24 hour string" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventTimeToString_Parms, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArsenalStatics_eventTimeToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArsenalStatics, nullptr, "TimeToString", nullptr, nullptr, Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::ArsenalStatics_eventTimeToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::ArsenalStatics_eventTimeToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UArsenalStatics_TimeToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArsenalStatics_TimeToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UArsenalStatics::execTimeToString)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UArsenalStatics::TimeToString(Z_Param_Time);
	P_NATIVE_END;
}
// End Class UArsenalStatics Function TimeToString

// Begin Class UArsenalStatics
void UArsenalStatics::StaticRegisterNativesUArsenalStatics()
{
	UClass* Class = UArsenalStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFactionsToActor", &UArsenalStatics::execAddFactionsToActor },
		{ "GetAttitude", &UArsenalStatics::execGetAttitude },
		{ "GetCharacterCreatorMapName", &UArsenalStatics::execGetCharacterCreatorMapName },
		{ "GetCombatSettings", &UArsenalStatics::execGetCombatSettings },
		{ "GetGameEntryMapName", &UArsenalStatics::execGetGameEntryMapName },
		{ "GetGameplayDifficultyLevel", &UArsenalStatics::execGetGameplayDifficultyLevel },
		{ "GetGameResolution", &UArsenalStatics::execGetGameResolution },
		{ "GetNarrativeGameMode", &UArsenalStatics::execGetNarrativeGameMode },
		{ "GetNarrativeGameState", &UArsenalStatics::execGetNarrativeGameState },
		{ "GetNarrativeGameUserSettings", &UArsenalStatics::execGetNarrativeGameUserSettings },
		{ "GetNarrativeProSettings", &UArsenalStatics::execGetNarrativeProSettings },
		{ "GetNarrativeUISettings", &UArsenalStatics::execGetNarrativeUISettings },
		{ "GetTimeOfDay", &UArsenalStatics::execGetTimeOfDay },
		{ "GetTimeOfDayAsString", &UArsenalStatics::execGetTimeOfDayAsString },
		{ "GetTimeOfDaySettings", &UArsenalStatics::execGetTimeOfDaySettings },
		{ "GetTotalAccumulatedTime", &UArsenalStatics::execGetTotalAccumulatedTime },
		{ "IsSameTeam", &UArsenalStatics::execIsSameTeam },
		{ "IsTimeInRange", &UArsenalStatics::execIsTimeInRange },
		{ "RemoveFactionsFromActor", &UArsenalStatics::execRemoveFactionsFromActor },
		{ "ReplaceInputVariables", &UArsenalStatics::execReplaceInputVariables },
		{ "TimeToString", &UArsenalStatics::execTimeToString },
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
		{ &Z_Construct_UFunction_UArsenalStatics_AddFactionsToActor, "AddFactionsToActor" }, // 3100570937
		{ &Z_Construct_UFunction_UArsenalStatics_GetAttitude, "GetAttitude" }, // 3736357463
		{ &Z_Construct_UFunction_UArsenalStatics_GetCharacterCreatorMapName, "GetCharacterCreatorMapName" }, // 1264302251
		{ &Z_Construct_UFunction_UArsenalStatics_GetCombatSettings, "GetCombatSettings" }, // 2673802078
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameEntryMapName, "GetGameEntryMapName" }, // 3448834121
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameplayDifficultyLevel, "GetGameplayDifficultyLevel" }, // 2440246040
		{ &Z_Construct_UFunction_UArsenalStatics_GetGameResolution, "GetGameResolution" }, // 306135454
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameMode, "GetNarrativeGameMode" }, // 2261127101
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameState, "GetNarrativeGameState" }, // 1094295193
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeGameUserSettings, "GetNarrativeGameUserSettings" }, // 338520600
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeProSettings, "GetNarrativeProSettings" }, // 2359277252
		{ &Z_Construct_UFunction_UArsenalStatics_GetNarrativeUISettings, "GetNarrativeUISettings" }, // 494267421
		{ &Z_Construct_UFunction_UArsenalStatics_GetTimeOfDay, "GetTimeOfDay" }, // 2061560295
		{ &Z_Construct_UFunction_UArsenalStatics_GetTimeOfDayAsString, "GetTimeOfDayAsString" }, // 1282030102
		{ &Z_Construct_UFunction_UArsenalStatics_GetTimeOfDaySettings, "GetTimeOfDaySettings" }, // 2265504151
		{ &Z_Construct_UFunction_UArsenalStatics_GetTotalAccumulatedTime, "GetTotalAccumulatedTime" }, // 172786774
		{ &Z_Construct_UFunction_UArsenalStatics_IsSameTeam, "IsSameTeam" }, // 2741074797
		{ &Z_Construct_UFunction_UArsenalStatics_IsTimeInRange, "IsTimeInRange" }, // 3413024601
		{ &Z_Construct_UFunction_UArsenalStatics_RemoveFactionsFromActor, "RemoveFactionsFromActor" }, // 475974797
		{ &Z_Construct_UFunction_UArsenalStatics_ReplaceInputVariables, "ReplaceInputVariables" }, // 490044143
		{ &Z_Construct_UFunction_UArsenalStatics_TimeToString, "TimeToString" }, // 3424684644
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
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UArsenalStatics, UArsenalStatics::StaticClass, TEXT("UArsenalStatics"), &Z_Registration_Info_UClass_UArsenalStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArsenalStatics), 706564513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_3016874998(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
