// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PlayOpportunityAnimation() {}

// Begin Cross Module References
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister();
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FOpportunityAnimationEvent
struct Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics
{
	struct AbilityTask_PlayOpportunityAnimation_eventOpportunityAnimationEvent_Parms
	{
		UContextualAnimSceneActorComponent* SceneActorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::NewProp_SceneActorComponent = { "SceneActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventOpportunityAnimationEvent_Parms, SceneActorComponent), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneActorComponent_MetaData), NewProp_SceneActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::NewProp_SceneActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, nullptr, "OpportunityAnimationEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::AbilityTask_PlayOpportunityAnimation_eventOpportunityAnimationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::AbilityTask_PlayOpportunityAnimation_eventOpportunityAnimationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityTask_PlayOpportunityAnimation::FOpportunityAnimationEvent_DelegateWrapper(const FMulticastScriptDelegate& OpportunityAnimationEvent, UContextualAnimSceneActorComponent* SceneActorComponent)
{
	struct AbilityTask_PlayOpportunityAnimation_eventOpportunityAnimationEvent_Parms
	{
		UContextualAnimSceneActorComponent* SceneActorComponent;
	};
	AbilityTask_PlayOpportunityAnimation_eventOpportunityAnimationEvent_Parms Parms;
	Parms.SceneActorComponent=SceneActorComponent;
	OpportunityAnimationEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOpportunityAnimationEvent

// Begin Class UAbilityTask_PlayOpportunityAnimation Function CreateTask
struct Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics
{
	struct AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms
	{
		UGameplayAbility* OwningAbility;
		UContextualAnimSceneAsset* SceneAsset;
		AActor* Attacker;
		AActor* Victim;
		bool bEnableDebug;
		UAbilityTask_PlayOpportunityAnimation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Creates the Ability Task, with the provided data.\n\x09 */" },
		{ "CPP_Default_bEnableDebug", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Creates the Ability Task, with the provided data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms, Victim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms), &Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_SceneAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, nullptr, "CreateTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::AbilityTask_PlayOpportunityAnimation_eventCreateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayOpportunityAnimation::execCreateTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_OBJECT(UContextualAnimSceneAsset,Z_Param_SceneAsset);
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Victim);
	P_GET_UBOOL(Z_Param_bEnableDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_PlayOpportunityAnimation**)Z_Param__Result=UAbilityTask_PlayOpportunityAnimation::CreateTask(Z_Param_OwningAbility,Z_Param_SceneAsset,Z_Param_Attacker,Z_Param_Victim,Z_Param_bEnableDebug);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayOpportunityAnimation Function CreateTask

// Begin Class UAbilityTask_PlayOpportunityAnimation Function HandleAvatarJoinedScene
struct Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics
{
	struct AbilityTask_PlayOpportunityAnimation_eventHandleAvatarJoinedScene_Parms
	{
		UContextualAnimSceneActorComponent* SceneActorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::NewProp_SceneActorComponent = { "SceneActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventHandleAvatarJoinedScene_Parms, SceneActorComponent), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneActorComponent_MetaData), NewProp_SceneActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::NewProp_SceneActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, nullptr, "HandleAvatarJoinedScene", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::AbilityTask_PlayOpportunityAnimation_eventHandleAvatarJoinedScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::AbilityTask_PlayOpportunityAnimation_eventHandleAvatarJoinedScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayOpportunityAnimation::execHandleAvatarJoinedScene)
{
	P_GET_OBJECT(UContextualAnimSceneActorComponent,Z_Param_SceneActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAvatarJoinedScene(Z_Param_SceneActorComponent);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayOpportunityAnimation Function HandleAvatarJoinedScene

// Begin Class UAbilityTask_PlayOpportunityAnimation Function HandleAvatarLeftScene
struct Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics
{
	struct AbilityTask_PlayOpportunityAnimation_eventHandleAvatarLeftScene_Parms
	{
		UContextualAnimSceneActorComponent* SceneActorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::NewProp_SceneActorComponent = { "SceneActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventHandleAvatarLeftScene_Parms, SceneActorComponent), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneActorComponent_MetaData), NewProp_SceneActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::NewProp_SceneActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, nullptr, "HandleAvatarLeftScene", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::AbilityTask_PlayOpportunityAnimation_eventHandleAvatarLeftScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::AbilityTask_PlayOpportunityAnimation_eventHandleAvatarLeftScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayOpportunityAnimation::execHandleAvatarLeftScene)
{
	P_GET_OBJECT(UContextualAnimSceneActorComponent,Z_Param_SceneActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAvatarLeftScene(Z_Param_SceneActorComponent);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayOpportunityAnimation Function HandleAvatarLeftScene

// Begin Class UAbilityTask_PlayOpportunityAnimation Function HandleSceneFailed
struct Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, nullptr, "HandleSceneFailed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayOpportunityAnimation::execHandleSceneFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSceneFailed();
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayOpportunityAnimation Function HandleSceneFailed

// Begin Class UAbilityTask_PlayOpportunityAnimation Function SetAdditionalSceneActors
struct Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics
{
	struct AbilityTask_PlayOpportunityAnimation_eventSetAdditionalSceneActors_Parms
	{
		TMap<FName,AActor*> ActorMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Adds additional actors to the map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Adds additional actors to the map." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::NewProp_ActorMap_ValueProp = { "ActorMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::NewProp_ActorMap_Key_KeyProp = { "ActorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::NewProp_ActorMap = { "ActorMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayOpportunityAnimation_eventSetAdditionalSceneActors_Parms, ActorMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::NewProp_ActorMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::NewProp_ActorMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::NewProp_ActorMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, nullptr, "SetAdditionalSceneActors", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::AbilityTask_PlayOpportunityAnimation_eventSetAdditionalSceneActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::AbilityTask_PlayOpportunityAnimation_eventSetAdditionalSceneActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayOpportunityAnimation::execSetAdditionalSceneActors)
{
	P_GET_TMAP(FName,AActor*,Z_Param_ActorMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAdditionalSceneActors(Z_Param_ActorMap);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayOpportunityAnimation Function SetAdditionalSceneActors

// Begin Class UAbilityTask_PlayOpportunityAnimation
void UAbilityTask_PlayOpportunityAnimation::StaticRegisterNativesUAbilityTask_PlayOpportunityAnimation()
{
	UClass* Class = UAbilityTask_PlayOpportunityAnimation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTask", &UAbilityTask_PlayOpportunityAnimation::execCreateTask },
		{ "HandleAvatarJoinedScene", &UAbilityTask_PlayOpportunityAnimation::execHandleAvatarJoinedScene },
		{ "HandleAvatarLeftScene", &UAbilityTask_PlayOpportunityAnimation::execHandleAvatarLeftScene },
		{ "HandleSceneFailed", &UAbilityTask_PlayOpportunityAnimation::execHandleSceneFailed },
		{ "SetAdditionalSceneActors", &UAbilityTask_PlayOpportunityAnimation::execSetAdditionalSceneActors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_PlayOpportunityAnimation);
UClass* Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_NoRegister()
{
	return UAbilityTask_PlayOpportunityAnimation::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Plays a Contextual Animation for an Opportunity Attack.\n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Plays a Contextual Animation for an Opportunity Attack." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinedScene_MetaData[] = {
		{ "Comment", "/** Broadcasts an actor that joined the scene. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Broadcasts an actor that joined the scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftScene_MetaData[] = {
		{ "Comment", "/** Broadcasts an actor that has left the scene. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Broadcasts an actor that has left the scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneFailed_MetaData[] = {
		{ "Comment", "/** The Scene has failed to play. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "The Scene has failed to play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[] = {
		{ "Comment", "/** Anim Scene that manages the contextual animation. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Anim Scene that manages the contextual animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[] = {
		{ "Comment", "/** Actor that will play the Attacker role in the scene. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Actor that will play the Attacker role in the scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Victim_MetaData[] = {
		{ "Comment", "/** Actor that will play the Victim role in the scene. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "Actor that will play the Victim role in the scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSceneActors_MetaData[] = {
		{ "Comment", "/** A map of roles and additional actors that will also join the scene. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayOpportunityAnimation.h" },
		{ "ToolTip", "A map of roles and additional actors that will also join the scene." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinedScene;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftScene;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSceneFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalSceneActors_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AdditionalSceneActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AdditionalSceneActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_CreateTask, "CreateTask" }, // 3993749883
		{ &Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarJoinedScene, "HandleAvatarJoinedScene" }, // 681742246
		{ &Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleAvatarLeftScene, "HandleAvatarLeftScene" }, // 4238765468
		{ &Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_HandleSceneFailed, "HandleSceneFailed" }, // 2234553786
		{ &Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature, "OpportunityAnimationEvent__DelegateSignature" }, // 4091909241
		{ &Z_Construct_UFunction_UAbilityTask_PlayOpportunityAnimation_SetAdditionalSceneActors, "SetAdditionalSceneActors" }, // 1538082027
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PlayOpportunityAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_OnJoinedScene = { "OnJoinedScene", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, OnJoinedScene), Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnJoinedScene_MetaData), NewProp_OnJoinedScene_MetaData) }; // 4091909241
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_OnLeftScene = { "OnLeftScene", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, OnLeftScene), Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLeftScene_MetaData), NewProp_OnLeftScene_MetaData) }; // 4091909241
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_OnSceneFailed = { "OnSceneFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, OnSceneFailed), Z_Construct_UDelegateFunction_UAbilityTask_PlayOpportunityAnimation_OpportunityAnimationEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSceneFailed_MetaData), NewProp_OnSceneFailed_MetaData) }; // 4091909241
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneAsset_MetaData), NewProp_SceneAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attacker_MetaData), NewProp_Attacker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, Victim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Victim_MetaData), NewProp_Victim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_AdditionalSceneActors_ValueProp = { "AdditionalSceneActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_AdditionalSceneActors_Key_KeyProp = { "AdditionalSceneActors_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_AdditionalSceneActors = { "AdditionalSceneActors", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayOpportunityAnimation, AdditionalSceneActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalSceneActors_MetaData), NewProp_AdditionalSceneActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_OnJoinedScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_OnLeftScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_OnSceneFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_SceneAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_AdditionalSceneActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_AdditionalSceneActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::NewProp_AdditionalSceneActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::ClassParams = {
	&UAbilityTask_PlayOpportunityAnimation::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_PlayOpportunityAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_PlayOpportunityAnimation.OuterSingleton, Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_PlayOpportunityAnimation.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_PlayOpportunityAnimation>()
{
	return UAbilityTask_PlayOpportunityAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PlayOpportunityAnimation);
UAbilityTask_PlayOpportunityAnimation::~UAbilityTask_PlayOpportunityAnimation() {}
// End Class UAbilityTask_PlayOpportunityAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayOpportunityAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation, UAbilityTask_PlayOpportunityAnimation::StaticClass, TEXT("UAbilityTask_PlayOpportunityAnimation"), &Z_Registration_Info_UClass_UAbilityTask_PlayOpportunityAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_PlayOpportunityAnimation), 3526335147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayOpportunityAnimation_h_3533240859(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayOpportunityAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayOpportunityAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
