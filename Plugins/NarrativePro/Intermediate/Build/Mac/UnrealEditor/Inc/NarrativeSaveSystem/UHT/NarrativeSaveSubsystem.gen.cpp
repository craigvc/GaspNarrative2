// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeSaveSystem/Public/Subsystems/NarrativeSaveSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeSaveSubsystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSave_NoRegister();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSaveSubsystem();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSaveSubsystem_NoRegister();
NARRATIVESAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NarrativeSaveSystem();
// End Cross Module References

// Begin Delegate FOnSavePhaseChanged
struct Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Called when the save system updates \n" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Called when the save system updates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeSaveSystem, nullptr, "OnSavePhaseChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSavePhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnSavePhaseChanged)
{
	OnSavePhaseChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSavePhaseChanged

// Begin Class UNarrativeSaveSubsystem Function DeferredLoadPlayerData
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "DeferredLoadPlayerData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execDeferredLoadPlayerData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeferredLoadPlayerData();
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function DeferredLoadPlayerData

// Begin Class UNarrativeSaveSubsystem Function DeleteSave
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics
{
	struct NarrativeSaveSubsystem_eventDeleteSave_Parms
	{
		FString SaveName;
		int32 Slot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**Deletes a saved game from disk. USE THIS WITH CAUTION. Return true if save file deleted, false if delete failed or file didn't exist.*/" },
		{ "CPP_Default_SaveName", "NarrativeSave" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Deletes a saved game from disk. USE THIS WITH CAUTION. Return true if save file deleted, false if delete failed or file didn't exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventDeleteSave_Parms, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveName_MetaData), NewProp_SaveName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventDeleteSave_Parms, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
void Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventDeleteSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventDeleteSave_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_SaveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "DeleteSave", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NarrativeSaveSubsystem_eventDeleteSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::NarrativeSaveSubsystem_eventDeleteSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execDeleteSave)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSave(Z_Param_SaveName,Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function DeleteSave

// Begin Class UNarrativeSaveSubsystem Function GetSaveObject
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics
{
	struct NarrativeSaveSubsystem_eventGetSaveObject_Parms
	{
		UNarrativeSave* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Return our current save object if one exists  */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Return our current save object if one exists" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventGetSaveObject_Parms, ReturnValue), Z_Construct_UClass_UNarrativeSave_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "GetSaveObject", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::NarrativeSaveSubsystem_eventGetSaveObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::NarrativeSaveSubsystem_eventGetSaveObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execGetSaveObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNarrativeSave**)Z_Param__Result=P_THIS->GetSaveObject();
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function GetSaveObject

// Begin Class UNarrativeSaveSubsystem Function IsLoading
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics
{
	struct NarrativeSaveSubsystem_eventIsLoading_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Whether or not we have player data and we're just waiting to do a deferred load of it */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Whether or not we have player data and we're just waiting to do a deferred load of it" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventIsLoading_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "IsLoading", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::NarrativeSaveSubsystem_eventIsLoading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::NarrativeSaveSubsystem_eventIsLoading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execIsLoading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoading();
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function IsLoading

// Begin Class UNarrativeSaveSubsystem Function IsSavingDisabled
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics
{
	struct NarrativeSaveSubsystem_eventIsSavingDisabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Whether or not to disable saving. Useful for certain times - perhaps you want to disable saving whilst we are in combat etc. */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Whether or not to disable saving. Useful for certain times - perhaps you want to disable saving whilst we are in combat etc." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventIsSavingDisabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventIsSavingDisabled_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "IsSavingDisabled", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::NarrativeSaveSubsystem_eventIsSavingDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::NarrativeSaveSubsystem_eventIsSavingDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execIsSavingDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSavingDisabled();
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function IsSavingDisabled

// Begin Class UNarrativeSaveSubsystem Function LevelAddedToWorld
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics
{
	struct NarrativeSaveSubsystem_eventLevelAddedToWorld_Parms
	{
		ULevel* InLevel;
		UWorld* InWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLevelAddedToWorld_Parms, InLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLevelAddedToWorld_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::NewProp_InWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "LevelAddedToWorld", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::NarrativeSaveSubsystem_eventLevelAddedToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::NarrativeSaveSubsystem_eventLevelAddedToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execLevelAddedToWorld)
{
	P_GET_OBJECT(ULevel,Z_Param_InLevel);
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelAddedToWorld(Z_Param_InLevel,Z_Param_InWorld);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function LevelAddedToWorld

// Begin Class UNarrativeSaveSubsystem Function Load
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics
{
	struct NarrativeSaveSubsystem_eventLoad_Parms
	{
		FString SaveName;
		int32 Slot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**\n\x09* Assuming a save file exists, this will load the save file in. Essentially this will update the state of any actors in the world implementing INarrativeSavableActor\n\x09* and spawn in any missing actors in the save file that aren't in the world already. We will also check for any components implemeting INarrativeSavableComponent \n\x09* and save their state too. \n\x09*/" },
		{ "CPP_Default_SaveName", "NarrativeSave" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Assuming a save file exists, this will load the save file in. Essentially this will update the state of any actors in the world implementing INarrativeSavableActor\nand spawn in any missing actors in the save file that aren't in the world already. We will also check for any components implemeting INarrativeSavableComponent\nand save their state too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLoad_Parms, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveName_MetaData), NewProp_SaveName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLoad_Parms, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
void Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventLoad_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventLoad_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_SaveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "Load", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NarrativeSaveSubsystem_eventLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::NarrativeSaveSubsystem_eventLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_Load()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_Load_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execLoad)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Load(Z_Param_SaveName,Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function Load

// Begin Class UNarrativeSaveSubsystem Function LoadSingleActor
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics
{
	struct NarrativeSaveSubsystem_eventLoadSingleActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Update a single actor so its state matches that of the saved record for that actor. */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Update a single actor so its state matches that of the saved record for that actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLoadSingleActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventLoadSingleActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventLoadSingleActor_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "LoadSingleActor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NarrativeSaveSubsystem_eventLoadSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::NarrativeSaveSubsystem_eventLoadSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execLoadSingleActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadSingleActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function LoadSingleActor

// Begin Class UNarrativeSaveSubsystem Function LookupActorByGUID
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics
{
	struct NarrativeSaveSubsystem_eventLookupActorByGUID_Parms
	{
		FGuid SearchGUID;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lookups" },
		{ "Comment", "/** Allows you to quickly lookup an actor reference using its save GUID. Useful for actor references - save the GUID to disk and look it up later.  */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Allows you to quickly lookup an actor reference using its save GUID. Useful for actor references - save the GUID to disk and look it up later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchGUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::NewProp_SearchGUID = { "SearchGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLookupActorByGUID_Parms, SearchGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchGUID_MetaData), NewProp_SearchGUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventLookupActorByGUID_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::NewProp_SearchGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "LookupActorByGUID", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::NarrativeSaveSubsystem_eventLookupActorByGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::NarrativeSaveSubsystem_eventLookupActorByGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execLookupActorByGUID)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_SearchGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->LookupActorByGUID(Z_Param_Out_SearchGUID);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function LookupActorByGUID

// Begin Class UNarrativeSaveSubsystem Function OnActorDestroyed
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics
{
	struct NarrativeSaveSubsystem_eventOnActorDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventOnActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "OnActorDestroyed", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::NarrativeSaveSubsystem_eventOnActorDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::NarrativeSaveSubsystem_eventOnActorDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execOnActorDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function OnActorDestroyed

// Begin Class UNarrativeSaveSubsystem Function OnActorPrespawned
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics
{
	struct NarrativeSaveSubsystem_eventOnActorPrespawned_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventOnActorPrespawned_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "OnActorPrespawned", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::NarrativeSaveSubsystem_eventOnActorPrespawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::NarrativeSaveSubsystem_eventOnActorPrespawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execOnActorPrespawned)
{
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorPrespawned(Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function OnActorPrespawned

// Begin Class UNarrativeSaveSubsystem Function OnActorSpawned
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics
{
	struct NarrativeSaveSubsystem_eventOnActorSpawned_Parms
	{
		AActor* SpawnedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventOnActorSpawned_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "OnActorSpawned", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::NarrativeSaveSubsystem_eventOnActorSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::NarrativeSaveSubsystem_eventOnActorSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execOnActorSpawned)
{
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorSpawned(Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function OnActorSpawned

// Begin Class UNarrativeSaveSubsystem Function PreLevelRemovedFromWorld
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics
{
	struct NarrativeSaveSubsystem_eventPreLevelRemovedFromWorld_Parms
	{
		ULevel* InLevel;
		UWorld* InWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventPreLevelRemovedFromWorld_Parms, InLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventPreLevelRemovedFromWorld_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::NewProp_InWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "PreLevelRemovedFromWorld", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::NarrativeSaveSubsystem_eventPreLevelRemovedFromWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::NarrativeSaveSubsystem_eventPreLevelRemovedFromWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execPreLevelRemovedFromWorld)
{
	P_GET_OBJECT(ULevel,Z_Param_InLevel);
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreLevelRemovedFromWorld(Z_Param_InLevel,Z_Param_InWorld);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function PreLevelRemovedFromWorld

// Begin Class UNarrativeSaveSubsystem Function RemoveSingleActor
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics
{
	struct NarrativeSaveSubsystem_eventRemoveSingleActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/* Remove a single actor from the save file */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Remove a single actor from the save file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventRemoveSingleActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventRemoveSingleActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventRemoveSingleActor_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "RemoveSingleActor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NarrativeSaveSubsystem_eventRemoveSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::NarrativeSaveSubsystem_eventRemoveSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execRemoveSingleActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSingleActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function RemoveSingleActor

// Begin Class UNarrativeSaveSubsystem Function Save
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics
{
	struct NarrativeSaveSubsystem_eventSave_Parms
	{
		FString SaveName;
		int32 Slot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/**\n\x09* Will write to the records to a save file, and actually commit the save file to disk also. \n\x09*/" },
		{ "CPP_Default_SaveName", "NarrativeSave" },
		{ "CPP_Default_Slot", "0" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Will write to the records to a save file, and actually commit the save file to disk also." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_SaveName = { "SaveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventSave_Parms, SaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveName_MetaData), NewProp_SaveName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventSave_Parms, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
void Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventSave_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventSave_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_SaveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "Save", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NarrativeSaveSubsystem_eventSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::NarrativeSaveSubsystem_eventSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_Save()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_Save_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execSave)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SaveName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Save(Z_Param_SaveName,Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function Save

// Begin Class UNarrativeSaveSubsystem Function SaveSingleActor
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics
{
	struct NarrativeSaveSubsystem_eventSaveSingleActor_Parms
	{
		AActor* Actor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Update a single actor so its state matches that of the saved record for that actor. \n\x09\n\x09@param bDontRespawn tells the save system that this actor should not automatically be respawned by the save system, we need to do it manually.*/" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Update a single actor so its state matches that of the saved record for that actor.\n\n      @param bDontRespawn tells the save system that this actor should not automatically be respawned by the save system, we need to do it manually." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeSaveSubsystem_eventSaveSingleActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventSaveSingleActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventSaveSingleActor_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "SaveSingleActor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NarrativeSaveSubsystem_eventSaveSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::NarrativeSaveSubsystem_eventSaveSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execSaveSingleActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveSingleActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function SaveSingleActor

// Begin Class UNarrativeSaveSubsystem Function SetSavingDisabled
struct Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics
{
	struct NarrativeSaveSubsystem_eventSetSavingDisabled_Parms
	{
		bool bShoudldDisable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "Comment", "/** Whether or not to disable saving. Useful for certain times - perhaps you want to disable saving whilst we are in combat etc. */" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Whether or not to disable saving. Useful for certain times - perhaps you want to disable saving whilst we are in combat etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShoudldDisable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShoudldDisable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShoudldDisable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::NewProp_bShoudldDisable_SetBit(void* Obj)
{
	((NarrativeSaveSubsystem_eventSetSavingDisabled_Parms*)Obj)->bShoudldDisable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::NewProp_bShoudldDisable = { "bShoudldDisable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeSaveSubsystem_eventSetSavingDisabled_Parms), &Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::NewProp_bShoudldDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShoudldDisable_MetaData), NewProp_bShoudldDisable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::NewProp_bShoudldDisable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeSaveSubsystem, nullptr, "SetSavingDisabled", nullptr, nullptr, Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::NarrativeSaveSubsystem_eventSetSavingDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::NarrativeSaveSubsystem_eventSetSavingDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeSaveSubsystem::execSetSavingDisabled)
{
	P_GET_UBOOL(Z_Param_bShoudldDisable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSavingDisabled(Z_Param_bShoudldDisable);
	P_NATIVE_END;
}
// End Class UNarrativeSaveSubsystem Function SetSavingDisabled

// Begin Class UNarrativeSaveSubsystem
void UNarrativeSaveSubsystem::StaticRegisterNativesUNarrativeSaveSubsystem()
{
	UClass* Class = UNarrativeSaveSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeferredLoadPlayerData", &UNarrativeSaveSubsystem::execDeferredLoadPlayerData },
		{ "DeleteSave", &UNarrativeSaveSubsystem::execDeleteSave },
		{ "GetSaveObject", &UNarrativeSaveSubsystem::execGetSaveObject },
		{ "IsLoading", &UNarrativeSaveSubsystem::execIsLoading },
		{ "IsSavingDisabled", &UNarrativeSaveSubsystem::execIsSavingDisabled },
		{ "LevelAddedToWorld", &UNarrativeSaveSubsystem::execLevelAddedToWorld },
		{ "Load", &UNarrativeSaveSubsystem::execLoad },
		{ "LoadSingleActor", &UNarrativeSaveSubsystem::execLoadSingleActor },
		{ "LookupActorByGUID", &UNarrativeSaveSubsystem::execLookupActorByGUID },
		{ "OnActorDestroyed", &UNarrativeSaveSubsystem::execOnActorDestroyed },
		{ "OnActorPrespawned", &UNarrativeSaveSubsystem::execOnActorPrespawned },
		{ "OnActorSpawned", &UNarrativeSaveSubsystem::execOnActorSpawned },
		{ "PreLevelRemovedFromWorld", &UNarrativeSaveSubsystem::execPreLevelRemovedFromWorld },
		{ "RemoveSingleActor", &UNarrativeSaveSubsystem::execRemoveSingleActor },
		{ "Save", &UNarrativeSaveSubsystem::execSave },
		{ "SaveSingleActor", &UNarrativeSaveSubsystem::execSaveSingleActor },
		{ "SetSavingDisabled", &UNarrativeSaveSubsystem::execSetSavingDisabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeSaveSubsystem);
UClass* Z_Construct_UClass_UNarrativeSaveSubsystem_NoRegister()
{
	return UNarrativeSaveSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNarrativeSaveSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Excellent little subsystem for saving every actor in our world implementing INarrativeSavableActor, along with any INarrativeSavableComponents the actor has. \n * By default the actors transform will be remembered, along with any UPROPERTY(SaveGame) values on the actor/saved components itself. \n * Also contains logic for grabbing the arguments passed into our game mode's URL so that the main menu can nicely feed the save game to load and we can load it\n * before all actors in the world call BeginPlay(). \n * \n * Supports dynamically spawned actors, and will also handle saving and loading actors that are streamed/unstreamed via world partition. If you need to save an actor, \n * just give it the INarrativeSavableActor interface, and implement the Load function. \n */" },
		{ "IncludePath", "Subsystems/NarrativeSaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "Excellent little subsystem for saving every actor in our world implementing INarrativeSavableActor, along with any INarrativeSavableComponents the actor has.\nBy default the actors transform will be remembered, along with any UPROPERTY(SaveGame) values on the actor/saved components itself.\nAlso contains logic for grabbing the arguments passed into our game mode's URL so that the main menu can nicely feed the save game to load and we can load it\nbefore all actors in the world call BeginPlay().\n\nSupports dynamically spawned actors, and will also handle saving and loading actors that are streamed/unstreamed via world partition. If you need to save an actor,\njust give it the INarrativeSavableActor interface, and implement the Load function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginLoad_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishedLoad_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginSave_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishedSave_MetaData[] = {
		{ "Category", "Delegates" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NarrativeSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveSlot_MetaData[] = {
		{ "Category", "Save Info" },
		{ "Comment", "//The save slot we're currently playing in, whether we've loaded it or just saved to this slot. \n" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "The save slot we're currently playing in, whether we've loaded it or just saved to this slot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveName_MetaData[] = {
		{ "Category", "Save Info" },
		{ "Comment", "//The save name we're currently playing in, whether we've loaded it or just saved to this slot. \n" },
		{ "ModuleRelativePath", "Public/Subsystems/NarrativeSaveSubsystem.h" },
		{ "ToolTip", "The save name we're currently playing in, whether we've loaded it or just saved to this slot." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginSave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NarrativeSaveGame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSaveSlot;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentSaveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_DeferredLoadPlayerData, "DeferredLoadPlayerData" }, // 403623272
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_DeleteSave, "DeleteSave" }, // 1924378914
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_GetSaveObject, "GetSaveObject" }, // 3496242146
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_IsLoading, "IsLoading" }, // 1944396576
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_IsSavingDisabled, "IsSavingDisabled" }, // 3306799048
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_LevelAddedToWorld, "LevelAddedToWorld" }, // 123914903
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_Load, "Load" }, // 3482486588
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_LoadSingleActor, "LoadSingleActor" }, // 3412283760
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_LookupActorByGUID, "LookupActorByGUID" }, // 242321892
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorDestroyed, "OnActorDestroyed" }, // 1670398253
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorPrespawned, "OnActorPrespawned" }, // 88412354
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_OnActorSpawned, "OnActorSpawned" }, // 3035653688
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_PreLevelRemovedFromWorld, "PreLevelRemovedFromWorld" }, // 1440590806
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_RemoveSingleActor, "RemoveSingleActor" }, // 1991569638
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_Save, "Save" }, // 2238286909
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_SaveSingleActor, "SaveSingleActor" }, // 1676857950
		{ &Z_Construct_UFunction_UNarrativeSaveSubsystem_SetSavingDisabled, "SetSavingDisabled" }, // 2844603879
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeSaveSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnBeginLoad = { "OnBeginLoad", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, OnBeginLoad), Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginLoad_MetaData), NewProp_OnBeginLoad_MetaData) }; // 1964482132
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnFinishedLoad = { "OnFinishedLoad", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, OnFinishedLoad), Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishedLoad_MetaData), NewProp_OnFinishedLoad_MetaData) }; // 1964482132
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnBeginSave = { "OnBeginSave", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, OnBeginSave), Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginSave_MetaData), NewProp_OnBeginSave_MetaData) }; // 1964482132
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnFinishedSave = { "OnFinishedSave", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, OnFinishedSave), Z_Construct_UDelegateFunction_NarrativeSaveSystem_OnSavePhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishedSave_MetaData), NewProp_OnFinishedSave_MetaData) }; // 1964482132
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_NarrativeSaveGame = { "NarrativeSaveGame", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, NarrativeSaveGame), Z_Construct_UClass_UNarrativeSave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NarrativeSaveGame_MetaData), NewProp_NarrativeSaveGame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_CurrentSaveSlot = { "CurrentSaveSlot", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, CurrentSaveSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveSlot_MetaData), NewProp_CurrentSaveSlot_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_CurrentSaveName = { "CurrentSaveName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeSaveSubsystem, CurrentSaveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveName_MetaData), NewProp_CurrentSaveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnBeginLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnFinishedLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnBeginSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_OnFinishedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_NarrativeSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_CurrentSaveSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::NewProp_CurrentSaveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeSaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::ClassParams = {
	&UNarrativeSaveSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeSaveSubsystem()
{
	if (!Z_Registration_Info_UClass_UNarrativeSaveSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeSaveSubsystem.OuterSingleton, Z_Construct_UClass_UNarrativeSaveSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeSaveSubsystem.OuterSingleton;
}
template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<UNarrativeSaveSubsystem>()
{
	return UNarrativeSaveSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeSaveSubsystem);
UNarrativeSaveSubsystem::~UNarrativeSaveSubsystem() {}
// End Class UNarrativeSaveSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeSaveSubsystem, UNarrativeSaveSubsystem::StaticClass, TEXT("UNarrativeSaveSubsystem"), &Z_Registration_Info_UClass_UNarrativeSaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeSaveSubsystem), 3573207062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_2005198425(TEXT("/Script/NarrativeSaveSystem"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_Subsystems_NarrativeSaveSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
