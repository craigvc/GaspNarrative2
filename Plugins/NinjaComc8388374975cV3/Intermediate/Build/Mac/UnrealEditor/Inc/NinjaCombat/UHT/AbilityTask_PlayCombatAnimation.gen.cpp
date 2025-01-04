// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PlayCombatAnimation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_PlayMontageAndWait();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_PlayCombatAnimation();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAnimationTaskInterface_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UAbilityTask_PlayCombatAnimation Function CreatePlayCombatAnimationProxy
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics
{
	struct AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms
	{
		UGameplayAbility* InOwningAbility;
		FName InTaskInstanceName;
		UAnimMontage* InMontageToPlay;
		float InRate;
		FName InStartSection;
		bool bInStopWhenAbilityEnds;
		float InAnimRootMotionTranslationScale;
		float InStartTimeSeconds;
		bool bInAllowInterruptAfterBlendOut;
		UAbilityTask_PlayCombatAnimation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Initializes the combat-specific Animation Montage Task.\n\x09 */" },
		{ "CPP_Default_bInAllowInterruptAfterBlendOut", "false" },
		{ "CPP_Default_bInStopWhenAbilityEnds", "true" },
		{ "CPP_Default_InAnimRootMotionTranslationScale", "1.000000" },
		{ "CPP_Default_InRate", "1.000000" },
		{ "CPP_Default_InStartSection", "None" },
		{ "CPP_Default_InStartTimeSeconds", "0.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "DisplayName", "PlayMontageAndWait" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Initializes the combat-specific Animation Montage Task." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwningAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InTaskInstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InStartSection;
	static void NewProp_bInStopWhenAbilityEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInStopWhenAbilityEnds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAnimRootMotionTranslationScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTimeSeconds;
	static void NewProp_bInAllowInterruptAfterBlendOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowInterruptAfterBlendOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InOwningAbility = { "InOwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InOwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InTaskInstanceName = { "InTaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InTaskInstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InMontageToPlay = { "InMontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InMontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InStartSection = { "InStartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InStartSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInStopWhenAbilityEnds_SetBit(void* Obj)
{
	((AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms*)Obj)->bInStopWhenAbilityEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInStopWhenAbilityEnds = { "bInStopWhenAbilityEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms), &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInStopWhenAbilityEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InAnimRootMotionTranslationScale = { "InAnimRootMotionTranslationScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InAnimRootMotionTranslationScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InStartTimeSeconds = { "InStartTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, InStartTimeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInAllowInterruptAfterBlendOut_SetBit(void* Obj)
{
	((AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms*)Obj)->bInAllowInterruptAfterBlendOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInAllowInterruptAfterBlendOut = { "bInAllowInterruptAfterBlendOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms), &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInAllowInterruptAfterBlendOut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InOwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InTaskInstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InMontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InStartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInStopWhenAbilityEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InAnimRootMotionTranslationScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_InStartTimeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_bInAllowInterruptAfterBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "CreatePlayCombatAnimationProxy", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::AbilityTask_PlayCombatAnimation_eventCreatePlayCombatAnimationProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execCreatePlayCombatAnimationProxy)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_InOwningAbility);
	P_GET_PROPERTY(FNameProperty,Z_Param_InTaskInstanceName);
	P_GET_OBJECT(UAnimMontage,Z_Param_InMontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_InStartSection);
	P_GET_UBOOL(Z_Param_bInStopWhenAbilityEnds);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAnimRootMotionTranslationScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTimeSeconds);
	P_GET_UBOOL(Z_Param_bInAllowInterruptAfterBlendOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_PlayCombatAnimation**)Z_Param__Result=UAbilityTask_PlayCombatAnimation::CreatePlayCombatAnimationProxy(Z_Param_InOwningAbility,Z_Param_InTaskInstanceName,Z_Param_InMontageToPlay,Z_Param_InRate,Z_Param_InStartSection,Z_Param_bInStopWhenAbilityEnds,Z_Param_InAnimRootMotionTranslationScale,Z_Param_InStartTimeSeconds,Z_Param_bInAllowInterruptAfterBlendOut);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function CreatePlayCombatAnimationProxy

// Begin Class UAbilityTask_PlayCombatAnimation Function GetAnimInstance
struct AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms
{
	UGameplayAbility* GameplayAbility;
	UAnimInstance* ReturnValue;

	/** Constructor, initializes return property only **/
	AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UAbilityTask_PlayCombatAnimation_GetAnimInstance = FName(TEXT("GetAnimInstance"));
UAnimInstance* UAbilityTask_PlayCombatAnimation::GetAnimInstance(UGameplayAbility* GameplayAbility) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAbilityTask_PlayCombatAnimation_GetAnimInstance);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms Parms;
		Parms.GameplayAbility=GameplayAbility;
		const_cast<UAbilityTask_PlayCombatAnimation*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAbilityTask_PlayCombatAnimation*>(this)->GetAnimInstance_Implementation(GameplayAbility);
	}
}
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation" },
		{ "Comment", "/**\n\x09 * Provides the Animation Instance for the Gameplay Ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Provides the Animation Instance for the Gameplay Ability." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameplayAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::NewProp_GameplayAbility = { "GameplayAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms, GameplayAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::NewProp_GameplayAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "GetAnimInstance", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::PropPointers), sizeof(AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(AbilityTask_PlayCombatAnimation_eventGetAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execGetAnimInstance)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_GameplayAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstance_Implementation(Z_Param_GameplayAbility);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function GetAnimInstance

// Begin Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationBlendOut
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Forwards the original \"Blend Out\" event to the combat one. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Forwards the original \"Blend Out\" event to the combat one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "HandleOriginalAnimationBlendOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationBlendOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOriginalAnimationBlendOut();
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationBlendOut

// Begin Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationCancelled
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Forwards the original \"Cancelled\" event to the combat one. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Forwards the original \"Cancelled\" event to the combat one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "HandleOriginalAnimationCancelled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationCancelled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOriginalAnimationCancelled();
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationCancelled

// Begin Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationCompleted
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Forwards the original \"Completed\" event to the combat one. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Forwards the original \"Completed\" event to the combat one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "HandleOriginalAnimationCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOriginalAnimationCompleted();
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationCompleted

// Begin Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationInterrupted
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Forwards the original \"Interrupted\" event to the combat one. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Forwards the original \"Interrupted\" event to the combat one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "HandleOriginalAnimationInterrupted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationInterrupted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOriginalAnimationInterrupted();
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function HandleOriginalAnimationInterrupted

// Begin Class UAbilityTask_PlayCombatAnimation Function HasSection
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics
{
	struct AbilityTask_PlayCombatAnimation_eventHasSection_Parms
	{
		FName SectionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Tasks" },
		{ "Comment", "/**\n\x09 * Checks if the animation has a section by name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Checks if the animation has a section by name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventHasSection_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityTask_PlayCombatAnimation_eventHasSection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_PlayCombatAnimation_eventHasSection_Parms), &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "HasSection", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::AbilityTask_PlayCombatAnimation_eventHasSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::AbilityTask_PlayCombatAnimation_eventHasSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execHasSection)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSection(Z_Param_SectionName);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function HasSection

// Begin Class UAbilityTask_PlayCombatAnimation Function MoveToSection
struct Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics
{
	struct AbilityTask_PlayCombatAnimation_eventMoveToSection_Parms
	{
		FName SectionName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Tasks" },
		{ "Comment", "/**\n\x09 * Moves the internal animation to a specific section, if applicable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Moves the internal animation to a specific section, if applicable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_PlayCombatAnimation_eventMoveToSection_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::NewProp_SectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, nullptr, "MoveToSection", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::AbilityTask_PlayCombatAnimation_eventMoveToSection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::AbilityTask_PlayCombatAnimation_eventMoveToSection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_PlayCombatAnimation::execMoveToSection)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToSection(Z_Param_SectionName);
	P_NATIVE_END;
}
// End Class UAbilityTask_PlayCombatAnimation Function MoveToSection

// Begin Class UAbilityTask_PlayCombatAnimation
void UAbilityTask_PlayCombatAnimation::StaticRegisterNativesUAbilityTask_PlayCombatAnimation()
{
	UClass* Class = UAbilityTask_PlayCombatAnimation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePlayCombatAnimationProxy", &UAbilityTask_PlayCombatAnimation::execCreatePlayCombatAnimationProxy },
		{ "GetAnimInstance", &UAbilityTask_PlayCombatAnimation::execGetAnimInstance },
		{ "HandleOriginalAnimationBlendOut", &UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationBlendOut },
		{ "HandleOriginalAnimationCancelled", &UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationCancelled },
		{ "HandleOriginalAnimationCompleted", &UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationCompleted },
		{ "HandleOriginalAnimationInterrupted", &UAbilityTask_PlayCombatAnimation::execHandleOriginalAnimationInterrupted },
		{ "HasSection", &UAbilityTask_PlayCombatAnimation::execHasSection },
		{ "MoveToSection", &UAbilityTask_PlayCombatAnimation::execMoveToSection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_PlayCombatAnimation);
UClass* Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_NoRegister()
{
	return UAbilityTask_PlayCombatAnimation::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialized version of the default Play Montage And Wait task.\n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
		{ "ToolTip", "Specialized version of the default Play Montage And Wait task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatAnimationCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatAnimationBlendOut_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatAnimationCancelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatAnimationInterrupted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_PlayCombatAnimation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatAnimationCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatAnimationBlendOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatAnimationCancelled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatAnimationInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_CreatePlayCombatAnimationProxy, "CreatePlayCombatAnimationProxy" }, // 2602863391
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_GetAnimInstance, "GetAnimInstance" }, // 3635823645
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationBlendOut, "HandleOriginalAnimationBlendOut" }, // 1204615057
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCancelled, "HandleOriginalAnimationCancelled" }, // 706362119
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationCompleted, "HandleOriginalAnimationCompleted" }, // 1773849779
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HandleOriginalAnimationInterrupted, "HandleOriginalAnimationInterrupted" }, // 310942546
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_HasSection, "HasSection" }, // 2246087625
		{ &Z_Construct_UFunction_UAbilityTask_PlayCombatAnimation_MoveToSection, "MoveToSection" }, // 2890621460
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PlayCombatAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationCompleted = { "OnCombatAnimationCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayCombatAnimation, OnCombatAnimationCompleted), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatAnimationCompleted_MetaData), NewProp_OnCombatAnimationCompleted_MetaData) }; // 2432680255
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationBlendOut = { "OnCombatAnimationBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayCombatAnimation, OnCombatAnimationBlendOut), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatAnimationBlendOut_MetaData), NewProp_OnCombatAnimationBlendOut_MetaData) }; // 2432680255
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationCancelled = { "OnCombatAnimationCancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayCombatAnimation, OnCombatAnimationCancelled), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatAnimationCancelled_MetaData), NewProp_OnCombatAnimationCancelled_MetaData) }; // 2432680255
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationInterrupted = { "OnCombatAnimationInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_PlayCombatAnimation, OnCombatAnimationInterrupted), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatAnimationInterrupted_MetaData), NewProp_OnCombatAnimationInterrupted_MetaData) }; // 2432680255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::NewProp_OnCombatAnimationInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask_PlayMontageAndWait,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatAnimationTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UAbilityTask_PlayCombatAnimation, ICombatAnimationTaskInterface), false },  // 2729625103
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::ClassParams = {
	&UAbilityTask_PlayCombatAnimation::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_PlayCombatAnimation()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_PlayCombatAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_PlayCombatAnimation.OuterSingleton, Z_Construct_UClass_UAbilityTask_PlayCombatAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_PlayCombatAnimation.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_PlayCombatAnimation>()
{
	return UAbilityTask_PlayCombatAnimation::StaticClass();
}
UAbilityTask_PlayCombatAnimation::UAbilityTask_PlayCombatAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PlayCombatAnimation);
UAbilityTask_PlayCombatAnimation::~UAbilityTask_PlayCombatAnimation() {}
// End Class UAbilityTask_PlayCombatAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_PlayCombatAnimation, UAbilityTask_PlayCombatAnimation::StaticClass, TEXT("UAbilityTask_PlayCombatAnimation"), &Z_Registration_Info_UClass_UAbilityTask_PlayCombatAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_PlayCombatAnimation), 2270600195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_3411686253(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_PlayCombatAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
