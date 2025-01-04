// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "GameplayTargetingSystem/Public/Types/TargetingSystemTypes.h"
#include "NinjaCombatCamera/Public/Types/FCombatCameraAnimationParameters.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_OpportunityAttack() {}

// Begin Cross Module References
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister();
CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_SpawnProjectile_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_OpportunityAttack();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_OpportunityAttack_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAttackAbilityInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister();
NINJACOMBATCAMERA_API UClass* Z_Construct_UClass_ANinjaCombatCameraAnchorActor_NoRegister();
NINJACOMBATCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCombatCameraAnimationParameters();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_OpportunityAttack Function ApplyOpportunityGameplayEffects
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics
{
	struct CombatAbility_OpportunityAttack_eventApplyOpportunityGameplayEffects_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Applies the Gameplay Effects to the avatar and current target.\n\x09 * Returns true if both Gameplay Effects were successfully applied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Applies the Gameplay Effects to the avatar and current target.\nReturns true if both Gameplay Effects were successfully applied." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_OpportunityAttack_eventApplyOpportunityGameplayEffects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_OpportunityAttack_eventApplyOpportunityGameplayEffects_Parms), &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "ApplyOpportunityGameplayEffects", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::CombatAbility_OpportunityAttack_eventApplyOpportunityGameplayEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::CombatAbility_OpportunityAttack_eventApplyOpportunityGameplayEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execApplyOpportunityGameplayEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyOpportunityGameplayEffects();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function ApplyOpportunityGameplayEffects

// Begin Class UCombatAbility_OpportunityAttack Function BuildCameraAnimationParameters
struct CombatAbility_OpportunityAttack_eventBuildCameraAnimationParameters_Parms
{
	FCombatCameraAnimationParameters ReturnValue;
};
static const FName NAME_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters = FName(TEXT("BuildCameraAnimationParameters"));
FCombatCameraAnimationParameters UCombatAbility_OpportunityAttack::BuildCameraAnimationParameters() const
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_OpportunityAttack_eventBuildCameraAnimationParameters_Parms Parms;
		const_cast<UCombatAbility_OpportunityAttack*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCombatAbility_OpportunityAttack*>(this)->BuildCameraAnimationParameters_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Builds the Camera Animation Parameters used with this Opportunity Attack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Builds the Camera Animation Parameters used with this Opportunity Attack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventBuildCameraAnimationParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FCombatCameraAnimationParameters, METADATA_PARAMS(0, nullptr) }; // 1791019398
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "BuildCameraAnimationParameters", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::PropPointers), sizeof(CombatAbility_OpportunityAttack_eventBuildCameraAnimationParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_OpportunityAttack_eventBuildCameraAnimationParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execBuildCameraAnimationParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCombatCameraAnimationParameters*)Z_Param__Result=P_THIS->BuildCameraAnimationParameters_Implementation();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function BuildCameraAnimationParameters

// Begin Class UCombatAbility_OpportunityAttack Function CollectAdditionalSceneActors
struct CombatAbility_OpportunityAttack_eventCollectAdditionalSceneActors_Parms
{
	TMap<FName,AActor*> ReturnValue;
};
static const FName NAME_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors = FName(TEXT("CollectAdditionalSceneActors"));
TMap<FName,AActor*> UCombatAbility_OpportunityAttack::CollectAdditionalSceneActors()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_OpportunityAttack_eventCollectAdditionalSceneActors_Parms Parms;
	ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return CollectAdditionalSceneActors_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Collects any additional actors that should join the scene.\n\x09 * This excludes the Attacker and Victim roles.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A map with role names and actors that should be added to the scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Collects any additional actors that should join the scene.\nThis excludes the Attacker and Victim roles.\n\n@return\n             A map with role names and actors that should be added to the scene." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventCollectAdditionalSceneActors_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "CollectAdditionalSceneActors", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::PropPointers), sizeof(CombatAbility_OpportunityAttack_eventCollectAdditionalSceneActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_OpportunityAttack_eventCollectAdditionalSceneActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execCollectAdditionalSceneActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,AActor*>*)Z_Param__Result=P_THIS->CollectAdditionalSceneActors_Implementation();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function CollectAdditionalSceneActors

// Begin Class UCombatAbility_OpportunityAttack Function ConfigureAndPlayCameraAnimation
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Plays the Camera Animation configured in this class, for the local player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Plays the Camera Animation configured in this class, for the local player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "ConfigureAndPlayCameraAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execConfigureAndPlayCameraAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureAndPlayCameraAnimation();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function ConfigureAndPlayCameraAnimation

