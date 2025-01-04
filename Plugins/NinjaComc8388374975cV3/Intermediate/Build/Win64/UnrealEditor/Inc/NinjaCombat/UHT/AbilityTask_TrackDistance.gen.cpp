// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_TrackDistance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_TrackDistance();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_TrackDistance_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FDistanceExceeded
struct Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics
{
	struct AbilityTask_TrackDistance_eventDistanceExceeded_Parms
	{
		const AActor* Target;
		float Distance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventDistanceExceeded_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventDistanceExceeded_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_TrackDistance, nullptr, "DistanceExceeded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::AbilityTask_TrackDistance_eventDistanceExceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::AbilityTask_TrackDistance_eventDistanceExceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityTask_TrackDistance::FDistanceExceeded_DelegateWrapper(const FMulticastScriptDelegate& DistanceExceeded, const AActor* Target, float Distance)
{
	struct AbilityTask_TrackDistance_eventDistanceExceeded_Parms
	{
		const AActor* Target;
		float Distance;
	};
	AbilityTask_TrackDistance_eventDistanceExceeded_Parms Parms;
	Parms.Target=Target;
	Parms.Distance=Distance;
	DistanceExceeded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDistanceExceeded

// Begin Class UAbilityTask_TrackDistance Function CreateTask
struct Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics
{
	struct AbilityTask_TrackDistance_eventCreateTask_Parms
	{
		UGameplayAbility* OwningAbility;
		AActor* TrackedActor;
		float Threshold;
		bool bFinishTaskOnThreshold;
		UAbilityTask_TrackDistance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Creates the appropriate Ability Task, based on the provided data.\n\x09 */" },
		{ "CPP_Default_bFinishTaskOnThreshold", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
		{ "ToolTip", "Creates the appropriate Ability Task, based on the provided data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static void NewProp_bFinishTaskOnThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishTaskOnThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventCreateTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_TrackedActor = { "TrackedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventCreateTask_Parms, TrackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventCreateTask_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_bFinishTaskOnThreshold_SetBit(void* Obj)
{
	((AbilityTask_TrackDistance_eventCreateTask_Parms*)Obj)->bFinishTaskOnThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_bFinishTaskOnThreshold = { "bFinishTaskOnThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_TrackDistance_eventCreateTask_Parms), &Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_bFinishTaskOnThreshold_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_TrackDistance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_TrackedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_bFinishTaskOnThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_TrackDistance, nullptr, "CreateTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::AbilityTask_TrackDistance_eventCreateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::AbilityTask_TrackDistance_eventCreateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_TrackDistance::execCreateTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(AActor,Z_Param_TrackedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
	P_GET_UBOOL(Z_Param_bFinishTaskOnThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_TrackDistance**)Z_Param__Result=UAbilityTask_TrackDistance::CreateTask(Z_Param_OwningAbility,Z_Param_TrackedActor,Z_Param_Threshold,Z_Param_bFinishTaskOnThreshold);
	P_NATIVE_END;
}
// End Class UAbilityTask_TrackDistance Function CreateTask

// Begin Class UAbilityTask_TrackDistance Function SetTarget
struct Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics
{
	struct AbilityTask_TrackDistance_eventSetTarget_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Ability Tasks" },
		{ "Comment", "/**\n\x09 * Sets a new target without the need to recreate the task.\n\x09 * The new target must be valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
		{ "ToolTip", "Sets a new target without the need to recreate the task.\nThe new target must be valid." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_TrackDistance_eventSetTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_TrackDistance, nullptr, "SetTarget", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::AbilityTask_TrackDistance_eventSetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::AbilityTask_TrackDistance_eventSetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_TrackDistance::execSetTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// End Class UAbilityTask_TrackDistance Function SetTarget

// Begin Class UAbilityTask_TrackDistance
void UAbilityTask_TrackDistance::StaticRegisterNativesUAbilityTask_TrackDistance()
{
	UClass* Class = UAbilityTask_TrackDistance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTask", &UAbilityTask_TrackDistance::execCreateTask },
		{ "SetTarget", &UAbilityTask_TrackDistance::execSetTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_TrackDistance);
UClass* Z_Construct_UClass_UAbilityTask_TrackDistance_NoRegister()
{
	return UAbilityTask_TrackDistance::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_TrackDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tracks the distance from a target, broadcasting when a threshold is reached. \n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
		{ "ToolTip", "Tracks the distance from a target, broadcasting when a threshold is reached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDistanceExceeded_MetaData[] = {
		{ "Comment", "/** Broadcasts when the distance threshold is reached. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
		{ "ToolTip", "Broadcasts when the distance threshold is reached." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedTarget_MetaData[] = {
		{ "Comment", "/** The target currently being tracked. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_TrackDistance.h" },
		{ "ToolTip", "The target currently being tracked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDistanceExceeded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_TrackDistance_CreateTask, "CreateTask" }, // 1424911024
		{ &Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature, "DistanceExceeded__DelegateSignature" }, // 3697144502
		{ &Z_Construct_UFunction_UAbilityTask_TrackDistance_SetTarget, "SetTarget" }, // 1887864319
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_TrackDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::NewProp_OnDistanceExceeded = { "OnDistanceExceeded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_TrackDistance, OnDistanceExceeded), Z_Construct_UDelegateFunction_UAbilityTask_TrackDistance_DistanceExceeded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDistanceExceeded_MetaData), NewProp_OnDistanceExceeded_MetaData) }; // 3697144502
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::NewProp_TrackedTarget = { "TrackedTarget", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_TrackDistance, TrackedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedTarget_MetaData), NewProp_TrackedTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::NewProp_OnDistanceExceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::NewProp_TrackedTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::ClassParams = {
	&UAbilityTask_TrackDistance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_TrackDistance()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_TrackDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_TrackDistance.OuterSingleton, Z_Construct_UClass_UAbilityTask_TrackDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_TrackDistance.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_TrackDistance>()
{
	return UAbilityTask_TrackDistance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_TrackDistance);
UAbilityTask_TrackDistance::~UAbilityTask_TrackDistance() {}
// End Class UAbilityTask_TrackDistance

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_TrackDistance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_TrackDistance, UAbilityTask_TrackDistance::StaticClass, TEXT("UAbilityTask_TrackDistance"), &Z_Registration_Info_UClass_UAbilityTask_TrackDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_TrackDistance), 137484568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_TrackDistance_h_1332848244(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_TrackDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_TrackDistance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
