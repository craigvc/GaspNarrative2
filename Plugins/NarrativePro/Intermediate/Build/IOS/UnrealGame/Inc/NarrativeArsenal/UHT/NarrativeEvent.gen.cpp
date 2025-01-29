// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/NarrativeEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeEvent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EEventFilter();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EEventRuntime();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Enum EPartyEventPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyEventPolicy;
static UEnum* EPartyEventPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPartyEventPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPartyEventPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EPartyEventPolicy"));
	}
	return Z_Registration_Info_UEnum_EPartyEventPolicy.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EPartyEventPolicy>()
{
	return EPartyEventPolicy_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllPartyMembers.Comment", "/**The event is run on every party member - for example if your event gave the player a reward, every member in the party would receive the award.*/" },
		{ "AllPartyMembers.DisplayName", "All Party Members" },
		{ "AllPartyMembers.Name", "EPartyEventPolicy::AllPartyMembers" },
		{ "AllPartyMembers.ToolTip", "The event is run on every party member - for example if your event gave the player a reward, every member in the party would receive the award." },
		{ "Comment", "//How do we handle running this event on a party?\n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "Party.Comment", "/**The event is run on the party itself - Use this if you want the event to effect the party in some way - for example if you want your event\n\x09to begin a quest for all members in the party, use this to run the event on the parties narrative component. */" },
		{ "Party.DisplayName", "Party" },
		{ "Party.Name", "EPartyEventPolicy::Party" },
		{ "Party.ToolTip", "The event is run on the party itself - Use this if you want the event to effect the party in some way - for example if you want your event\n       to begin a quest for all members in the party, use this to run the event on the parties narrative component." },
		{ "PartyLeader.Comment", "/**The event is run on the party leader - for example if your event gave the player a reward, only the party leader would receieve the award.*/" },
		{ "PartyLeader.DisplayName", "Party Leader" },
		{ "PartyLeader.Name", "EPartyEventPolicy::PartyLeader" },
		{ "PartyLeader.ToolTip", "The event is run on the party leader - for example if your event gave the player a reward, only the party leader would receieve the award." },
		{ "ToolTip", "How do we handle running this event on a party?" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPartyEventPolicy::Party", (int64)EPartyEventPolicy::Party },
		{ "EPartyEventPolicy::AllPartyMembers", (int64)EPartyEventPolicy::AllPartyMembers },
		{ "EPartyEventPolicy::PartyLeader", (int64)EPartyEventPolicy::PartyLeader },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EPartyEventPolicy",
	"EPartyEventPolicy",
	Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy()
{
	if (!Z_Registration_Info_UEnum_EPartyEventPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyEventPolicy.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPartyEventPolicy.InnerSingleton;
}
// End Enum EPartyEventPolicy

// Begin Enum EEventRuntime
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEventRuntime;
static UEnum* EEventRuntime_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEventRuntime.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEventRuntime.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EEventRuntime, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EEventRuntime"));
	}
	return Z_Registration_Info_UEnum_EEventRuntime.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EEventRuntime>()
{
	return EEventRuntime_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Comment", "// Run the event at both start and end. This means your event will be executed twice. \n" },
		{ "Both.Name", "EEventRuntime::Both" },
		{ "Both.ToolTip", "Run the event at both start and end. This means your event will be executed twice." },
		{ "Comment", "/**\n* Used for picking when an event should run\n*/" },
		{ "End.Comment", "/* Execute the event at the end. \n\n\x09""For dialogue, this is when the dialogue line finishes playing.\n\x09""For Quest states, this is when the state is exited\n\x09""For Quest branches, this is when the branch gets taken to a new state and gets deactivated. \n\x09*/" },
		{ "End.Name", "EEventRuntime::End" },
		{ "End.ToolTip", "Execute the event at the end.\n\n      For dialogue, this is when the dialogue line finishes playing.\n      For Quest states, this is when the state is exited\n      For Quest branches, this is when the branch gets taken to a new state and gets deactivated." },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "Start.Comment", "/* Execute the event at the start.\n\n\x09""For dialogue, this is when the dialogue line starts playing.\n\x09""For Quest states, this is when the state is entered\n\x09""For Quest branches, this is when the branch becomes active\n\x09*/" },
		{ "Start.Name", "EEventRuntime::Start" },
		{ "Start.ToolTip", "Execute the event at the start.\n\n      For dialogue, this is when the dialogue line starts playing.\n      For Quest states, this is when the state is entered\n      For Quest branches, this is when the branch becomes active" },
		{ "ToolTip", "Used for picking when an event should run" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEventRuntime::Start", (int64)EEventRuntime::Start },
		{ "EEventRuntime::End", (int64)EEventRuntime::End },
		{ "EEventRuntime::Both", (int64)EEventRuntime::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EEventRuntime",
	"EEventRuntime",
	Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EEventRuntime()
{
	if (!Z_Registration_Info_UEnum_EEventRuntime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEventRuntime.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EEventRuntime_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEventRuntime.InnerSingleton;
}
// End Enum EEventRuntime

// Begin Enum EEventFilter
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEventFilter;
static UEnum* EEventFilter_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEventFilter.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEventFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NarrativeArsenal_EEventFilter, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("EEventFilter"));
	}
	return Z_Registration_Info_UEnum_EEventFilter.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EEventFilter>()
{
	return EEventFilter_StaticEnum();
}
struct Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Used for picking who an event should be allowed to run on \n*/" },
		{ "EF_Anyone.DisplayName", "Anyone" },
		{ "EF_Anyone.Name", "EEventFilter::EF_Anyone" },
		{ "EF_OnlyNPCs.DisplayName", "Only NPCs" },
		{ "EF_OnlyNPCs.Name", "EEventFilter::EF_OnlyNPCs" },
		{ "EF_OnlyPlayers.DisplayName", "Only Players" },
		{ "EF_OnlyPlayers.Name", "EEventFilter::EF_OnlyPlayers" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Used for picking who an event should be allowed to run on" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEventFilter::EF_Anyone", (int64)EEventFilter::EF_Anyone },
		{ "EEventFilter::EF_OnlyNPCs", (int64)EEventFilter::EF_OnlyNPCs },
		{ "EEventFilter::EF_OnlyPlayers", (int64)EEventFilter::EF_OnlyPlayers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	"EEventFilter",
	"EEventFilter",
	Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NarrativeArsenal_EEventFilter()
{
	if (!Z_Registration_Info_UEnum_EEventFilter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEventFilter.InnerSingleton, Z_Construct_UEnum_NarrativeArsenal_EEventFilter_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEventFilter.InnerSingleton;
}
// End Enum EEventFilter

// Begin Class UNarrativeEvent Function ExecuteEvent
struct NarrativeEvent_eventExecuteEvent_Parms
{
	APawn* Pawn;
	APlayerController* Controller;
	UTalesComponent* NarrativeComponent;
};
static const FName NAME_UNarrativeEvent_ExecuteEvent = FName(TEXT("ExecuteEvent"));
void UNarrativeEvent::ExecuteEvent(APawn* Pawn, APlayerController* Controller, UTalesComponent* NarrativeComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeEvent_ExecuteEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeEvent_eventExecuteEvent_Parms Parms;
		Parms.Pawn=Pawn;
		Parms.Controller=Controller;
		Parms.NarrativeComponent=NarrativeComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ExecuteEvent_Implementation(Pawn, Controller, NarrativeComponent);
	}
}
struct Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "Comment", "/**Execute the event.\n\x09@param Pawn this is the Players Pawn, or the NPC Target if you've added some NPC targets to NPCTargets array. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Execute the event.\n       @param Pawn this is the Players Pawn, or the NPC Target if you've added some NPC targets to NPCTargets array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent = { "NarrativeComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventExecuteEvent_Parms, NarrativeComponent), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeComponent_MetaData), NewProp_NarrativeComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::NewProp_NarrativeComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "ExecuteEvent", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::PropPointers), sizeof(NarrativeEvent_eventExecuteEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeEvent_eventExecuteEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeEvent::execExecuteEvent)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_OBJECT(UTalesComponent,Z_Param_NarrativeComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteEvent_Implementation(Z_Param_Pawn,Z_Param_Controller,Z_Param_NarrativeComponent);
	P_NATIVE_END;
}
// End Class UNarrativeEvent Function ExecuteEvent

// Begin Class UNarrativeEvent Function GetCharacterTargets
struct Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics
{
	struct NarrativeEvent_eventGetCharacterTargets_Parms
	{
		TArray<UCharacterDefinition*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "Comment", "//return the characters to run the event on \n" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "return the characters to run the event on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventGetCharacterTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "GetCharacterTargets", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::NarrativeEvent_eventGetCharacterTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::NarrativeEvent_eventGetCharacterTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeEvent::execGetCharacterTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UCharacterDefinition*>*)Z_Param__Result=P_THIS->GetCharacterTargets();
	P_NATIVE_END;
}
// End Class UNarrativeEvent Function GetCharacterTargets

// Begin Class UNarrativeEvent Function GetGraphDisplayText
struct NarrativeEvent_eventGetGraphDisplayText_Parms
{
	FString ReturnValue;
};
static const FName NAME_UNarrativeEvent_GetGraphDisplayText = FName(TEXT("GetGraphDisplayText"));
FString UNarrativeEvent::GetGraphDisplayText()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeEvent_GetGraphDisplayText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeEvent_eventGetGraphDisplayText_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetGraphDisplayText_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "Comment", "/**Define the text that will show up on a node if this event is added to it */" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Define the text that will show up on a node if this event is added to it" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventGetGraphDisplayText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "GetGraphDisplayText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::PropPointers), sizeof(NarrativeEvent_eventGetGraphDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeEvent_eventGetGraphDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeEvent::execGetGraphDisplayText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetGraphDisplayText_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeEvent Function GetGraphDisplayText

// Begin Class UNarrativeEvent Function GetHintText
struct NarrativeEvent_eventGetHintText_Parms
{
	FText ReturnValue;
};
static const FName NAME_UNarrativeEvent_GetHintText = FName(TEXT("GetHintText"));
FText UNarrativeEvent::GetHintText()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeEvent_GetHintText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeEvent_eventGetHintText_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return GetHintText_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Event" },
		{ "Comment", "/**If the event is on a dialogue option, this is the text we'll show after the line. (Begin Quest, etc)*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "If the event is on a dialogue option, this is the text we'll show after the line. (Begin Quest, etc)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeEvent_eventGetHintText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeEvent, nullptr, "GetHintText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::PropPointers), sizeof(NarrativeEvent_eventGetHintText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeEvent_eventGetHintText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeEvent_GetHintText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeEvent_GetHintText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeEvent::execGetHintText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetHintText_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeEvent Function GetHintText

// Begin Class UNarrativeEvent
void UNarrativeEvent::StaticRegisterNativesUNarrativeEvent()
{
	UClass* Class = UNarrativeEvent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteEvent", &UNarrativeEvent::execExecuteEvent },
		{ "GetCharacterTargets", &UNarrativeEvent::execGetCharacterTargets },
		{ "GetGraphDisplayText", &UNarrativeEvent::execGetGraphDisplayText },
		{ "GetHintText", &UNarrativeEvent::execGetHintText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeEvent);
UClass* Z_Construct_UClass_UNarrativeEvent_NoRegister()
{
	return UNarrativeEvent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Narrative Events allow you to write a little bit of code that fires when a given quest or dialogue node is reached. \n *\n * For example, you could make a Narrative Event \"Give item\" that adds an item to the players inventory. Then, you could \n * add that event to a dialogue node, for example if an NPC said \"Heres my sword, I want you to take it.\" you could add your\n * event to that dialogue node and actually add the sword item to the players inventory. \n */" },
		{ "IncludePath", "Tales/NarrativeEvent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Narrative Events allow you to write a little bit of code that fires when a given quest or dialogue node is reached.\n\nFor example, you could make a Narrative Event \"Give item\" that adds an item to the players inventory. Then, you could\nadd that event to a dialogue node, for example if an NPC said \"Heres my sword, I want you to take it.\" you could add your\nevent to that dialogue node and actually add the sword item to the players inventory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefireOnLoad_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/**\n\x09When the game loads back in, should we fire this event off again when your quest loads back in?\n\x09\n\x09""For example, if we used a GiveXP event to give the player 500XP when we get to a certain quest state, this should be false.\n\x09Since XP is saved already, quitting and reloading would grant 500XP on top of the previous amount, which is not what we want. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "When the game loads back in, should we fire this event off again when your quest loads back in?\n\nFor example, if we used a GiveXP event to give the player 500XP when we get to a certain quest state, this should be false.\nSince XP is saved already, quitting and reloading would grant 500XP on top of the previous amount, which is not what we want." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventRuntime_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/**\n\x09""Defines when the event should be executed \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Defines when the event should be executed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventFilter_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**\n\x09""Defines what types of characters the event should be allowed to run on \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Defines what types of characters the event should be allowed to run on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyEventPolicy_MetaData[] = {
		{ "Category", "Parties" },
		{ "Comment", "/**\n\x09""Defines how events should be executed when the dialogue is playing as a party. Ignored if not in a party. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Defines how events should be executed when the dialogue is playing as a party. Ignored if not in a party." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTargets_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/**Characters we should run the event on. If empty, we'll run on the character that owns the quest/dialogue.*/" },
		{ "EditCondition", "EventFilter == EEventFilter::EF_Anyone" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Characters we should run the event on. If empty, we'll run on the character that owns the quest/dialogue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCTargets_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** NPCs we should run the event on. If empty, we'll run the event on all NPCs in the dialogue */" },
		{ "EditCondition", "EventFilter == EEventFilter::EF_OnlyNPCs" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "NPCs we should run the event on. If empty, we'll run the event on all NPCs in the dialogue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTargets_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Players we should run the event on. If empty, we'll run on the character that owns the quest/dialogue. */" },
		{ "EditCondition", "EventFilter == EEventFilter::EF_OnlyPlayers" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Tales/NarrativeEvent.h" },
		{ "ToolTip", "Players we should run the event on. If empty, we'll run on the character that owns the quest/dialogue." },
	};
#endif // WITH_METADATA
	static void NewProp_bRefireOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefireOnLoad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventRuntime_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventRuntime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventFilter;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartyEventPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyEventPolicy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CharacterTargets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCTargets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerTargets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeEvent_ExecuteEvent, "ExecuteEvent" }, // 2250481192
		{ &Z_Construct_UFunction_UNarrativeEvent_GetCharacterTargets, "GetCharacterTargets" }, // 2374397844
		{ &Z_Construct_UFunction_UNarrativeEvent_GetGraphDisplayText, "GetGraphDisplayText" }, // 2616135600
		{ &Z_Construct_UFunction_UNarrativeEvent_GetHintText, "GetHintText" }, // 1750343444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bRefireOnLoad_SetBit(void* Obj)
{
	((UNarrativeEvent*)Obj)->bRefireOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bRefireOnLoad = { "bRefireOnLoad", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeEvent), &Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bRefireOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefireOnLoad_MetaData), NewProp_bRefireOnLoad_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime = { "EventRuntime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, EventRuntime), Z_Construct_UEnum_NarrativeArsenal_EEventRuntime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventRuntime_MetaData), NewProp_EventRuntime_MetaData) }; // 905326616
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventFilter = { "EventFilter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, EventFilter), Z_Construct_UEnum_NarrativeArsenal_EEventFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventFilter_MetaData), NewProp_EventFilter_MetaData) }; // 386119466
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PartyEventPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PartyEventPolicy = { "PartyEventPolicy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, PartyEventPolicy), Z_Construct_UEnum_NarrativeArsenal_EPartyEventPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyEventPolicy_MetaData), NewProp_PartyEventPolicy_MetaData) }; // 3300278807
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_CharacterTargets_Inner = { "CharacterTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_CharacterTargets = { "CharacterTargets", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, CharacterTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTargets_MetaData), NewProp_CharacterTargets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_NPCTargets_Inner = { "NPCTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_NPCTargets = { "NPCTargets", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, NPCTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCTargets_MetaData), NewProp_NPCTargets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PlayerTargets_Inner = { "PlayerTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPlayerDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PlayerTargets = { "PlayerTargets", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeEvent, PlayerTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTargets_MetaData), NewProp_PlayerTargets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_bRefireOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventRuntime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_EventFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PartyEventPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PartyEventPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_CharacterTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_CharacterTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_NPCTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_NPCTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PlayerTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeEvent_Statics::NewProp_PlayerTargets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeEvent_Statics::ClassParams = {
	&UNarrativeEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeEvent()
{
	if (!Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton, Z_Construct_UClass_UNarrativeEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeEvent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeEvent>()
{
	return UNarrativeEvent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeEvent);
UNarrativeEvent::~UNarrativeEvent() {}
// End Class UNarrativeEvent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPartyEventPolicy_StaticEnum, TEXT("EPartyEventPolicy"), &Z_Registration_Info_UEnum_EPartyEventPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3300278807U) },
		{ EEventRuntime_StaticEnum, TEXT("EEventRuntime"), &Z_Registration_Info_UEnum_EEventRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 905326616U) },
		{ EEventFilter_StaticEnum, TEXT("EEventFilter"), &Z_Registration_Info_UEnum_EEventFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 386119466U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeEvent, UNarrativeEvent::StaticClass, TEXT("UNarrativeEvent"), &Z_Registration_Info_UClass_UNarrativeEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeEvent), 3148671552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_3969731103(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
