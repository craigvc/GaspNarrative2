// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCGoalItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCGoalItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedNPCGoalItem();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FNPCGoalContainer();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedGoalItem();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UNPCGoalItem Function GetCatchupTime
struct Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics
{
	struct NPCGoalItem_eventGetCatchupTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//Return the amount of time that has passed since the goal was supposed to have been started if the goal started late, ie if we began play at 1500 and a scheduled goal for 1200-1700 added the goal late, our catchup time would be 300. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Return the amount of time that has passed since the goal was supposed to have been started if the goal started late, ie if we began play at 1500 and a scheduled goal for 1200-1700 added the goal late, our catchup time would be 300." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalItem_eventGetCatchupTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "GetCatchupTime", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::NPCGoalItem_eventGetCatchupTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::NPCGoalItem_eventGetCatchupTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execGetCatchupTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCatchupTime();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function GetCatchupTime

// Begin Class UNPCGoalItem Function GetDebugString
struct NPCGoalItem_eventGetDebugString_Parms
{
	FString ReturnValue;
};
static const FName NAME_UNPCGoalItem_GetDebugString = FName(TEXT("GetDebugString"));
FString UNPCGoalItem::GetDebugString() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalItem_GetDebugString);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCGoalItem_eventGetDebugString_Parms Parms;
		const_cast<UNPCGoalItem*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNPCGoalItem*>(this)->GetDebugString_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Return a debug string explaining what the goal is \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Return a debug string explaining what the goal is" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalItem_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "GetDebugString", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::PropPointers), sizeof(NPCGoalItem_eventGetDebugString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCGoalItem_eventGetDebugString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalItem_GetDebugString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_GetDebugString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execGetDebugString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebugString_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function GetDebugString

// Begin Class UNPCGoalItem Function GetGoalKey
struct NPCGoalItem_eventGetGoalKey_Parms
{
	UObject* ReturnValue;

	/** Constructor, initializes return property only **/
	NPCGoalItem_eventGetGoalKey_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNPCGoalItem_GetGoalKey = FName(TEXT("GetGoalKey"));
UObject* UNPCGoalItem::GetGoalKey() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalItem_GetGoalKey);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCGoalItem_eventGetGoalKey_Parms Parms;
		const_cast<UNPCGoalItem*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNPCGoalItem*>(this)->GetGoalKey_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Returning a valid object will act as a key - you can access the goal later via this object, and we'll prevent goals with the same key from being added in future \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Returning a valid object will act as a key - you can access the goal later via this object, and we'll prevent goals with the same key from being added in future" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalItem_eventGetGoalKey_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "GetGoalKey", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::PropPointers), sizeof(NPCGoalItem_eventGetGoalKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCGoalItem_eventGetGoalKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalItem_GetGoalKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_GetGoalKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execGetGoalKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetGoalKey_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function GetGoalKey

// Begin Class UNPCGoalItem Function GetGoalScore
struct NPCGoalItem_eventGetGoalScore_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NPCGoalItem_eventGetGoalScore_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNPCGoalItem_GetGoalScore = FName(TEXT("GetGoalScore"));
float UNPCGoalItem::GetGoalScore() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalItem_GetGoalScore);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCGoalItem_eventGetGoalScore_Parms Parms;
		const_cast<UNPCGoalItem*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNPCGoalItem*>(this)->GetGoalScore_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Return a score for the goal - this will be used to grab the best goal to act on for each activity\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Return a score for the goal - this will be used to grab the best goal to act on for each activity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCGoalItem_eventGetGoalScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "GetGoalScore", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::PropPointers), sizeof(NPCGoalItem_eventGetGoalScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCGoalItem_eventGetGoalScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalItem_GetGoalScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_GetGoalScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execGetGoalScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGoalScore_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function GetGoalScore

// Begin Class UNPCGoalItem Function OnLoaded
static const FName NAME_UNPCGoalItem_OnLoaded = FName(TEXT("OnLoaded"));
void UNPCGoalItem::OnLoaded()
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalItem_OnLoaded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnLoaded_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalItem_OnLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Do something after our savegame vars have been loaded - this might mean grabbing an actor using a savegame var etc \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Do something after our savegame vars have been loaded - this might mean grabbing an actor using a savegame var etc" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_OnLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "OnLoaded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_OnLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_OnLoaded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNPCGoalItem_OnLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_OnLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execOnLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoaded_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function OnLoaded

// Begin Class UNPCGoalItem Function PrepareForSave
static const FName NAME_UNPCGoalItem_PrepareForSave = FName(TEXT("PrepareForSave"));
void UNPCGoalItem::PrepareForSave()
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalItem_PrepareForSave);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		PrepareForSave_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalItem_PrepareForSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Prepare the goal for a save - this might for example mean storing an actors GUID so we can find it later when we load \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Prepare the goal for a save - this might for example mean storing an actors GUID so we can find it later when we load" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_PrepareForSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "PrepareForSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_PrepareForSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_PrepareForSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNPCGoalItem_PrepareForSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_PrepareForSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execPrepareForSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareForSave_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function PrepareForSave

