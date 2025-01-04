// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h"
#include "GameplayTargetingSystem/Public/Types/TargetingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_TargetLock() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_TrackDistance_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_TargetLock();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_TargetLock_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_TargetLock Function ApplyTargetLockEffect
struct Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Sets the Target Lock effect, informing other systems about this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Sets the Target Lock effect, informing other systems about this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "ApplyTargetLockEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execApplyTargetLockEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTargetLockEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function ApplyTargetLockEffect

// Begin Class UCombatAbility_TargetLock Function CollectTarget
struct Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics
{
	struct CombatAbility_TargetLock_eventCollectTarget_Parms
	{
		UTargetingPreset* Preset;
		bool bExecuteAsync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Initializes the Targeting Task, configured using this Ability's properties.\n\x09 *\n\x09 * This will always cancel a current targeting execution and start a new one.\n\x09 * \n\x09 * @param Preset\n\x09 *\x09\x09Targeting Preset used by this function. It won't assume using the one configured in the ability,\n\x09 *\x09\x09to allow potential subclasses to create their own logic, providing other presets if needed.\n\x09 *\n\x09 * @param bExecuteAsync\n\x09 *\x09\x09""Determines if the Targeting Preset will be executed asynchronously or not.\n\x09 */" },
		{ "CPP_Default_bExecuteAsync", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Initializes the Targeting Task, configured using this Ability's properties.\n\nThis will always cancel a current targeting execution and start a new one.\n\n@param Preset\n             Targeting Preset used by this function. It won't assume using the one configured in the ability,\n             to allow potential subclasses to create their own logic, providing other presets if needed.\n\n@param bExecuteAsync\n             Determines if the Targeting Preset will be executed asynchronously or not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static void NewProp_bExecuteAsync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteAsync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventCollectTarget_Parms, Preset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::NewProp_bExecuteAsync_SetBit(void* Obj)
{
	((CombatAbility_TargetLock_eventCollectTarget_Parms*)Obj)->bExecuteAsync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::NewProp_bExecuteAsync = { "bExecuteAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_TargetLock_eventCollectTarget_Parms), &Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::NewProp_bExecuteAsync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::NewProp_bExecuteAsync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "CollectTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::CombatAbility_TargetLock_eventCollectTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::CombatAbility_TargetLock_eventCollectTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execCollectTarget)
{
	P_GET_OBJECT(UTargetingPreset,Z_Param_Preset);
	P_GET_UBOOL(Z_Param_bExecuteAsync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectTarget(Z_Param_Preset,Z_Param_bExecuteAsync);
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function CollectTarget

// Begin Class UCombatAbility_TargetLock Function DismissCurrentTarget
struct Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Dismiss the current target, unbinding from it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Dismiss the current target, unbinding from it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "DismissCurrentTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execDismissCurrentTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismissCurrentTarget();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function DismissCurrentTarget

// Begin Class UCombatAbility_TargetLock Function GetTarget
struct Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics
{
	struct CombatAbility_TargetLock_eventGetTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the current target stored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Provides the current target stored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventGetTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "GetTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::CombatAbility_TargetLock_eventGetTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::CombatAbility_TargetLock_eventGetTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execGetTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTarget();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function GetTarget

// Begin Class UCombatAbility_TargetLock Function HandleDistanceExceeded
struct CombatAbility_TargetLock_eventHandleDistanceExceeded_Parms
{
	const AActor* Target;
	float Distance;
};
static const FName NAME_UCombatAbility_TargetLock_HandleDistanceExceeded = FName(TEXT("HandleDistanceExceeded"));
void UCombatAbility_TargetLock::HandleDistanceExceeded(const AActor* Target, float Distance)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_TargetLock_HandleDistanceExceeded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_TargetLock_eventHandleDistanceExceeded_Parms Parms;
		Parms.Target=Target;
		Parms.Distance=Distance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDistanceExceeded_Implementation(Target, Distance);
	}
}
struct Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Lock" },
		{ "Comment", "/**\n\x09 * Reacts to the distance from the current target being exceeded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Reacts to the distance from the current target being exceeded." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventHandleDistanceExceeded_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventHandleDistanceExceeded_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "HandleDistanceExceeded", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::PropPointers), sizeof(CombatAbility_TargetLock_eventHandleDistanceExceeded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_TargetLock_eventHandleDistanceExceeded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execHandleDistanceExceeded)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDistanceExceeded_Implementation(Z_Param_Target,Z_Param_Distance);
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function HandleDistanceExceeded

// Begin Class UCombatAbility_TargetLock Function HandleNewTarget
struct CombatAbility_TargetLock_eventHandleNewTarget_Parms
{
	AActor* NewTarget;
};
static const FName NAME_UCombatAbility_TargetLock_HandleNewTarget = FName(TEXT("HandleNewTarget"));
void UCombatAbility_TargetLock::HandleNewTarget(AActor* NewTarget)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_TargetLock_HandleNewTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_TargetLock_eventHandleNewTarget_Parms Parms;
		Parms.NewTarget=NewTarget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleNewTarget_Implementation(NewTarget);
	}
}
struct Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Lock" },
		{ "Comment", "/**\n\x09 * Actually handles the new Target, once it has been initially processed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Actually handles the new Target, once it has been initially processed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventHandleNewTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "HandleNewTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::PropPointers), sizeof(CombatAbility_TargetLock_eventHandleNewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_TargetLock_eventHandleNewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execHandleNewTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleNewTarget_Implementation(Z_Param_NewTarget);
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function HandleNewTarget

// Begin Class UCombatAbility_TargetLock Function HandleTargetDeath
struct CombatAbility_TargetLock_eventHandleTargetDeath_Parms
{
	AActor* Actor;
};
static const FName NAME_UCombatAbility_TargetLock_HandleTargetDeath = FName(TEXT("HandleTargetDeath"));
void UCombatAbility_TargetLock::HandleTargetDeath(AActor* Actor)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_TargetLock_HandleTargetDeath);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_TargetLock_eventHandleTargetDeath_Parms Parms;
		Parms.Actor=Actor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleTargetDeath_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Target Lock" },
		{ "Comment", "/**\n\x09 * Reacts to the death of the current target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Reacts to the death of the current target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventHandleTargetDeath_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "HandleTargetDeath", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::PropPointers), sizeof(CombatAbility_TargetLock_eventHandleTargetDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_TargetLock_eventHandleTargetDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execHandleTargetDeath)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetDeath_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function HandleTargetDeath

// Begin Class UCombatAbility_TargetLock Function HandleTargetReady
struct Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics
{
	struct CombatAbility_TargetLock_eventHandleTargetReady_Parms
	{
		FTargetingRequestHandle TargetingRequestHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to a response from the Targeting System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Reacts to a response from the Targeting System." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingRequestHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::NewProp_TargetingRequestHandle = { "TargetingRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_TargetLock_eventHandleTargetReady_Parms, TargetingRequestHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(0, nullptr) }; // 1432709645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::NewProp_TargetingRequestHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "HandleTargetReady", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::CombatAbility_TargetLock_eventHandleTargetReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::CombatAbility_TargetLock_eventHandleTargetReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execHandleTargetReady)
{
	P_GET_STRUCT(FTargetingRequestHandle,Z_Param_TargetingRequestHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetReady(Z_Param_TargetingRequestHandle);
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function HandleTargetReady

// Begin Class UCombatAbility_TargetLock Function HasTarget
struct Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics
{
	struct CombatAbility_TargetLock_eventHasTarget_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Checks if the owner currently has a target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Checks if the owner currently has a target." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_TargetLock_eventHasTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_TargetLock_eventHasTarget_Parms), &Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "HasTarget", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::CombatAbility_TargetLock_eventHasTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::CombatAbility_TargetLock_eventHasTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execHasTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTarget();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function HasTarget

// Begin Class UCombatAbility_TargetLock Function RemoveTargetLockEffect
struct Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Removes the Target Lock effect, which also informs other systems about this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Removes the Target Lock effect, which also informs other systems about this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "RemoveTargetLockEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execRemoveTargetLockEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTargetLockEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function RemoveTargetLockEffect

// Begin Class UCombatAbility_TargetLock Function StartTrackingDistance
struct Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/** \n\x09 * Tracks the distance for the current target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Tracks the distance for the current target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "StartTrackingDistance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execStartTrackingDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTrackingDistance();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function StartTrackingDistance

// Begin Class UCombatAbility_TargetLock Function StopTrackingDistance
struct Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Stops tracking the distance to the current target. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Stops tracking the distance to the current target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_TargetLock, nullptr, "StopTrackingDistance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_TargetLock::execStopTrackingDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTrackingDistance();
	P_NATIVE_END;
}
// End Class UCombatAbility_TargetLock Function StopTrackingDistance

// Begin Class UCombatAbility_TargetLock
void UCombatAbility_TargetLock::StaticRegisterNativesUCombatAbility_TargetLock()
{
	UClass* Class = UCombatAbility_TargetLock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyTargetLockEffect", &UCombatAbility_TargetLock::execApplyTargetLockEffect },
		{ "CollectTarget", &UCombatAbility_TargetLock::execCollectTarget },
		{ "DismissCurrentTarget", &UCombatAbility_TargetLock::execDismissCurrentTarget },
		{ "GetTarget", &UCombatAbility_TargetLock::execGetTarget },
		{ "HandleDistanceExceeded", &UCombatAbility_TargetLock::execHandleDistanceExceeded },
		{ "HandleNewTarget", &UCombatAbility_TargetLock::execHandleNewTarget },
		{ "HandleTargetDeath", &UCombatAbility_TargetLock::execHandleTargetDeath },
		{ "HandleTargetReady", &UCombatAbility_TargetLock::execHandleTargetReady },
		{ "HasTarget", &UCombatAbility_TargetLock::execHasTarget },
		{ "RemoveTargetLockEffect", &UCombatAbility_TargetLock::execRemoveTargetLockEffect },
		{ "StartTrackingDistance", &UCombatAbility_TargetLock::execStartTrackingDistance },
		{ "StopTrackingDistance", &UCombatAbility_TargetLock::execStopTrackingDistance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_TargetLock);
UClass* Z_Construct_UClass_UCombatAbility_TargetLock_NoRegister()
{
	return UCombatAbility_TargetLock::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_TargetLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Locks on a target, acquired by a certain targeting preset.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Locks on a target, acquired by a certain targeting preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/** The Targeting Preset used by the targeting system. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "The Targeting Preset used by the targeting system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextTargetingPreset_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/**\n\x09 * The Targeting Preset used by the targeting system following up a target that died.\n\x09 *\n\x09 * This setting is enabled by the \"bMoveToNewTargets\" and it's optional. If you don't set this\n\x09 * Preset, then this ability will fall back to the default Targeting Preset originally set.\n\x09 */" },
		{ "EditCondition", "bMoveToNewTargets" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "The Targeting Preset used by the targeting system following up a target that died.\n\nThis setting is enabled by the \"bMoveToNewTargets\" and it's optional. If you don't set this\nPreset, then this ability will fall back to the default Targeting Preset originally set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoveToNewTargets_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/**\n\x09 * Determines if a new target should be acquired when the current one dies.\n\x09 * \n\x09 * You might want to set up the \"Next Targeting\" Preset for these targets, to potentially find new\n\x09 * targets that are closer than the original range, or with different types of criteria.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Determines if a new target should be acquired when the current one dies.\n\nYou might want to set up the \"Next Targeting\" Preset for these targets, to potentially find new\ntargets that are closer than the original range, or with different types of criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformAsyncTargeting_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/** Determines if Targeting is done asynchronously. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Determines if Targeting is done asynchronously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackDistance_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/** Defines if a distance threshold will be tracked and if exceeded, target will be unlocked. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Defines if a distance threshold will be tracked and if exceeded, target will be unlocked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceThreshold_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/** Threshold where a tracked target will be disengaged. */" },
		{ "EditCondition", "bTrackDistance" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Threshold where a tracked target will be disengaged." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockEffectClass_MetaData[] = {
		{ "Category", "Combat Ability|Target Lock" },
		{ "Comment", "/** Optional Gameplay Effect applied if a target is acquired. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Optional Gameplay Effect applied if a target is acquired." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingTask_MetaData[] = {
		{ "Comment", "/** Task used to collect targets. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Task used to collect targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceTask_MetaData[] = {
		{ "Comment", "/** Task to track the distance from an active target. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Task to track the distance from an active target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEventTask_MetaData[] = {
		{ "Comment", "/** Task to track an external event informing that the target was dismissed. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_TargetLock.h" },
		{ "ToolTip", "Task to track an external event informing that the target was dismissed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextTargetingPreset;
	static void NewProp_bMoveToNewTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveToNewTargets;
	static void NewProp_bPerformAsyncTargeting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformAsyncTargeting;
	static void NewProp_bTrackDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceThreshold;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetLockEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEventTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_ApplyTargetLockEffect, "ApplyTargetLockEffect" }, // 2893277173
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_CollectTarget, "CollectTarget" }, // 1596546879
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_DismissCurrentTarget, "DismissCurrentTarget" }, // 2754736104
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_GetTarget, "GetTarget" }, // 3013922452
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_HandleDistanceExceeded, "HandleDistanceExceeded" }, // 1336089676
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_HandleNewTarget, "HandleNewTarget" }, // 2075940621
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetDeath, "HandleTargetDeath" }, // 1266979569
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_HandleTargetReady, "HandleTargetReady" }, // 4230191252
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_HasTarget, "HasTarget" }, // 263537638
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_RemoveTargetLockEffect, "RemoveTargetLockEffect" }, // 2308178473
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_StartTrackingDistance, "StartTrackingDistance" }, // 208988672
		{ &Z_Construct_UFunction_UCombatAbility_TargetLock_StopTrackingDistance, "StopTrackingDistance" }, // 2615082237
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_TargetLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingPreset_MetaData), NewProp_TargetingPreset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_NextTargetingPreset = { "NextTargetingPreset", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, NextTargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextTargetingPreset_MetaData), NewProp_NextTargetingPreset_MetaData) };
void Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bMoveToNewTargets_SetBit(void* Obj)
{
	((UCombatAbility_TargetLock*)Obj)->bMoveToNewTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bMoveToNewTargets = { "bMoveToNewTargets", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatAbility_TargetLock), &Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bMoveToNewTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoveToNewTargets_MetaData), NewProp_bMoveToNewTargets_MetaData) };
void Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bPerformAsyncTargeting_SetBit(void* Obj)
{
	((UCombatAbility_TargetLock*)Obj)->bPerformAsyncTargeting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bPerformAsyncTargeting = { "bPerformAsyncTargeting", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatAbility_TargetLock), &Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bPerformAsyncTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformAsyncTargeting_MetaData), NewProp_bPerformAsyncTargeting_MetaData) };
void Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bTrackDistance_SetBit(void* Obj)
{
	((UCombatAbility_TargetLock*)Obj)->bTrackDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bTrackDistance = { "bTrackDistance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatAbility_TargetLock), &Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bTrackDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackDistance_MetaData), NewProp_bTrackDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_DistanceThreshold = { "DistanceThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, DistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceThreshold_MetaData), NewProp_DistanceThreshold_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetLockEffectClass = { "TargetLockEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, TargetLockEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockEffectClass_MetaData), NewProp_TargetLockEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetingTask = { "TargetingTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, TargetingTask), Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingTask_MetaData), NewProp_TargetingTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_DistanceTask = { "DistanceTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, DistanceTask), Z_Construct_UClass_UAbilityTask_TrackDistance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceTask_MetaData), NewProp_DistanceTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetEventTask = { "TargetEventTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_TargetLock, TargetEventTask), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEventTask_MetaData), NewProp_TargetEventTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_TargetLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetingPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_NextTargetingPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bMoveToNewTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bPerformAsyncTargeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_bTrackDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_DistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetLockEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetingTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_DistanceTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_TargetLock_Statics::NewProp_TargetEventTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_TargetLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_TargetLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_TargetLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_TargetLock_Statics::ClassParams = {
	&UCombatAbility_TargetLock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_TargetLock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_TargetLock_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_TargetLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_TargetLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_TargetLock()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_TargetLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_TargetLock.OuterSingleton, Z_Construct_UClass_UCombatAbility_TargetLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_TargetLock.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_TargetLock>()
{
	return UCombatAbility_TargetLock::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_TargetLock);
UCombatAbility_TargetLock::~UCombatAbility_TargetLock() {}
// End Class UCombatAbility_TargetLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_TargetLock, UCombatAbility_TargetLock::StaticClass, TEXT("UCombatAbility_TargetLock"), &Z_Registration_Info_UClass_UCombatAbility_TargetLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_TargetLock), 311106756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_1829902694(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_TargetLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
