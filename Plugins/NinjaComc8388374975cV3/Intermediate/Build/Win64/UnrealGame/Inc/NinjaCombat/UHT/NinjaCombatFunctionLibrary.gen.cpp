// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/NinjaCombatFunctionLibrary.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffect.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Niagara/Classes/NiagaraDataInterfaceExport.h"
#include "NinjaCombat/Public/Types/FDamageEntry.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffect();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FBasicParticleData();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMeleeInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRangedInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatFunctionLibrary();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatFunctionLibrary_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatFunctionLibrary Function AddGameplayCueLocally
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics
{
	struct NinjaCombatFunctionLibrary_eventAddGameplayCueLocally_Parms
	{
		AActor* Owner;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Adds a Gameplay Cue locally, avoiding the Multicast RPC.\n\x09 * \n\x09 * @param Owner\x09\x09\x09\x09\x09\x09Owner of the Ability System Component handling the Cue. \n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag representing the Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters used by the Gameplay Cue.\n\x09 */" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Adds a Gameplay Cue locally, avoiding the Multicast RPC.\n\n@param Owner                                         Owner of the Ability System Component handling the Cue.\n@param GameplayCueTag                        Gameplay Tag representing the Cue.\n@param GameplayCueParameters         Parameters used by the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventAddGameplayCueLocally_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventAddGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventAddGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "AddGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NinjaCombatFunctionLibrary_eventAddGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::NinjaCombatFunctionLibrary_eventAddGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execAddGameplayCueLocally)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatFunctionLibrary::AddGameplayCueLocally(Z_Param_Owner,Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function AddGameplayCueLocally

// Begin Class UNinjaCombatFunctionLibrary Function ApplyDetachedGameplayEffectSpecToTarget
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics
{
	struct NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms
	{
		FGameplayEffectSpecHandle GameplayEffectHandle;
		FGameplayAbilityTargetDataHandle TargetData;
		AActor* Causer;
		FGameplayTagContainer DynamicTags;
		TMap<FGameplayTag,float> SetByCallerMagnitudes;
		TArray<FActiveGameplayEffectHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Applies a handle to targets, without requiring an ASC from the origin.\n\x09 *\n\x09 * @param GameplayEffectHandle\x09\x09Handle to be applied.\n\x09 * @param TargetData\x09\x09\x09\x09Target Data containing all targets to receive the effect.\n\x09 * @param Causer\x09\x09\x09\x09\x09Source of the effect, usually a weapon, projectile or cast actor.\n\x09 * @param DynamicTags\x09\x09\x09\x09""Dynamic Tags added to the outgoing spec.\n\x09 * @param SetByCallerMagnitudes\x09\x09""Additional SetByCaller Magnitudes set from the causer.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09""All handles that were created for each application.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Applies a handle to targets, without requiring an ASC from the origin.\n\n@param GameplayEffectHandle          Handle to be applied.\n@param TargetData                            Target Data containing all targets to receive the effect.\n@param Causer                                        Source of the effect, usually a weapon, projectile or cast actor.\n@param DynamicTags                           Dynamic Tags added to the outgoing spec.\n@param SetByCallerMagnitudes         Additional SetByCaller Magnitudes set from the causer.\n@return                                                      All handles that were created for each application." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetByCallerMagnitudes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SetByCallerMagnitudes_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetByCallerMagnitudes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SetByCallerMagnitudes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_GameplayEffectHandle = { "GameplayEffectHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms, GameplayEffectHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectHandle_MetaData), NewProp_GameplayEffectHandle_MetaData) }; // 3383902265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 2741862775
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_DynamicTags = { "DynamicTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms, DynamicTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicTags_MetaData), NewProp_DynamicTags_MetaData) }; // 3352185621
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_SetByCallerMagnitudes_ValueProp = { "SetByCallerMagnitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_SetByCallerMagnitudes_Key_KeyProp = { "SetByCallerMagnitudes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_SetByCallerMagnitudes = { "SetByCallerMagnitudes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms, SetByCallerMagnitudes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetByCallerMagnitudes_MetaData), NewProp_SetByCallerMagnitudes_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_GameplayEffectHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_TargetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_DynamicTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_SetByCallerMagnitudes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_SetByCallerMagnitudes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_SetByCallerMagnitudes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "ApplyDetachedGameplayEffectSpecToTarget", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::NinjaCombatFunctionLibrary_eventApplyDetachedGameplayEffectSpecToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execApplyDetachedGameplayEffectSpecToTarget)
{
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_GameplayEffectHandle);
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_TargetData);
	P_GET_OBJECT(AActor,Z_Param_Causer);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_DynamicTags);
	P_GET_TMAP_REF(FGameplayTag,float,Z_Param_Out_SetByCallerMagnitudes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=UNinjaCombatFunctionLibrary::ApplyDetachedGameplayEffectSpecToTarget(Z_Param_Out_GameplayEffectHandle,Z_Param_Out_TargetData,Z_Param_Causer,Z_Param_Out_DynamicTags,Z_Param_Out_SetByCallerMagnitudes);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function ApplyDetachedGameplayEffectSpecToTarget

// Begin Class UNinjaCombatFunctionLibrary Function BreakActiveGameplayEffect
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics
{
	struct NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms
	{
		FActiveGameplayEffect ActiveEffect;
		float Duration;
		float Period;
		float EndTime;
		TSubclassOf<UGameplayEffect> EffectClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Breaks an Active Gameplay Effect, exposing relevant information.\n\x09 *\n\x09 * @param ActiveEffect\x09\x09""Active Gameplay Effect information.\n\x09 * @param Duration\x09\x09\x09Output for the effect duration.\n\x09 * @param Period\x09\x09\x09Output for the effect period.\n\x09 * @param EndTime\x09\x09\x09""Expected game time when the effect will end.\n\x09 * @param EffectClass\x09\x09Gameplay Effect class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Breaks an Active Gameplay Effect, exposing relevant information.\n\n@param ActiveEffect          Active Gameplay Effect information.\n@param Duration                      Output for the effect duration.\n@param Period                        Output for the effect period.\n@param EndTime                       Expected game time when the effect will end.\n@param EffectClass           Gameplay Effect class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEffect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Period;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_ActiveEffect = { "ActiveEffect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms, ActiveEffect), Z_Construct_UScriptStruct_FActiveGameplayEffect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEffect_MetaData), NewProp_ActiveEffect_MetaData) }; // 3944901025
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_Period = { "Period", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms, Period), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_ActiveEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_Period,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NewProp_EffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "BreakActiveGameplayEffect", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::NinjaCombatFunctionLibrary_eventBreakActiveGameplayEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execBreakActiveGameplayEffect)
{
	P_GET_STRUCT_REF(FActiveGameplayEffect,Z_Param_Out_ActiveEffect);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Period);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_EndTime);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UGameplayEffect>,Z_Param_Out_EffectClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatFunctionLibrary::BreakActiveGameplayEffect(Z_Param_Out_ActiveEffect,Z_Param_Out_Duration,Z_Param_Out_Period,Z_Param_Out_EndTime,Z_Param_Out_EffectClass);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function BreakActiveGameplayEffect

// Begin Class UNinjaCombatFunctionLibrary Function BreakDamageStruct
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics
{
	struct NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms
	{
		FDamageEntry Entry;
		AActor* Causer;
		AActor* Instigator;
		bool bIsCriticalHit;
		bool bIsBreakerHit;
		bool bIsStaggerHit;
		bool bIsFatalHit;
		int32 Handle;
		float DamageApplied;
		float MitigationCost;
		float PreviousHealth;
		float PreviousStamina;
		FGameplayTagContainer SourceTags;
		FGameplayTagContainer TargetTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Breaks a Damage Entry into its values so Blueprints can easily access them.\n\x09 * \n\x09 * @param Entry\x09\x09\x09\x09The Entry that is going to be exposed by this function.\n\x09 * @param Causer\x09\x09\x09""Actor that caused the damage.\n\x09 * @param Instigator\x09\x09Source actor that caused the damage.\n\x09 * @param bIsCriticalHit\x09Informs if this is a critical hit.\n\x09 * @param bIsBreakerHit\x09\x09Informs if this is a breaker hit.\n\x09 * @param bIsStaggerHit\x09\x09Informs if this is a stagger hit.\n\x09 * @param bIsFatalHit\x09\x09Informs if this is a fatal hit.\n\x09 * @param Handle\x09\x09\x09Unique handle for the damage. \n\x09 * @param DamageApplied\x09\x09Total damage applied after mitigation.\n\x09 * @param MitigationCost\x09Total damage avoided due to mitigation.\n\x09 * @param PreviousHealth\x09Health on target before the damage.\n\x09 * @param PreviousStamina\x09Previous stamina on target before mitigation.\n\x09 * @param SourceTags\x09\x09Gameplay tags present in the source.\n\x09 * @param TargetTags\x09\x09Gameplay tags present in the target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Breaks a Damage Entry into its values so Blueprints can easily access them.\n\n@param Entry                         The Entry that is going to be exposed by this function.\n@param Causer                        Actor that caused the damage.\n@param Instigator            Source actor that caused the damage.\n@param bIsCriticalHit        Informs if this is a critical hit.\n@param bIsBreakerHit         Informs if this is a breaker hit.\n@param bIsStaggerHit         Informs if this is a stagger hit.\n@param bIsFatalHit           Informs if this is a fatal hit.\n@param Handle                        Unique handle for the damage.\n@param DamageApplied         Total damage applied after mitigation.\n@param MitigationCost        Total damage avoided due to mitigation.\n@param PreviousHealth        Health on target before the damage.\n@param PreviousStamina       Previous stamina on target before mitigation.\n@param SourceTags            Gameplay tags present in the source.\n@param TargetTags            Gameplay tags present in the target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_bIsCriticalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCriticalHit;
	static void NewProp_bIsBreakerHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBreakerHit;
	static void NewProp_bIsStaggerHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaggerHit;
	static void NewProp_bIsFatalHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFatalHit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageApplied;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigationCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousStamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, Entry), Z_Construct_UScriptStruct_FDamageEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) }; // 3044778572
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsCriticalHit_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms*)Obj)->bIsCriticalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsCriticalHit = { "bIsCriticalHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsCriticalHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsBreakerHit_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms*)Obj)->bIsBreakerHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsBreakerHit = { "bIsBreakerHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsBreakerHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsStaggerHit_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms*)Obj)->bIsStaggerHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsStaggerHit = { "bIsStaggerHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsStaggerHit_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsFatalHit_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms*)Obj)->bIsFatalHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsFatalHit = { "bIsFatalHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsFatalHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, Handle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_DamageApplied = { "DamageApplied", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, DamageApplied), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_MitigationCost = { "MitigationCost", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, MitigationCost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_PreviousHealth = { "PreviousHealth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, PreviousHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_PreviousStamina = { "PreviousStamina", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, PreviousStamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsCriticalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsBreakerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsStaggerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_bIsFatalHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_DamageApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_MitigationCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_PreviousHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_PreviousStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NewProp_TargetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "BreakDamageStruct", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::NinjaCombatFunctionLibrary_eventBreakDamageStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execBreakDamageStruct)
{
	P_GET_STRUCT_REF(FDamageEntry,Z_Param_Out_Entry);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_Causer);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_Instigator);
	P_GET_UBOOL_REF(Z_Param_Out_bIsCriticalHit);
	P_GET_UBOOL_REF(Z_Param_Out_bIsBreakerHit);
	P_GET_UBOOL_REF(Z_Param_Out_bIsStaggerHit);
	P_GET_UBOOL_REF(Z_Param_Out_bIsFatalHit);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Handle);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DamageApplied);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MitigationCost);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PreviousHealth);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_PreviousStamina);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatFunctionLibrary::BreakDamageStruct(Z_Param_Out_Entry,P_ARG_GC_BARRIER(Z_Param_Out_Causer),P_ARG_GC_BARRIER(Z_Param_Out_Instigator),Z_Param_Out_bIsCriticalHit,Z_Param_Out_bIsBreakerHit,Z_Param_Out_bIsStaggerHit,Z_Param_Out_bIsFatalHit,Z_Param_Out_Handle,Z_Param_Out_DamageApplied,Z_Param_Out_MitigationCost,Z_Param_Out_PreviousHealth,Z_Param_Out_PreviousStamina,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function BreakDamageStruct

// Begin Class UNinjaCombatFunctionLibrary Function CalculateHitAngleFromHitResult
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics
{
	struct NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms
	{
		const AActor* Attacker;
		const AActor* Victim;
		FHitResult HitResult;
		float DefaultAngle;
		float HitLocationWeight;
		float AttackerLocationWeight;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Calculates the angle from an incoming hit, between front, left, right and back.\n\x09 *\n\x09 * This function is flexible enough to consider the angle between the victim and the hit location or the victim and\n\x09 * the attacker location. This allows for a smoother hit reaction that still respects the attacker location, which\n\x09 * is particularly important if you don't want to disconnect both attacker and victim too much.\n\x09 *\n\x09 * You can decide how much the \"Hit Location\" and \"Attacker Location\" will influence the final result, by adjusting\n\x09 * the weights available as parameters. If both weights are zero, then the output angle will always be the default\n\x09 * value provided, usually \"front\" (0 degrees).\n\x09 *\n\x09 * If both blend weights are 1, then the direction will be a halfway between both the Hit and the Attacker. For\n\x09 * example, the attacker at the front (0) and the hit from the right (90) would result in an 45 degrees angle.\n\x09 *\n\x09 * @param Attacker\x09\x09\x09\x09\x09""Attacker that landed the hit. Its position is used to skew the hit reaction.\n\x09 * @param Victim\x09\x09\x09\x09\x09Victim receiving the hit. We need its forward/right vectors to determine a dot product for the hit reaction.\n\x09 * @param HitResult\x09\x09\x09\x09\x09""Details about the hit, specifically the Hit Location.\n\x09 * @param DefaultAngle\x09\x09\x09\x09""Angle used in case a direction cannot be properly determined. Defaults to 0, which means \"forward\".\n\x09 * @param HitLocationWeight\x09\x09\x09Weight determining how much the Hit Location should influence the output angle.\n\x09 * @param AttackerLocationWeight\x09Weight determining how much the Attacker Location should influence the output angle.\n\x09 */" },
		{ "CPP_Default_AttackerLocationWeight", "1.000000" },
		{ "CPP_Default_DefaultAngle", "0.000000" },
		{ "CPP_Default_HitLocationWeight", "1.000000" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Hit Angle" },
		{ "ToolTip", "Calculates the angle from an incoming hit, between front, left, right and back.\n\nThis function is flexible enough to consider the angle between the victim and the hit location or the victim and\nthe attacker location. This allows for a smoother hit reaction that still respects the attacker location, which\nis particularly important if you don't want to disconnect both attacker and victim too much.\n\nYou can decide how much the \"Hit Location\" and \"Attacker Location\" will influence the final result, by adjusting\nthe weights available as parameters. If both weights are zero, then the output angle will always be the default\nvalue provided, usually \"front\" (0 degrees).\n\nIf both blend weights are 1, then the direction will be a halfway between both the Hit and the Attacker. For\nexample, the attacker at the front (0) and the hit from the right (90) would result in an 45 degrees angle.\n\n@param Attacker                                      Attacker that landed the hit. Its position is used to skew the hit reaction.\n@param Victim                                        Victim receiving the hit. We need its forward/right vectors to determine a dot product for the hit reaction.\n@param HitResult                                     Details about the hit, specifically the Hit Location.\n@param DefaultAngle                          Angle used in case a direction cannot be properly determined. Defaults to 0, which means \"forward\".\n@param HitLocationWeight                     Weight determining how much the Hit Location should influence the output angle.\n@param AttackerLocationWeight        Weight determining how much the Attacker Location should influence the output angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attacker_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Victim_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Attacker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Victim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitLocationWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackerLocationWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_Attacker = { "Attacker", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, Attacker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attacker_MetaData), NewProp_Attacker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_Victim = { "Victim", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, Victim), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Victim_MetaData), NewProp_Victim_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_DefaultAngle = { "DefaultAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, DefaultAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_HitLocationWeight = { "HitLocationWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, HitLocationWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_AttackerLocationWeight = { "AttackerLocationWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, AttackerLocationWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_Attacker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_Victim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_DefaultAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_HitLocationWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_AttackerLocationWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "CalculateHitAngleFromHitResult", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::NinjaCombatFunctionLibrary_eventCalculateHitAngleFromHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execCalculateHitAngleFromHitResult)
{
	P_GET_OBJECT(AActor,Z_Param_Attacker);
	P_GET_OBJECT(AActor,Z_Param_Victim);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultAngle);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HitLocationWeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttackerLocationWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UNinjaCombatFunctionLibrary::CalculateHitAngleFromHitResult(Z_Param_Attacker,Z_Param_Victim,Z_Param_Out_HitResult,Z_Param_DefaultAngle,Z_Param_HitLocationWeight,Z_Param_AttackerLocationWeight);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function CalculateHitAngleFromHitResult

// Begin Class UNinjaCombatFunctionLibrary Function CreateGameplayCueFromEffectContext
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics
{
	struct NinjaCombatFunctionLibrary_eventCreateGameplayCueFromEffectContext_Parms
	{
		FGameplayEffectContextHandle EffectContextHandle;
		FGameplayCueParameters ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Creates parameters for a Gameplay Cue, from a Context Handle.\n\x09 * \n\x09 * @param EffectContextHandle\x09\x09Source Effect Context Handle. \n\x09 * @return\x09\x09\x09\x09\x09\x09\x09Gameplay Cue with the Effect Data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Creates parameters for a Gameplay Cue, from a Context Handle.\n\n@param EffectContextHandle           Source Effect Context Handle.\n@return                                                      Gameplay Cue with the Effect Data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectContextHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::NewProp_EffectContextHandle = { "EffectContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCreateGameplayCueFromEffectContext_Parms, EffectContextHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectContextHandle_MetaData), NewProp_EffectContextHandle_MetaData) }; // 1628379207
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventCreateGameplayCueFromEffectContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(0, nullptr) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::NewProp_EffectContextHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "CreateGameplayCueFromEffectContext", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::NinjaCombatFunctionLibrary_eventCreateGameplayCueFromEffectContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::NinjaCombatFunctionLibrary_eventCreateGameplayCueFromEffectContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execCreateGameplayCueFromEffectContext)
{
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_EffectContextHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayCueParameters*)Z_Param__Result=UNinjaCombatFunctionLibrary::CreateGameplayCueFromEffectContext(Z_Param_Out_EffectContextHandle);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function CreateGameplayCueFromEffectContext

// Begin Class UNinjaCombatFunctionLibrary Function ExecuteGameplayCueLocally
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics
{
	struct NinjaCombatFunctionLibrary_eventExecuteGameplayCueLocally_Parms
	{
		AActor* Owner;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Executes a Gameplay Cue locally, avoiding the Multicast RPC.\n\x09 * \n\x09 * @param Owner\x09\x09\x09\x09\x09\x09Owner of the Ability System Component handling the Cue. \n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag representing the Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters used by the Gameplay Cue.\n\x09 */" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Executes a Gameplay Cue locally, avoiding the Multicast RPC.\n\n@param Owner                                         Owner of the Ability System Component handling the Cue.\n@param GameplayCueTag                        Gameplay Tag representing the Cue.\n@param GameplayCueParameters         Parameters used by the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventExecuteGameplayCueLocally_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventExecuteGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventExecuteGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "ExecuteGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NinjaCombatFunctionLibrary_eventExecuteGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::NinjaCombatFunctionLibrary_eventExecuteGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execExecuteGameplayCueLocally)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatFunctionLibrary::ExecuteGameplayCueLocally(Z_Param_Owner,Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function ExecuteGameplayCueLocally

// Begin Class UNinjaCombatFunctionLibrary Function GetAnimationInstance
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetAnimationInstance_Parms
	{
		const AActor* Owner;
		UAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Animation Instance from the actor's main combat mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Animation Instance" },
		{ "ToolTip", "Provides the Animation Instance from the actor's main combat mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetAnimationInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetAnimationInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetAnimationInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::NinjaCombatFunctionLibrary_eventGetAnimationInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::NinjaCombatFunctionLibrary_eventGetAnimationInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetAnimationInstance)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimInstance**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetAnimationInstance(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetAnimationInstance

// Begin Class UNinjaCombatFunctionLibrary Function GetCombatManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetCombatManagerComponent_Parms
	{
		const AActor* Owner;
		UNinjaCombatManagerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Combat Manager Component assigned to the actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Combat Manager" },
		{ "ToolTip", "Provides the Combat Manager Component assigned to the actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetCombatManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetCombatManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetCombatManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetCombatManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetCombatManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetCombatManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatManagerComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetCombatManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetCombatManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetCombatMesh
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetCombatMesh_Parms
	{
		const AActor* Owner;
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Skeletal Mesh from the actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Skeletal Mesh" },
		{ "ToolTip", "Provides the Skeletal Mesh from the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetCombatMesh_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetCombatMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetCombatMesh", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::NinjaCombatFunctionLibrary_eventGetCombatMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::NinjaCombatFunctionLibrary_eventGetCombatMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetCombatMesh)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetCombatMesh(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetCombatMesh

// Begin Class UNinjaCombatFunctionLibrary Function GetComboManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetComboManagerComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Combo Manager Component assigned to an actor, via the Combat System Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Combo Manager" },
		{ "ToolTip", "Provides the Combo Manager Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetComboManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetComboManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetComboManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetComboManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetComboManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetComboManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetComboManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetComboManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetDamageManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetDamageManagerComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Damage Manager Component assigned to an actor, via the Combat System Interface. \n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Damage Manager" },
		{ "ToolTip", "Provides the Damage Manager Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetDamageManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetDamageManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetDamageManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetDamageManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetDamageManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetDamageManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetDamageManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetDamageManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetDefenseManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetDefenseManagerComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Defense Manager Component assigned to an actor, via the Combat System Interface. \n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Defense Manager" },
		{ "ToolTip", "Provides the Defense Manager Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetDefenseManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetDefenseManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetDefenseManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetDefenseManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetDefenseManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetDefenseManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetDefenseManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetDefenseManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetDissolveManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetDissolveManagerComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Dissolve Manager Component assigned to an actor, via the Combat System Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Dissolve Manager" },
		{ "ToolTip", "Provides the Dissolve Manager Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetDissolveManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetDissolveManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetDissolveManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetDissolveManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetDissolveManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetDissolveManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetDissolveManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetDissolveManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetMeleeScript
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetMeleeScript_Parms
	{
		UObject* Target;
		TScriptInterface<ICombatMeleeInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Melee Script for a given target, implementing the Melee Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Melee Script" },
		{ "ToolTip", "Provides the Melee Script for a given target, implementing the Melee Interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetMeleeScript_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetMeleeScript_Parms, ReturnValue), Z_Construct_UClass_UCombatMeleeInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetMeleeScript", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::NinjaCombatFunctionLibrary_eventGetMeleeScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::NinjaCombatFunctionLibrary_eventGetMeleeScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetMeleeScript)
{
	P_GET_OBJECT(UObject,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<ICombatMeleeInterface>*)Z_Param__Result=UNinjaCombatFunctionLibrary::GetMeleeScript(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetMeleeScript

// Begin Class UNinjaCombatFunctionLibrary Function GetMotionWarpingComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetMotionWarpingComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Motion Warping Component assigned to an actor, via the Combat System Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Motion Warping" },
		{ "ToolTip", "Provides the Motion Warping Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetMotionWarpingComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetMotionWarpingComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetMotionWarpingComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::NinjaCombatFunctionLibrary_eventGetMotionWarpingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::NinjaCombatFunctionLibrary_eventGetMotionWarpingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetMotionWarpingComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetMotionWarpingComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetMotionWarpingComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetPhysicalAnimationComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetPhysicalAnimationComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Physical Animation Component assigned to an actor, via the Combat System Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Physical Animation" },
		{ "ToolTip", "Provides the Physical Animation Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetPhysicalAnimationComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetPhysicalAnimationComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetPhysicalAnimationComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::NinjaCombatFunctionLibrary_eventGetPhysicalAnimationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::NinjaCombatFunctionLibrary_eventGetPhysicalAnimationComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetPhysicalAnimationComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetPhysicalAnimationComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetPhysicalAnimationComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetRangedScript
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetRangedScript_Parms
	{
		UObject* Target;
		TScriptInterface<ICombatRangedInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Ranged Script for a given target, implementing the Melee Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Ranged Script" },
		{ "ToolTip", "Provides the Ranged Script for a given target, implementing the Melee Interface." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetRangedScript_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetRangedScript_Parms, ReturnValue), Z_Construct_UClass_UCombatRangedInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetRangedScript", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::NinjaCombatFunctionLibrary_eventGetRangedScript_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::NinjaCombatFunctionLibrary_eventGetRangedScript_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetRangedScript)
{
	P_GET_OBJECT(UObject,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<ICombatRangedInterface>*)Z_Param__Result=UNinjaCombatFunctionLibrary::GetRangedScript(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetRangedScript

// Begin Class UNinjaCombatFunctionLibrary Function GetTargetManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetTargetManagerComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Target Manager Component assigned to an actor, via the Combat System Interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Target Manager" },
		{ "ToolTip", "Provides the Target Manager Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetTargetManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetTargetManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetTargetManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetTargetManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetTargetManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetTargetManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetTargetManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetTargetManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function GetWeaponManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventGetWeaponManagerComponent_Parms
	{
		const AActor* Owner;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Provides the Weapon Manager Component assigned to an actor, via the Combat System Interface. \n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Weapon Manager" },
		{ "ToolTip", "Provides the Weapon Manager Component assigned to an actor, via the Combat System Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetWeaponManagerComponent_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventGetWeaponManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "GetWeaponManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetWeaponManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::NinjaCombatFunctionLibrary_eventGetWeaponManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execGetWeaponManagerComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::GetWeaponManagerComponent(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function GetWeaponManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidComboManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidComboManagerComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Combo Manager implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Combo Manager implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidComboManagerComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidComboManagerComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidComboManagerComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidComboManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidComboManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidComboManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidComboManagerComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidComboManagerComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidComboManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidDamageManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidDamageManagerComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Damage Manager implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Damage Manager implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidDamageManagerComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidDamageManagerComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidDamageManagerComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidDamageManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidDamageManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidDamageManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidDamageManagerComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidDamageManagerComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidDamageManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidDefenseManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidDefenseManagerComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Defense Manager implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Defense Manager implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidDefenseManagerComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidDefenseManagerComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidDefenseManagerComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidDefenseManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidDefenseManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidDefenseManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidDefenseManagerComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidDefenseManagerComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidDefenseManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidDissolveManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidDissolveManagerComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Dissolve Manager implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Dissolve Manager implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidDissolveManagerComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidDissolveManagerComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidDissolveManagerComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidDissolveManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidDissolveManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidDissolveManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidDissolveManagerComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidDissolveManagerComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidDissolveManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidMotionWarpingComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidMotionWarpingComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Motion Warping implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Motion Warping implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidMotionWarpingComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidMotionWarpingComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidMotionWarpingComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidMotionWarpingComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidMotionWarpingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidMotionWarpingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidMotionWarpingComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidMotionWarpingComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidMotionWarpingComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidPhysicalAnimationComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidPhysicalAnimationComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Physical Animation implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Physical Animation implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidPhysicalAnimationComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidPhysicalAnimationComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidPhysicalAnimationComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidPhysicalAnimationComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidPhysicalAnimationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidPhysicalAnimationComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidPhysicalAnimationComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidPhysicalAnimationComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidPhysicalAnimationComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidTargetManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidTargetManagerComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Target Manager implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Target Manager implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidTargetManagerComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidTargetManagerComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidTargetManagerComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidTargetManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidTargetManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidTargetManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidTargetManagerComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidTargetManagerComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidTargetManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function IsValidWeaponManagerComponent
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics
{
	struct NinjaCombatFunctionLibrary_eventIsValidWeaponManagerComponent_Parms
	{
		const UActorComponent* ActorComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Checks if a component is a valid Weapon Manager implementation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Checks if a component is a valid Weapon Manager implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventIsValidWeaponManagerComponent_Parms, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
void Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatFunctionLibrary_eventIsValidWeaponManagerComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatFunctionLibrary_eventIsValidWeaponManagerComponent_Parms), &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NewProp_ActorComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "IsValidWeaponManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidWeaponManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::NinjaCombatFunctionLibrary_eventIsValidWeaponManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execIsValidWeaponManagerComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatFunctionLibrary::IsValidWeaponManagerComponent(Z_Param_ActorComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function IsValidWeaponManagerComponent

// Begin Class UNinjaCombatFunctionLibrary Function RemoveGameplayCueLocally
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics
{
	struct NinjaCombatFunctionLibrary_eventRemoveGameplayCueLocally_Parms
	{
		AActor* Owner;
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Removes a Gameplay Cue locally, avoiding the Multicast RPC.\n\x09 * \n\x09 * @param Owner\x09\x09\x09\x09\x09\x09Owner of the Ability System Component handling the Cue. \n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag representing the Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters used by the Gameplay Cue.\n\x09 */" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Removes a Gameplay Cue locally, avoiding the Multicast RPC.\n\n@param Owner                                         Owner of the Ability System Component handling the Cue.\n@param GameplayCueTag                        Gameplay Tag representing the Cue.\n@param GameplayCueParameters         Parameters used by the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventRemoveGameplayCueLocally_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventRemoveGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventRemoveGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "RemoveGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NinjaCombatFunctionLibrary_eventRemoveGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::NinjaCombatFunctionLibrary_eventRemoveGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execRemoveGameplayCueLocally)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNinjaCombatFunctionLibrary::RemoveGameplayCueLocally(Z_Param_Owner,Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function RemoveGameplayCueLocally

// Begin Class UNinjaCombatFunctionLibrary Function SpawnBloodDecal
struct Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics
{
	struct NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms
	{
		const UObject* WorldContextObject;
		TArray<FBasicParticleData> Data;
		const UNiagaraSystem* NiagaraSystem;
		FVector SimulationPositionOffset;
		FVector BaseSize;
		UMaterialInterface* DecalMaterial;
		float DecalChance;
		float ScreenSize;
		float DecalLifeSpan;
		float FadeOutDuration;
		float FixedXSize;
		FVector2D SizeModifierRange;
		FVector2D LifespanModifierRange;
		UDecalComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat" },
		{ "Comment", "/**\n\x09 * Creates a blood decal from a Niagara Particle Collision.\n\x09 * \n\x09 * @param WorldContextObject\x09\x09\x09World context used to spawn the decal. \n\x09 * @param Data\x09\x09\x09\x09\x09\x09\x09Niagara: Information about the particle that generated the collision.\n\x09 * @param NiagaraSystem\x09\x09\x09\x09\x09Niagara: The system that is generating collisions.\n\x09 * @param SimulationPositionOffset\x09\x09Niagara: Offset for the simulation\n\x09 * @param BaseSize\x09\x09\x09\x09\x09\x09""Decal: The base size for the decal, before any random modifications.\n\x09 * @param DecalMaterial\x09\x09\x09\x09\x09""Decal: The material used for the blood decal.\n\x09 * @param DecalChance\x09\x09\x09\x09\x09""Decal: Chance to spawn the decal in the [0, 1] range.\n\x09 * @param ScreenSize\x09\x09\x09\x09\x09""Decal: Screen size required for the decal to be visible. Zero means \"always\".\n\x09 * @param DecalLifeSpan\x09\x09\x09\x09\x09""Decal: How long the decal will live in the game world.\n\x09 * @param FadeOutDuration\x09\x09\x09\x09""Decal: Duration of the fade-out when the decal is about to be destroyed.\n\x09 * @param FixedXSize\x09\x09\x09\x09\x09Tweaks: Fixed size for the local X coordinate (height) of the decal. \n\x09 * @param SizeModifierRange\x09\x09\x09\x09Tweaks: A range that allows random modifications in the decal's size.\n\x09 * @param LifespanModifierRange\x09\x09\x09Tweaks: A range that allows random modifications in the decal's lifespan.\n\x09 * \n\x09 * @return\n\x09 *\x09\x09The Decal Component fully configured and spawned in the game world. Since this is a cosmetic function,\n\x09 *\x09\x09it will always be skipped and return null if called in a Dedicated Server.\n\x09 */" },
		{ "CPP_Default_DecalChance", "1.000000" },
		{ "CPP_Default_DecalLifeSpan", "20.000000" },
		{ "CPP_Default_FadeOutDuration", "5.000000" },
		{ "CPP_Default_FixedXSize", "3.500000" },
		{ "CPP_Default_LifespanModifierRange", "(X=0.800,Y=1.200)" },
		{ "CPP_Default_ScreenSize", "0.000000" },
		{ "CPP_Default_SizeModifierRange", "(X=0.750,Y=1.250)" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ReturnDisplayName", "Decal Component" },
		{ "ToolTip", "Creates a blood decal from a Niagara Particle Collision.\n\n@param WorldContextObject                    World context used to spawn the decal.\n@param Data                                                  Niagara: Information about the particle that generated the collision.\n@param NiagaraSystem                                 Niagara: The system that is generating collisions.\n@param SimulationPositionOffset              Niagara: Offset for the simulation\n@param BaseSize                                              Decal: The base size for the decal, before any random modifications.\n@param DecalMaterial                                 Decal: The material used for the blood decal.\n@param DecalChance                                   Decal: Chance to spawn the decal in the [0, 1] range.\n@param ScreenSize                                    Decal: Screen size required for the decal to be visible. Zero means \"always\".\n@param DecalLifeSpan                                 Decal: How long the decal will live in the game world.\n@param FadeOutDuration                               Decal: Duration of the fade-out when the decal is about to be destroyed.\n@param FixedXSize                                    Tweaks: Fixed size for the local X coordinate (height) of the decal.\n@param SizeModifierRange                             Tweaks: A range that allows random modifications in the decal's size.\n@param LifespanModifierRange                 Tweaks: A range that allows random modifications in the decal's lifespan.\n\n@return\n             The Decal Component fully configured and spawned in the game world. Since this is a cosmetic function,\n             it will always be skipped and return null if called in a Dedicated Server." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationPositionOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalChance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalLifeSpan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedXSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeModifierRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LifespanModifierRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBasicParticleData, METADATA_PARAMS(0, nullptr) }; // 2109893770
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2109893770
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraSystem_MetaData), NewProp_NiagaraSystem_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_SimulationPositionOffset = { "SimulationPositionOffset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, SimulationPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationPositionOffset_MetaData), NewProp_SimulationPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_BaseSize = { "BaseSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, BaseSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseSize_MetaData), NewProp_BaseSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_DecalChance = { "DecalChance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, DecalChance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, ScreenSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_DecalLifeSpan = { "DecalLifeSpan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, DecalLifeSpan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, FadeOutDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_FixedXSize = { "FixedXSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, FixedXSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_SizeModifierRange = { "SizeModifierRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, SizeModifierRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_LifespanModifierRange = { "LifespanModifierRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, LifespanModifierRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms, ReturnValue), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_NiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_SimulationPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_BaseSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_DecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_DecalChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_ScreenSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_DecalLifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_FadeOutDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_FixedXSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_SizeModifierRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_LifespanModifierRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatFunctionLibrary, nullptr, "SpawnBloodDecal", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::NinjaCombatFunctionLibrary_eventSpawnBloodDecal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatFunctionLibrary::execSpawnBloodDecal)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FBasicParticleData,Z_Param_Out_Data);
	P_GET_OBJECT(UNiagaraSystem,Z_Param_NiagaraSystem);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SimulationPositionOffset);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BaseSize);
	P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecalChance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenSize);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DecalLifeSpan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FixedXSize);
	P_GET_STRUCT(FVector2D,Z_Param_SizeModifierRange);
	P_GET_STRUCT(FVector2D,Z_Param_LifespanModifierRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDecalComponent**)Z_Param__Result=UNinjaCombatFunctionLibrary::SpawnBloodDecal(Z_Param_WorldContextObject,Z_Param_Out_Data,Z_Param_NiagaraSystem,Z_Param_Out_SimulationPositionOffset,Z_Param_Out_BaseSize,Z_Param_DecalMaterial,Z_Param_DecalChance,Z_Param_ScreenSize,Z_Param_DecalLifeSpan,Z_Param_FadeOutDuration,Z_Param_FixedXSize,Z_Param_SizeModifierRange,Z_Param_LifespanModifierRange);
	P_NATIVE_END;
}
// End Class UNinjaCombatFunctionLibrary Function SpawnBloodDecal

// Begin Class UNinjaCombatFunctionLibrary
void UNinjaCombatFunctionLibrary::StaticRegisterNativesUNinjaCombatFunctionLibrary()
{
	UClass* Class = UNinjaCombatFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayCueLocally", &UNinjaCombatFunctionLibrary::execAddGameplayCueLocally },
		{ "ApplyDetachedGameplayEffectSpecToTarget", &UNinjaCombatFunctionLibrary::execApplyDetachedGameplayEffectSpecToTarget },
		{ "BreakActiveGameplayEffect", &UNinjaCombatFunctionLibrary::execBreakActiveGameplayEffect },
		{ "BreakDamageStruct", &UNinjaCombatFunctionLibrary::execBreakDamageStruct },
		{ "CalculateHitAngleFromHitResult", &UNinjaCombatFunctionLibrary::execCalculateHitAngleFromHitResult },
		{ "CreateGameplayCueFromEffectContext", &UNinjaCombatFunctionLibrary::execCreateGameplayCueFromEffectContext },
		{ "ExecuteGameplayCueLocally", &UNinjaCombatFunctionLibrary::execExecuteGameplayCueLocally },
		{ "GetAnimationInstance", &UNinjaCombatFunctionLibrary::execGetAnimationInstance },
		{ "GetCombatManagerComponent", &UNinjaCombatFunctionLibrary::execGetCombatManagerComponent },
		{ "GetCombatMesh", &UNinjaCombatFunctionLibrary::execGetCombatMesh },
		{ "GetComboManagerComponent", &UNinjaCombatFunctionLibrary::execGetComboManagerComponent },
		{ "GetDamageManagerComponent", &UNinjaCombatFunctionLibrary::execGetDamageManagerComponent },
		{ "GetDefenseManagerComponent", &UNinjaCombatFunctionLibrary::execGetDefenseManagerComponent },
		{ "GetDissolveManagerComponent", &UNinjaCombatFunctionLibrary::execGetDissolveManagerComponent },
		{ "GetMeleeScript", &UNinjaCombatFunctionLibrary::execGetMeleeScript },
		{ "GetMotionWarpingComponent", &UNinjaCombatFunctionLibrary::execGetMotionWarpingComponent },
		{ "GetPhysicalAnimationComponent", &UNinjaCombatFunctionLibrary::execGetPhysicalAnimationComponent },
		{ "GetRangedScript", &UNinjaCombatFunctionLibrary::execGetRangedScript },
		{ "GetTargetManagerComponent", &UNinjaCombatFunctionLibrary::execGetTargetManagerComponent },
		{ "GetWeaponManagerComponent", &UNinjaCombatFunctionLibrary::execGetWeaponManagerComponent },
		{ "IsValidComboManagerComponent", &UNinjaCombatFunctionLibrary::execIsValidComboManagerComponent },
		{ "IsValidDamageManagerComponent", &UNinjaCombatFunctionLibrary::execIsValidDamageManagerComponent },
		{ "IsValidDefenseManagerComponent", &UNinjaCombatFunctionLibrary::execIsValidDefenseManagerComponent },
		{ "IsValidDissolveManagerComponent", &UNinjaCombatFunctionLibrary::execIsValidDissolveManagerComponent },
		{ "IsValidMotionWarpingComponent", &UNinjaCombatFunctionLibrary::execIsValidMotionWarpingComponent },
		{ "IsValidPhysicalAnimationComponent", &UNinjaCombatFunctionLibrary::execIsValidPhysicalAnimationComponent },
		{ "IsValidTargetManagerComponent", &UNinjaCombatFunctionLibrary::execIsValidTargetManagerComponent },
		{ "IsValidWeaponManagerComponent", &UNinjaCombatFunctionLibrary::execIsValidWeaponManagerComponent },
		{ "RemoveGameplayCueLocally", &UNinjaCombatFunctionLibrary::execRemoveGameplayCueLocally },
		{ "SpawnBloodDecal", &UNinjaCombatFunctionLibrary::execSpawnBloodDecal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatFunctionLibrary);
UClass* Z_Construct_UClass_UNinjaCombatFunctionLibrary_NoRegister()
{
	return UNinjaCombatFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Support functions for the Combat System. \n */" },
		{ "IncludePath", "NinjaCombatFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NinjaCombatFunctionLibrary.h" },
		{ "ToolTip", "Support functions for the Combat System." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_AddGameplayCueLocally, "AddGameplayCueLocally" }, // 2320253468
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ApplyDetachedGameplayEffectSpecToTarget, "ApplyDetachedGameplayEffectSpecToTarget" }, // 3911698865
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakActiveGameplayEffect, "BreakActiveGameplayEffect" }, // 2720467602
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_BreakDamageStruct, "BreakDamageStruct" }, // 68273399
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CalculateHitAngleFromHitResult, "CalculateHitAngleFromHitResult" }, // 2926516607
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_CreateGameplayCueFromEffectContext, "CreateGameplayCueFromEffectContext" }, // 1041710148
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_ExecuteGameplayCueLocally, "ExecuteGameplayCueLocally" }, // 3184645805
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetAnimationInstance, "GetAnimationInstance" }, // 4288868726
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatManagerComponent, "GetCombatManagerComponent" }, // 1967488910
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetCombatMesh, "GetCombatMesh" }, // 2210459861
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetComboManagerComponent, "GetComboManagerComponent" }, // 258741335
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDamageManagerComponent, "GetDamageManagerComponent" }, // 1866886866
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDefenseManagerComponent, "GetDefenseManagerComponent" }, // 1427612978
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetDissolveManagerComponent, "GetDissolveManagerComponent" }, // 3027737788
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMeleeScript, "GetMeleeScript" }, // 2262095462
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetMotionWarpingComponent, "GetMotionWarpingComponent" }, // 365638988
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetPhysicalAnimationComponent, "GetPhysicalAnimationComponent" }, // 2269392585
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetRangedScript, "GetRangedScript" }, // 4231337732
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetTargetManagerComponent, "GetTargetManagerComponent" }, // 2257063953
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_GetWeaponManagerComponent, "GetWeaponManagerComponent" }, // 3466021722
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidComboManagerComponent, "IsValidComboManagerComponent" }, // 638255533
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDamageManagerComponent, "IsValidDamageManagerComponent" }, // 4039216405
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDefenseManagerComponent, "IsValidDefenseManagerComponent" }, // 1322862222
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidDissolveManagerComponent, "IsValidDissolveManagerComponent" }, // 3724572689
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidMotionWarpingComponent, "IsValidMotionWarpingComponent" }, // 3917978239
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidPhysicalAnimationComponent, "IsValidPhysicalAnimationComponent" }, // 1765934517
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidTargetManagerComponent, "IsValidTargetManagerComponent" }, // 3820071466
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_IsValidWeaponManagerComponent, "IsValidWeaponManagerComponent" }, // 4008248761
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_RemoveGameplayCueLocally, "RemoveGameplayCueLocally" }, // 3807679733
		{ &Z_Construct_UFunction_UNinjaCombatFunctionLibrary_SpawnBloodDecal, "SpawnBloodDecal" }, // 662594628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics::ClassParams = {
	&UNinjaCombatFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNinjaCombatFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatFunctionLibrary.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatFunctionLibrary>()
{
	return UNinjaCombatFunctionLibrary::StaticClass();
}
UNinjaCombatFunctionLibrary::UNinjaCombatFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatFunctionLibrary);
UNinjaCombatFunctionLibrary::~UNinjaCombatFunctionLibrary() {}
// End Class UNinjaCombatFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatFunctionLibrary, UNinjaCombatFunctionLibrary::StaticClass, TEXT("UNinjaCombatFunctionLibrary"), &Z_Registration_Info_UClass_UNinjaCombatFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatFunctionLibrary), 2451165439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_2359272661(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
