// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NPCActivity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCActivity() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActivityBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivity_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCActivityComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNPCGoalItem_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedNPCActivity();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSavedNPCActivity
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedNPCActivity;
class UScriptStruct* FSavedNPCActivity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedNPCActivity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedNPCActivity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedNPCActivity, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedNPCActivity"));
	}
	return Z_Registration_Info_UScriptStruct_SavedNPCActivity.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedNPCActivity>()
{
	return FSavedNPCActivity::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedNPCActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//A saved NPC Activity - which consists of the class and the uint8 data to serialize\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "A saved NPC Activity - which consists of the class and the uint8 data to serialize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedNPCActivity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedNPCActivity, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCActivity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedNPCActivity, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedNPCActivity",
	Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::PropPointers),
	sizeof(FSavedNPCActivity),
	alignof(FSavedNPCActivity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedNPCActivity()
{
	if (!Z_Registration_Info_UScriptStruct_SavedNPCActivity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedNPCActivity.InnerSingleton, Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedNPCActivity.InnerSingleton;
}
// End ScriptStruct FSavedNPCActivity

// Begin Class UNPCActivity Function IsInterruptable
struct Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics
{
	struct NPCActivity_eventIsInterruptable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Activity" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCActivity_eventIsInterruptable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCActivity_eventIsInterruptable_Parms), &Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivity, nullptr, "IsInterruptable", nullptr, nullptr, Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::NPCActivity_eventIsInterruptable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::NPCActivity_eventIsInterruptable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivity_IsInterruptable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivity_IsInterruptable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivity::execIsInterruptable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInterruptable();
	P_NATIVE_END;
}
// End Class UNPCActivity Function IsInterruptable

// Begin Class UNPCActivity Function RemoveActivityGoal
struct Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Activity" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivity, nullptr, "RemoveActivityGoal", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivity::execRemoveActivityGoal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveActivityGoal();
	P_NATIVE_END;
}
// End Class UNPCActivity Function RemoveActivityGoal

// Begin Class UNPCActivity Function ScoreGoalItem
struct NPCActivity_eventScoreGoalItem_Parms
{
	const UNPCGoalItem* Goal;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NPCActivity_eventScoreGoalItem_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNPCActivity_ScoreGoalItem = FName(TEXT("ScoreGoalItem"));
float UNPCActivity::ScoreGoalItem(const UNPCGoalItem* Goal) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCActivity_ScoreGoalItem);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCActivity_eventScoreGoalItem_Parms Parms;
		Parms.Goal=Goal;
		const_cast<UNPCActivity*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNPCActivity*>(this)->ScoreGoalItem_Implementation(Goal);
	}
}
struct Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Override this if you want to ignore Goal.GetScore() and provide a custom score. IE you may want a SitOnCouch goal \n\x09to score higher if the owner has low stamina, but lower or zero if we have enough stamina. */" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "Override this if you want to ignore Goal.GetScore() and provide a custom score. IE you may want a SitOnCouch goal\n       to score higher if the owner has low stamina, but lower or zero if we have enough stamina." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivity_eventScoreGoalItem_Parms, Goal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivity_eventScoreGoalItem_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivity, nullptr, "ScoreGoalItem", nullptr, nullptr, Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::PropPointers), sizeof(NPCActivity_eventScoreGoalItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCActivity_eventScoreGoalItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivity_ScoreGoalItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivity_ScoreGoalItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivity::execScoreGoalItem)
{
	P_GET_OBJECT(UNPCGoalItem,Z_Param_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ScoreGoalItem_Implementation(Z_Param_Goal);
	P_NATIVE_END;
}
// End Class UNPCActivity Function ScoreGoalItem

// Begin Class UNPCActivity Function SetupBlackboard
struct NPCActivity_eventSetupBlackboard_Parms
{
	UBlackboardComponent* BB;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NPCActivity_eventSetupBlackboard_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNPCActivity_SetupBlackboard = FName(TEXT("SetupBlackboard"));
bool UNPCActivity::SetupBlackboard(UBlackboardComponent* BB)
{
	UFunction* Func = FindFunctionChecked(NAME_UNPCActivity_SetupBlackboard);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NPCActivity_eventSetupBlackboard_Parms Parms;
		Parms.BB=BB;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return SetupBlackboard_Implementation(BB);
	}
}
struct Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**Once the activity starts, this will be called to try and set up the blackboard. You can return false\n\x09if the blackboard wasn't able to be setup and RunActivity will then return false to let the call know it failed. */" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "Once the activity starts, this will be called to try and set up the blackboard. You can return false\n       if the blackboard wasn't able to be setup and RunActivity will then return false to let the call know it failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BB_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BB;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_BB = { "BB", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NPCActivity_eventSetupBlackboard_Parms, BB), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BB_MetaData), NewProp_BB_MetaData) };
void Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NPCActivity_eventSetupBlackboard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NPCActivity_eventSetupBlackboard_Parms), &Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_BB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCActivity, nullptr, "SetupBlackboard", nullptr, nullptr, Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::PropPointers), sizeof(NPCActivity_eventSetupBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(NPCActivity_eventSetupBlackboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNPCActivity_SetupBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCActivity_SetupBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNPCActivity::execSetupBlackboard)
{
	P_GET_OBJECT(UBlackboardComponent,Z_Param_BB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetupBlackboard_Implementation(Z_Param_BB);
	P_NATIVE_END;
}
// End Class UNPCActivity Function SetupBlackboard

// Begin Class UNPCActivity
void UNPCActivity::StaticRegisterNativesUNPCActivity()
{
	UClass* Class = UNPCActivity::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsInterruptable", &UNPCActivity::execIsInterruptable },
		{ "RemoveActivityGoal", &UNPCActivity::execRemoveActivityGoal },
		{ "ScoreGoalItem", &UNPCActivity::execScoreGoalItem },
		{ "SetupBlackboard", &UNPCActivity::execSetupBlackboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCActivity);
UClass* Z_Construct_UClass_UNPCActivity_NoRegister()
{
	return UNPCActivity::StaticClass();
}
struct Z_Construct_UClass_UNPCActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * NPC Activities essentially wrap a Behaviour tree, and stores the default variables the tree uses. The current activity lives on\n * the NPCs NPCActivityComponent, and can serialize its state to disk. That way when we load back in our behavior is remembered if we desire this. \n */" },
		{ "IncludePath", "AI/Activities/NPCActivity.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "NPC Activities essentially wrap a Behaviour tree, and stores the default variables the tree uses. The current activity lives on\nthe NPCs NPCActivityComponent, and can serialize its state to disk. That way when we load back in our behavior is remembered if we desire this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//We cache the AI controller \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "We cache the AI controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActivityComponent_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityGoal_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The goal this activity is operating on - for example AttackGoal for AttackActivity, etc. This can null if your activity doesn't need a goal \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "The goal this activity is operating on - for example AttackGoal for AttackActivity, etc. This can null if your activity doesn't need a goal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourTree_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The behaviour tree the NPC needs to run\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "The behaviour tree the NPC needs to run" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportedGoalType_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//The goal class this activity supports, if it supports one. You can leave this empty if your activity doesn't need a goal, eg Idle, etc. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "The goal class this activity supports, if it supports one. You can leave this empty if your activity doesn't need a goal, eg Idle, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInterruptable_MetaData[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//Whether we're allowed to interrupt this activity or not \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NPCActivity.h" },
		{ "ToolTip", "Whether we're allowed to interrupt this activity or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerActivityComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivityGoal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourTree;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedGoalType;
	static void NewProp_bIsInterruptable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInterruptable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCActivity_IsInterruptable, "IsInterruptable" }, // 2262048722
		{ &Z_Construct_UFunction_UNPCActivity_RemoveActivityGoal, "RemoveActivityGoal" }, // 1167175589
		{ &Z_Construct_UFunction_UNPCActivity_ScoreGoalItem, "ScoreGoalItem" }, // 3311046090
		{ &Z_Construct_UFunction_UNPCActivity_SetupBlackboard, "SetupBlackboard" }, // 551097438
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCActivity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, OwnerController), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerController_MetaData), NewProp_OwnerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_OwnerActivityComponent = { "OwnerActivityComponent", nullptr, (EPropertyFlags)0x012408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, OwnerActivityComponent), Z_Construct_UClass_UNPCActivityComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerActivityComponent_MetaData), NewProp_OwnerActivityComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityGoal = { "ActivityGoal", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, ActivityGoal), Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityGoal_MetaData), NewProp_ActivityGoal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_BehaviourTree = { "BehaviourTree", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, BehaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourTree_MetaData), NewProp_BehaviourTree_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_SupportedGoalType = { "SupportedGoalType", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCActivity, SupportedGoalType), Z_Construct_UClass_UClass, Z_Construct_UClass_UNPCGoalItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportedGoalType_MetaData), NewProp_SupportedGoalType_MetaData) };
void Z_Construct_UClass_UNPCActivity_Statics::NewProp_bIsInterruptable_SetBit(void* Obj)
{
	((UNPCActivity*)Obj)->bIsInterruptable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNPCActivity_Statics::NewProp_bIsInterruptable = { "bIsInterruptable", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNPCActivity), &Z_Construct_UClass_UNPCActivity_Statics::NewProp_bIsInterruptable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInterruptable_MetaData), NewProp_bIsInterruptable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_OwnerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_OwnerActivityComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_ActivityGoal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_BehaviourTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_SupportedGoalType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCActivity_Statics::NewProp_bIsInterruptable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNPCActivity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeActivityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCActivity_Statics::ClassParams = {
	&UNPCActivity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNPCActivity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCActivity_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCActivity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNPCActivity()
{
	if (!Z_Registration_Info_UClass_UNPCActivity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCActivity.OuterSingleton, Z_Construct_UClass_UNPCActivity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNPCActivity.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNPCActivity>()
{
	return UNPCActivity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCActivity);
UNPCActivity::~UNPCActivity() {}
// End Class UNPCActivity

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivity_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavedNPCActivity::StaticStruct, Z_Construct_UScriptStruct_FSavedNPCActivity_Statics::NewStructOps, TEXT("SavedNPCActivity"), &Z_Registration_Info_UScriptStruct_SavedNPCActivity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedNPCActivity), 1787664098U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNPCActivity, UNPCActivity::StaticClass, TEXT("UNPCActivity"), &Z_Registration_Info_UClass_UNPCActivity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCActivity), 2589874206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivity_h_455249325(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivity_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NPCActivity_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
