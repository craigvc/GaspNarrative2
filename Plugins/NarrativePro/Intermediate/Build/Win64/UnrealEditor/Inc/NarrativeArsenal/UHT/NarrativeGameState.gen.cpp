// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameState() {}

// Begin Cross Module References
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameState();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameState_NoRegister();
NARRATIVEARSENAL_API UEnum* Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FFactionAttitudeData();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnFactionAttitudeChanged
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms
	{
		ENarrativeFactionID Faction;
		ENarrativeFactionID OtherFaction;
		TEnumAsByte<ETeamAttitude::Type> NewAttitude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Delegate signature\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Delegate signature" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Faction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Faction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OtherFaction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OtherFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAttitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_Faction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms, Faction), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(0, nullptr) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_OtherFaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_OtherFaction = { "OtherFaction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms, OtherFaction), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(0, nullptr) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_NewAttitude = { "NewAttitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms, NewAttitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_Faction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_Faction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature_Statics::NewProp_OtherFaction_Underlying,
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
void FOnFactionAttitudeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFactionAttitudeChanged, ENarrativeFactionID Faction, ENarrativeFactionID OtherFaction, ETeamAttitude::Type NewAttitude)
{
	struct _Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms
	{
		ENarrativeFactionID Faction;
		ENarrativeFactionID OtherFaction;
		TEnumAsByte<ETeamAttitude::Type> NewAttitude;
	};
	_Script_NarrativeArsenal_eventOnFactionAttitudeChanged_Parms Parms;
	Parms.Faction=Faction;
	Parms.OtherFaction=OtherFaction;
	Parms.NewAttitude=NewAttitude;
	OnFactionAttitudeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFactionAttitudeChanged

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
		{ "Category", "Faction" },
		{ "Comment", "//A map of a faction -> our attiude towards that faction\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "A map of a faction -> our attiude towards that faction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttitudeMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttitudeMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttitudeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AttitudeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionAttitudeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_ValueProp = { "AttitudeMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_Key_KeyProp = { "AttitudeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(0, nullptr) }; // 696033230
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap = { "AttitudeMap", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFactionAttitudeData, AttitudeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttitudeMap_MetaData), NewProp_AttitudeMap_MetaData) }; // 696033230 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewProp_AttitudeMap_Key_KeyProp_Underlying,
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

// Begin Class ANarrativeGameState Function GetAttitudeTowards
struct Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics
{
	struct NarrativeGameState_eventGetAttitudeTowards_Parms
	{
		ENarrativeFactionID SourceFaction;
		ENarrativeFactionID TargetFaction;
		TEnumAsByte<ETeamAttitude::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Check how the source factions attitude towards the target faction \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Check how the source factions attitude towards the target faction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFaction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFaction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceFaction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetFaction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_SourceFaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_SourceFaction = { "SourceFaction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetAttitudeTowards_Parms, SourceFaction), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFaction_MetaData), NewProp_SourceFaction_MetaData) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_TargetFaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_TargetFaction = { "TargetFaction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetAttitudeTowards_Parms, TargetFaction), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFaction_MetaData), NewProp_TargetFaction_MetaData) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventGetAttitudeTowards_Parms, ReturnValue), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(0, nullptr) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_SourceFaction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_SourceFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_TargetFaction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_TargetFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "GetAttitudeTowards", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NarrativeGameState_eventGetAttitudeTowards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::NarrativeGameState_eventGetAttitudeTowards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeGameState::execGetAttitudeTowards)
{
	P_GET_ENUM(ENarrativeFactionID,Z_Param_SourceFaction);
	P_GET_ENUM(ENarrativeFactionID,Z_Param_TargetFaction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ETeamAttitude::Type>*)Z_Param__Result=P_THIS->GetAttitudeTowards(ENarrativeFactionID(Z_Param_SourceFaction),ENarrativeFactionID(Z_Param_TargetFaction));
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function GetAttitudeTowards

// Begin Class ANarrativeGameState Function SetFactionAttitude
struct Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics
{
	struct NarrativeGameState_eventSetFactionAttitude_Parms
	{
		ENarrativeFactionID SourceFaction;
		ENarrativeFactionID TargetFaction;
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
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFaction_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAttitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceFaction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetFaction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetFaction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAttitude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_SourceFaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_SourceFaction = { "SourceFaction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventSetFactionAttitude_Parms, SourceFaction), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFaction_MetaData), NewProp_SourceFaction_MetaData) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_TargetFaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_TargetFaction = { "TargetFaction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventSetFactionAttitude_Parms, TargetFaction), Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFaction_MetaData), NewProp_TargetFaction_MetaData) }; // 696033230
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_NewAttitude = { "NewAttitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeGameState_eventSetFactionAttitude_Parms, NewAttitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAttitude_MetaData), NewProp_NewAttitude_MetaData) }; // 2991328252
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_SourceFaction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_SourceFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_TargetFaction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_TargetFaction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NewProp_NewAttitude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeGameState, nullptr, "SetFactionAttitude", nullptr, nullptr, Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::NarrativeGameState_eventSetFactionAttitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude_Statics::Function_MetaDataParams) };
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
	P_GET_ENUM(ENarrativeFactionID,Z_Param_SourceFaction);
	P_GET_ENUM(ENarrativeFactionID,Z_Param_TargetFaction);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewAttitude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFactionAttitude(ENarrativeFactionID(Z_Param_SourceFaction),ENarrativeFactionID(Z_Param_TargetFaction),ETeamAttitude::Type(Z_Param_NewAttitude));
	P_NATIVE_END;
}
// End Class ANarrativeGameState Function SetFactionAttitude

