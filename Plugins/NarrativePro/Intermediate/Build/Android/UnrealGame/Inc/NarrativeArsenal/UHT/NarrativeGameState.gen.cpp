// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeGameState.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameState() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameState();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameState_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_WaitTimeOfDay();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_WaitTimeRange();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_WaitTimeRange_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FActiveTimeOfDayEvent();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FFactionAttitudeData();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnFactionAttitudeChanged
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms
	{
		FGameplayTag Faction;
		FGameplayTag OtherFaction;
		TEnumAsByte<ETeamAttitude::Type> NewAttitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate signature\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Delegate signature" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Faction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAttitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms, Faction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_OtherFaction = { "OtherFaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms, OtherFaction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_NewAttitude = { "NewAttitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms, NewAttitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_Faction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_OtherFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_NewAttitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnFactionAttitudeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFactionAttitudeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFactionAttitudeChanged, FGameplayTag Faction, FGameplayTag OtherFaction, ETeamAttitude::Type NewAttitude)
{
	struct _Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms
	{
		FGameplayTag Faction;
		FGameplayTag OtherFaction;
		TEnumAsByte<ETeamAttitude::Type> NewAttitude;
	};
	_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms Parms;
	Parms.Faction=Faction;
	Parms.OtherFaction=OtherFaction;
	Parms.NewAttitude=NewAttitude;
	OnFactionAttitudeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFactionAttitudeChanged

// Begin Delegate FTimeOfDayEvent
struct Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventTimeOfDayEvent_Parms
	{
		float EventTime;
		float TimeAtFire;
		float TimePassedDelta;
		bool bFiredFromAdvanceTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeAtFire;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvanceTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvanceTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_TimeAtFire = { "TimeAtFire", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms, TimeAtFire), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_bFiredFromAdvanceTime_SetBit(void* Obj)
{
	((_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms*)Obj)->bFiredFromAdvanceTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_bFiredFromAdvanceTime = { "bFiredFromAdvanceTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms), &Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_bFiredFromAdvanceTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_TimeAtFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::NewProp_bFiredFromAdvanceTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "TimeOfDayEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FTimeOfDayEvent_DelegateWrapper(const FMulticastScriptDelegate& TimeOfDayEvent, float EventTime, float TimeAtFire, float TimePassedDelta, bool bFiredFromAdvanceTime)
{
	struct _Script_NarrativeArsenal_eventTimeOfDayEvent_Parms
	{
		float EventTime;
		float TimeAtFire;
		float TimePassedDelta;
		bool bFiredFromAdvanceTime;
	};
	_Script_NarrativeArsenal_eventTimeOfDayEvent_Parms Parms;
	Parms.EventTime=EventTime;
	Parms.TimeAtFire=TimeAtFire;
	Parms.TimePassedDelta=TimePassedDelta;
	Parms.bFiredFromAdvanceTime=bFiredFromAdvanceTime ? true : false;
	TimeOfDayEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FTimeOfDayEvent

// Begin Class UAsyncAction_WaitTimeOfDay Function OnHitTimeOfDay
struct Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics
{
	struct AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//We need to check when the NPC was spawned in by the subsystem, we bind this to sub\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "We need to check when the NPC was spawned in by the subsystem, we bind this to sub" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms), &Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitTimeOfDay, nullptr, "OnHitTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::AsyncAction_WaitTimeOfDay_eventOnHitTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitTimeOfDay::execOnHitTimeOfDay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHitTimeOfDay(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitTimeOfDay Function OnHitTimeOfDay

// Begin Class UAsyncAction_WaitTimeOfDay Function WaitTimeOfDay
struct Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics
{
	struct AsyncAction_WaitTimeOfDay_eventWaitTimeOfDay_Parms
	{
		UObject* WorldContextObject;
		float Time;
		UAsyncAction_WaitTimeOfDay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Time Of Day" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeOfDay_eventWaitTimeOfDay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeOfDay_eventWaitTimeOfDay_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeOfDay_eventWaitTimeOfDay_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitTimeOfDay, nullptr, "WaitTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::AsyncAction_WaitTimeOfDay_eventWaitTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::AsyncAction_WaitTimeOfDay_eventWaitTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitTimeOfDay::execWaitTimeOfDay)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_WaitTimeOfDay**)Z_Param__Result=UAsyncAction_WaitTimeOfDay::WaitTimeOfDay(Z_Param_WorldContextObject,Z_Param_Time);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitTimeOfDay Function WaitTimeOfDay

// Begin Class UAsyncAction_WaitTimeOfDay
void UAsyncAction_WaitTimeOfDay::StaticRegisterNativesUAsyncAction_WaitTimeOfDay()
{
	UClass* Class = UAsyncAction_WaitTimeOfDay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHitTimeOfDay", &UAsyncAction_WaitTimeOfDay::execOnHitTimeOfDay },
		{ "WaitTimeOfDay", &UAsyncAction_WaitTimeOfDay::execWaitTimeOfDay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_WaitTimeOfDay);
UClass* Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_NoRegister()
{
	return UAsyncAction_WaitTimeOfDay::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//This handy node will wait until  a given time of day is reached and tell you when the time is reached. \n" },
		{ "IncludePath", "UnrealFramework/NarrativeGameState.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "This handy node will wait until  a given time of day is reached and tell you when the time is reached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeReached;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_OnHitTimeOfDay, "OnHitTimeOfDay" }, // 303640663
		{ &Z_Construct_UFunction_UAsyncAction_WaitTimeOfDay_WaitTimeOfDay, "WaitTimeOfDay" }, // 2493788202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_WaitTimeOfDay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::NewProp_OnTimeReached = { "OnTimeReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitTimeOfDay, OnTimeReached), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeReached_MetaData), NewProp_OnTimeReached_MetaData) }; // 1832364758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::NewProp_OnTimeReached,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::ClassParams = {
	&UAsyncAction_WaitTimeOfDay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_WaitTimeOfDay()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_WaitTimeOfDay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_WaitTimeOfDay.OuterSingleton, Z_Construct_UClass_UAsyncAction_WaitTimeOfDay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_WaitTimeOfDay.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAsyncAction_WaitTimeOfDay>()
{
	return UAsyncAction_WaitTimeOfDay::StaticClass();
}
UAsyncAction_WaitTimeOfDay::UAsyncAction_WaitTimeOfDay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_WaitTimeOfDay);
UAsyncAction_WaitTimeOfDay::~UAsyncAction_WaitTimeOfDay() {}
// End Class UAsyncAction_WaitTimeOfDay

// Begin Class UAsyncAction_WaitTimeRange Function OnHitTimeEnd
struct Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics
{
	struct AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms), &Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitTimeRange, nullptr, "OnHitTimeEnd", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::AsyncAction_WaitTimeRange_eventOnHitTimeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitTimeRange::execOnHitTimeEnd)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHitTimeEnd(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitTimeRange Function OnHitTimeEnd

// Begin Class UAsyncAction_WaitTimeRange Function OnHitTimeStart
struct Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics
{
	struct AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//We need to check when the NPC was spawned in by the subsystem, we bind this to sub\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "We need to check when the NPC was spawned in by the subsystem, we bind this to sub" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms), &Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitTimeRange, nullptr, "OnHitTimeStart", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::AsyncAction_WaitTimeRange_eventOnHitTimeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitTimeRange::execOnHitTimeStart)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHitTimeStart(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitTimeRange Function OnHitTimeStart

// Begin Class UAsyncAction_WaitTimeRange Function WaitTimeRange
struct Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics
{
	struct AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms
	{
		UObject* WorldContextObject;
		float TimeStart;
		float TimeEnd;
		UAsyncAction_WaitTimeRange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Time Of Day" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_TimeStart = { "TimeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms, TimeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_WaitTimeRange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_TimeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitTimeRange, nullptr, "WaitTimeRange", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::AsyncAction_WaitTimeRange_eventWaitTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitTimeRange::execWaitTimeRange)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeStart);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_WaitTimeRange**)Z_Param__Result=UAsyncAction_WaitTimeRange::WaitTimeRange(Z_Param_WorldContextObject,Z_Param_TimeStart,Z_Param_TimeEnd);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitTimeRange Function WaitTimeRange

// Begin Class UAsyncAction_WaitTimeRange
void UAsyncAction_WaitTimeRange::StaticRegisterNativesUAsyncAction_WaitTimeRange()
{
	UClass* Class = UAsyncAction_WaitTimeRange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHitTimeEnd", &UAsyncAction_WaitTimeRange::execOnHitTimeEnd },
		{ "OnHitTimeStart", &UAsyncAction_WaitTimeRange::execOnHitTimeStart },
		{ "WaitTimeRange", &UAsyncAction_WaitTimeRange::execWaitTimeRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_WaitTimeRange);
UClass* Z_Construct_UClass_UAsyncAction_WaitTimeRange_NoRegister()
{
	return UAsyncAction_WaitTimeRange::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//This handy node will tell you when a given time range begins and ends. \n" },
		{ "IncludePath", "UnrealFramework/NarrativeGameState.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "This handy node will tell you when a given time range begins and ends." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeRangeStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeRangeEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeRangeStart;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeRangeEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeEnd, "OnHitTimeEnd" }, // 372423334
		{ &Z_Construct_UFunction_UAsyncAction_WaitTimeRange_OnHitTimeStart, "OnHitTimeStart" }, // 4058989930
		{ &Z_Construct_UFunction_UAsyncAction_WaitTimeRange_WaitTimeRange, "WaitTimeRange" }, // 4276321085
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_WaitTimeRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::NewProp_OnTimeRangeStart = { "OnTimeRangeStart", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitTimeRange, OnTimeRangeStart), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeRangeStart_MetaData), NewProp_OnTimeRangeStart_MetaData) }; // 1832364758
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::NewProp_OnTimeRangeEnd = { "OnTimeRangeEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitTimeRange, OnTimeRangeEnd), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeRangeEnd_MetaData), NewProp_OnTimeRangeEnd_MetaData) }; // 1832364758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::NewProp_OnTimeRangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::NewProp_OnTimeRangeEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::ClassParams = {
	&UAsyncAction_WaitTimeRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_WaitTimeRange()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_WaitTimeRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_WaitTimeRange.OuterSingleton, Z_Construct_UClass_UAsyncAction_WaitTimeRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_WaitTimeRange.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAsyncAction_WaitTimeRange>()
{
	return UAsyncAction_WaitTimeRange::StaticClass();
}
UAsyncAction_WaitTimeRange::UAsyncAction_WaitTimeRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_WaitTimeRange);
UAsyncAction_WaitTimeRange::~UAsyncAction_WaitTimeRange() {}
// End Class UAsyncAction_WaitTimeRange

// Begin Class UAsyncAction_WaitSunsetAndSunrise Function Sunrise
struct Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics
{
	struct AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//We need to check when the NPC was spawned in by the subsystem, we bind this to sub\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "We need to check when the NPC was spawned in by the subsystem, we bind this to sub" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms), &Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise, nullptr, "Sunrise", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::AsyncAction_WaitSunsetAndSunrise_eventSunrise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitSunsetAndSunrise::execSunrise)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sunrise(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitSunsetAndSunrise Function Sunrise

// Begin Class UAsyncAction_WaitSunsetAndSunrise Function Sunset
struct Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics
{
	struct AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms), &Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise, nullptr, "Sunset", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::AsyncAction_WaitSunsetAndSunrise_eventSunset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitSunsetAndSunrise::execSunset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sunset(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitSunsetAndSunrise Function Sunset

// Begin Class UAsyncAction_WaitSunsetAndSunrise Function WaitSunsetAndRise
struct Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics
{
	struct AsyncAction_WaitSunsetAndSunrise_eventWaitSunsetAndRise_Parms
	{
		UObject* WorldContextObject;
		UAsyncAction_WaitSunsetAndSunrise* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Time Of Day" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventWaitSunsetAndRise_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_WaitSunsetAndSunrise_eventWaitSunsetAndRise_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise, nullptr, "WaitSunsetAndRise", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::AsyncAction_WaitSunsetAndSunrise_eventWaitSunsetAndRise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::AsyncAction_WaitSunsetAndSunrise_eventWaitSunsetAndRise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_WaitSunsetAndSunrise::execWaitSunsetAndRise)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_WaitSunsetAndSunrise**)Z_Param__Result=UAsyncAction_WaitSunsetAndSunrise::WaitSunsetAndRise(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UAsyncAction_WaitSunsetAndSunrise Function WaitSunsetAndRise

// Begin Class UAsyncAction_WaitSunsetAndSunrise
void UAsyncAction_WaitSunsetAndSunrise::StaticRegisterNativesUAsyncAction_WaitSunsetAndSunrise()
{
	UClass* Class = UAsyncAction_WaitSunsetAndSunrise::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Sunrise", &UAsyncAction_WaitSunsetAndSunrise::execSunrise },
		{ "Sunset", &UAsyncAction_WaitSunsetAndSunrise::execSunset },
		{ "WaitSunsetAndRise", &UAsyncAction_WaitSunsetAndSunrise::execWaitSunsetAndRise },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_WaitSunsetAndSunrise);
UClass* Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_NoRegister()
{
	return UAsyncAction_WaitSunsetAndSunrise::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//This handy node will tell you when the sun sets and rises - useful for things like streetlamps. \n" },
		{ "IncludePath", "UnrealFramework/NarrativeGameState.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "This handy node will tell you when the sun sets and rises - useful for things like streetlamps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSunrise_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSunset_MetaData[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSunrise;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSunset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunrise, "Sunrise" }, // 1786146446
		{ &Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_Sunset, "Sunset" }, // 1587438406
		{ &Z_Construct_UFunction_UAsyncAction_WaitSunsetAndSunrise_WaitSunsetAndRise, "WaitSunsetAndRise" }, // 599547454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_WaitSunsetAndSunrise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::NewProp_OnSunrise = { "OnSunrise", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitSunsetAndSunrise, OnSunrise), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSunrise_MetaData), NewProp_OnSunrise_MetaData) }; // 1832364758
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::NewProp_OnSunset = { "OnSunset", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_WaitSunsetAndSunrise, OnSunset), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSunset_MetaData), NewProp_OnSunset_MetaData) }; // 1832364758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::NewProp_OnSunrise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::NewProp_OnSunset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::ClassParams = {
	&UAsyncAction_WaitSunsetAndSunrise::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_WaitSunsetAndSunrise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_WaitSunsetAndSunrise.OuterSingleton, Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_WaitSunsetAndSunrise.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAsyncAction_WaitSunsetAndSunrise>()
{
	return UAsyncAction_WaitSunsetAndSunrise::StaticClass();
}
UAsyncAction_WaitSunsetAndSunrise::UAsyncAction_WaitSunsetAndSunrise(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_WaitSunsetAndSunrise);
UAsyncAction_WaitSunsetAndSunrise::~UAsyncAction_WaitSunsetAndSunrise() {}
// End Class UAsyncAction_WaitSunsetAndSunrise

// Begin Class UScheduledBehavior Function DescribeBehavior
struct ScheduledBehavior_eventDescribeBehavior_Parms
{
	FString ReturnValue;
};
static const FName NAME_UScheduledBehavior_DescribeBehavior = FName(TEXT("DescribeBehavior"));
FString UScheduledBehavior::DescribeBehavior() const
{
	UFunction* Func = FindFunctionChecked(NAME_UScheduledBehavior_DescribeBehavior);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ScheduledBehavior_eventDescribeBehavior_Parms Parms;
		const_cast<UScheduledBehavior*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UScheduledBehavior*>(this)->DescribeBehavior_Implementation();
	}
}
struct Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scheduled Behavior" },
		{ "Comment", "//Debugging tools use this to grab a description of the behavior\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Debugging tools use this to grab a description of the behavior" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDescribeBehavior_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScheduledBehavior, nullptr, "DescribeBehavior", nullptr, nullptr, Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::PropPointers), sizeof(ScheduledBehavior_eventDescribeBehavior_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::Function_MetaDataParams) };
static_assert(sizeof(ScheduledBehavior_eventDescribeBehavior_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScheduledBehavior::execDescribeBehavior)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->DescribeBehavior_Implementation();
	P_NATIVE_END;
}
// End Class UScheduledBehavior Function DescribeBehavior

// Begin Class UScheduledBehavior Function DispatchHandleEnded
struct Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics
{
	struct ScheduledBehavior_eventDispatchHandleEnded_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDispatchHandleEnded_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDispatchHandleEnded_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDispatchHandleEnded_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((ScheduledBehavior_eventDispatchHandleEnded_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScheduledBehavior_eventDispatchHandleEnded_Parms), &Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScheduledBehavior, nullptr, "DispatchHandleEnded", nullptr, nullptr, Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::ScheduledBehavior_eventDispatchHandleEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::ScheduledBehavior_eventDispatchHandleEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScheduledBehavior::execDispatchHandleEnded)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchHandleEnded(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UScheduledBehavior Function DispatchHandleEnded

// Begin Class UScheduledBehavior Function DispatchHandleStarted
struct Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics
{
	struct ScheduledBehavior_eventDispatchHandleStarted_Parms
	{
		float EventTime;
		float ActualTime;
		float TimePassedDelta;
		bool bFiredFromAdvancedTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDispatchHandleStarted_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDispatchHandleStarted_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventDispatchHandleStarted_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((ScheduledBehavior_eventDispatchHandleStarted_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScheduledBehavior_eventDispatchHandleStarted_Parms), &Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScheduledBehavior, nullptr, "DispatchHandleStarted", nullptr, nullptr, Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::ScheduledBehavior_eventDispatchHandleStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::ScheduledBehavior_eventDispatchHandleStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScheduledBehavior::execDispatchHandleStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DispatchHandleStarted(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UScheduledBehavior Function DispatchHandleStarted

// Begin Class UScheduledBehavior Function HandleEnded
struct ScheduledBehavior_eventHandleEnded_Parms
{
	float EventTime;
	float ActualTime;
	float TimePassedDelta;
	bool bFiredFromAdvancedTime;
};
static const FName NAME_UScheduledBehavior_HandleEnded = FName(TEXT("HandleEnded"));
void UScheduledBehavior::HandleEnded(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UScheduledBehavior_HandleEnded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ScheduledBehavior_eventHandleEnded_Parms Parms;
		Parms.EventTime=EventTime;
		Parms.ActualTime=ActualTime;
		Parms.TimePassedDelta=TimePassedDelta;
		Parms.bFiredFromAdvancedTime=bFiredFromAdvancedTime ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleEnded_Implementation(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}
struct Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scheduled Behavior" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventHandleEnded_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventHandleEnded_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventHandleEnded_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((ScheduledBehavior_eventHandleEnded_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScheduledBehavior_eventHandleEnded_Parms), &Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScheduledBehavior, nullptr, "HandleEnded", nullptr, nullptr, Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::PropPointers), sizeof(ScheduledBehavior_eventHandleEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(ScheduledBehavior_eventHandleEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScheduledBehavior_HandleEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScheduledBehavior_HandleEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScheduledBehavior::execHandleEnded)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleEnded_Implementation(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UScheduledBehavior Function HandleEnded

// Begin Class UScheduledBehavior Function HandleStarted
struct ScheduledBehavior_eventHandleStarted_Parms
{
	float EventTime;
	float ActualTime;
	float TimePassedDelta;
	bool bFiredFromAdvancedTime;
};
static const FName NAME_UScheduledBehavior_HandleStarted = FName(TEXT("HandleStarted"));
void UScheduledBehavior::HandleStarted(float EventTime, float ActualTime, float TimePassedDelta, bool bFiredFromAdvancedTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UScheduledBehavior_HandleStarted);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ScheduledBehavior_eventHandleStarted_Parms Parms;
		Parms.EventTime=EventTime;
		Parms.ActualTime=ActualTime;
		Parms.TimePassedDelta=TimePassedDelta;
		Parms.bFiredFromAdvancedTime=bFiredFromAdvancedTime ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleStarted_Implementation(EventTime, ActualTime, TimePassedDelta, bFiredFromAdvancedTime);
	}
}
struct Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Scheduled Behavior" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePassedDelta;
	static void NewProp_bFiredFromAdvancedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiredFromAdvancedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventHandleStarted_Parms, EventTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_ActualTime = { "ActualTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventHandleStarted_Parms, ActualTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_TimePassedDelta = { "TimePassedDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScheduledBehavior_eventHandleStarted_Parms, TimePassedDelta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_bFiredFromAdvancedTime_SetBit(void* Obj)
{
	((ScheduledBehavior_eventHandleStarted_Parms*)Obj)->bFiredFromAdvancedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_bFiredFromAdvancedTime = { "bFiredFromAdvancedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ScheduledBehavior_eventHandleStarted_Parms), &Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_bFiredFromAdvancedTime_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_ActualTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_TimePassedDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::NewProp_bFiredFromAdvancedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScheduledBehavior, nullptr, "HandleStarted", nullptr, nullptr, Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::PropPointers), sizeof(ScheduledBehavior_eventHandleStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(ScheduledBehavior_eventHandleStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScheduledBehavior_HandleStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScheduledBehavior_HandleStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScheduledBehavior::execHandleStarted)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_EventTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ActualTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimePassedDelta);
	P_GET_UBOOL(Z_Param_bFiredFromAdvancedTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStarted_Implementation(Z_Param_EventTime,Z_Param_ActualTime,Z_Param_TimePassedDelta,Z_Param_bFiredFromAdvancedTime);
	P_NATIVE_END;
}
// End Class UScheduledBehavior Function HandleStarted

// Begin Class UScheduledBehavior
void UScheduledBehavior::StaticRegisterNativesUScheduledBehavior()
{
	UClass* Class = UScheduledBehavior::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DescribeBehavior", &UScheduledBehavior::execDescribeBehavior },
		{ "DispatchHandleEnded", &UScheduledBehavior::execDispatchHandleEnded },
		{ "DispatchHandleStarted", &UScheduledBehavior::execDispatchHandleStarted },
		{ "HandleEnded", &UScheduledBehavior::execHandleEnded },
		{ "HandleStarted", &UScheduledBehavior::execHandleStarted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScheduledBehavior);
UClass* Z_Construct_UClass_UScheduledBehavior_NoRegister()
{
	return UScheduledBehavior::StaticClass();
}
struct Z_Construct_UClass_UScheduledBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Generic object that binds to specified time and then lets you do whatever behavior you need when the time is reached \n */" },
		{ "IncludePath", "UnrealFramework/NarrativeGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Generic object that binds to specified time and then lets you do whatever behavior you need when the time is reached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Scheduled Behavior" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "Category", "Scheduled Behavior" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScheduledBehavior_DescribeBehavior, "DescribeBehavior" }, // 1671401052
		{ &Z_Construct_UFunction_UScheduledBehavior_DispatchHandleEnded, "DispatchHandleEnded" }, // 2770062149
		{ &Z_Construct_UFunction_UScheduledBehavior_DispatchHandleStarted, "DispatchHandleStarted" }, // 3539651367
		{ &Z_Construct_UFunction_UScheduledBehavior_HandleEnded, "HandleEnded" }, // 3916134160
		{ &Z_Construct_UFunction_UScheduledBehavior_HandleStarted, "HandleStarted" }, // 1869732730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScheduledBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScheduledBehavior_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScheduledBehavior_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScheduledBehavior, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScheduledBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScheduledBehavior_Statics::NewProp_EndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScheduledBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScheduledBehavior_Statics::ClassParams = {
	&UScheduledBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScheduledBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScheduledBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UScheduledBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScheduledBehavior()
{
	if (!Z_Registration_Info_UClass_UScheduledBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScheduledBehavior.OuterSingleton, Z_Construct_UClass_UScheduledBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScheduledBehavior.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UScheduledBehavior>()
{
	return UScheduledBehavior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScheduledBehavior);
UScheduledBehavior::~UScheduledBehavior() {}
// End Class UScheduledBehavior

// Begin ScriptStruct FFactionAttitudeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FactionAttitudeData;
class UScriptStruct* FFactionAttitudeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FactionAttitudeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FactionAttitudeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionAttitudeData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("FactionAttitudeData"));
	}
	return Z_Registration_Info_UScriptStruct_FactionAttitudeData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FFactionAttitudeData>()
{
	return FFactionAttitudeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFactionAttitudeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Contains information about which factions we're enemies of, neutral with, etc. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Contains information about which factions we're enemies of, neutral with, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttitudeMap_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "Category", "Faction" },
		{ "Comment", "//A map of a faction -> our attiude towards that faction\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "A map of a faction -> our attiude towards that faction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttitudeMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttitudeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttitudeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionAttitudeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_ValueProp = { "AttitudeMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_Key_KeyProp = { "AttitudeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap = { "AttitudeMap", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionAttitudeData, AttitudeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeMap_MetaData), NewProp_AttitudeMap_MetaData) }; // 1298103297 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"FactionAttitudeData",
	Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::PropPointers),
	sizeof(FFactionAttitudeData),
	alignof(FFactionAttitudeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFactionAttitudeData()
{
	if (!Z_Registration_Info_UScriptStruct_FactionAttitudeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FactionAttitudeData.InnerSingleton, Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FactionAttitudeData.InnerSingleton;
}
// End ScriptStruct FFactionAttitudeData

// Begin ScriptStruct FActiveTimeOfDayEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent;
class UScriptStruct* FActiveTimeOfDayEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiveTimeOfDayEvent, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ActiveTimeOfDayEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FActiveTimeOfDayEvent>()
{
	return FActiveTimeOfDayEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Represents an active time of day event \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Represents an active time of day event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandleID_MetaData[] = {
		{ "Comment", "//The handle ID\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The handle ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTime_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//The time of day the event should fire\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The time of day the event should fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventDelegate_MetaData[] = {
		{ "Comment", "//The delegate that actually fires when the event goes off \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The delegate that actually fires when the event goes off" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandleID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EventTime;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiveTimeOfDayEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewProp_HandleID = { "HandleID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveTimeOfDayEvent, HandleID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandleID_MetaData), NewProp_HandleID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewProp_EventTime = { "EventTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveTimeOfDayEvent, EventTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTime_MetaData), NewProp_EventTime_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewProp_EventDelegate = { "EventDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActiveTimeOfDayEvent, EventDelegate), Z_Construct_UDelegateFunction_NarrativeArsenal_TimeOfDayEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventDelegate_MetaData), NewProp_EventDelegate_MetaData) }; // 1832364758
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewProp_HandleID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewProp_EventTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewProp_EventDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"ActiveTimeOfDayEvent",
	Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::PropPointers),
	sizeof(FActiveTimeOfDayEvent),
	alignof(FActiveTimeOfDayEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActiveTimeOfDayEvent()
{
	if (!Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent.InnerSingleton, Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent.InnerSingleton;
}
// End ScriptStruct FActiveTimeOfDayEvent

// Begin Class ANarrativeGameState Function AdvanceTimeOfDay
struct Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics
{
	struct NarrativeGameState_eventAdvanceTimeOfDay_Parms
	{
		float TimeToAdvance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "/**Manually advance the time of day, where 100 = 1 hour of time, ie 500 = advance time by 5 hours, 4800 = advance time by 2 days, etc.\n\x09Note that the time of day won't actually change until the next frame. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Manually advance the time of day, where 100 = 1 hour of time, ie 500 = advance time by 5 hours, 4800 = advance time by 2 days, etc.\n       Note that the time of day won't actually change until the next frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToAdvance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToAdvance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::NewProp_TimeToAdvance = { "TimeToAdvance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventAdvanceTimeOfDay_Parms, TimeToAdvance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToAdvance_MetaData), NewProp_TimeToAdvance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::NewProp_TimeToAdvance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "AdvanceTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::NarrativeGameState_eventAdvanceTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::NarrativeGameState_eventAdvanceTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execAdvanceTimeOfDay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeToAdvance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceTimeOfDay(Z_Param_TimeToAdvance);
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function AdvanceTimeOfDay

// Begin Class ANarrativeGameState Function GetAccumulatedTime
struct Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics
{
	struct NarrativeGameState_eventGetAccumulatedTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//Return the total accumulated time. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Return the total accumulated time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetAccumulatedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "GetAccumulatedTime", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::NarrativeGameState_eventGetAccumulatedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::NarrativeGameState_eventGetAccumulatedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execGetAccumulatedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAccumulatedTime();
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function GetAccumulatedTime

// Begin Class ANarrativeGameState Function GetFactionAttitudeTowardsFaction
struct Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics
{
	struct NarrativeGameState_eventGetFactionAttitudeTowardsFaction_Parms
	{
		FGameplayTag SourceFaction;
		FGameplayTag TargetFaction;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Check a factions attitude towards another faction \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Check a factions attitude towards another faction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFaction_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFaction_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFaction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NewProp_SourceFaction = { "SourceFaction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetFactionAttitudeTowardsFaction_Parms, SourceFaction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFaction_MetaData), NewProp_SourceFaction_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NewProp_TargetFaction = { "TargetFaction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetFactionAttitudeTowardsFaction_Parms, TargetFaction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFaction_MetaData), NewProp_TargetFaction_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetFactionAttitudeTowardsFaction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NewProp_SourceFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NewProp_TargetFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "GetFactionAttitudeTowardsFaction", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NarrativeGameState_eventGetFactionAttitudeTowardsFaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::NarrativeGameState_eventGetFactionAttitudeTowardsFaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execGetFactionAttitudeTowardsFaction)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SourceFaction);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TargetFaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->GetFactionAttitudeTowardsFaction(Z_Param_Out_SourceFaction,Z_Param_Out_TargetFaction);
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function GetFactionAttitudeTowardsFaction

// Begin Class ANarrativeGameState Function GetFactionsAttitudeTowardsFactions
struct Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics
{
	struct NarrativeGameState_eventGetFactionsAttitudeTowardsFactions_Parms
	{
		FGameplayTagContainer SourceFactions;
		FGameplayTagContainer TargetFactions;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "/**Get a container of factions attitudes towards another container of factions. In any are hostile, we'll return hostile. If none were hostile\n\x09""and at least one were friendly, we'll return friendly. Otherwise we'll return neutral. You can override this if you need to change that behaviour. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Get a container of factions attitudes towards another container of factions. In any are hostile, we'll return hostile. If none were hostile\n       and at least one were friendly, we'll return friendly. Otherwise we'll return neutral. You can override this if you need to change that behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFactions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFactions_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFactions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFactions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NewProp_SourceFactions = { "SourceFactions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetFactionsAttitudeTowardsFactions_Parms, SourceFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFactions_MetaData), NewProp_SourceFactions_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NewProp_TargetFactions = { "TargetFactions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetFactionsAttitudeTowardsFactions_Parms, TargetFactions), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFactions_MetaData), NewProp_TargetFactions_MetaData) }; // 3352185621
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetFactionsAttitudeTowardsFactions_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NewProp_SourceFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NewProp_TargetFactions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "GetFactionsAttitudeTowardsFactions", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NarrativeGameState_eventGetFactionsAttitudeTowardsFactions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::NarrativeGameState_eventGetFactionsAttitudeTowardsFactions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execGetFactionsAttitudeTowardsFactions)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceFactions);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetFactions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->GetFactionsAttitudeTowardsFactions(Z_Param_Out_SourceFactions,Z_Param_Out_TargetFactions);
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function GetFactionsAttitudeTowardsFactions

// Begin Class ANarrativeGameState Function GetTimeOfDay
struct Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics
{
	struct NarrativeGameState_eventGetTimeOfDay_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//Return the time of day from 0-2400. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Return the time of day from 0-2400." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetTimeOfDay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "GetTimeOfDay", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::NarrativeGameState_eventGetTimeOfDay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::NarrativeGameState_eventGetTimeOfDay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execGetTimeOfDay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeOfDay();
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function GetTimeOfDay

// Begin Class ANarrativeGameState Function GetTimeOfDayAdvanceSpeed
struct Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics
{
	struct NarrativeGameState_eventGetTimeOfDayAdvanceSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//Check whether the sun is up or if its nighttime \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Check whether the sun is up or if its nighttime" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetTimeOfDayAdvanceSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "GetTimeOfDayAdvanceSpeed", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::NarrativeGameState_eventGetTimeOfDayAdvanceSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::NarrativeGameState_eventGetTimeOfDayAdvanceSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execGetTimeOfDayAdvanceSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimeOfDayAdvanceSpeed();
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function GetTimeOfDayAdvanceSpeed

// Begin Class ANarrativeGameState Function IsDayTime
struct Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics
{
	struct NarrativeGameState_eventIsDayTime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//Check whether the sun is up or if its nighttime \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Check whether the sun is up or if its nighttime" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeGameState_eventIsDayTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeGameState_eventIsDayTime_Parms), &Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "IsDayTime", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::NarrativeGameState_eventIsDayTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::NarrativeGameState_eventIsDayTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_IsDayTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_IsDayTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execIsDayTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDayTime();
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function IsDayTime

// Begin Class ANarrativeGameState Function SetFactionAttitude
struct Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics
{
	struct NarrativeGameState_eventSetFactionAttitude_Parms
	{
		FGameplayTag SourceFaction;
		FGameplayTag TargetFaction;
		TEnumAsByte<ETeamAttitude::Type> NewAttitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Set a factions attitude towards another given faction\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Set a factions attitude towards another given faction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFaction_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFaction_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAttitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFaction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAttitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_SourceFaction = { "SourceFaction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventSetFactionAttitude_Parms, SourceFaction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFaction_MetaData), NewProp_SourceFaction_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_TargetFaction = { "TargetFaction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventSetFactionAttitude_Parms, TargetFaction), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFaction_MetaData), NewProp_TargetFaction_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_NewAttitude = { "NewAttitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventSetFactionAttitude_Parms, NewAttitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAttitude_MetaData), NewProp_NewAttitude_MetaData) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_SourceFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_TargetFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_NewAttitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "SetFactionAttitude", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NarrativeGameState_eventSetFactionAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NarrativeGameState_eventSetFactionAttitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execSetFactionAttitude)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_SourceFaction);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TargetFaction);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewAttitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFactionAttitude(Z_Param_Out_SourceFaction,Z_Param_Out_TargetFaction,ETeamAttitude::Type(Z_Param_NewAttitude));
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function SetFactionAttitude

// Begin Class ANarrativeGameState
void ANarrativeGameState::StaticRegisterNativesANarrativeGameState()
{
	UClass* Class = ANarrativeGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvanceTimeOfDay", &ANarrativeGameState::execAdvanceTimeOfDay },
		{ "GetAccumulatedTime", &ANarrativeGameState::execGetAccumulatedTime },
		{ "GetFactionAttitudeTowardsFaction", &ANarrativeGameState::execGetFactionAttitudeTowardsFaction },
		{ "GetFactionsAttitudeTowardsFactions", &ANarrativeGameState::execGetFactionsAttitudeTowardsFactions },
		{ "GetTimeOfDay", &ANarrativeGameState::execGetTimeOfDay },
		{ "GetTimeOfDayAdvanceSpeed", &ANarrativeGameState::execGetTimeOfDayAdvanceSpeed },
		{ "IsDayTime", &ANarrativeGameState::execIsDayTime },
		{ "SetFactionAttitude", &ANarrativeGameState::execSetFactionAttitude },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeGameState);
UClass* Z_Construct_UClass_ANarrativeGameState_NoRegister()
{
	return ANarrativeGameState::StaticClass();
}
struct Z_Construct_UClass_ANarrativeGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project. \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativeGameState.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDayEvents_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//All of time of day events are stored in here. We sort them by time so when AdvanceTime is called it calls them in order \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "All of time of day events are stored in here. We sort them by time so when AdvanceTime is called it calls them in order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionAllianceMap_MetaData[] = {
		{ "Categories", "Narrative.Factions" },
		{ "Category", "Factions" },
		{ "Comment", "/**Allows for nice efficient lookups for which alliance is friendly, netutral, enemies of others.Also marked savegame so alliances will be preserved through play sessions.\n\x09Since this is marked savegame, narrative will remember which factions are friendly, neutral, hostile towards others! */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Allows for nice efficient lookups for which alliance is friendly, netutral, enemies of others.Also marked savegame so alliances will be preserved through play sessions.\n       Since this is marked savegame, narrative will remember which factions are friendly, neutral, hostile towards others!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFactionAttitudeChanged_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Called when a factions attitude towards another faction changes - bots bind this to recheck if they are perceiving someone who has become a hostile \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Called when a factions attitude towards another faction changes - bots bind this to recheck if they are perceiving someone who has become a hostile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDayLastTick_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//The time of day last tick.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The time of day last tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTimeLastTick_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//The accumulated time last tick \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The accumulated time last tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeOfDay_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//The current time of day, from 0-2400\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The current time of day, from 0-2400" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[] = {
		{ "Category", "Time of Day" },
		{ "Comment", "//The total accumulated time, where 2400 is 1 day of time. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "The total accumulated time, where 2400 is 1 day of time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSettings_MetaData[] = {
		{ "Comment", "//We cache the time of day settings\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "We cache the time of day settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimeOfDayEvents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_TimeOfDayEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionAllianceMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionAllianceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FactionAllianceMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFactionAttitudeChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDayLastTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTimeLastTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeOfDay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeGameState_AdvanceTimeOfDay, "AdvanceTimeOfDay" }, // 3259337926
		{ &Z_Construct_UFunction_ANarrativeGameState_GetAccumulatedTime, "GetAccumulatedTime" }, // 3710154263
		{ &Z_Construct_UFunction_ANarrativeGameState_GetFactionAttitudeTowardsFaction, "GetFactionAttitudeTowardsFaction" }, // 516222206
		{ &Z_Construct_UFunction_ANarrativeGameState_GetFactionsAttitudeTowardsFactions, "GetFactionsAttitudeTowardsFactions" }, // 4105799349
		{ &Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDay, "GetTimeOfDay" }, // 1909716503
		{ &Z_Construct_UFunction_ANarrativeGameState_GetTimeOfDayAdvanceSpeed, "GetTimeOfDayAdvanceSpeed" }, // 3835741666
		{ &Z_Construct_UFunction_ANarrativeGameState_IsDayTime, "IsDayTime" }, // 1010205249
		{ &Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude, "SetFactionAttitude" }, // 2032237100
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDayEvents_ElementProp = { "TimeOfDayEvents", nullptr, (EPropertyFlags)0x0000008000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveTimeOfDayEvent, METADATA_PARAMS(0, nullptr) }; // 3786490044
static_assert(TModels_V<CGetTypeHashable, FActiveTimeOfDayEvent>, "The structure 'FActiveTimeOfDayEvent' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDayEvents = { "TimeOfDayEvents", nullptr, (EPropertyFlags)0x0010008000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, TimeOfDayEvents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDayEvents_MetaData), NewProp_TimeOfDayEvents_MetaData) }; // 3786490044
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_ValueProp = { "FactionAllianceMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFactionAttitudeData, METADATA_PARAMS(0, nullptr) }; // 2973308217
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_Key_KeyProp = { "FactionAllianceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap = { "FactionAllianceMap", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, FactionAllianceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionAllianceMap_MetaData), NewProp_FactionAllianceMap_MetaData) }; // 1298103297 2973308217
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_OnFactionAttitudeChanged = { "OnFactionAttitudeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, OnFactionAttitudeChanged), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFactionAttitudeChanged_MetaData), NewProp_OnFactionAttitudeChanged_MetaData) }; // 954926968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDayLastTick = { "TimeOfDayLastTick", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, TimeOfDayLastTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDayLastTick_MetaData), NewProp_TimeOfDayLastTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_AccumulatedTimeLastTick = { "AccumulatedTimeLastTick", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, AccumulatedTimeLastTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTimeLastTick_MetaData), NewProp_AccumulatedTimeLastTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDay = { "TimeOfDay", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, TimeOfDay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeOfDay_MetaData), NewProp_TimeOfDay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, AccumulatedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTime_MetaData), NewProp_AccumulatedTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeSettings = { "TimeSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, TimeSettings), Z_Construct_UClass_UNarrativeTimeOfDaySettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSettings_MetaData), NewProp_TimeSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDayEvents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDayEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_OnFactionAttitudeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDayLastTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_AccumulatedTimeLastTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeOfDay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_AccumulatedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_TimeSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeGameState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ANarrativeGameState, INarrativeSavableActor), false },  // 2545445142
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeGameState_Statics::ClassParams = {
	&ANarrativeGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeGameState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeGameState()
{
	if (!Z_Registration_Info_UClass_ANarrativeGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeGameState.OuterSingleton, Z_Construct_UClass_ANarrativeGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeGameState.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeGameState>()
{
	return ANarrativeGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeGameState);
ANarrativeGameState::~ANarrativeGameState() {}
// End Class ANarrativeGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionAttitudeData::StaticStruct, Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewStructOps, TEXT("FactionAttitudeData"), &Z_Registration_Info_UScriptStruct_FactionAttitudeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionAttitudeData), 2973308217U) },
		{ FActiveTimeOfDayEvent::StaticStruct, Z_Construct_UScriptStruct_FActiveTimeOfDayEvent_Statics::NewStructOps, TEXT("ActiveTimeOfDayEvent"), &Z_Registration_Info_UScriptStruct_ActiveTimeOfDayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActiveTimeOfDayEvent), 3786490044U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_WaitTimeOfDay, UAsyncAction_WaitTimeOfDay::StaticClass, TEXT("UAsyncAction_WaitTimeOfDay"), &Z_Registration_Info_UClass_UAsyncAction_WaitTimeOfDay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_WaitTimeOfDay), 362863290U) },
		{ Z_Construct_UClass_UAsyncAction_WaitTimeRange, UAsyncAction_WaitTimeRange::StaticClass, TEXT("UAsyncAction_WaitTimeRange"), &Z_Registration_Info_UClass_UAsyncAction_WaitTimeRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_WaitTimeRange), 3750504701U) },
		{ Z_Construct_UClass_UAsyncAction_WaitSunsetAndSunrise, UAsyncAction_WaitSunsetAndSunrise::StaticClass, TEXT("UAsyncAction_WaitSunsetAndSunrise"), &Z_Registration_Info_UClass_UAsyncAction_WaitSunsetAndSunrise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_WaitSunsetAndSunrise), 2304457214U) },
		{ Z_Construct_UClass_UScheduledBehavior, UScheduledBehavior::StaticClass, TEXT("UScheduledBehavior"), &Z_Registration_Info_UClass_UScheduledBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScheduledBehavior), 570053089U) },
		{ Z_Construct_UClass_ANarrativeGameState, ANarrativeGameState::StaticClass, TEXT("ANarrativeGameState"), &Z_Registration_Info_UClass_ANarrativeGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeGameState), 3035918132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_771904895(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
