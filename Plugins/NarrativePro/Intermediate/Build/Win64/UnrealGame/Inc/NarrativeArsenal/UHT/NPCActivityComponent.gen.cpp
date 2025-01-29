// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCActivityComponent.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCGoalItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCActivityComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UActivityGroup_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityConfiguration_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivitySchedule_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalGenerator_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UScheduledBehavior_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCGoalContainer();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedGoalItem();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCActivityComponent Function AddGoal
struct Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics
{
	struct NPCActivityComponent_eventAddGoal_Parms
	{
		UNPCGoalItem* NewGoal;
		bool bTriggerReselect;
		UNPCGoalItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Goals" },
		{ "Comment", "/*Add the given goal to the goal map using its goaltag.Return a handle to the created goal\n\x09\n\x09@param bTriggerReselect whether you want to ask the activity component to reselect its behavior after adding this goal. \n\x09*/" },
		{ "CPP_Default_bTriggerReselect", "false" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Add the given goal to the goal map using its goaltag.Return a handle to the created goal\n\n       @param bTriggerReselect whether you want to ask the activity component to reselect its behavior after adding this goal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerReselect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGoal;
	static void NewProp_bTriggerReselect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerReselect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_NewGoal = { "NewGoal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventAddGoal_Parms, NewGoal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_bTriggerReselect_SetBit(void* Obj)
{
	((NPCActivityComponent_eventAddGoal_Parms*)Obj)->bTriggerReselect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_bTriggerReselect = { "bTriggerReselect", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCActivityComponent_eventAddGoal_Parms), &Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_bTriggerReselect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggerReselect_MetaData), NewProp_bTriggerReselect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventAddGoal_Parms, ReturnValue), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_NewGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_bTriggerReselect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "AddGoal", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NPCActivityComponent_eventAddGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::NPCActivityComponent_eventAddGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_AddGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_AddGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execAddGoal)
{
	P_GET_OBJECT(UNPCGoalItem,Z_Param_NewGoal);
	P_GET_UBOOL(Z_Param_bTriggerReselect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCGoalItem**)Z_Param__Result=P_THIS->AddGoal(Z_Param_NewGoal,Z_Param_bTriggerReselect);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function AddGoal

// Begin Class UNPCActivityComponent Function GetCurrentActivity
struct Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics
{
	struct NPCActivityComponent_eventGetCurrentActivity_Parms
	{
		UNPCActivity* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//get our current activity\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "get our current activity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetCurrentActivity_Parms, ReturnValue), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "GetCurrentActivity", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::NPCActivityComponent_eventGetCurrentActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::NPCActivityComponent_eventGetCurrentActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execGetCurrentActivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCActivity**)Z_Param__Result=P_THIS->GetCurrentActivity();
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function GetCurrentActivity

// Begin Class UNPCActivityComponent Function GetCurrentActivityGoal
struct Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics
{
	struct NPCActivityComponent_eventGetCurrentActivityGoal_Parms
	{
		UNPCGoalItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//get our current activities goal \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "get our current activities goal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetCurrentActivityGoal_Parms, ReturnValue), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "GetCurrentActivityGoal", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::NPCActivityComponent_eventGetCurrentActivityGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::NPCActivityComponent_eventGetCurrentActivityGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execGetCurrentActivityGoal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCGoalItem**)Z_Param__Result=P_THIS->GetCurrentActivityGoal();
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function GetCurrentActivityGoal

// Begin Class UNPCActivityComponent Function GetGoalByKey
struct Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics
{
	struct NPCActivityComponent_eventGetGoalByKey_Parms
	{
		const TSubclassOf<UNPCGoalItem> GoalType;
		const UObject* Key;
		UNPCGoalItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Goals" },
		{ "Comment", "//Grab a goal via its key \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Grab a goal via its key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoalType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NewProp_GoalType = { "GoalType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetGoalByKey_Parms, GoalType), Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalType_MetaData), NewProp_GoalType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetGoalByKey_Parms, Key), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetGoalByKey_Parms, ReturnValue), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NewProp_GoalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "GetGoalByKey", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NPCActivityComponent_eventGetGoalByKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::NPCActivityComponent_eventGetGoalByKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execGetGoalByKey)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UNPCGoalItem>,Z_Param_Out_GoalType);
	P_GET_OBJECT(UObject,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNPCGoalItem**)Z_Param__Result=P_THIS->GetGoalByKey(Z_Param_Out_GoalType,Z_Param_Key);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function GetGoalByKey

// Begin Class UNPCActivityComponent Function GetGoals
struct Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics
{
	struct NPCActivityComponent_eventGetGoals_Parms
	{
		const TSubclassOf<UNPCGoalItem> GoalType;
		FNPCGoalContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Goals" },
		{ "Comment", "//Grab all created goals of the given type\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Grab all created goals of the given type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GoalType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::NewProp_GoalType = { "GoalType", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetGoals_Parms, GoalType), Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalType_MetaData), NewProp_GoalType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventGetGoals_Parms, ReturnValue), Z_Construct_UScriptStruct_FNPCGoalContainer, METADATA_PARAMS(0, nullptr) }; // 401033925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::NewProp_GoalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "GetGoals", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::NPCActivityComponent_eventGetGoals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::NPCActivityComponent_eventGetGoals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_GetGoals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_GetGoals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execGetGoals)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UNPCGoalItem>,Z_Param_Out_GoalType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FNPCGoalContainer*)Z_Param__Result=P_THIS->GetGoals(Z_Param_Out_GoalType);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function GetGoals

// Begin Class UNPCActivityComponent Function PerformActivitySelection
struct Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics
{
	struct NPCActivityComponent_eventPerformActivitySelection_Parms
	{
		bool bCheckNew;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "/*Scores our activities, and selects the best one, along with the best goal for that activity. \n\x09@param bCheckNew will potentially end CurrentActivity if a better one is found, otherwise if a valid current activity is running\n\x09that will be kept instead.\n\x09\n\x09@return whether a new activity was selected or not \n\x09*/" },
		{ "CPP_Default_bCheckNew", "false" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Scores our activities, and selects the best one, along with the best goal for that activity.\n       @param bCheckNew will potentially end CurrentActivity if a better one is found, otherwise if a valid current activity is running\n       that will be kept instead.\n\n       @return whether a new activity was selected or not" },
	};
#endif // WITH_METADATA
	static void NewProp_bCheckNew_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckNew;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_bCheckNew_SetBit(void* Obj)
{
	((NPCActivityComponent_eventPerformActivitySelection_Parms*)Obj)->bCheckNew = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_bCheckNew = { "bCheckNew", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCActivityComponent_eventPerformActivitySelection_Parms), &Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_bCheckNew_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCActivityComponent_eventPerformActivitySelection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCActivityComponent_eventPerformActivitySelection_Parms), &Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_bCheckNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "PerformActivitySelection", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NPCActivityComponent_eventPerformActivitySelection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::NPCActivityComponent_eventPerformActivitySelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execPerformActivitySelection)
{
	P_GET_UBOOL(Z_Param_bCheckNew);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PerformActivitySelection(Z_Param_bCheckNew);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function PerformActivitySelection

// Begin Class UNPCActivityComponent Function RemoveGoal
struct Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics
{
	struct NPCActivityComponent_eventRemoveGoal_Parms
	{
		UNPCGoalItem* GoalToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Goals" },
		{ "Comment", "//Remove the goal with the given handle \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Remove the goal with the given handle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::NewProp_GoalToRemove = { "GoalToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventRemoveGoal_Parms, GoalToRemove), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::NewProp_GoalToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "RemoveGoal", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::NPCActivityComponent_eventRemoveGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::NPCActivityComponent_eventRemoveGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execRemoveGoal)
{
	P_GET_OBJECT(UNPCGoalItem,Z_Param_GoalToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGoal(Z_Param_GoalToRemove);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function RemoveGoal

// Begin Class UNPCActivityComponent Function RunActivity
struct Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics
{
	struct NPCActivityComponent_eventRunActivity_Parms
	{
		UNPCActivity* ActivityTemplate;
		UNPCGoalItem* Goal;
		FString FailReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "/** Start the given activity, and pass the goal to it. Goal can be nullptr  */" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Start the given activity, and pass the goal to it. Goal can be nullptr" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_ActivityTemplate = { "ActivityTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventRunActivity_Parms, ActivityTemplate), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventRunActivity_Parms, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventRunActivity_Parms, FailReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCActivityComponent_eventRunActivity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCActivityComponent_eventRunActivity_Parms), &Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_ActivityTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_FailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "RunActivity", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NPCActivityComponent_eventRunActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::NPCActivityComponent_eventRunActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_RunActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_RunActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execRunActivity)
{
	P_GET_OBJECT(UNPCActivity,Z_Param_ActivityTemplate);
	P_GET_OBJECT(UNPCGoalItem,Z_Param_Goal);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RunActivity(Z_Param_ActivityTemplate,Z_Param_Goal,Z_Param_Out_FailReason);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function RunActivity

// Begin Class UNPCActivityComponent Function SetActivityConfiguration
struct Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics
{
	struct NPCActivityComponent_eventSetActivityConfiguration_Parms
	{
		UNPCActivityConfiguration* Config;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Set our activity config\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Set our activity config" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventSetActivityConfiguration_Parms, Config), Z_Construct_UClass_UNPCActivityConfiguration_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "SetActivityConfiguration", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::NPCActivityComponent_eventSetActivityConfiguration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::NPCActivityComponent_eventSetActivityConfiguration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execSetActivityConfiguration)
{
	P_GET_OBJECT(UNPCActivityConfiguration,Z_Param_Config);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActivityConfiguration(Z_Param_Config);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function SetActivityConfiguration

// Begin Class UNPCActivityComponent Function SetActivitySchedule
struct Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics
{
	struct NPCActivityComponent_eventSetActivitySchedule_Parms
	{
		UNPCActivitySchedule* Schedule;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Set our activity schedule\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Set our activity schedule" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Schedule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::NewProp_Schedule = { "Schedule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivityComponent_eventSetActivitySchedule_Parms, Schedule), Z_Construct_UClass_UNPCActivitySchedule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::NewProp_Schedule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "SetActivitySchedule", nullptr, nullptr, Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::NPCActivityComponent_eventSetActivitySchedule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::NPCActivityComponent_eventSetActivitySchedule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execSetActivitySchedule)
{
	P_GET_OBJECT(UNPCActivitySchedule,Z_Param_Schedule);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActivitySchedule(Z_Param_Schedule);
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function SetActivitySchedule

// Begin Class UNPCActivityComponent Function StopCurrentActivity
struct Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Stop the currently running activity\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Stop the currently running activity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivityComponent, nullptr, "StopCurrentActivity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivityComponent::execStopCurrentActivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCurrentActivity();
	P_NATIVE_END;
}
// End Class UNPCActivityComponent Function StopCurrentActivity

// Begin Class UNPCActivityComponent
void UNPCActivityComponent::StaticRegisterNativesUNPCActivityComponent()
{
	UClass* Class = UNPCActivityComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGoal", &UNPCActivityComponent::execAddGoal },
		{ "GetCurrentActivity", &UNPCActivityComponent::execGetCurrentActivity },
		{ "GetCurrentActivityGoal", &UNPCActivityComponent::execGetCurrentActivityGoal },
		{ "GetGoalByKey", &UNPCActivityComponent::execGetGoalByKey },
		{ "GetGoals", &UNPCActivityComponent::execGetGoals },
		{ "PerformActivitySelection", &UNPCActivityComponent::execPerformActivitySelection },
		{ "RemoveGoal", &UNPCActivityComponent::execRemoveGoal },
		{ "RunActivity", &UNPCActivityComponent::execRunActivity },
		{ "SetActivityConfiguration", &UNPCActivityComponent::execSetActivityConfiguration },
		{ "SetActivitySchedule", &UNPCActivityComponent::execSetActivitySchedule },
		{ "StopCurrentActivity", &UNPCActivityComponent::execStopCurrentActivity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCActivityComponent);
UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister()
{
	return UNPCActivityComponent::StaticClass();
}
struct Z_Construct_UClass_UNPCActivityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**Lives on the NPCCharacter and allows us to run NPC activities. For more info on NPC Actitites see the comment above UNPCActivity.  */" },
		{ "IncludePath", "AI/Activities/NPCActivityComponent.h" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Lives on the NPCCharacter and allows us to run NPC activities. For more info on NPC Actitites see the comment above UNPCActivity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Our controller, cached\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Our controller, cached" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackActivity_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The fallback activity to use if we cant find one to run based on our goals. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "The fallback activity to use if we cant find one to run based on our goals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivitySchedule_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Our scheduled activities go in here. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Our scheduled activities go in here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityConfiguration_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//Our activity configuration goes in here\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Our activity configuration goes in here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityGroups_Inner_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The activities the NPC can run. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "The activities the NPC can run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityGroups_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//The activities the NPC can run. \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "The activities the NPC can run." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalGenerators_Inner_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Our goal generators we'll use to create goals - goals can also be explicitly added \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Our goal generators we'll use to create goals - goals can also be explicitly added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalGenerators_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Our goal generators we'll use to create goals - goals can also be explicitly added \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Our goal generators we'll use to create goals - goals can also be explicitly added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[] = {
		{ "Category", "Activity Group" },
		{ "Comment", "//Our goals we currently have - we use a map to allow quick access to goals by their class \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "Our goals we currently have - we use a map to allow quick access to goals by their class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveScheduledActivites_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedGoals_MetaData[] = {
		{ "Comment", "//We now store these on NPCCharacter as a workaround as this component lives on AIC which isn't a savable actor - NPCChar is however\n///**Some goals need to be serialized to disk, for example if our player asks an NPC to follow them, the NPC needs to\n//remember that the player told them that when our game loads back in. */\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "We now store these on NPCCharacter as a workaround as this component lives on AIC which isn't a savable actor - NPCChar is however\nSome goals need to be serialized to disk, for example if our player asks an NPC to follow them, the NPC needs to\nremember that the player told them that when our game loads back in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActivity_MetaData[] = {
		{ "Category", "Activities" },
		{ "Comment", "//The activity we're currently running\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivityComponent.h" },
		{ "ToolTip", "The activity we're currently running" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallbackActivity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivitySchedule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityConfiguration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivityGroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalGenerators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GoalGenerators;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Goals_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Goals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Goals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveScheduledActivites_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveScheduledActivites;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGoals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedGoals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActivity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCActivityComponent_AddGoal, "AddGoal" }, // 1719722992
		{ &Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivity, "GetCurrentActivity" }, // 2392667343
		{ &Z_Construct_UFunction_UNPCActivityComponent_GetCurrentActivityGoal, "GetCurrentActivityGoal" }, // 3111960551
		{ &Z_Construct_UFunction_UNPCActivityComponent_GetGoalByKey, "GetGoalByKey" }, // 4179464027
		{ &Z_Construct_UFunction_UNPCActivityComponent_GetGoals, "GetGoals" }, // 709859675
		{ &Z_Construct_UFunction_UNPCActivityComponent_PerformActivitySelection, "PerformActivitySelection" }, // 2957101492
		{ &Z_Construct_UFunction_UNPCActivityComponent_RemoveGoal, "RemoveGoal" }, // 460230327
		{ &Z_Construct_UFunction_UNPCActivityComponent_RunActivity, "RunActivity" }, // 4148311554
		{ &Z_Construct_UFunction_UNPCActivityComponent_SetActivityConfiguration, "SetActivityConfiguration" }, // 2821689118
		{ &Z_Construct_UFunction_UNPCActivityComponent_SetActivitySchedule, "SetActivitySchedule" }, // 2086535211
		{ &Z_Construct_UFunction_UNPCActivityComponent_StopCurrentActivity, "StopCurrentActivity" }, // 3329542873
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCActivityComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, OwnerController), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_FallbackActivity = { "FallbackActivity", nullptr, (EPropertyFlags)0x012608000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, FallbackActivity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackActivity_MetaData), NewProp_FallbackActivity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivitySchedule = { "ActivitySchedule", nullptr, (EPropertyFlags)0x0124080001010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, ActivitySchedule), Z_Construct_UClass_UNPCActivitySchedule_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivitySchedule_MetaData), NewProp_ActivitySchedule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivityConfiguration = { "ActivityConfiguration", nullptr, (EPropertyFlags)0x0124080001010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, ActivityConfiguration), Z_Construct_UClass_UNPCActivityConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityConfiguration_MetaData), NewProp_ActivityConfiguration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivityGroups_Inner = { "ActivityGroups", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActivityGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityGroups_Inner_MetaData), NewProp_ActivityGroups_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivityGroups = { "ActivityGroups", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, ActivityGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityGroups_MetaData), NewProp_ActivityGroups_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_GoalGenerators_Inner = { "GoalGenerators", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCGoalGenerator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalGenerators_Inner_MetaData), NewProp_GoalGenerators_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_GoalGenerators = { "GoalGenerators", nullptr, (EPropertyFlags)0x012408800001001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, GoalGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalGenerators_MetaData), NewProp_GoalGenerators_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_Goals_ValueProp = { "Goals", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FNPCGoalContainer, METADATA_PARAMS(0, nullptr) }; // 401033925
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_Goals_Key_KeyProp = { "Goals_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, Goals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goals_MetaData), NewProp_Goals_MetaData) }; // 401033925
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActiveScheduledActivites_Inner = { "ActiveScheduledActivites", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UScheduledBehavior_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActiveScheduledActivites = { "ActiveScheduledActivites", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, ActiveScheduledActivites), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveScheduledActivites_MetaData), NewProp_ActiveScheduledActivites_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_SavedGoals_Inner = { "SavedGoals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedGoalItem, METADATA_PARAMS(0, nullptr) }; // 1643136817
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_SavedGoals = { "SavedGoals", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, SavedGoals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedGoals_MetaData), NewProp_SavedGoals_MetaData) }; // 1643136817
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_CurrentActivity = { "CurrentActivity", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivityComponent, CurrentActivity), Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActivity_MetaData), NewProp_CurrentActivity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCActivityComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_FallbackActivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivitySchedule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivityConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivityGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActivityGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_GoalGenerators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_GoalGenerators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_Goals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_Goals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_Goals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActiveScheduledActivites_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_ActiveScheduledActivites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_SavedGoals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_SavedGoals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivityComponent_Statics::NewProp_CurrentActivity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCActivityComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNPCActivityComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNPCActivityComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCActivityComponent_Statics::ClassParams = {
	&UNPCActivityComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCActivityComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivityComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCActivityComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCActivityComponent()
{
	if (!Z_Registration_Info_UClass_UNPCActivityComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCActivityComponent.OuterSingleton, Z_Construct_UClass_UNPCActivityComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCActivityComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCActivityComponent>()
{
	return UNPCActivityComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCActivityComponent);
UNPCActivityComponent::~UNPCActivityComponent() {}
// End Class UNPCActivityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCActivityComponent, UNPCActivityComponent::StaticClass, TEXT("UNPCActivityComponent"), &Z_Registration_Info_UClass_UNPCActivityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCActivityComponent), 2075811836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_3506132102(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivityComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
