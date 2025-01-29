// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/AI/Activities/NarrativeActivityBase.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeActivityBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActivityBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeActivityBase_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FActivityExecutionContext();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FActivityExecutionContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActivityExecutionContext;
class UScriptStruct* FActivityExecutionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActivityExecutionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActivityExecutionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActivityExecutionContext, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ActivityExecutionContext"));
	}
	return Z_Registration_Info_UScriptStruct_ActivityExecutionContext.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FActivityExecutionContext>()
{
	return FActivityExecutionContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActivityExecutionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Because activities can be executed from many different sources, we pass a child of this struct along as context when we run an activity so we know why the activity is being ran, what thing is trying to run the activity, etc. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Because activities can be executed from many different sources, we pass a child of this struct along as context when we run an activity so we know why the activity is being ran, what thing is trying to run the activity, etc." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActivityExecutionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActivityExecutionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"ActivityExecutionContext",
	nullptr,
	0,
	sizeof(FActivityExecutionContext),
	alignof(FActivityExecutionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityExecutionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActivityExecutionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActivityExecutionContext()
{
	if (!Z_Registration_Info_UScriptStruct_ActivityExecutionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActivityExecutionContext.InnerSingleton, Z_Construct_UScriptStruct_FActivityExecutionContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActivityExecutionContext.InnerSingleton;
}
// End ScriptStruct FActivityExecutionContext

// Begin ScriptStruct FActivityExecutionContext_Scheduled
static_assert(std::is_polymorphic<FActivityExecutionContext_Scheduled>() == std::is_polymorphic<FActivityExecutionContext>(), "USTRUCT FActivityExecutionContext_Scheduled cannot be polymorphic unless super FActivityExecutionContext is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled;
class UScriptStruct* FActivityExecutionContext_Scheduled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("ActivityExecutionContext_Scheduled"));
	}
	return Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FActivityExecutionContext_Scheduled>()
{
	return FActivityExecutionContext_Scheduled::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Context for an NPCs schedule running the activity \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Context for an NPCs schedule running the activity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//When the activity starts and ends \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "When the activity starts and ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeAtStart_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//When the activity ends \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "When the activity ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartedFromAdvanceTime_MetaData[] = {
		{ "Category", "Scheduled Activity" },
		{ "Comment", "//Whether the activity was started from advance time\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Whether the activity was started from advance time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeAtStart;
	static void NewProp_bStartedFromAdvanceTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedFromAdvanceTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActivityExecutionContext_Scheduled>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActivityExecutionContext_Scheduled, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_TimeAtStart = { "TimeAtStart", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActivityExecutionContext_Scheduled, TimeAtStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeAtStart_MetaData), NewProp_TimeAtStart_MetaData) };
void Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_bStartedFromAdvanceTime_SetBit(void* Obj)
{
	((FActivityExecutionContext_Scheduled*)Obj)->bStartedFromAdvanceTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_bStartedFromAdvanceTime = { "bStartedFromAdvanceTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActivityExecutionContext_Scheduled), &Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_bStartedFromAdvanceTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartedFromAdvanceTime_MetaData), NewProp_bStartedFromAdvanceTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_TimeAtStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewProp_bStartedFromAdvanceTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	Z_Construct_UScriptStruct_FActivityExecutionContext,
	&NewStructOps,
	"ActivityExecutionContext_Scheduled",
	Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::PropPointers),
	sizeof(FActivityExecutionContext_Scheduled),
	alignof(FActivityExecutionContext_Scheduled),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled()
{
	if (!Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled.InnerSingleton, Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled.InnerSingleton;
}
// End ScriptStruct FActivityExecutionContext_Scheduled

// Begin Class UNarrativeActivityBase Function CanRunActivity
struct NarrativeActivityBase_eventCanRunActivity_Parms
{
	FString FailReason;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeActivityBase_eventCanRunActivity_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UNarrativeActivityBase_CanRunActivity = FName(TEXT("CanRunActivity"));
bool UNarrativeActivityBase::CanRunActivity(FString& FailReason) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeActivityBase_CanRunActivity);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeActivityBase_eventCanRunActivity_Parms Parms;
		Parms.FailReason=FailReason;
		const_cast<UNarrativeActivityBase*>(this)->ProcessEvent(Func,&Parms);
		FailReason=Parms.FailReason;
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeActivityBase*>(this)->CanRunActivity_Implementation(FailReason);
	}
}
struct Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "/**Allows the behavior to specify whether it can be ran. For example we may have a MoveToLocation activity - that would want to check\n\x09the NPC is not falling using this function and deny the activity to run if we were falling. */" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Allows the behavior to specify whether it can be ran. For example we may have a MoveToLocation activity - that would want to check\n       the NPC is not falling using this function and deny the activity to run if we were falling." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivityBase_eventCanRunActivity_Parms, FailReason), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeActivityBase_eventCanRunActivity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeActivityBase_eventCanRunActivity_Parms), &Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::NewProp_FailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivityBase, nullptr, "CanRunActivity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::PropPointers), sizeof(NarrativeActivityBase_eventCanRunActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeActivityBase_eventCanRunActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivityBase::execCanRunActivity)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRunActivity_Implementation(Z_Param_Out_FailReason);
	P_NATIVE_END;
}
// End Class UNarrativeActivityBase Function CanRunActivity