// Begin Class UNPCGoalItem Function ShouldCleanup
struct NPCGoalItem_eventShouldCleanup_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NPCGoalItem_eventShouldCleanup_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNPCGoalItem_ShouldCleanup = FName(TEXT("ShouldCleanup"));
bool UNPCGoalItem::ShouldCleanup() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCGoalItem_ShouldCleanup);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCGoalItem_eventShouldCleanup_Parms Parms;
		const_cast<UNPCGoalItem*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNPCGoalItem*>(this)->ShouldCleanup_Implementation();
	}
}
struct Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Goal Item" },
		{ "Comment", "//Return whether the goal has become invalid and should be removed, ie if an AttackGoals target has died. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Return whether the goal has become invalid and should be removed, ie if an AttackGoals target has died." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCGoalItem_eventShouldCleanup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCGoalItem_eventShouldCleanup_Parms), &Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCGoalItem, nullptr, "ShouldCleanup", nullptr, nullptr, Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::PropPointers), sizeof(NPCGoalItem_eventShouldCleanup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCGoalItem_eventShouldCleanup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCGoalItem::execShouldCleanup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldCleanup_Implementation();
	P_NATIVE_END;
}
// End Class UNPCGoalItem Function ShouldCleanup

// Begin Class UNPCGoalItem
void UNPCGoalItem::StaticRegisterNativesUNPCGoalItem()
{
	UClass* Class = UNPCGoalItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCatchupTime", &UNPCGoalItem::execGetCatchupTime },
		{ "GetDebugString", &UNPCGoalItem::execGetDebugString },
		{ "GetGoalKey", &UNPCGoalItem::execGetGoalKey },
		{ "GetGoalScore", &UNPCGoalItem::execGetGoalScore },
		{ "OnLoaded", &UNPCGoalItem::execOnLoaded },
		{ "PrepareForSave", &UNPCGoalItem::execPrepareForSave },
		{ "ShouldCleanup", &UNPCGoalItem::execShouldCleanup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCGoalItem);
UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister()
{
	return UNPCGoalItem::StaticClass();
}
struct Z_Construct_UClass_UNPCGoalItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GoalItems are created inside goals to describe the available items in a goal. For example, an Attack Goal could \n * have a Attack GoalItem containing the target we need to attack, or an Interact goal could contain potential items\n * in the world we can interact with. \n * \n * For more information, please check out the docs: https://docs.narrativetools.io/\n */" },
		{ "IncludePath", "AI/Activities/NPCGoalItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "GoalItems are created inside goals to describe the available items in a goal. For example, an Attack Goal could\nhave a Attack GoalItem containing the target we need to attack, or an Interact goal could contain potential items\nin the world we can interact with.\n\nFor more information, please check out the docs: https://docs.narrativetools.io/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//The NPCController that owns this goal\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The NPCController that owns this goal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalKey_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//This object acts as a key, and can be used to access the goal later - it will also prevent goals with the same GoalKey from being added. \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "This object acts as a key, and can be used to access the goal later - it will also prevent goals with the same GoalKey from being added." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScore_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//The default score this goal will be given if its activity doesn't override the ScoreGoal function \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The default score this goal will be given if its activity doesn't override the ScoreGoal function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveGoal_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//Should the goal and any SaveGame variables on it be saved to disk? \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Should the goal and any SaveGame variables on it be saved to disk?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntendedTODStartTime_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//The Time of day the goal was intended to start at - used for goals that need to \"Catch up\" ie if we enter game at 2200 and NPC is supposed to start sleeping at 2000 we can tele them right into bed rather than making the NPC run to bed. \n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The Time of day the goal was intended to start at - used for goals that need to \"Catch up\" ie if we enter game at 2200 and NPC is supposed to start sleeping at 2000 we can tele them right into bed rather than making the NPC run to bed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalLifetime_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//Goal Expiry time. If less than zero goal will never expire and needs to be removed either by scoring < 0 or manually removed via RemoveGoal()\n" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Goal Expiry time. If less than zero goal will never expire and needs to be removed either by scoring < 0 or manually removed via RemoveGoal()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreationTime_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//Time the goal was created\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Time the goal was created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TODCreationTime_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//The ingame time of day when the goal was created. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The ingame time of day when the goal was created." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultScore;
	static void NewProp_bSaveGoal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveGoal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntendedTODStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GoalLifetime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CreationTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TODCreationTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCGoalItem_GetCatchupTime, "GetCatchupTime" }, // 3056543012
		{ &Z_Construct_UFunction_UNPCGoalItem_GetDebugString, "GetDebugString" }, // 4033015379
		{ &Z_Construct_UFunction_UNPCGoalItem_GetGoalKey, "GetGoalKey" }, // 3711699080
		{ &Z_Construct_UFunction_UNPCGoalItem_GetGoalScore, "GetGoalScore" }, // 2524977050
		{ &Z_Construct_UFunction_UNPCGoalItem_OnLoaded, "OnLoaded" }, // 2517279234
		{ &Z_Construct_UFunction_UNPCGoalItem_PrepareForSave, "PrepareForSave" }, // 3851710274
		{ &Z_Construct_UFunction_UNPCGoalItem_ShouldCleanup, "ShouldCleanup" }, // 3345137015
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCGoalItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, OwnerController), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_GoalKey = { "GoalKey", nullptr, (EPropertyFlags)0x0115000001000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, GoalKey), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalKey_MetaData), NewProp_GoalKey_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_DefaultScore = { "DefaultScore", nullptr, (EPropertyFlags)0x0011000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, DefaultScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScore_MetaData), NewProp_DefaultScore_MetaData) };
void Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_bSaveGoal_SetBit(void* Obj)
{
	((UNPCGoalItem*)Obj)->bSaveGoal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_bSaveGoal = { "bSaveGoal", nullptr, (EPropertyFlags)0x0011000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCGoalItem), &Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_bSaveGoal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveGoal_MetaData), NewProp_bSaveGoal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_IntendedTODStartTime = { "IntendedTODStartTime", nullptr, (EPropertyFlags)0x0011000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, IntendedTODStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntendedTODStartTime_MetaData), NewProp_IntendedTODStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_GoalLifetime = { "GoalLifetime", nullptr, (EPropertyFlags)0x0011000001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, GoalLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalLifetime_MetaData), NewProp_GoalLifetime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_CreationTime = { "CreationTime", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, CreationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreationTime_MetaData), NewProp_CreationTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_TODCreationTime = { "TODCreationTime", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCGoalItem, TODCreationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TODCreationTime_MetaData), NewProp_TODCreationTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCGoalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_GoalKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_DefaultScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_bSaveGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_IntendedTODStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_GoalLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_CreationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCGoalItem_Statics::NewProp_TODCreationTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCGoalItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCGoalItem_Statics::ClassParams = {
	&UNPCGoalItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCGoalItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalItem_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCGoalItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCGoalItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCGoalItem()
{
	if (!Z_Registration_Info_UClass_UNPCGoalItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCGoalItem.OuterSingleton, Z_Construct_UClass_UNPCGoalItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCGoalItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCGoalItem>()
{
	return UNPCGoalItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCGoalItem);
UNPCGoalItem::~UNPCGoalItem() {}
// End Class UNPCGoalItem

// Begin ScriptStruct FSavedGoalItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedGoalItem;
class UScriptStruct* FSavedGoalItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedGoalItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedGoalItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedGoalItem, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedGoalItem"));
	}
	return Z_Registration_Info_UScriptStruct_SavedGoalItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedGoalItem>()
{
	return FSavedGoalItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedGoalItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A saved NPC Activity - which consists of the class and the uint8 data to serialize\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "A saved NPC Activity - which consists of the class and the uint8 data to serialize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Comment", "//Any savegame variables on the goal are stored in here \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Any savegame variables on the goal are stored in here" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedGoalItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedGoalItem, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedGoalItem, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedGoalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedGoalItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedGoalItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedGoalItem",
	Z_Construct_UScriptStruct_FSavedGoalItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedGoalItem_Statics::PropPointers),
	sizeof(FSavedGoalItem),
	alignof(FSavedGoalItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedGoalItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedGoalItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedGoalItem()
{
	if (!Z_Registration_Info_UScriptStruct_SavedGoalItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedGoalItem.InnerSingleton, Z_Construct_UScriptStruct_FSavedGoalItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedGoalItem.InnerSingleton;
}
// End ScriptStruct FSavedGoalItem

// Begin ScriptStruct FInstancedNPCGoalItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem;
class UScriptStruct* FInstancedNPCGoalItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedNPCGoalItem, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("InstancedNPCGoalItem"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FInstancedNPCGoalItem>()
{
	return FInstancedNPCGoalItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Allows blueprints to create instanced goal variables! \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Allows blueprints to create instanced goal variables!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "Goal" },
		{ "Comment", "//The instanced goal\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The instanced goal" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedNPCGoalItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x011600000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstancedNPCGoalItem, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"InstancedNPCGoalItem",
	Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::PropPointers),
	sizeof(FInstancedNPCGoalItem),
	alignof(FInstancedNPCGoalItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstancedNPCGoalItem()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem.InnerSingleton, Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem.InnerSingleton;
}
// End ScriptStruct FInstancedNPCGoalItem

// Begin ScriptStruct FNPCGoalContainer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCGoalContainer;
class UScriptStruct* FNPCGoalContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCGoalContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCGoalContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCGoalContainer, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("NPCGoalContainer"));
	}
	return Z_Registration_Info_UScriptStruct_NPCGoalContainer.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FNPCGoalContainer>()
{
	return FNPCGoalContainer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNPCGoalContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Holds a set of goals\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "Holds a set of goals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//The goals in the set \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The goals in the set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalUniqueObjectMap_MetaData[] = {
		{ "Category", "NPC Goal" },
		{ "Comment", "//The goals, but mapped via their unique object \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCGoalItem.h" },
		{ "ToolTip", "The goals, but mapped via their unique object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Goals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalUniqueObjectMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalUniqueObjectMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GoalUniqueObjectMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCGoalContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCGoalContainer, Goals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goals_MetaData), NewProp_Goals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_GoalUniqueObjectMap_ValueProp = { "GoalUniqueObjectMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_GoalUniqueObjectMap_Key_KeyProp = { "GoalUniqueObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_GoalUniqueObjectMap = { "GoalUniqueObjectMap", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCGoalContainer, GoalUniqueObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalUniqueObjectMap_MetaData), NewProp_GoalUniqueObjectMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_Goals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_Goals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_GoalUniqueObjectMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_GoalUniqueObjectMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewProp_GoalUniqueObjectMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"NPCGoalContainer",
	Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::PropPointers),
	sizeof(FNPCGoalContainer),
	alignof(FNPCGoalContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNPCGoalContainer()
{
	if (!Z_Registration_Info_UScriptStruct_NPCGoalContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCGoalContainer.InnerSingleton, Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NPCGoalContainer.InnerSingleton;
}
// End ScriptStruct FNPCGoalContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavedGoalItem::StaticStruct, Z_Construct_UScriptStruct_FSavedGoalItem_Statics::NewStructOps, TEXT("SavedGoalItem"), &Z_Registration_Info_UScriptStruct_SavedGoalItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedGoalItem), 1643136817U) },
		{ FInstancedNPCGoalItem::StaticStruct, Z_Construct_UScriptStruct_FInstancedNPCGoalItem_Statics::NewStructOps, TEXT("InstancedNPCGoalItem"), &Z_Registration_Info_UScriptStruct_InstancedNPCGoalItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedNPCGoalItem), 4083473098U) },
		{ FNPCGoalContainer::StaticStruct, Z_Construct_UScriptStruct_FNPCGoalContainer_Statics::NewStructOps, TEXT("NPCGoalContainer"), &Z_Registration_Info_UScriptStruct_NPCGoalContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCGoalContainer), 401033925U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCGoalItem, UNPCGoalItem::StaticClass, TEXT("UNPCGoalItem"), &Z_Registration_Info_UClass_UNPCGoalItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCGoalItem), 2268916848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_3286203225(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCGoalItem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