// Begin Class ANarrativeGameState
void ANarrativeGameState::StaticRegisterNativesANarrativeGameState()
{
	UClass* Class = ANarrativeGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttitudeTowards", &ANarrativeGameState::execGetAttitudeTowards },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FactionAllianceMap_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Allows for nice efficient lookups for which alliance is friendly, netutral, enemies of others. Also marked savegame so alliances will be preserved through play sessions. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Allows for nice efficient lookups for which alliance is friendly, netutral, enemies of others. Also marked savegame so alliances will be preserved through play sessions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFactionAttitudeChanged_MetaData[] = {
		{ "Category", "Factions" },
		{ "Comment", "//Called when a factions attitude towards another faction changes - bots bind this to recheck if they are perceiving someone who has become a hostile \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameState.h" },
		{ "ToolTip", "Called when a factions attitude towards another faction changes - bots bind this to recheck if they are perceiving someone who has become a hostile" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FactionAllianceMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FactionAllianceMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FactionAllianceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FactionAllianceMap;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFactionAttitudeChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeGameState_GetAttitudeTowards, "GetAttitudeTowards" }, // 1247772493
		{ &Z_Construct_UFunction_ANarrativeGameState_SetFactionAttitude, "SetFactionAttitude" }, // 2839816880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_ValueProp = { "FactionAllianceMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFactionAttitudeData, METADATA_PARAMS(0, nullptr) }; // 2556375859
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_Key_KeyProp = { "FactionAllianceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NarrativeArsenal_ENarrativeFactionID, METADATA_PARAMS(0, nullptr) }; // 696033230
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap = { "FactionAllianceMap", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, FactionAllianceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FactionAllianceMap_MetaData), NewProp_FactionAllianceMap_MetaData) }; // 696033230 2556375859
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_OnFactionAttitudeChanged = { "OnFactionAttitudeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeGameState, OnFactionAttitudeChanged), Z_Construct_UDelegateFunction_NarrativeArsenal_OnFactionAttitudeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFactionAttitudeChanged_MetaData), NewProp_OnFactionAttitudeChanged_MetaData) }; // 4266026660
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_FactionAllianceMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeGameState_Statics::NewProp_OnFactionAttitudeChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeGameState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableActor_NoRegister, (int32)VTABLE_OFFSET(ANarrativeGameState, INarrativeSavableActor), false },  // 4265298697
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
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFactionAttitudeData::StaticStruct, Z_Construct_UScriptStruct_FFactionAttitudeData_Statics::NewStructOps, TEXT("FactionAttitudeData"), &Z_Registration_Info_UScriptStruct_FactionAttitudeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFactionAttitudeData), 2556375859U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeGameState, ANarrativeGameState::StaticClass, TEXT("ANarrativeGameState"), &Z_Registration_Info_UClass_ANarrativeGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeGameState), 1333464786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_1781751071(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