// Begin Class UNarrativeActivityBase Function DescribeActivity
struct NarrativeActivityBase_eventDescribeActivity_Parms
{
	FString ReturnValue;
};
static const FName NAME_UNarrativeActivityBase_DescribeActivity = FName(TEXT("DescribeActivity"));
FString UNarrativeActivityBase::DescribeActivity() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeActivityBase_DescribeActivity);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeActivityBase_eventDescribeActivity_Parms Parms;
		const_cast<UNarrativeActivityBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeActivityBase*>(this)->DescribeActivity_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Activity Base" },
		{ "Comment", "//Debugging tools use this to grab a description of the behavior\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Debugging tools use this to grab a description of the behavior" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeActivityBase_eventDescribeActivity_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivityBase, nullptr, "DescribeActivity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::PropPointers), sizeof(NarrativeActivityBase_eventDescribeActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeActivityBase_eventDescribeActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivityBase::execDescribeActivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->DescribeActivity_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeActivityBase Function DescribeActivity

// Begin Class UNarrativeActivityBase Function EndActivity
struct Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics
{
	struct NarrativeActivityBase_eventEndActivity_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//Ends the activity - the activity component can then select a new one for us to do. \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Ends the activity - the activity component can then select a new one for us to do." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeActivityBase_eventEndActivity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeActivityBase_eventEndActivity_Parms), &Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivityBase, nullptr, "EndActivity", nullptr, nullptr, Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::NarrativeActivityBase_eventEndActivity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::NarrativeActivityBase_eventEndActivity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeActivityBase_EndActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivityBase_EndActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeActivityBase::execEndActivity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EndActivity();
	P_NATIVE_END;
}
// End Class UNarrativeActivityBase Function EndActivity

// Begin Class UNarrativeActivityBase Function K2_EndActivity
static const FName NAME_UNarrativeActivityBase_K2_EndActivity = FName(TEXT("K2_EndActivity"));
void UNarrativeActivityBase::K2_EndActivity()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeActivityBase_K2_EndActivity);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//Called after the tree has finished running.\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Called after the tree has finished running." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivityBase, nullptr, "K2_EndActivity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeActivityBase Function K2_EndActivity

