// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatWeaponActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatWeaponActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatWeaponActor();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatWeaponActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMeleeInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatProjectileProviderInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatRangedInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatWeaponInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCosmeticsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class ANinjaCombatWeaponActor Function OnImpactHitAudioFinished
struct Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Function used to reset the audio component position to the original location. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Function used to reset the audio component position to the original location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatWeaponActor, nullptr, "OnImpactHitAudioFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatWeaponActor::execOnImpactHitAudioFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnImpactHitAudioFinished();
	P_NATIVE_END;
}
// End Class ANinjaCombatWeaponActor Function OnImpactHitAudioFinished

// Begin Class ANinjaCombatWeaponActor Function SelectMeleeImpactCameraShake
struct NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	TSoftClassPtr<UCameraShakeBase>  ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake = FName(TEXT("SelectMeleeImpactCameraShake"));
TSoftClassPtr<UCameraShakeBase>  ANinjaCombatWeaponActor::SelectMeleeImpactCameraShake(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms Parms;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<ANinjaCombatWeaponActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatWeaponActor*>(this)->SelectMeleeImpactCameraShake_Implementation(HitResult, SourceTags, TargetTags);
	}
}
struct Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/**\n\x09 * Selects the Melee Impact Camera Shake, compatible with the provided criteria.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Selects the Melee Impact Camera Shake, compatible with the provided criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms, ReturnValue), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatWeaponActor, nullptr, "SelectMeleeImpactCameraShake", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::PropPointers), sizeof(NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponActor_eventSelectMeleeImpactCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatWeaponActor::execSelectMeleeImpactCameraShake)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<UCameraShakeBase> *)Z_Param__Result=P_THIS->SelectMeleeImpactCameraShake_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class ANinjaCombatWeaponActor Function SelectMeleeImpactCameraShake

// Begin Class ANinjaCombatWeaponActor Function SelectMeleeImpactParticles
struct NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	TSoftObjectPtr<UNiagaraSystem> ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaCombatWeaponActor_SelectMeleeImpactParticles = FName(TEXT("SelectMeleeImpactParticles"));
TSoftObjectPtr<UNiagaraSystem> ANinjaCombatWeaponActor::SelectMeleeImpactParticles(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatWeaponActor_SelectMeleeImpactParticles);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms Parms;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<ANinjaCombatWeaponActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatWeaponActor*>(this)->SelectMeleeImpactParticles_Implementation(HitResult, SourceTags, TargetTags);
	}
}
struct Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/**\n\x09 * Selects the Melee Impact Particles, compatible with the provided criteria.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Selects the Melee Impact Particles, compatible with the provided criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatWeaponActor, nullptr, "SelectMeleeImpactParticles", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::PropPointers), sizeof(NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponActor_eventSelectMeleeImpactParticles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatWeaponActor::execSelectMeleeImpactParticles)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UNiagaraSystem>*)Z_Param__Result=P_THIS->SelectMeleeImpactParticles_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class ANinjaCombatWeaponActor Function SelectMeleeImpactParticles

// Begin Class ANinjaCombatWeaponActor Function SelectMeleeImpactSound
struct NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms
{
	FHitResult HitResult;
	FGameplayTagContainer SourceTags;
	FGameplayTagContainer TargetTags;
	TSoftObjectPtr<USoundBase> ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_ANinjaCombatWeaponActor_SelectMeleeImpactSound = FName(TEXT("SelectMeleeImpactSound"));
TSoftObjectPtr<USoundBase> ANinjaCombatWeaponActor::SelectMeleeImpactSound(FHitResult const& HitResult, FGameplayTagContainer const& SourceTags, FGameplayTagContainer const& TargetTags) const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatWeaponActor_SelectMeleeImpactSound);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms Parms;
		Parms.HitResult=HitResult;
		Parms.SourceTags=SourceTags;
		Parms.TargetTags=TargetTags;
		const_cast<ANinjaCombatWeaponActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatWeaponActor*>(this)->SelectMeleeImpactSound_Implementation(HitResult, SourceTags, TargetTags);
	}
}
struct Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/**\n\x09 * Selects the Melee Impact Sound, compatible with the provided criteria.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Selects the Melee Impact Sound, compatible with the provided criteria." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTags_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_SourceTags = { "SourceTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms, SourceTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTags_MetaData), NewProp_SourceTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_TargetTags = { "TargetTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms, TargetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetTags_MetaData), NewProp_TargetTags_MetaData) }; // 3352185621
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_SourceTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_TargetTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatWeaponActor, nullptr, "SelectMeleeImpactSound", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::PropPointers), sizeof(NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatWeaponActor_eventSelectMeleeImpactSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatWeaponActor::execSelectMeleeImpactSound)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_SourceTags);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TargetTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<USoundBase>*)Z_Param__Result=P_THIS->SelectMeleeImpactSound_Implementation(Z_Param_Out_HitResult,Z_Param_Out_SourceTags,Z_Param_Out_TargetTags);
	P_NATIVE_END;
}
// End Class ANinjaCombatWeaponActor Function SelectMeleeImpactSound

// Begin Class ANinjaCombatWeaponActor
void ANinjaCombatWeaponActor::StaticRegisterNativesANinjaCombatWeaponActor()
{
	UClass* Class = ANinjaCombatWeaponActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnImpactHitAudioFinished", &ANinjaCombatWeaponActor::execOnImpactHitAudioFinished },
		{ "SelectMeleeImpactCameraShake", &ANinjaCombatWeaponActor::execSelectMeleeImpactCameraShake },
		{ "SelectMeleeImpactParticles", &ANinjaCombatWeaponActor::execSelectMeleeImpactParticles },
		{ "SelectMeleeImpactSound", &ANinjaCombatWeaponActor::execSelectMeleeImpactSound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatWeaponActor);
UClass* Z_Construct_UClass_ANinjaCombatWeaponActor_NoRegister()
{
	return ANinjaCombatWeaponActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatWeaponActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base implementation for a Weapon.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatWeaponActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base implementation for a Weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanMesh_MetaData[] = {
		{ "Comment", "/** Mesh used for melee scans. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Mesh used for melee scans." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSourceMesh_MetaData[] = {
		{ "Comment", "/** Mesh used to launch projectiles from. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Mesh used to launch projectiles from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponTags_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Tags used to identify this weapon. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Tags used to identify this weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeHitEffectClass_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Gameplay Effect applied on Melee Hits. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Gameplay Effect applied on Melee Hits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeHitEffectLevel_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Level to apply the Melee Hit Gameplay Effect. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Level to apply the Melee Hit Gameplay Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesMeleeDamage_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Informs if this instance overrides the melee damage. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Informs if this instance overrides the melee damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeDamage_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/**\n\x09 * Sets the Melee Damage in the Damage Gameplay Effect used by this weapon.\n\x09 *\n\x09 * The amount of damage applied by the Gameplay Effect can be defined by a backing attribute,\n\x09 * such as the \"Base Damage\", but depending on the game design, it could also be defined\n\x09 * by the weapon itself, using this property.\n\x09 *\n\x09 * In that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\n\x09 * For that, the gameplay effect must be prepared with the \"Combat.Data.Damage\" data name.\n\x09 */" },
		{ "EditCondition", "bOverridesMeleeDamage" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Sets the Melee Damage in the Damage Gameplay Effect used by this weapon.\n\nThe amount of damage applied by the Gameplay Effect can be defined by a backing attribute,\nsuch as the \"Base Damage\", but depending on the game design, it could also be defined\nby the weapon itself, using this property.\n\nIn that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\nFor that, the gameplay effect must be prepared with the \"Combat.Data.Damage\" data name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesPoisonConsumption_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Informs if this instance overrides the poison consumption. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Informs if this instance overrides the poison consumption." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoiseConsumption_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/**\n\x09 * Sets the Poison Consumption in the Damage Gameplay Effect used by this weapon.\n\x09 *\n\x09 * The amount of poise consumed by the Gameplay Effect can be defined by a backing attribute,\n\x09 * such as the \"Poise Consumption\", but depending on the game design, it could also be defined\n\x09 * by the weapon itself, using this property.\n\x09 *\n\x09 * In that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\n\x09 * For that, the gameplay effect must be prepared with the \"Combat.Data.PoiseConsumption\" data name.\n\x09 */" },
		{ "EditCondition", "bOverridesPoisonConsumption" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Sets the Poison Consumption in the Damage Gameplay Effect used by this weapon.\n\nThe amount of poise consumed by the Gameplay Effect can be defined by a backing attribute,\nsuch as the \"Poise Consumption\", but depending on the game design, it could also be defined\nby the weapon itself, using this property.\n\nIn that case, the damage is set to the Gameplay Effect, via a \"Set By Caller Magnitude\".\nFor that, the gameplay effect must be prepared with the \"Combat.Data.PoiseConsumption\" data name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactParticles_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Niagara effect used when the weapon performs a melee hit. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Niagara effect used when the weapon performs a melee hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactSound_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Sound asset used when the weapon performs a melee hit. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Sound asset used when the weapon performs a melee hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactShake_MetaData[] = {
		{ "Category", "Weapon|Melee" },
		{ "Comment", "/** Camera shake used on impact. The Cue Magnitude is used as a scale modifier. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Camera shake used on impact. The Cue Magnitude is used as a scale modifier." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon|Ranged" },
		{ "Comment", "/** An optional projectile class that can be assigned to this weapon. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatProjectileInterface" },
		{ "ToolTip", "An optional projectile class that can be assigned to this weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTrailsCache_MetaData[] = {
		{ "Comment", "/** A cache of all potential melee trails. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "A cache of all potential melee trails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCosmetics_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Dedicated cosmetic handling, integrated with the Asset Manager. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Dedicated cosmetic handling, integrated with the Asset Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTrails_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Particle component used to play melee trail cosmetics. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Particle component used to play melee trail cosmetics." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackAudio_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Audio component used to play melee attack sounds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Audio component used to play melee attack sounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeImpactHitAudio_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Audio component used to play melee hit impact sounds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatWeaponActor.h" },
		{ "ToolTip", "Audio component used to play melee hit impact sounds." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScanMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSourceMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeHitEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeHitEffectLevel;
	static void NewProp_bOverridesMeleeDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesMeleeDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeDamage;
	static void NewProp_bOverridesPoisonConsumption_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesPoisonConsumption;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoiseConsumption;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MeleeImpactParticles;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MeleeImpactSound;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_MeleeImpactShake;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeTrailsCache_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeTrailsCache;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponCosmetics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeTrails;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeImpactHitAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatWeaponActor_OnImpactHitAudioFinished, "OnImpactHitAudioFinished" }, // 3975842385
		{ &Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactCameraShake, "SelectMeleeImpactCameraShake" }, // 159916456
		{ &Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactParticles, "SelectMeleeImpactParticles" }, // 3554168217
		{ &Z_Construct_UFunction_ANinjaCombatWeaponActor_SelectMeleeImpactSound, "SelectMeleeImpactSound" }, // 1521643084
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatWeaponActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeScanMesh = { "MeleeScanMesh", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeScanMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanMesh_MetaData), NewProp_MeleeScanMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_ProjectileSourceMesh = { "ProjectileSourceMesh", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, ProjectileSourceMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSourceMesh_MetaData), NewProp_ProjectileSourceMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_WeaponTags = { "WeaponTags", nullptr, (EPropertyFlags)0x0020080000010035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, WeaponTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponTags_MetaData), NewProp_WeaponTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeHitEffectClass = { "MeleeHitEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeHitEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeHitEffectClass_MetaData), NewProp_MeleeHitEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeHitEffectLevel = { "MeleeHitEffectLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeHitEffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeHitEffectLevel_MetaData), NewProp_MeleeHitEffectLevel_MetaData) };
void Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesMeleeDamage_SetBit(void* Obj)
{
	((ANinjaCombatWeaponActor*)Obj)->bOverridesMeleeDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesMeleeDamage = { "bOverridesMeleeDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatWeaponActor), &Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesMeleeDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesMeleeDamage_MetaData), NewProp_bOverridesMeleeDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeDamage = { "MeleeDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeDamage_MetaData), NewProp_MeleeDamage_MetaData) };
void Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesPoisonConsumption_SetBit(void* Obj)
{
	((ANinjaCombatWeaponActor*)Obj)->bOverridesPoisonConsumption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesPoisonConsumption = { "bOverridesPoisonConsumption", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatWeaponActor), &Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesPoisonConsumption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridesPoisonConsumption_MetaData), NewProp_bOverridesPoisonConsumption_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_PoiseConsumption = { "PoiseConsumption", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, PoiseConsumption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoiseConsumption_MetaData), NewProp_PoiseConsumption_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactParticles = { "MeleeImpactParticles", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeImpactParticles), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeImpactParticles_MetaData), NewProp_MeleeImpactParticles_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactSound = { "MeleeImpactSound", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeImpactSound_MetaData), NewProp_MeleeImpactSound_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactShake = { "MeleeImpactShake", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeImpactShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeImpactShake_MetaData), NewProp_MeleeImpactShake_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeTrailsCache_Inner = { "MeleeTrailsCache", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeTrailsCache = { "MeleeTrailsCache", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeTrailsCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTrailsCache_MetaData), NewProp_MeleeTrailsCache_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_WeaponCosmetics = { "WeaponCosmetics", nullptr, (EPropertyFlags)0x014400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, WeaponCosmetics), Z_Construct_UClass_UNinjaCombatCosmeticsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCosmetics_MetaData), NewProp_WeaponCosmetics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeTrails = { "MeleeTrails", nullptr, (EPropertyFlags)0x014400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeTrails), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTrails_MetaData), NewProp_MeleeTrails_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeAttackAudio = { "MeleeAttackAudio", nullptr, (EPropertyFlags)0x014400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeAttackAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackAudio_MetaData), NewProp_MeleeAttackAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactHitAudio = { "MeleeImpactHitAudio", nullptr, (EPropertyFlags)0x014400000009000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatWeaponActor, MeleeImpactHitAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeImpactHitAudio_MetaData), NewProp_MeleeImpactHitAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeScanMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_ProjectileSourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_WeaponTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeHitEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeHitEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesMeleeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_bOverridesPoisonConsumption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_PoiseConsumption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactShake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeTrailsCache_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeTrailsCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_WeaponCosmetics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeTrails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeAttackAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::NewProp_MeleeImpactHitAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatWeaponInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatWeaponActor, ICombatWeaponInterface), false },  // 2404718040
	{ Z_Construct_UClass_UCombatMeleeInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatWeaponActor, ICombatMeleeInterface), false },  // 1579867907
	{ Z_Construct_UClass_UCombatRangedInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatWeaponActor, ICombatRangedInterface), false },  // 1535881293
	{ Z_Construct_UClass_UCombatProjectileProviderInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatWeaponActor, ICombatProjectileProviderInterface), false },  // 1918450308
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::ClassParams = {
	&ANinjaCombatWeaponActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatWeaponActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatWeaponActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatWeaponActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatWeaponActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatWeaponActor.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<ANinjaCombatWeaponActor>()
{
	return ANinjaCombatWeaponActor::StaticClass();
}
void ANinjaCombatWeaponActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_WeaponTags(TEXT("WeaponTags"));
	const bool bIsValid = true
		&& Name_WeaponTags == ClassReps[(int32)ENetFields_Private::WeaponTags].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANinjaCombatWeaponActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatWeaponActor);
ANinjaCombatWeaponActor::~ANinjaCombatWeaponActor() {}
// End Class ANinjaCombatWeaponActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatWeaponActor, ANinjaCombatWeaponActor::StaticClass, TEXT("ANinjaCombatWeaponActor"), &Z_Registration_Info_UClass_ANinjaCombatWeaponActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatWeaponActor), 4255823214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_3014234870(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatWeaponActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