// Begin Class UCombatAbility_OpportunityAttack Function CreateSpecHandleForOpportunityHit
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics
{
	struct CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms
	{
		AActor* EffectCauser;
		const TSubclassOf<UGameplayEffect> DamageEffectClass;
		FGameplayEffectSpecHandle OutHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Creates an effect spec for an opportunity attack hit.\n\x09 *\n\x09 * @param EffectCauser\x09\x09\x09""Causer for the damage.\n\x09 * @param DamageEffectClass\x09\x09Gameplay Effect applied as damage.\n\x09 * @param OutHandle\x09\x09\x09\x09The handle generated by the method.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if a valid handle was created.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Creates an effect spec for an opportunity attack hit.\n\n@param EffectCauser                  Causer for the damage.\n@param DamageEffectClass             Gameplay Effect applied as damage.\n@param OutHandle                             The handle generated by the method.\n@return                                              True if a valid handle was created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEffectClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectCauser;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageEffectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_EffectCauser = { "EffectCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms, EffectCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_DamageEffectClass = { "DamageEffectClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms, DamageEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEffectClass_MetaData), NewProp_DamageEffectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms, OutHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
void Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms), &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_EffectCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_DamageEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "CreateSpecHandleForOpportunityHit", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::CombatAbility_OpportunityAttack_eventCreateSpecHandleForOpportunityHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execCreateSpecHandleForOpportunityHit)
{
	P_GET_OBJECT(AActor,Z_Param_EffectCauser);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UGameplayEffect>,Z_Param_Out_DamageEffectClass);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateSpecHandleForOpportunityHit(Z_Param_EffectCauser,Z_Param_Out_DamageEffectClass,Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function CreateSpecHandleForOpportunityHit

// Begin Class UCombatAbility_OpportunityAttack Function ExecuteOpportunityAttack
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Starts the Opportunity Attack against a given Target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Starts the Opportunity Attack against a given Target." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "ExecuteOpportunityAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execExecuteOpportunityAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteOpportunityAttack();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function ExecuteOpportunityAttack

// Begin Class UCombatAbility_OpportunityAttack Function GetCurrentVictim
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics
{
	struct CombatAbility_OpportunityAttack_eventGetCurrentVictim_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the current victim.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""Current target/victim for this opportunity. Only available if the ability\n\x09 *\x09\x09is currently executing, otherwise it will always be null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Provides the current victim.\n\n@return\n             Current target/victim for this opportunity. Only available if the ability\n             is currently executing, otherwise it will always be null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventGetCurrentVictim_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "GetCurrentVictim", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::CombatAbility_OpportunityAttack_eventGetCurrentVictim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::CombatAbility_OpportunityAttack_eventGetCurrentVictim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execGetCurrentVictim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCurrentVictim();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function GetCurrentVictim

// Begin Class UCombatAbility_OpportunityAttack Function GetPlayerController
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics
{
	struct CombatAbility_OpportunityAttack_eventGetPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Player Controller from the Actor Info.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The Player Controller stored in the Actor Info. Should not be null in this\n\x09 *\x09\x09""Ability/Combat System context, at least in the way is set up out-of-the-box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Provides the Player Controller from the Actor Info.\n\n@return\n             The Player Controller stored in the Actor Info. Should not be null in this\n             Ability/Combat System context, at least in the way is set up out-of-the-box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "GetPlayerController", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::CombatAbility_OpportunityAttack_eventGetPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::CombatAbility_OpportunityAttack_eventGetPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execGetPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function GetPlayerController

// Begin Class UCombatAbility_OpportunityAttack Function HandleAvatarLeftScene
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics
{
	struct CombatAbility_OpportunityAttack_eventHandleAvatarLeftScene_Parms
	{
		UContextualAnimSceneActorComponent* SceneActorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * The Avatar has left the Animation Scene and the ability should be cancelled.\n\x09 * Most likely due to the animation being finished, but some games may allow interruptions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "The Avatar has left the Animation Scene and the ability should be cancelled.\nMost likely due to the animation being finished, but some games may allow interruptions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::NewProp_SceneActorComponent = { "SceneActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventHandleAvatarLeftScene_Parms, SceneActorComponent), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneActorComponent_MetaData), NewProp_SceneActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::NewProp_SceneActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HandleAvatarLeftScene", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::CombatAbility_OpportunityAttack_eventHandleAvatarLeftScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::CombatAbility_OpportunityAttack_eventHandleAvatarLeftScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHandleAvatarLeftScene)
{
	P_GET_OBJECT(UContextualAnimSceneActorComponent,Z_Param_SceneActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAvatarLeftScene(Z_Param_SceneActorComponent);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HandleAvatarLeftScene

// Begin Class UCombatAbility_OpportunityAttack Function HandleMeleeScanTargetsReceived
struct CombatAbility_OpportunityAttack_eventHandleMeleeScanTargetsReceived_Parms
{
	const UNinjaCombatMeleeScan* MeleeScan;
	FGameplayAbilityTargetDataHandle Data;
};
static const FName NAME_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived = FName(TEXT("HandleMeleeScanTargetsReceived"));
void UCombatAbility_OpportunityAttack::HandleMeleeScanTargetsReceived(const UNinjaCombatMeleeScan* MeleeScan, FGameplayAbilityTargetDataHandle const& Data)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_OpportunityAttack_eventHandleMeleeScanTargetsReceived_Parms Parms;
		Parms.MeleeScan=MeleeScan;
		Parms.Data=Data;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleMeleeScanTargetsReceived_Implementation(MeleeScan, Data);
	}
}
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Handles targets received from a melee scan.\n\x09 * \n\x09 * @param MeleeScan\x09\x09Information about the scan that generated hits.\n\x09 * @param Data\x09\x09\x09Target data received from the scan.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Handles targets received from a melee scan.\n\n@param MeleeScan             Information about the scan that generated hits.\n@param Data                  Target data received from the scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScan_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::NewProp_MeleeScan = { "MeleeScan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventHandleMeleeScanTargetsReceived_Parms, MeleeScan), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScan_MetaData), NewProp_MeleeScan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventHandleMeleeScanTargetsReceived_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::NewProp_MeleeScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HandleMeleeScanTargetsReceived", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::PropPointers), sizeof(CombatAbility_OpportunityAttack_eventHandleMeleeScanTargetsReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_OpportunityAttack_eventHandleMeleeScanTargetsReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHandleMeleeScanTargetsReceived)
{
	P_GET_OBJECT(UNinjaCombatMeleeScan,Z_Param_MeleeScan);
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMeleeScanTargetsReceived_Implementation(Z_Param_MeleeScan,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HandleMeleeScanTargetsReceived

// Begin Class UCombatAbility_OpportunityAttack Function HandleOpportunityAttackStarting
static const FName NAME_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting = FName(TEXT("HandleOpportunityAttackStarting"));
void UCombatAbility_OpportunityAttack::HandleOpportunityAttackStarting()
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		HandleOpportunityAttackStarting_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Opportunity Attack" },
		{ "Comment", "/**\n\x09 * An extension point invoked when the opportunity attack is about to start.\n\x09 * Make sure to call the parent function when adding your own logic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "An extension point invoked when the opportunity attack is about to start.\nMake sure to call the parent function when adding your own logic." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HandleOpportunityAttackStarting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHandleOpportunityAttackStarting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOpportunityAttackStarting_Implementation();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HandleOpportunityAttackStarting

// Begin Class UCombatAbility_OpportunityAttack Function HandleProjectileLaunched
struct CombatAbility_OpportunityAttack_eventHandleProjectileLaunched_Parms
{
	const UNinjaCombatProjectileRequest* Request;
	AActor* Projectile;
};
static const FName NAME_UCombatAbility_OpportunityAttack_HandleProjectileLaunched = FName(TEXT("HandleProjectileLaunched"));
void UCombatAbility_OpportunityAttack::HandleProjectileLaunched(const UNinjaCombatProjectileRequest* Request, AActor* Projectile)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_OpportunityAttack_HandleProjectileLaunched);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_OpportunityAttack_eventHandleProjectileLaunched_Parms Parms;
		Parms.Request=Request;
		Parms.Projectile=Projectile;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleProjectileLaunched_Implementation(Request, Projectile);
	}
}
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Handles a projectile created by the combat system.\n\x09 * \n\x09 * @param Request\x09\x09Request that originated the projectile.\n\x09 * @param Projectile\x09""Actor implementing the Projectile interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Handles a projectile created by the combat system.\n\n@param Request               Request that originated the projectile.\n@param Projectile    Actor implementing the Projectile interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Request;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventHandleProjectileLaunched_Parms, Request), Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Request_MetaData), NewProp_Request_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventHandleProjectileLaunched_Parms, Projectile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::NewProp_Request,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::NewProp_Projectile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HandleProjectileLaunched", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::PropPointers), sizeof(CombatAbility_OpportunityAttack_eventHandleProjectileLaunched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_OpportunityAttack_eventHandleProjectileLaunched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHandleProjectileLaunched)
{
	P_GET_OBJECT(UNinjaCombatProjectileRequest,Z_Param_Request);
	P_GET_OBJECT(AActor,Z_Param_Projectile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleProjectileLaunched_Implementation(Z_Param_Request,Z_Param_Projectile);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HandleProjectileLaunched

// Begin Class UCombatAbility_OpportunityAttack Function HandleTargetReady
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics
{
	struct CombatAbility_OpportunityAttack_eventHandleTargetReady_Parms
	{
		FTargetingRequestHandle TargetingRequestHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * The targeting task has finished, and we can access its results.\n\x09 * If there is a target, then apply the Gameplay Effects and play the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "The targeting task has finished, and we can access its results.\nIf there is a target, then apply the Gameplay Effects and play the animation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingRequestHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::NewProp_TargetingRequestHandle = { "TargetingRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventHandleTargetReady_Parms, TargetingRequestHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(0, nullptr) }; // 1432709645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::NewProp_TargetingRequestHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HandleTargetReady", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::CombatAbility_OpportunityAttack_eventHandleTargetReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::CombatAbility_OpportunityAttack_eventHandleTargetReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHandleTargetReady)
{
	P_GET_STRUCT(FTargetingRequestHandle,Z_Param_TargetingRequestHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetReady(Z_Param_TargetingRequestHandle);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HandleTargetReady

// Begin Class UCombatAbility_OpportunityAttack Function HandleVictimDeath
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * If the victim was killed by this ability, then we need to handle that.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "If the victim was killed by this ability, then we need to handle that." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HandleVictimDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHandleVictimDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleVictimDeath();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HandleVictimDeath

// Begin Class UCombatAbility_OpportunityAttack Function HasVictim
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics
{
	struct CombatAbility_OpportunityAttack_eventHasVictim_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Checks if there is a current, valid victim for this attack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Checks if there is a current, valid victim for this attack." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_OpportunityAttack_eventHasVictim_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_OpportunityAttack_eventHasVictim_Parms), &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "HasVictim", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::CombatAbility_OpportunityAttack_eventHasVictim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::CombatAbility_OpportunityAttack_eventHasVictim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execHasVictim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasVictim();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function HasVictim

// Begin Class UCombatAbility_OpportunityAttack Function InitializeMeleeScanTask
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics
{
	struct CombatAbility_OpportunityAttack_eventInitializeMeleeScanTask_Parms
	{
		const UNinjaCombatMeleeScan* MeleeScan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Handles the initialization of the melee scan task. It won't be active yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Handles the initialization of the melee scan task. It won't be active yet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::NewProp_MeleeScan = { "MeleeScan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventInitializeMeleeScanTask_Parms, MeleeScan), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScan_MetaData), NewProp_MeleeScan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::NewProp_MeleeScan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "InitializeMeleeScanTask", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::CombatAbility_OpportunityAttack_eventInitializeMeleeScanTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::CombatAbility_OpportunityAttack_eventInitializeMeleeScanTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execInitializeMeleeScanTask)
{
	P_GET_OBJECT(UNinjaCombatMeleeScan,Z_Param_MeleeScan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeMeleeScanTask(Z_Param_MeleeScan);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function InitializeMeleeScanTask

// Begin Class UCombatAbility_OpportunityAttack Function InitializeProjectileTask
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics
{
	struct CombatAbility_OpportunityAttack_eventInitializeProjectileTask_Parms
	{
		const UNinjaCombatProjectileRequest* ProjectileRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Handles the initialization of the spawn projectile task. It won't be active yet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Handles the initialization of the spawn projectile task. It won't be active yet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::NewProp_ProjectileRequest = { "ProjectileRequest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_OpportunityAttack_eventInitializeProjectileTask_Parms, ProjectileRequest), Z_Construct_UClass_UNinjaCombatProjectileRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileRequest_MetaData), NewProp_ProjectileRequest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::NewProp_ProjectileRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "InitializeProjectileTask", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::CombatAbility_OpportunityAttack_eventInitializeProjectileTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::CombatAbility_OpportunityAttack_eventInitializeProjectileTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execInitializeProjectileTask)
{
	P_GET_OBJECT(UNinjaCombatProjectileRequest,Z_Param_ProjectileRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeProjectileTask(Z_Param_ProjectileRequest);
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function InitializeProjectileTask

// Begin Class UCombatAbility_OpportunityAttack Function LockTarget
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Locks to the current target, if the victim is still valid and alive.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Locks to the current target, if the victim is still valid and alive." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "LockTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execLockTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LockTarget();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function LockTarget

// Begin Class UCombatAbility_OpportunityAttack Function RemoveOpportunityGameplayEffects
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Removes the Opportunity Effects and resets the handles.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Removes the Opportunity Effects and resets the handles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "RemoveOpportunityGameplayEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execRemoveOpportunityGameplayEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveOpportunityGameplayEffects();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function RemoveOpportunityGameplayEffects

// Begin Class UCombatAbility_OpportunityAttack Function StopCameraAnimation
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Stops the current Camera animation, for the local player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Stops the current Camera animation, for the local player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "StopCameraAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execStopCameraAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCameraAnimation();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function StopCameraAnimation

// Begin Class UCombatAbility_OpportunityAttack Function UnlockTarget
struct Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Unlocks from the current target, via the appropriate Combat Event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Unlocks from the current target, via the appropriate Combat Event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_OpportunityAttack, nullptr, "UnlockTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_OpportunityAttack::execUnlockTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlockTarget();
	P_NATIVE_END;
}
// End Class UCombatAbility_OpportunityAttack Function UnlockTarget

// Begin Class UCombatAbility_OpportunityAttack
void UCombatAbility_OpportunityAttack::StaticRegisterNativesUCombatAbility_OpportunityAttack()
{
	UClass* Class = UCombatAbility_OpportunityAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyOpportunityGameplayEffects", &UCombatAbility_OpportunityAttack::execApplyOpportunityGameplayEffects },
		{ "BuildCameraAnimationParameters", &UCombatAbility_OpportunityAttack::execBuildCameraAnimationParameters },
		{ "CollectAdditionalSceneActors", &UCombatAbility_OpportunityAttack::execCollectAdditionalSceneActors },
		{ "ConfigureAndPlayCameraAnimation", &UCombatAbility_OpportunityAttack::execConfigureAndPlayCameraAnimation },
		{ "CreateSpecHandleForOpportunityHit", &UCombatAbility_OpportunityAttack::execCreateSpecHandleForOpportunityHit },
		{ "ExecuteOpportunityAttack", &UCombatAbility_OpportunityAttack::execExecuteOpportunityAttack },
		{ "GetCurrentVictim", &UCombatAbility_OpportunityAttack::execGetCurrentVictim },
		{ "GetPlayerController", &UCombatAbility_OpportunityAttack::execGetPlayerController },
		{ "HandleAvatarLeftScene", &UCombatAbility_OpportunityAttack::execHandleAvatarLeftScene },
		{ "HandleMeleeScanTargetsReceived", &UCombatAbility_OpportunityAttack::execHandleMeleeScanTargetsReceived },
		{ "HandleOpportunityAttackStarting", &UCombatAbility_OpportunityAttack::execHandleOpportunityAttackStarting },
		{ "HandleProjectileLaunched", &UCombatAbility_OpportunityAttack::execHandleProjectileLaunched },
		{ "HandleTargetReady", &UCombatAbility_OpportunityAttack::execHandleTargetReady },
		{ "HandleVictimDeath", &UCombatAbility_OpportunityAttack::execHandleVictimDeath },
		{ "HasVictim", &UCombatAbility_OpportunityAttack::execHasVictim },
		{ "InitializeMeleeScanTask", &UCombatAbility_OpportunityAttack::execInitializeMeleeScanTask },
		{ "InitializeProjectileTask", &UCombatAbility_OpportunityAttack::execInitializeProjectileTask },
		{ "LockTarget", &UCombatAbility_OpportunityAttack::execLockTarget },
		{ "RemoveOpportunityGameplayEffects", &UCombatAbility_OpportunityAttack::execRemoveOpportunityGameplayEffects },
		{ "StopCameraAnimation", &UCombatAbility_OpportunityAttack::execStopCameraAnimation },
		{ "UnlockTarget", &UCombatAbility_OpportunityAttack::execUnlockTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_OpportunityAttack);
UClass* Z_Construct_UClass_UCombatAbility_OpportunityAttack_NoRegister()
{
	return UCombatAbility_OpportunityAttack::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Opportunity attack that uses paired animations, such as a Backstab, Execution or Riposte.\n *\n * These attacks are based on the Contextual Animation System (or CAS). It is used to orchestrate both animations,\n * where the Primary Actor is always the victim. This ability can obtain the \"victim\" using the same system\n * available for other attacks: the Target Provider.\n *\n * This ability is expected to have a base CAS, but victims can provide their own version if that's more suitable\n * to their skeleton, proportions or just dedicated animations. A specific CAS is obtained from the Victim via the\n * Combat Opportunity Target Interface.\n *\n * One CAS asset should represent a specific opportunity, albeit with multiple animations. It is paired with adequate\n * Gameplay Effects applied on both Attacker and Victim, so other systems can also react to it, for example: Other\n * abilities can be cancelled from the Gameplay Tags, the enemy AI can change state based on the Gameplay Effect, etc.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Opportunity attack that uses paired animations, such as a Backstab, Execution or Riposte.\n\nThese attacks are based on the Contextual Animation System (or CAS). It is used to orchestrate both animations,\nwhere the Primary Actor is always the victim. This ability can obtain the \"victim\" using the same system\navailable for other attacks: the Target Provider.\n\nThis ability is expected to have a base CAS, but victims can provide their own version if that's more suitable\nto their skeleton, proportions or just dedicated animations. A specific CAS is obtained from the Victim via the\nCombat Opportunity Target Interface.\n\nOne CAS asset should represent a specific opportunity, albeit with multiple animations. It is paired with adequate\nGameplay Effects applied on both Attacker and Victim, so other systems can also react to it, for example: Other\nabilities can be cancelled from the Gameplay Tags, the enemy AI can change state based on the Gameplay Effect, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * The targeting preset used to capture the actor in the \"Victim\" role.\n\x09 *\n\x09 * This preset can use many strategies, but most commonly shape collisions or acquiring\n\x09 * the current enemy target. Regardless, an important aspect to consider is checking for\n\x09 * Gameplay Tags that indicate that this target is in an opportunity state, whenever\n\x09 * applicable.\n\x09 *\n\x09 * Some opportunities will also require targets to be registered with the Combat Component,\n\x09 * so their opportunities are only available to specific attacker (or attackers). This is\n\x09 * also something that can be configured in the Targeting Preset, using the correct tasks.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "The targeting preset used to capture the actor in the \"Victim\" role.\n\nThis preset can use many strategies, but most commonly shape collisions or acquiring\nthe current enemy target. Regardless, an important aspect to consider is checking for\nGameplay Tags that indicate that this target is in an opportunity state, whenever\napplicable.\n\nSome opportunities will also require targets to be registered with the Combat Component,\nso their opportunities are only available to specific attacker (or attackers). This is\nalso something that can be configured in the Targeting Preset, using the correct tasks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextualAnimation_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Contextual Animation Asset used by this ability.\n\x09 *\n\x09 * If a specific one needs to be used for the current target, it can be provided via the\n\x09 * Combat Opportunity Target Interface. All Contextual Animation Assets must have the Victim\n\x09 * as the Primary Actor in the asset.\n\x09 *\n\x09 * Also, both participants must have the Contextual Anim Scene Actor Component added to them,\n\x09 * and the Attacker must also have a Motion Warping Component, and the Motion Warping Anim\n\x09 * State Notify configured.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Contextual Animation Asset used by this ability.\n\nIf a specific one needs to be used for the current target, it can be provided via the\nCombat Opportunity Target Interface. All Contextual Animation Assets must have the Victim\nas the Primary Actor in the asset.\n\nAlso, both participants must have the Contextual Anim Scene Actor Component added to them,\nand the Attacker must also have a Motion Warping Component, and the Motion Warping Anim\nState Notify configured." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraAnimation_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Optional Camera Animation that can be played along with the Contextual Animation.\n\x09 *\n\x09 * This requires a Player Camera Manager that implements the Combat Camera Manager interface.\n\x09 * The system provides a basic one, but any other implementation is valid, as long as it follows\n\x09 * this contract.\n\x09 *\n\x09 * The Camera Animation will always be deliberately finished along with the Contextual Animation\n\x09 * so make sure that you adjust both of these together in the Level Sequencer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Optional Camera Animation that can be played along with the Contextual Animation.\n\nThis requires a Player Camera Manager that implements the Combat Camera Manager interface.\nThe system provides a basic one, but any other implementation is valid, as long as it follows\nthis contract.\n\nThe Camera Animation will always be deliberately finished along with the Contextual Animation\nso make sure that you adjust both of these together in the Level Sequencer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraAnchorClass_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * An Actor with a Camera Component that will be used as an anchor/focal point for the Camera Animation.\n\x09 *\n\x09 * You can use the default one provided, which has a basic Camera Component, or if you are going for\n\x09 * something more cinematic, you can create your own actor, overriding the Camera Component with the\n\x09 * more elaborate Cine Camera.\n\x09 *\n\x09 * You can also extend the actor to handle more complex movement/camera adjustments, such as avoiding\n\x09 * collisions, adjust placement, camera settings, adding Post Process Effects, and so on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "An Actor with a Camera Component that will be used as an anchor/focal point for the Camera Animation.\n\nYou can use the default one provided, which has a basic Camera Component, or if you are going for\nsomething more cinematic, you can create your own actor, overriding the Camera Component with the\nmore elaborate Cine Camera.\n\nYou can also extend the actor to handle more complex movement/camera adjustments, such as avoiding\ncollisions, adjust placement, camera settings, adding Post Process Effects, and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackerStateClass_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Gameplay Effect for the state applied to the Attacker, while this attack is active.\n\x09 * \n\x09 * Can be used by other systems to determine if this attacker is available or not for certain\n\x09 * things. For example, a token system might stop AI Enemies to attack this target while an\n\x09 * Opportunity Attack is happening or other Gameplay Abilities or Effects might be interrupted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Gameplay Effect for the state applied to the Attacker, while this attack is active.\n\nCan be used by other systems to determine if this attacker is available or not for certain\nthings. For example, a token system might stop AI Enemies to attack this target while an\nOpportunity Attack is happening or other Gameplay Abilities or Effects might be interrupted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VictimStateClass_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Gameplay Effect for the state applied to the Victim, while this attack is active.\n\x09 *\n\x09 * Can be used by other systems to determine if this victim should perform other tasks. For\n\x09 * example, it can interrupt other abilities or trigger a change of state in the AI Behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Gameplay Effect for the state applied to the Victim, while this attack is active.\n\nCan be used by other systems to determine if this victim should perform other tasks. For\nexample, it can interrupt other abilities or trigger a change of state in the AI Behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAbilityFallback_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * A fallback ability triggered if the Opportunity Attack cannot be launched.\n\x09 *\n\x09 * This is a good option if your Opportunity Attack shares the same input as something else,\n\x09 * like the Default Attack. In that case, if the Targeting Preset cannot find any viable targets,\n\x09 * then the fallback attack Ability will be triggered instead.\n\x09 */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "A fallback ability triggered if the Opportunity Attack cannot be launched.\n\nThis is a good option if your Opportunity Attack shares the same input as something else,\nlike the Default Attack. In that case, if the Targeting Preset cannot find any viable targets,\nthen the fallback attack Ability will be triggered instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackAbilityTags_MetaData[] = {
		{ "Category", "Combat Ability|Opportunity Attack" },
		{ "Comment", "/**\n\x09 * Tags used to activate a fallback ability, triggered if the Opportunity Attack cannot be executed.\n\x09 *\n\x09 * This is a good option if your Opportunity Attack shares the same input as something else,\n\x09 * like a Default Attack. In that case, if the Targeting Preset cannot find any viable targets,\n\x09 * then the fallback attack Ability will be triggered instead.\n\x09 */" },
		{ "EditCondition", "bHasAbilityFallback" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
		{ "ToolTip", "Tags used to activate a fallback ability, triggered if the Opportunity Attack cannot be executed.\n\nThis is a good option if your Opportunity Attack shares the same input as something else,\nlike a Default Attack. In that case, if the Targeting Preset cannot find any viable targets,\nthen the fallback attack Ability will be triggered instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetSyncTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpportunityAnimationTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpportunityDamageEventTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProjectileTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_OpportunityAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextualAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraAnimation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraAnchorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AttackerStateClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VictimStateClass;
	static void NewProp_bHasAbilityFallback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAbilityFallback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackAbilityTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetSyncTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpportunityAnimationTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpportunityDamageEventTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScanTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnProjectileTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ApplyOpportunityGameplayEffects, "ApplyOpportunityGameplayEffects" }, // 883474885
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_BuildCameraAnimationParameters, "BuildCameraAnimationParameters" }, // 2983591435
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CollectAdditionalSceneActors, "CollectAdditionalSceneActors" }, // 2587730530
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ConfigureAndPlayCameraAnimation, "ConfigureAndPlayCameraAnimation" }, // 2151901924
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_CreateSpecHandleForOpportunityHit, "CreateSpecHandleForOpportunityHit" }, // 2075832222
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_ExecuteOpportunityAttack, "ExecuteOpportunityAttack" }, // 1939400264
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetCurrentVictim, "GetCurrentVictim" }, // 1178304332
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_GetPlayerController, "GetPlayerController" }, // 1267266406
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleAvatarLeftScene, "HandleAvatarLeftScene" }, // 345548007
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleMeleeScanTargetsReceived, "HandleMeleeScanTargetsReceived" }, // 2336865553
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleOpportunityAttackStarting, "HandleOpportunityAttackStarting" }, // 1501242608
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleProjectileLaunched, "HandleProjectileLaunched" }, // 1878221683
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleTargetReady, "HandleTargetReady" }, // 3289837830
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HandleVictimDeath, "HandleVictimDeath" }, // 2521997788
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_HasVictim, "HasVictim" }, // 3974831444
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeMeleeScanTask, "InitializeMeleeScanTask" }, // 53939070
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_InitializeProjectileTask, "InitializeProjectileTask" }, // 4263603163
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_LockTarget, "LockTarget" }, // 2549765525
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_RemoveOpportunityGameplayEffects, "RemoveOpportunityGameplayEffects" }, // 3477543067
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_StopCameraAnimation, "StopCameraAnimation" }, // 3289047890
		{ &Z_Construct_UFunction_UCombatAbility_OpportunityAttack_UnlockTarget, "UnlockTarget" }, // 1457876647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_OpportunityAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingPreset_MetaData), NewProp_TargetingPreset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_ContextualAnimation = { "ContextualAnimation", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, ContextualAnimation), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextualAnimation_MetaData), NewProp_ContextualAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_CameraAnimation = { "CameraAnimation", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, CameraAnimation), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraAnimation_MetaData), NewProp_CameraAnimation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_CameraAnchorClass = { "CameraAnchorClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, CameraAnchorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANinjaCombatCameraAnchorActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraAnchorClass_MetaData), NewProp_CameraAnchorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_AttackerStateClass = { "AttackerStateClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, AttackerStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackerStateClass_MetaData), NewProp_AttackerStateClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_VictimStateClass = { "VictimStateClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, VictimStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VictimStateClass_MetaData), NewProp_VictimStateClass_MetaData) };
void Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_bHasAbilityFallback_SetBit(void* Obj)
{
	((UCombatAbility_OpportunityAttack*)Obj)->bHasAbilityFallback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_bHasAbilityFallback = { "bHasAbilityFallback", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatAbility_OpportunityAttack), &Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_bHasAbilityFallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAbilityFallback_MetaData), NewProp_bHasAbilityFallback_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_FallbackAbilityTags = { "FallbackAbilityTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, FallbackAbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackAbilityTags_MetaData), NewProp_FallbackAbilityTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, Anchor), Z_Construct_UClass_ANinjaCombatCameraAnchorActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchor_MetaData), NewProp_Anchor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_TargetingTask = { "TargetingTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, TargetingTask), Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingTask_MetaData), NewProp_TargetingTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_NetSyncTask = { "NetSyncTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, NetSyncTask), Z_Construct_UClass_UAbilityTask_NetworkSyncPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetSyncTask_MetaData), NewProp_NetSyncTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_OpportunityAnimationTask = { "OpportunityAnimationTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, OpportunityAnimationTask), Z_Construct_UClass_UAbilityTask_PlayOpportunityAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpportunityAnimationTask_MetaData), NewProp_OpportunityAnimationTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_OpportunityDamageEventTask = { "OpportunityDamageEventTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, OpportunityDamageEventTask), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpportunityDamageEventTask_MetaData), NewProp_OpportunityDamageEventTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_MeleeScanTask = { "MeleeScanTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, MeleeScanTask), Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanTask_MetaData), NewProp_MeleeScanTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_SpawnProjectileTask = { "SpawnProjectileTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_OpportunityAttack, SpawnProjectileTask), Z_Construct_UClass_UAbilityTask_SpawnProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProjectileTask_MetaData), NewProp_SpawnProjectileTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_TargetingPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_ContextualAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_CameraAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_CameraAnchorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_AttackerStateClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_VictimStateClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_bHasAbilityFallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_FallbackAbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_TargetingTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_NetSyncTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_OpportunityAnimationTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_OpportunityDamageEventTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_MeleeScanTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::NewProp_SpawnProjectileTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatAttackAbilityInterface_NoRegister, (int32)VTABLE_OFFSET(UCombatAbility_OpportunityAttack, ICombatAttackAbilityInterface), false },  // 3718420546
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::ClassParams = {
	&UCombatAbility_OpportunityAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_OpportunityAttack()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_OpportunityAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_OpportunityAttack.OuterSingleton, Z_Construct_UClass_UCombatAbility_OpportunityAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_OpportunityAttack.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_OpportunityAttack>()
{
	return UCombatAbility_OpportunityAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_OpportunityAttack);
UCombatAbility_OpportunityAttack::~UCombatAbility_OpportunityAttack() {}
// End Class UCombatAbility_OpportunityAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_OpportunityAttack, UCombatAbility_OpportunityAttack::StaticClass, TEXT("UCombatAbility_OpportunityAttack"), &Z_Registration_Info_UClass_UCombatAbility_OpportunityAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_OpportunityAttack), 1693866570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_2062224166(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_OpportunityAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
