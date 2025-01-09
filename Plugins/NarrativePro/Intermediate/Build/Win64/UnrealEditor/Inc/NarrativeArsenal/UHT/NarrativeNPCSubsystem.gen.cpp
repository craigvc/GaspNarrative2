// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/NarrativeNPCSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeNPCSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNPCSubsystem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeNPCSubsystem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCDefinition_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterArray();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCArray();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Delegate FOnRequestedNPCSpawned
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms
	{
		const UNPCDefinition* NPCData;
		ANarrativeNPCCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when a requested NPC was spawned. This is because spawning is deferred since we do it async, we don't do it immediately \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Called when a requested NPC was spawned. This is because spawning is deferred since we do it async, we don't do it immediately" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms, Character), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnRequestedNPCSpawned__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestedNPCSpawned_DelegateWrapper(const FMulticastScriptDelegate& OnRequestedNPCSpawned, const UNPCDefinition* NPCData, ANarrativeNPCCharacter* Character)
{
	struct _Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms
	{
		const UNPCDefinition* NPCData;
		ANarrativeNPCCharacter* Character;
	};
	_Script_NarrativeArsenal_eventOnRequestedNPCSpawned_Parms Parms;
	Parms.NPCData=NPCData;
	Parms.Character=Character;
	OnRequestedNPCSpawned.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestedNPCSpawned

// Begin Delegate FOnRequestedNPCReady
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnRequestedNPCReady_Parms
	{
		ANarrativeNPCCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Seperate delgate used by the async node \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Seperate delgate used by the async node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnRequestedNPCReady_Parms, Character), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnRequestedNPCReady__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnRequestedNPCReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnRequestedNPCReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestedNPCReady_DelegateWrapper(const FMulticastScriptDelegate& OnRequestedNPCReady, ANarrativeNPCCharacter* Character)
{
	struct _Script_NarrativeArsenal_eventOnRequestedNPCReady_Parms
	{
		ANarrativeNPCCharacter* Character;
	};
	_Script_NarrativeArsenal_eventOnRequestedNPCReady_Parms Parms;
	Parms.Character=Character;
	OnRequestedNPCReady.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestedNPCReady

// Begin Class UAsyncAction_FindOrSpawnNPC Function FindOrSpawnNPC
struct Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics
{
	struct AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms
	{
		UObject* WorldContextObject;
		UNPCDefinition* NPCData;
		FTransform Transform;
		UAsyncAction_FindOrSpawnNPC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "NPC Subsystem" },
		{ "CPP_Default_Transform", "()" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC, nullptr, "FindOrSpawnNPC", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::AsyncAction_FindOrSpawnNPC_eventFindOrSpawnNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_FindOrSpawnNPC::execFindOrSpawnNPC)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_FindOrSpawnNPC**)Z_Param__Result=UAsyncAction_FindOrSpawnNPC::FindOrSpawnNPC(Z_Param_WorldContextObject,Z_Param_NPCData,Z_Param_Transform);
	P_NATIVE_END;
}
// End Class UAsyncAction_FindOrSpawnNPC Function FindOrSpawnNPC

// Begin Class UAsyncAction_FindOrSpawnNPC Function OnNPCSpawned
struct Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics
{
	struct AsyncAction_FindOrSpawnNPC_eventOnNPCSpawned_Parms
	{
		const UNPCDefinition* NPCAsset;
		ANarrativeNPCCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//We need to check when the NPC was spawned in by the subsystem, we bind this to sub\n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "We need to check when the NPC was spawned in by the subsystem, we bind this to sub" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::NewProp_NPCAsset = { "NPCAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_FindOrSpawnNPC_eventOnNPCSpawned_Parms, NPCAsset), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCAsset_MetaData), NewProp_NPCAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_FindOrSpawnNPC_eventOnNPCSpawned_Parms, Character), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::NewProp_NPCAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::NewProp_Character,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC, nullptr, "OnNPCSpawned", nullptr, nullptr, Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::AsyncAction_FindOrSpawnNPC_eventOnNPCSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::AsyncAction_FindOrSpawnNPC_eventOnNPCSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_FindOrSpawnNPC::execOnNPCSpawned)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCAsset);
	P_GET_OBJECT(ANarrativeNPCCharacter,Z_Param_Character);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNPCSpawned(Z_Param_NPCAsset,Z_Param_Character);
	P_NATIVE_END;
}
// End Class UAsyncAction_FindOrSpawnNPC Function OnNPCSpawned

// Begin Class UAsyncAction_FindOrSpawnNPC
void UAsyncAction_FindOrSpawnNPC::StaticRegisterNativesUAsyncAction_FindOrSpawnNPC()
{
	UClass* Class = UAsyncAction_FindOrSpawnNPC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindOrSpawnNPC", &UAsyncAction_FindOrSpawnNPC::execFindOrSpawnNPC },
		{ "OnNPCSpawned", &UAsyncAction_FindOrSpawnNPC::execOnNPCSpawned },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncAction_FindOrSpawnNPC);
UClass* Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_NoRegister()
{
	return UAsyncAction_FindOrSpawnNPC::StaticClass();
}
struct Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//This handy node will find a spawned NPC in the world, or if one doesn't exist it will load the NPC in for you. \n" },
		{ "IncludePath", "AI/NarrativeNPCSubsystem.h" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "This handy node will find a spawned NPC in the world, or if one doesn't exist it will load the NPC in for you." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_FindOrSpawnNPC, "FindOrSpawnNPC" }, // 3717512461
		{ &Z_Construct_UFunction_UAsyncAction_FindOrSpawnNPC_OnNPCSpawned, "OnNPCSpawned" }, // 1433123797
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_FindOrSpawnNPC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::NewProp_OnNPCReady = { "OnNPCReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_FindOrSpawnNPC, OnNPCReady), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCReady__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNPCReady_MetaData), NewProp_OnNPCReady_MetaData) }; // 2214771023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::NewProp_OnNPCReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::ClassParams = {
	&UAsyncAction_FindOrSpawnNPC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_FindOrSpawnNPC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_FindOrSpawnNPC.OuterSingleton, Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_FindOrSpawnNPC.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAsyncAction_FindOrSpawnNPC>()
{
	return UAsyncAction_FindOrSpawnNPC::StaticClass();
}
UAsyncAction_FindOrSpawnNPC::UAsyncAction_FindOrSpawnNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_FindOrSpawnNPC);
UAsyncAction_FindOrSpawnNPC::~UAsyncAction_FindOrSpawnNPC() {}
// End Class UAsyncAction_FindOrSpawnNPC

// Begin ScriptStruct FCharacterArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterArray;
class UScriptStruct* FCharacterArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterArray, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("CharacterArray"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterArray.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FCharacterArray>()
{
	return FCharacterArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"CharacterArray",
	nullptr,
	0,
	sizeof(FCharacterArray),
	alignof(FCharacterArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterArray()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterArray.InnerSingleton, Z_Construct_UScriptStruct_FCharacterArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterArray.InnerSingleton;
}
// End ScriptStruct FCharacterArray

// Begin ScriptStruct FNPCArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCArray;
class UScriptStruct* FNPCArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCArray, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NPCArray"));
	}
	return Z_Registration_Info_UScriptStruct_NPCArray.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNPCArray>()
{
	return FNPCArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Wraps a TArray of NPCs. We need to wrap as TMap cant have TArray as value, but can have struct." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NPCArray",
	nullptr,
	0,
	sizeof(FNPCArray),
	alignof(FNPCArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCArray()
{
	if (!Z_Registration_Info_UScriptStruct_NPCArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCArray.InnerSingleton, Z_Construct_UScriptStruct_FNPCArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCArray.InnerSingleton;
}
// End ScriptStruct FNPCArray

// Begin Class UNarrativeNPCSubsystem Function FindCharacter
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics
{
	struct NarrativeNPCSubsystem_eventFindCharacter_Parms
	{
		const UCharacterDefinition* CharacterDefinition;
		ANarrativeCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Return the first character in the world with this definition. Much, much more efficient than a GetActorOfClass.\n\x09""Extremely efficient as characters are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Return the first character in the world with this definition. Much, much more efficient than a GetActorOfClass.\n      Extremely efficient as characters are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindCharacter_Parms, CharacterDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindCharacter_Parms, ReturnValue), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "FindCharacter", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::NarrativeNPCSubsystem_eventFindCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::NarrativeNPCSubsystem_eventFindCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execFindCharacter)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_CharacterDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeCharacter**)Z_Param__Result=P_THIS->FindCharacter(Z_Param_CharacterDefinition);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function FindCharacter

// Begin Class UNarrativeNPCSubsystem Function FindCharacters
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics
{
	struct NarrativeNPCSubsystem_eventFindCharacters_Parms
	{
		const UCharacterDefinition* CharacterDefinition;
		TArray<ANarrativeCharacter*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Request all Characters of the given type. Much, much more efficient than a GetAllActorsOfClass. \n\x09""Extremely efficient as NPCs are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Request all Characters of the given type. Much, much more efficient than a GetAllActorsOfClass.\n      Extremely efficient as NPCs are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindCharacters_Parms, CharacterDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindCharacters_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "FindCharacters", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NarrativeNPCSubsystem_eventFindCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::NarrativeNPCSubsystem_eventFindCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execFindCharacters)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_CharacterDefinition);
	P_GET_TARRAY_REF(ANarrativeCharacter*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindCharacters(Z_Param_CharacterDefinition,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function FindCharacters

// Begin Class UNarrativeNPCSubsystem Function FindNPC
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics
{
	struct NarrativeNPCSubsystem_eventFindNPC_Parms
	{
		const UNPCDefinition* NPCData;
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Return the first NPC in the world with this type. Much, much more efficient than a GetActorOfClass.\n\x09""Extremely efficient as NPCs are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Return the first NPC in the world with this type. Much, much more efficient than a GetActorOfClass.\n      Extremely efficient as NPCs are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "FindNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::NarrativeNPCSubsystem_eventFindNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::NarrativeNPCSubsystem_eventFindNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execFindNPC)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->FindNPC(Z_Param_NPCData);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function FindNPC

// Begin Class UNarrativeNPCSubsystem Function FindNPCs
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics
{
	struct NarrativeNPCSubsystem_eventFindNPCs_Parms
	{
		const UNPCDefinition* NPCData;
		TArray<ANarrativeNPCCharacter*> OutActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Request all NPCs of the given type. Much, much more efficient than a GetAllActorsOfClass. \n\x09""Extremely efficient as NPCs are cached via a TMap lookup. */" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Request all NPCs of the given type. Much, much more efficient than a GetAllActorsOfClass.\n      Extremely efficient as NPCs are cached via a TMap lookup." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindNPCs_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCData_MetaData), NewProp_NPCData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindNPCs_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NewProp_OutActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NewProp_OutActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "FindNPCs", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NarrativeNPCSubsystem_eventFindNPCs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::NarrativeNPCSubsystem_eventFindNPCs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execFindNPCs)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_TARRAY_REF(ANarrativeNPCCharacter*,Z_Param_Out_OutActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindNPCs(Z_Param_NPCData,Z_Param_Out_OutActors);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function FindNPCs

// Begin Class UNarrativeNPCSubsystem Function FindOrSpawnNPC
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics
{
	struct NarrativeNPCSubsystem_eventFindOrSpawnNPC_Parms
	{
		UNPCDefinition* NPCData;
		FTransform Transform;
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/** Same as spawn NPC, but will just return the NPC should it already exist in the level.  */" },
		{ "CPP_Default_Transform", "()" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Same as spawn NPC, but will just return the NPC should it already exist in the level." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindOrSpawnNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindOrSpawnNPC_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventFindOrSpawnNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "FindOrSpawnNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NarrativeNPCSubsystem_eventFindOrSpawnNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::NarrativeNPCSubsystem_eventFindOrSpawnNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execFindOrSpawnNPC)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->FindOrSpawnNPC(Z_Param_NPCData,Z_Param_Transform);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function FindOrSpawnNPC

// Begin Class UNarrativeNPCSubsystem Function IsCharacterSpawned
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics
{
	struct NarrativeNPCSubsystem_eventIsCharacterSpawned_Parms
	{
		const UCharacterDefinition* CharacterDefinition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/**Return whether a given character exists in the world*/" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Return whether a given character exists in the world" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterDefinition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NewProp_CharacterDefinition = { "CharacterDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventIsCharacterSpawned_Parms, CharacterDefinition), Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterDefinition_MetaData), NewProp_CharacterDefinition_MetaData) };
void Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeNPCSubsystem_eventIsCharacterSpawned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeNPCSubsystem_eventIsCharacterSpawned_Parms), &Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NewProp_CharacterDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "IsCharacterSpawned", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NarrativeNPCSubsystem_eventIsCharacterSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::NarrativeNPCSubsystem_eventIsCharacterSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execIsCharacterSpawned)
{
	P_GET_OBJECT(UCharacterDefinition,Z_Param_CharacterDefinition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCharacterSpawned(Z_Param_CharacterDefinition);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function IsCharacterSpawned

// Begin Class UNarrativeNPCSubsystem Function OnActorDestroyed
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics
{
	struct NarrativeNPCSubsystem_eventOnActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventOnActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "OnActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::NarrativeNPCSubsystem_eventOnActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::NarrativeNPCSubsystem_eventOnActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execOnActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function OnActorDestroyed

// Begin Class UNarrativeNPCSubsystem Function OnActorSpawned
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics
{
	struct NarrativeNPCSubsystem_eventOnActorSpawned_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventOnActorSpawned_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "OnActorSpawned", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::NarrativeNPCSubsystem_eventOnActorSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::NarrativeNPCSubsystem_eventOnActorSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execOnActorSpawned)
{
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorSpawned(Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function OnActorSpawned

// Begin Class UNarrativeNPCSubsystem Function OnNPCClassLoaded
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics
{
	struct NarrativeNPCSubsystem_eventOnNPCClassLoaded_Parms
	{
		FPrimaryAssetId LoadedId;
		FTransform SpawnTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Callback for when the NPC class is loaded and we can actually spawn it in. \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Callback for when the NPC class is loaded and we can actually spawn it in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::NewProp_LoadedId = { "LoadedId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventOnNPCClassLoaded_Parms, LoadedId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventOnNPCClassLoaded_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::NewProp_LoadedId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::NewProp_SpawnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "OnNPCClassLoaded", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::NarrativeNPCSubsystem_eventOnNPCClassLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::NarrativeNPCSubsystem_eventOnNPCClassLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execOnNPCClassLoaded)
{
	P_GET_STRUCT(FPrimaryAssetId,Z_Param_LoadedId);
	P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNPCClassLoaded(Z_Param_LoadedId,Z_Param_SpawnTransform);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function OnNPCClassLoaded

// Begin Class UNarrativeNPCSubsystem Function SpawnNPC
struct Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics
{
	struct NarrativeNPCSubsystem_eventSpawnNPC_Parms
	{
		UNPCDefinition* NPCData;
		FTransform Transform;
		ANarrativeNPCCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Subsystem" },
		{ "Comment", "/**Spawn an NPC in. \n\x09@param Transform is optional, and is only used if the actor doesnt exist in the world and needs spawning */" },
		{ "CPP_Default_Transform", "()" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Spawn an NPC in.\n       @param Transform is optional, and is only used if the actor doesnt exist in the world and needs spawning" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NewProp_NPCData = { "NPCData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventSpawnNPC_Parms, NPCData), Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventSpawnNPC_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeNPCSubsystem_eventSpawnNPC_Parms, ReturnValue), Z_Construct_UClass_ANarrativeNPCCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NewProp_NPCData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeNPCSubsystem, nullptr, "SpawnNPC", nullptr, nullptr, Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NarrativeNPCSubsystem_eventSpawnNPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::NarrativeNPCSubsystem_eventSpawnNPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeNPCSubsystem::execSpawnNPC)
{
	P_GET_OBJECT(UNPCDefinition,Z_Param_NPCData);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANarrativeNPCCharacter**)Z_Param__Result=P_THIS->SpawnNPC(Z_Param_NPCData,Z_Param_Transform);
	P_NATIVE_END;
}
// End Class UNarrativeNPCSubsystem Function SpawnNPC

// Begin Class UNarrativeNPCSubsystem
void UNarrativeNPCSubsystem::StaticRegisterNativesUNarrativeNPCSubsystem()
{
	UClass* Class = UNarrativeNPCSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindCharacter", &UNarrativeNPCSubsystem::execFindCharacter },
		{ "FindCharacters", &UNarrativeNPCSubsystem::execFindCharacters },
		{ "FindNPC", &UNarrativeNPCSubsystem::execFindNPC },
		{ "FindNPCs", &UNarrativeNPCSubsystem::execFindNPCs },
		{ "FindOrSpawnNPC", &UNarrativeNPCSubsystem::execFindOrSpawnNPC },
		{ "IsCharacterSpawned", &UNarrativeNPCSubsystem::execIsCharacterSpawned },
		{ "OnActorDestroyed", &UNarrativeNPCSubsystem::execOnActorDestroyed },
		{ "OnActorSpawned", &UNarrativeNPCSubsystem::execOnActorSpawned },
		{ "OnNPCClassLoaded", &UNarrativeNPCSubsystem::execOnNPCClassLoaded },
		{ "SpawnNPC", &UNarrativeNPCSubsystem::execSpawnNPC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeNPCSubsystem);
UClass* Z_Construct_UClass_UNarrativeNPCSubsystem_NoRegister()
{
	return UNarrativeNPCSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNarrativeNPCSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Character subsystem for Narrative. Allows us to easily load an Character/NPC, find an NPC in the world, ensures we don't spawn multiple NPC instances, etc. \n */" },
		{ "IncludePath", "AI/NarrativeNPCSubsystem.h" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Character subsystem for Narrative. Allows us to easily load an Character/NPC, find an NPC in the world, ensures we don't spawn multiple NPC instances, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNPCSpawned_MetaData[] = {
		{ "Category", "NPC Subsystem" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Maps CharacterDefinitions to spawned characters of that type, so we can efficiently access them without expensive GetAllActorsOfClass\n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Maps CharacterDefinitions to spawned characters of that type, so we can efficiently access them without expensive GetAllActorsOfClass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "//Specialized NPC version of CharacterMap to avoid casting \n" },
		{ "ModuleRelativePath", "Public/AI/NarrativeNPCSubsystem.h" },
		{ "ToolTip", "Specialized NPC version of CharacterMap to avoid casting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNPCSpawned;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NPCMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacter, "FindCharacter" }, // 2951055175
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_FindCharacters, "FindCharacters" }, // 1284231392
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPC, "FindNPC" }, // 1334817876
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_FindNPCs, "FindNPCs" }, // 790438509
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_FindOrSpawnNPC, "FindOrSpawnNPC" }, // 1098013814
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_IsCharacterSpawned, "IsCharacterSpawned" }, // 324225217
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorDestroyed, "OnActorDestroyed" }, // 2161639427
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_OnActorSpawned, "OnActorSpawned" }, // 2405102648
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_OnNPCClassLoaded, "OnNPCClassLoaded" }, // 2517739685
		{ &Z_Construct_UFunction_UNarrativeNPCSubsystem_SpawnNPC, "SpawnNPC" }, // 1491896683
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeNPCSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_OnNPCSpawned = { "OnNPCSpawned", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNPCSubsystem, OnNPCSpawned), Z_Construct_UDelegateFunction_NarrativeArsenal_OnRequestedNPCSpawned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNPCSpawned_MetaData), NewProp_OnNPCSpawned_MetaData) }; // 1179552535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_CharacterMap_ValueProp = { "CharacterMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCharacterArray, METADATA_PARAMS(0, nullptr) }; // 2449983248
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_CharacterMap_Key_KeyProp = { "CharacterMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_CharacterMap = { "CharacterMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNPCSubsystem, CharacterMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMap_MetaData), NewProp_CharacterMap_MetaData) }; // 2449983248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_NPCMap_ValueProp = { "NPCMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNPCArray, METADATA_PARAMS(0, nullptr) }; // 3283519305
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_NPCMap_Key_KeyProp = { "NPCMap_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_NPCMap = { "NPCMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeNPCSubsystem, NPCMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCMap_MetaData), NewProp_NPCMap_MetaData) }; // 3283519305
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_OnNPCSpawned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_CharacterMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_CharacterMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_CharacterMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_NPCMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_NPCMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::NewProp_NPCMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::ClassParams = {
	&UNarrativeNPCSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeNPCSubsystem()
{
	if (!Z_Registration_Info_UClass_UNarrativeNPCSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeNPCSubsystem.OuterSingleton, Z_Construct_UClass_UNarrativeNPCSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeNPCSubsystem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeNPCSubsystem>()
{
	return UNarrativeNPCSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeNPCSubsystem);
UNarrativeNPCSubsystem::~UNarrativeNPCSubsystem() {}
// End Class UNarrativeNPCSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterArray::StaticStruct, Z_Construct_UScriptStruct_FCharacterArray_Statics::NewStructOps, TEXT("CharacterArray"), &Z_Registration_Info_UScriptStruct_CharacterArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterArray), 2449983248U) },
		{ FNPCArray::StaticStruct, Z_Construct_UScriptStruct_FNPCArray_Statics::NewStructOps, TEXT("NPCArray"), &Z_Registration_Info_UScriptStruct_NPCArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCArray), 3283519305U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_FindOrSpawnNPC, UAsyncAction_FindOrSpawnNPC::StaticClass, TEXT("UAsyncAction_FindOrSpawnNPC"), &Z_Registration_Info_UClass_UAsyncAction_FindOrSpawnNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_FindOrSpawnNPC), 1392916539U) },
		{ Z_Construct_UClass_UNarrativeNPCSubsystem, UNarrativeNPCSubsystem::StaticClass, TEXT("UNarrativeNPCSubsystem"), &Z_Registration_Info_UClass_UNarrativeNPCSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeNPCSubsystem), 3712063661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_4092232702(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCSubsystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
