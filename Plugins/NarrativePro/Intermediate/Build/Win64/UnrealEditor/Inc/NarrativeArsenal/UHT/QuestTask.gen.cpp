// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Tales/QuestTask.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTask() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTask();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTask_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuest_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UQuestBranch_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTalesComponent_NoRegister();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FTaskNavigationMarker();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_ANavigationMarkerActor_NoRegister();
NARRATIVENAVIGATOR_API UClass* Z_Construct_UClass_UNavigationMarkerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FTaskNavigationMarker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskNavigationMarker;
class UScriptStruct* FTaskNavigationMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskNavigationMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskNavigationMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskNavigationMarker, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("TaskNavigationMarker"));
	}
	return Z_Registration_Info_UScriptStruct_TaskNavigationMarker.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FTaskNavigationMarker>()
{
	return FTaskNavigationMarker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddNavigationMarker_MetaData[] = {
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "/** Should we add a navigation marker to the world for the duration of this task */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Should we add a navigation marker to the world for the duration of this task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavigationMarkerIcon_MetaData[] = {
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "//Icon to use for navigation marker. If empty will just use default \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Icon to use for navigation marker. If empty will just use default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerColor_MetaData[] = {
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "//Marker color\n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Marker color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerDomains_MetaData[] = {
		{ "Categories", "Navigator.NavigatorTypes" },
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "//What navigators to add this marker to \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "What navigators to add this marker to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerDisplayText_MetaData[] = {
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "//Text to use for the marker - if empty we'll just use the tasks description \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Text to use for the marker - if empty we'll just use the tasks description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerLocation_MetaData[] = {
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "//The world location the marker will be placed at. If GetMarkerAttachActor returns a valid actor this will be treated as a relative location instead of a world one. \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "The world location the marker will be placed at. If GetMarkerAttachActor returns a valid actor this will be treated as a relative location instead of a world one." },
	};
#endif // WITH_METADATA
	static void NewProp_bAddNavigationMarker_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddNavigationMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigationMarkerIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerDomains;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MarkerDisplayText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskNavigationMarker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_bAddNavigationMarker_SetBit(void* Obj)
{
	((FTaskNavigationMarker*)Obj)->bAddNavigationMarker = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_bAddNavigationMarker = { "bAddNavigationMarker", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTaskNavigationMarker), &Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_bAddNavigationMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddNavigationMarker_MetaData), NewProp_bAddNavigationMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_NavigationMarkerIcon = { "NavigationMarkerIcon", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskNavigationMarker, NavigationMarkerIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavigationMarkerIcon_MetaData), NewProp_NavigationMarkerIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerColor = { "MarkerColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskNavigationMarker, MarkerColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerColor_MetaData), NewProp_MarkerColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerDomains = { "MarkerDomains", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskNavigationMarker, MarkerDomains), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerDomains_MetaData), NewProp_MarkerDomains_MetaData) }; // 3352185621
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerDisplayText = { "MarkerDisplayText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskNavigationMarker, MarkerDisplayText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerDisplayText_MetaData), NewProp_MarkerDisplayText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerLocation = { "MarkerLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskNavigationMarker, MarkerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerLocation_MetaData), NewProp_MarkerLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_bAddNavigationMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_NavigationMarkerIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerDomains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerDisplayText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewProp_MarkerLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"TaskNavigationMarker",
	Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::PropPointers),
	sizeof(FTaskNavigationMarker),
	alignof(FTaskNavigationMarker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaskNavigationMarker()
{
	if (!Z_Registration_Info_UScriptStruct_TaskNavigationMarker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskNavigationMarker.InnerSingleton, Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TaskNavigationMarker.InnerSingleton;
}
// End ScriptStruct FTaskNavigationMarker

// Begin Class UNarrativeTask Function AddProgress
struct Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics
{
	struct NarrativeTask_eventAddProgress_Parms
	{
		int32 ProgressToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//Allows you to add some progress to the quantity - negative values can also be used to subtract progress! \n" },
		{ "CPP_Default_ProgressToAdd", "1" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Allows you to add some progress to the quantity - negative values can also be used to subtract progress!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressToAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ProgressToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd = { "ProgressToAdd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventAddProgress_Parms, ProgressToAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressToAdd_MetaData), NewProp_ProgressToAdd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NewProp_ProgressToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "AddProgress", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NarrativeTask_eventAddProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::NarrativeTask_eventAddProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_AddProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_AddProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execAddProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ProgressToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddProgress(Z_Param_ProgressToAdd);
	P_NATIVE_END;
}
// End Class UNarrativeTask Function AddProgress

// Begin Class UNarrativeTask Function CompleteTask
struct Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//[server only] completes the task, by setting the current progress to required amount\n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "[server only] completes the task, by setting the current progress to required amount" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "CompleteTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080404, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTask_CompleteTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_CompleteTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execCompleteTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteTask();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function CompleteTask

// Begin Class UNarrativeTask Function GetNavigationMarkerAttachActor
struct NarrativeTask_eventGetNavigationMarkerAttachActor_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeTask_eventGetNavigationMarkerAttachActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNarrativeTask_GetNavigationMarkerAttachActor = FName(TEXT("GetNavigationMarkerAttachActor"));
AActor* UNarrativeTask::GetNavigationMarkerAttachActor() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_GetNavigationMarkerAttachActor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTask_eventGetNavigationMarkerAttachActor_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTask*>(this)->GetNavigationMarkerAttachActor_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Use this if you want to return an actor the navigation marker should attach to  */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Use this if you want to return an actor the navigation marker should attach to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetNavigationMarkerAttachActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetNavigationMarkerAttachActor", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::PropPointers), sizeof(NarrativeTask_eventGetNavigationMarkerAttachActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTask_eventGetNavigationMarkerAttachActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execGetNavigationMarkerAttachActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetNavigationMarkerAttachActor_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function GetNavigationMarkerAttachActor

// Begin Class UNarrativeTask Function GetNavigationMarkerLocation
struct NarrativeTask_eventGetNavigationMarkerLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeTask_eventGetNavigationMarkerLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_UNarrativeTask_GetNavigationMarkerLocation = FName(TEXT("GetNavigationMarkerLocation"));
FVector UNarrativeTask::GetNavigationMarkerLocation() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_GetNavigationMarkerLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTask_eventGetNavigationMarkerLocation_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTask*>(this)->GetNavigationMarkerLocation_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**Don't want to use the hardcoded navigation marker cooords? Override this and your task can return a dynamic value the location marker should go to! */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Don't want to use the hardcoded navigation marker cooords? Override this and your task can return a dynamic value the location marker should go to!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetNavigationMarkerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetNavigationMarkerLocation", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::PropPointers), sizeof(NarrativeTask_eventGetNavigationMarkerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTask_eventGetNavigationMarkerLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execGetNavigationMarkerLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetNavigationMarkerLocation_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function GetNavigationMarkerLocation

// Begin Class UNarrativeTask Function GetOwningBranch
struct Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics
{
	struct NarrativeTask_eventGetOwningBranch_Parms
	{
		UQuestBranch* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetOwningBranch_Parms, ReturnValue), Z_Construct_UClass_UQuestBranch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetOwningBranch", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NarrativeTask_eventGetOwningBranch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::NarrativeTask_eventGetOwningBranch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_GetOwningBranch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetOwningBranch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execGetOwningBranch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UQuestBranch**)Z_Param__Result=P_THIS->GetOwningBranch();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function GetOwningBranch

// Begin Class UNarrativeTask Function GetTaskDescription
struct NarrativeTask_eventGetTaskDescription_Parms
{
	FText ReturnValue;
};
static const FName NAME_UNarrativeTask_GetTaskDescription = FName(TEXT("GetTaskDescription"));
FText UNarrativeTask::GetTaskDescription() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_GetTaskDescription);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTask_eventGetTaskDescription_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTask*>(this)->GetTaskDescription_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Implement this if you want to autogenerate task descriptions that the editor UI and narrative UI will use,\n\x09meaning you don't have to write a description for every task in your game.\"*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Implement this if you want to autogenerate task descriptions that the editor UI and narrative UI will use,\n      meaning you don't have to write a description for every task in your game.\"" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetTaskDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetTaskDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::PropPointers), sizeof(NarrativeTask_eventGetTaskDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTask_eventGetTaskDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_GetTaskDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetTaskDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execGetTaskDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTaskDescription_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function GetTaskDescription

// Begin Class UNarrativeTask Function GetTaskNodeDescription
struct NarrativeTask_eventGetTaskNodeDescription_Parms
{
	FText ReturnValue;
};
static const FName NAME_UNarrativeTask_GetTaskNodeDescription = FName(TEXT("GetTaskNodeDescription"));
FText UNarrativeTask::GetTaskNodeDescription() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_GetTaskNodeDescription);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTask_eventGetTaskNodeDescription_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTask*>(this)->GetTaskNodeDescription_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Optional special version of GetTaskDescription that is used for displaying info the editor nodes,\n\x09""but won't be used for ingame descriptions. */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Optional special version of GetTaskDescription that is used for displaying info the editor nodes,\n      but won't be used for ingame descriptions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetTaskNodeDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetTaskNodeDescription", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::PropPointers), sizeof(NarrativeTask_eventGetTaskNodeDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTask_eventGetTaskNodeDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execGetTaskNodeDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTaskNodeDescription_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function GetTaskNodeDescription

// Begin Class UNarrativeTask Function GetTaskProgressText
struct NarrativeTask_eventGetTaskProgressText_Parms
{
	FText ReturnValue;
};
static const FName NAME_UNarrativeTask_GetTaskProgressText = FName(TEXT("GetTaskProgressText"));
FText UNarrativeTask::GetTaskProgressText() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_GetTaskProgressText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeTask_eventGetTaskProgressText_Parms Parms;
		const_cast<UNarrativeTask*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNarrativeTask*>(this)->GetTaskProgressText_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**By default quest tasks display the task, followed by progress text ie: Find 10 Logs (6/10)\n\x09If you want to change the (6/10) to display something else, you can override this function. */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "By default quest tasks display the task, followed by progress text ie: Find 10 Logs (6/10)\n       If you want to change the (6/10) to display something else, you can override this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventGetTaskProgressText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "GetTaskProgressText", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::PropPointers), sizeof(NarrativeTask_eventGetTaskProgressText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeTask_eventGetTaskProgressText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execGetTaskProgressText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTaskProgressText_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function GetTaskProgressText

// Begin Class UNarrativeTask Function IsComplete
struct Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics
{
	struct NarrativeTask_eventIsComplete_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//Checks whether this task is currently complete or not\n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Checks whether this task is currently complete or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeTask_eventIsComplete_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeTask_eventIsComplete_Parms), &Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "IsComplete", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NarrativeTask_eventIsComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::NarrativeTask_eventIsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_IsComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_IsComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execIsComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsComplete();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function IsComplete

// Begin Class UNarrativeTask Function K2_BeginTask
static const FName NAME_UNarrativeTask_K2_BeginTask = FName(TEXT("K2_BeginTask"));
void UNarrativeTask::K2_BeginTask()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_K2_BeginTask);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//Called when the task is began - use this to check your task right away, bind any delegates, do anything you need \n" },
		{ "DisplayName", "Begin Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Called when the task is began - use this to check your task right away, bind any delegates, do anything you need" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "K2_BeginTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTask_K2_BeginTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_K2_BeginTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeTask Function K2_BeginTask

// Begin Class UNarrativeTask Function K2_EndTask
static const FName NAME_UNarrativeTask_K2_EndTask = FName(TEXT("K2_EndTask"));
void UNarrativeTask::K2_EndTask()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_K2_EndTask);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Called when the task get deactivated (when all of the tasks on its branch are completed and the player has moved on in the quest)\n\x09\n\x09If you're looking for a function that is called when the task is completed use OnTaskCompleted*/" },
		{ "DisplayName", "End Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Called when the task get deactivated (when all of the tasks on its branch are completed and the player has moved on in the quest)\n\n       If you're looking for a function that is called when the task is completed use OnTaskCompleted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "K2_EndTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTask_K2_EndTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_K2_EndTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeTask Function K2_EndTask

// Begin Class UNarrativeTask Function K2_OnTaskCompleted
static const FName NAME_UNarrativeTask_K2_OnTaskCompleted = FName(TEXT("K2_OnTaskCompleted"));
void UNarrativeTask::K2_OnTaskCompleted()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_K2_OnTaskCompleted);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "/**Called when the task is completed. Keep in mind this function can be called multiple times as narrative supports uncompleting tasks \n\x09""as well as completing*/" },
		{ "DisplayName", "On Task Completed" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Called when the task is completed. Keep in mind this function can be called multiple times as narrative supports uncompleting tasks\n       as well as completing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "K2_OnTaskCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UNarrativeTask Function K2_OnTaskCompleted

// Begin Class UNarrativeTask Function SetProgress
struct Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics
{
	struct NarrativeTask_eventSetProgress_Parms
	{
		int32 NewProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "//[server only] Set the progress of this task, which may complete it when task reaches required progress. \n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "[server only] Set the progress of this task, which may complete it when task reaches required progress." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventSetProgress_Parms, NewProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewProgress_MetaData), NewProp_NewProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NewProp_NewProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "SetProgress", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NarrativeTask_eventSetProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::NarrativeTask_eventSetProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_SetProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_SetProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execSetProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProgress(Z_Param_NewProgress);
	P_NATIVE_END;
}
// End Class UNarrativeTask Function SetProgress

// Begin Class UNarrativeTask Function SpawnNavigationMarker
struct Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics
{
	struct NarrativeTask_eventSpawnNavigationMarker_Parms
	{
		FVector MarkerLocation;
		AActor* AttachActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CPP_Default_AttachActor", "None" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::NewProp_MarkerLocation = { "MarkerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventSpawnNavigationMarker_Parms, MarkerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerLocation_MetaData), NewProp_MarkerLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::NewProp_AttachActor = { "AttachActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeTask_eventSpawnNavigationMarker_Parms, AttachActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::NewProp_MarkerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::NewProp_AttachActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "SpawnNavigationMarker", nullptr, nullptr, Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::NarrativeTask_eventSpawnNavigationMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::NarrativeTask_eventSpawnNavigationMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execSpawnNavigationMarker)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MarkerLocation);
	P_GET_OBJECT(AActor,Z_Param_AttachActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnNavigationMarker(Z_Param_Out_MarkerLocation,Z_Param_AttachActor);
	P_NATIVE_END;
}
// End Class UNarrativeTask Function SpawnNavigationMarker

// Begin Class UNarrativeTask Function TickTask
static const FName NAME_UNarrativeTask_TickTask = FName(TEXT("TickTask"));
void UNarrativeTask::TickTask()
{
	UFunction* Func = FindFunctionChecked(NAME_UNarrativeTask_TickTask);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		TickTask_Implementation();
	}
}
struct Z_Construct_UFunction_UNarrativeTask_TickTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Task" },
		{ "Comment", "/**A function that repeatedly gets called in order to track progress. Generally try making tasks event based if you can, however\n\x09sometimes tasks need to tick. Note that this function doesn't get called on the client, only the server, as tasks are server auth \n\x09so client doesn't really have any need to check the progress of a task */" },
		{ "DisplayName", "Tick Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "A function that repeatedly gets called in order to track progress. Generally try making tasks event based if you can, however\n       sometimes tasks need to tick. Note that this function doesn't get called on the client, only the server, as tasks are server auth\n       so client doesn't really have any need to check the progress of a task" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeTask, nullptr, "TickTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeTask_TickTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeTask_TickTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeTask::execTickTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickTask_Implementation();
	P_NATIVE_END;
}
// End Class UNarrativeTask Function TickTask

// Begin Class UNarrativeTask
void UNarrativeTask::StaticRegisterNativesUNarrativeTask()
{
	UClass* Class = UNarrativeTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddProgress", &UNarrativeTask::execAddProgress },
		{ "CompleteTask", &UNarrativeTask::execCompleteTask },
		{ "GetNavigationMarkerAttachActor", &UNarrativeTask::execGetNavigationMarkerAttachActor },
		{ "GetNavigationMarkerLocation", &UNarrativeTask::execGetNavigationMarkerLocation },
		{ "GetOwningBranch", &UNarrativeTask::execGetOwningBranch },
		{ "GetTaskDescription", &UNarrativeTask::execGetTaskDescription },
		{ "GetTaskNodeDescription", &UNarrativeTask::execGetTaskNodeDescription },
		{ "GetTaskProgressText", &UNarrativeTask::execGetTaskProgressText },
		{ "IsComplete", &UNarrativeTask::execIsComplete },
		{ "SetProgress", &UNarrativeTask::execSetProgress },
		{ "SpawnNavigationMarker", &UNarrativeTask::execSpawnNavigationMarker },
		{ "TickTask", &UNarrativeTask::execTickTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeTask);
UClass* Z_Construct_UClass_UNarrativeTask_NoRegister()
{
	return UNarrativeTask::StaticClass();
}
struct Z_Construct_UClass_UNarrativeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tasks are blueprints that manage a task for the player to complete. This is mostly used by the quest editor. \n * This is different from Data Tasks which are just data assets: a TaskName and Argument, ie \"FindItem:Sword\", \n * \n * A good example is the GoToLocation task that comes with narrative, which checks if the player has reached a goal location. This type\n * of task wouldn't be possible with a data task, which doesn't have any logic or variables.\n */" },
		{ "IncludePath", "Tales/QuestTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Tasks are blueprints that manage a task for the player to complete. This is mostly used by the quest editor.\nThis is different from Data Tasks which are just data assets: a TaskName and Argument, ie \"FindItem:Sword\",\n\nA good example is the GoToLocation task that comes with narrative, which checks if the player has reached a goal location. This type\nof task wouldn't be possible with a data task, which doesn't have any logic or variables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredQuantity_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "1" },
		{ "Comment", "/**The amount of times the task needs to be completed before the quest updates */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "The amount of times the task needs to be completed before the quest updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DescriptionOverride_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** \n\x09In Narrative 3, tasks now autogenerate their descriptions to save designers needing to input it! For example the GoToLocation task\n\x09that comes with Narrative takes the location name as input and then returns \"Go to {LocationName}.\"\n\n\x09However if you want to override the description you can do so entering one here. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "In Narrative 3, tasks now autogenerate their descriptions to save designers needing to input it! For example the GoToLocation task\nthat comes with Narrative takes the location name as input and then returns \"Go to {LocationName}.\"\n\nHowever if you want to override the description you can do so entering one here." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** Whether or not this task is optional */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Whether or not this task is optional" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** Check this box to hide this task in the narrative UI! */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Check this box to hide this task in the narrative UI!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/** Defines how often the task should tick. Set to 0 if you want to disable ticking. \n\x09\n\x09To optimize performance you should try avoid having tasks that tick at all, for example if your Task was is \"ObtainItem\", \n\x09you'd bind to an OnInventoryModified delegate in BeginTask and check the progress there! That way, you're only checking \n\x09the task when the players inventory updates, instead of just blindly checking over and over again. */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Defines how often the task should tick. Set to 0 if you want to disable ticking.\n\n      To optimize performance you should try avoid having tasks that tick at all, for example if your Task was is \"ObtainItem\",\n      you'd bind to an OnInventoryModified delegate in BeginTask and check the progress there! That way, you're only checking\n      the task when the players inventory updates, instead of just blindly checking over and over again." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerSettings_MetaData[] = {
		{ "Category", "Task - Navigation Markers" },
		{ "Comment", "/** Should we add a navigation marker to the world for the duration of this task */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Should we add a navigation marker to the world for the duration of this task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedMarker_MetaData[] = {
		{ "Comment", "/** Should we add a navigation marker to the world for the duration of this task */" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "Should we add a navigation marker to the world for the duration of this task" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMarker_MetaData[] = {
		{ "Comment", "/** If we had to turn off a marker when we added the quest one we cache it here so we can re-activate it later. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "If we had to turn off a marker when we added the quest one we cache it here so we can re-activate it later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "//The current progress this task has made\n" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
		{ "ToolTip", "The current progress this task has made" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[] = {
		{ "Category", "Task" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningQuest_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Tales/QuestTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredQuantity;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DescriptionOverride;
	static void NewProp_bOptional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
	static void NewProp_bHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldMarker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningQuest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeTask_AddProgress, "AddProgress" }, // 2240964708
		{ &Z_Construct_UFunction_UNarrativeTask_CompleteTask, "CompleteTask" }, // 3977412170
		{ &Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerAttachActor, "GetNavigationMarkerAttachActor" }, // 2689464462
		{ &Z_Construct_UFunction_UNarrativeTask_GetNavigationMarkerLocation, "GetNavigationMarkerLocation" }, // 1549608085
		{ &Z_Construct_UFunction_UNarrativeTask_GetOwningBranch, "GetOwningBranch" }, // 2328387268
		{ &Z_Construct_UFunction_UNarrativeTask_GetTaskDescription, "GetTaskDescription" }, // 3163311738
		{ &Z_Construct_UFunction_UNarrativeTask_GetTaskNodeDescription, "GetTaskNodeDescription" }, // 198930476
		{ &Z_Construct_UFunction_UNarrativeTask_GetTaskProgressText, "GetTaskProgressText" }, // 3622369625
		{ &Z_Construct_UFunction_UNarrativeTask_IsComplete, "IsComplete" }, // 2046313372
		{ &Z_Construct_UFunction_UNarrativeTask_K2_BeginTask, "K2_BeginTask" }, // 1319110162
		{ &Z_Construct_UFunction_UNarrativeTask_K2_EndTask, "K2_EndTask" }, // 3321259211
		{ &Z_Construct_UFunction_UNarrativeTask_K2_OnTaskCompleted, "K2_OnTaskCompleted" }, // 506360516
		{ &Z_Construct_UFunction_UNarrativeTask_SetProgress, "SetProgress" }, // 4076845146
		{ &Z_Construct_UFunction_UNarrativeTask_SpawnNavigationMarker, "SpawnNavigationMarker" }, // 1104449265
		{ &Z_Construct_UFunction_UNarrativeTask_TickTask, "TickTask" }, // 2959815266
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity = { "RequiredQuantity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, RequiredQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredQuantity_MetaData), NewProp_RequiredQuantity_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride = { "DescriptionOverride", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, DescriptionOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DescriptionOverride_MetaData), NewProp_DescriptionOverride_MetaData) };
void Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_SetBit(void* Obj)
{
	((UNarrativeTask*)Obj)->bOptional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeTask), &Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOptional_MetaData), NewProp_bOptional_MetaData) };
void Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_SetBit(void* Obj)
{
	((UNarrativeTask*)Obj)->bHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeTask), &Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidden_MetaData), NewProp_bHidden_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, TickInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInterval_MetaData), NewProp_TickInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_MarkerSettings = { "MarkerSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, MarkerSettings), Z_Construct_UScriptStruct_FTaskNavigationMarker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerSettings_MetaData), NewProp_MarkerSettings_MetaData) }; // 1085137441
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_SpawnedMarker = { "SpawnedMarker", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, SpawnedMarker), Z_Construct_UClass_ANavigationMarkerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedMarker_MetaData), NewProp_SpawnedMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OldMarker = { "OldMarker", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OldMarker), Z_Construct_UClass_UNavigationMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMarker_MetaData), NewProp_OldMarker_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningComp), Z_Construct_UClass_UTalesComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn = { "OwningPawn", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPawn_MetaData), NewProp_OwningPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningController_MetaData), NewProp_OwningController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest = { "OwningQuest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeTask, OwningQuest), Z_Construct_UClass_UQuest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningQuest_MetaData), NewProp_OwningQuest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_RequiredQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_DescriptionOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bOptional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_bHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_TickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_MarkerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_SpawnedMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OldMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeTask_Statics::NewProp_OwningQuest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeTask_Statics::ClassParams = {
	&UNarrativeTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeTask()
{
	if (!Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton, Z_Construct_UClass_UNarrativeTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeTask.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeTask>()
{
	return UNarrativeTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeTask);
UNarrativeTask::~UNarrativeTask() {}
// End Class UNarrativeTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaskNavigationMarker::StaticStruct, Z_Construct_UScriptStruct_FTaskNavigationMarker_Statics::NewStructOps, TEXT("TaskNavigationMarker"), &Z_Registration_Info_UScriptStruct_TaskNavigationMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskNavigationMarker), 1085137441U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeTask, UNarrativeTask::StaticClass, TEXT("UNarrativeTask"), &Z_Registration_Info_UClass_UNarrativeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeTask), 2606329986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_3129602830(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_QuestTask_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