// Begin Class UNarrativeActivityBase Function K2_RunActivity
static const FName NAME_UNarrativeActivityBase_K2_RunActivity = FName(TEXT("K2_RunActivity"));
void UNarrativeActivityBase::K2_RunActivity()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeActivityBase_K2_RunActivity);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NPC Activity" },
		{ "Comment", "//Called after the tree has started running and blackboard values have been set. Do anything you need in here! \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "Called after the tree has started running and blackboard values have been set. Do anything you need in here!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeActivityBase, nullptr, "K2_RunActivity", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeActivityBase Function K2_RunActivity

// Begin Class UNarrativeActivityBase
void UNarrativeActivityBase::StaticRegisterNativesUNarrativeActivityBase()
{
	UClass* Class = UNarrativeActivityBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanRunActivity", &UNarrativeActivityBase::execCanRunActivity },
		{ "DescribeActivity", &UNarrativeActivityBase::execDescribeActivity },
		{ "EndActivity", &UNarrativeActivityBase::execEndActivity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeActivityBase);
UClass* Z_Construct_UClass_UNarrativeActivityBase_NoRegister()
{
	return UNarrativeActivityBase::StaticClass();
}
struct Z_Construct_UClass_UNarrativeActivityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for settlement and NPC activities. \n */" },
		{ "IncludePath", "AI/Activities/NarrativeActivityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for settlement and NPC activities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivityName_MetaData[] = {
		{ "Category", "Activity" },
		{ "Comment", "//The name of the this activity\n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "The name of the this activity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTags_MetaData[] = {
		{ "Category", "Activity" },
		{ "Comment", "//The tags we'll grant the NPC/Settlement when this ability starts \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "The tags we'll grant the NPC/Settlement when this ability starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockTags_MetaData[] = {
		{ "Category", "Activity" },
		{ "Comment", "//We'll block the activity from running if the has any of these tags \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "We'll block the activity from running if the has any of these tags" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequireTags_MetaData[] = {
		{ "Category", "Activity" },
		{ "Comment", "//We'll require these tags to be on the owner before we run the activity \n" },
		{ "ModuleRelativePath", "Public/AI/Activities/NarrativeActivityBase.h" },
		{ "ToolTip", "We'll require these tags to be on the owner before we run the activity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActivityName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlockTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequireTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeActivityBase_CanRunActivity, "CanRunActivity" }, // 69472353
		{ &Z_Construct_UFunction_UNarrativeActivityBase_DescribeActivity, "DescribeActivity" }, // 3909197203
		{ &Z_Construct_UFunction_UNarrativeActivityBase_EndActivity, "EndActivity" }, // 1734705282
		{ &Z_Construct_UFunction_UNarrativeActivityBase_K2_EndActivity, "K2_EndActivity" }, // 1330785600
		{ &Z_Construct_UFunction_UNarrativeActivityBase_K2_RunActivity, "K2_RunActivity" }, // 1028260590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeActivityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_ActivityName = { "ActivityName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActivityBase, ActivityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivityName_MetaData), NewProp_ActivityName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_OwnedTags = { "OwnedTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActivityBase, OwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedTags_MetaData), NewProp_OwnedTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_BlockTags = { "BlockTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActivityBase, BlockTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockTags_MetaData), NewProp_BlockTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_RequireTags = { "RequireTags", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeActivityBase, RequireTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequireTags_MetaData), NewProp_RequireTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeActivityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_ActivityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_OwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_BlockTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeActivityBase_Statics::NewProp_RequireTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeActivityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeActivityBase_Statics::ClassParams = {
	&UNarrativeActivityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeActivityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivityBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeActivityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeActivityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeActivityBase()
{
	if (!Z_Registration_Info_UClass_UNarrativeActivityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeActivityBase.OuterSingleton, Z_Construct_UClass_UNarrativeActivityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeActivityBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeActivityBase>()
{
	return UNarrativeActivityBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeActivityBase);
UNarrativeActivityBase::~UNarrativeActivityBase() {}
// End Class UNarrativeActivityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeActivityBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActivityExecutionContext::StaticStruct, Z_Construct_UScriptStruct_FActivityExecutionContext_Statics::NewStructOps, TEXT("ActivityExecutionContext"), &Z_Registration_Info_UScriptStruct_ActivityExecutionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActivityExecutionContext), 2319855637U) },
		{ FActivityExecutionContext_Scheduled::StaticStruct, Z_Construct_UScriptStruct_FActivityExecutionContext_Scheduled_Statics::NewStructOps, TEXT("ActivityExecutionContext_Scheduled"), &Z_Registration_Info_UScriptStruct_ActivityExecutionContext_Scheduled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActivityExecutionContext_Scheduled), 416183730U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeActivityBase, UNarrativeActivityBase::StaticClass, TEXT("UNarrativeActivityBase"), &Z_Registration_Info_UClass_UNarrativeActivityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeActivityBase), 3232157011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeActivityBase_h_478334170(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeActivityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeActivityBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeActivityBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_Activities_NarrativeActivityBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
