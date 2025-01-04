// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatCastActor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatCastActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatCastActor();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatCastActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatCastInterface_NoRegister();
NINJACOMBATACTORPOOL_API UClass* Z_Construct_UClass_ANinjaCombatPoolableActor();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class ANinjaCombatCastActor Function AlignWithFloor
static const FName NAME_ANinjaCombatCastActor_AlignWithFloor = FName(TEXT("AlignWithFloor"));
void ANinjaCombatCastActor::AlignWithFloor()
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatCastActor_AlignWithFloor);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		AlignWithFloor_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "AlignWithFloor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execAlignWithFloor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlignWithFloor_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function AlignWithFloor

// Begin Class ANinjaCombatCastActor Function ApplyEffectToHitResult
struct Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics
{
	struct NinjaCombatCastActor_eventApplyEffectToHitResult_Parms
	{
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast" },
		{ "Comment", "/**\n\x09 * Applies the Gameplay Effect to a hit result.\n\x09 *\n\x09 * Must be called in the authoritative version. It's safe to call this function if\n\x09 * there's no Gameplay Effect Handle for targets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Applies the Gameplay Effect to a hit result.\n\nMust be called in the authoritative version. It's safe to call this function if\nthere's no Gameplay Effect Handle for targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventApplyEffectToHitResult_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "ApplyEffectToHitResult", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::NinjaCombatCastActor_eventApplyEffectToHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::NinjaCombatCastActor_eventApplyEffectToHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execApplyEffectToHitResult)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToHitResult(Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function ApplyEffectToHitResult

// Begin Class ANinjaCombatCastActor Function ApplyEffectToTarget
struct Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics
{
	struct NinjaCombatCastActor_eventApplyEffectToTarget_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast" },
		{ "Comment", "/**\n\x09 * Applies the Gameplay Effect to the target.\n\x09 *\n\x09 * Must be called in the authoritative version. It's safe to call this function if\n\x09 * there's no Gameplay Effect Handle for targets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Applies the Gameplay Effect to the target.\n\nMust be called in the authoritative version. It's safe to call this function if\nthere's no Gameplay Effect Handle for targets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventApplyEffectToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "ApplyEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::NinjaCombatCastActor_eventApplyEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::NinjaCombatCastActor_eventApplyEffectToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execApplyEffectToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectToTarget(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function ApplyEffectToTarget

// Begin Class ANinjaCombatCastActor Function GetAdditionalSetByCallerMagnitudes
struct NinjaCombatCastActor_eventGetAdditionalSetByCallerMagnitudes_Parms
{
	TMap<FGameplayTag,float> ReturnValue;
};
static const FName NAME_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes = FName(TEXT("GetAdditionalSetByCallerMagnitudes"));
TMap<FGameplayTag,float> ANinjaCombatCastActor::GetAdditionalSetByCallerMagnitudes() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCastActor_eventGetAdditionalSetByCallerMagnitudes_Parms Parms;
		const_cast<ANinjaCombatCastActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatCastActor*>(this)->GetAdditionalSetByCallerMagnitudes_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast" },
		{ "Comment", "/**\n\x09 * Allows the caller to set any additional magnitudes, based on any applicable rule.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Allows the caller to set any additional magnitudes, based on any applicable rule." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventGetAdditionalSetByCallerMagnitudes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "GetAdditionalSetByCallerMagnitudes", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::PropPointers), sizeof(NinjaCombatCastActor_eventGetAdditionalSetByCallerMagnitudes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCastActor_eventGetAdditionalSetByCallerMagnitudes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execGetAdditionalSetByCallerMagnitudes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FGameplayTag,float>*)Z_Param__Result=P_THIS->GetAdditionalSetByCallerMagnitudes_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function GetAdditionalSetByCallerMagnitudes

// Begin Class ANinjaCombatCastActor Function GetCastOwner
struct Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics
{
	struct NinjaCombatCastActor_eventGetCastOwner_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast" },
		{ "Comment", "/**\n\x09 * Provides the Actor that originated this cast.\n\x09 *\n\x09 * The actor might be null as the cast can work independently of the owning actor\n\x09 * still being alive/valid. Make sure to check that before performing any operations!\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Provides the Actor that originated this cast.\n\nThe actor might be null as the cast can work independently of the owning actor\nstill being alive/valid. Make sure to check that before performing any operations!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventGetCastOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "GetCastOwner", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::NinjaCombatCastActor_eventGetCastOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::NinjaCombatCastActor_eventGetCastOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execGetCastOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCastOwner();
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function GetCastOwner

// Begin Class ANinjaCombatCastActor Function GetDynamicGameplayTags
struct NinjaCombatCastActor_eventGetDynamicGameplayTags_Parms
{
	FGameplayTagContainer ReturnValue;
};
static const FName NAME_ANinjaCombatCastActor_GetDynamicGameplayTags = FName(TEXT("GetDynamicGameplayTags"));
FGameplayTagContainer ANinjaCombatCastActor::GetDynamicGameplayTags() const
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatCastActor_GetDynamicGameplayTags);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCastActor_eventGetDynamicGameplayTags_Parms Parms;
		const_cast<ANinjaCombatCastActor*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<ANinjaCombatCastActor*>(this)->GetDynamicGameplayTags_Implementation();
	}
}
struct Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast" },
		{ "Comment", "/**\n\x09 * Allows the caller to set any Dynamic Gameplay Tags to the outgoing effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Allows the caller to set any Dynamic Gameplay Tags to the outgoing effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventGetDynamicGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "GetDynamicGameplayTags", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::PropPointers), sizeof(NinjaCombatCastActor_eventGetDynamicGameplayTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCastActor_eventGetDynamicGameplayTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execGetDynamicGameplayTags)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetDynamicGameplayTags_Implementation();
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function GetDynamicGameplayTags

// Begin Class ANinjaCombatCastActor Function GetWeapon
struct Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics
{
	struct NinjaCombatCastActor_eventGetWeapon_Parms
	{
		FGameplayTagQuery WeaponQuery;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast" },
		{ "Comment", "/**\n\x09 * Retrieves a Weapon Actor from the cast source.\n\x09 * Useful if you need to align the Cast Actor with a weapon, or a socket.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Retrieves a Weapon Actor from the cast source.\nUseful if you need to align the Cast Actor with a weapon, or a socket." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponQuery;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::NewProp_WeaponQuery = { "WeaponQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventGetWeapon_Parms, WeaponQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponQuery_MetaData), NewProp_WeaponQuery_MetaData) }; // 572225232
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::NewProp_WeaponQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "GetWeapon", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::NinjaCombatCastActor_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::NinjaCombatCastActor_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execGetWeapon)
{
	P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_WeaponQuery);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetWeapon(Z_Param_Out_WeaponQuery);
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function GetWeapon

// Begin Class ANinjaCombatCastActor Function HandleOverlap
struct NinjaCombatCastActor_eventHandleOverlap_Parms
{
	UPrimitiveComponent* OverlappedComponent;
	AActor* OtherActor;
	UPrimitiveComponent* OtherComp;
	int32 OtherBodyIndex;
	bool bFromSweep;
	FHitResult SweepResult;
};
static const FName NAME_ANinjaCombatCastActor_HandleOverlap = FName(TEXT("HandleOverlap"));
void ANinjaCombatCastActor::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatCastActor_HandleOverlap);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCastActor_eventHandleOverlap_Parms Parms;
		Parms.OverlappedComponent=OverlappedComponent;
		Parms.OtherActor=OtherActor;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		Parms.bFromSweep=bFromSweep ? true : false;
		Parms.SweepResult=SweepResult;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleOverlap_Implementation(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	}
}
struct Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventHandleOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventHandleOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventHandleOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventHandleOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((NinjaCombatCastActor_eventHandleOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatCastActor_eventHandleOverlap_Parms), &Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventHandleOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "HandleOverlap", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::PropPointers), sizeof(NinjaCombatCastActor_eventHandleOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCastActor_eventHandleOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execHandleOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleOverlap_Implementation(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function HandleOverlap

// Begin Class ANinjaCombatCastActor Function ShouldApplyToTarget
struct NinjaCombatCastActor_eventShouldApplyToTarget_Parms
{
	const AActor* Target;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatCastActor_eventShouldApplyToTarget_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_ANinjaCombatCastActor_ShouldApplyToTarget = FName(TEXT("ShouldApplyToTarget"));
bool ANinjaCombatCastActor::ShouldApplyToTarget(const AActor* Target)
{
	UFunction* Func = FindFunctionChecked(NAME_ANinjaCombatCastActor_ShouldApplyToTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatCastActor_eventShouldApplyToTarget_Parms Parms;
		Parms.Target=Target;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return ShouldApplyToTarget_Implementation(Target);
	}
}
struct Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast" },
		{ "Comment", "/**\n\x09 * Checks if a captured target should receive the effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Checks if a captured target should receive the effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCastActor_eventShouldApplyToTarget_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatCastActor_eventShouldApplyToTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatCastActor_eventShouldApplyToTarget_Parms), &Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "ShouldApplyToTarget", nullptr, nullptr, Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::PropPointers), sizeof(NinjaCombatCastActor_eventShouldApplyToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatCastActor_eventShouldApplyToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execShouldApplyToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldApplyToTarget_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function ShouldApplyToTarget

// Begin Class ANinjaCombatCastActor Function TryAlignWithFloor
struct Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Cast" },
		{ "Comment", "/**\n\x09 * Tries to align the cast actor with the floor.\n\x09 * You can also modify the alignment trace by overwriting \"AlignWithFloor\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Tries to align the cast actor with the floor.\nYou can also modify the alignment trace by overwriting \"AlignWithFloor\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCastActor, nullptr, "TryAlignWithFloor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANinjaCombatCastActor::execTryAlignWithFloor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryAlignWithFloor();
	P_NATIVE_END;
}
// End Class ANinjaCombatCastActor Function TryAlignWithFloor

// Begin Class ANinjaCombatCastActor
void ANinjaCombatCastActor::StaticRegisterNativesANinjaCombatCastActor()
{
	UClass* Class = ANinjaCombatCastActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlignWithFloor", &ANinjaCombatCastActor::execAlignWithFloor },
		{ "ApplyEffectToHitResult", &ANinjaCombatCastActor::execApplyEffectToHitResult },
		{ "ApplyEffectToTarget", &ANinjaCombatCastActor::execApplyEffectToTarget },
		{ "GetAdditionalSetByCallerMagnitudes", &ANinjaCombatCastActor::execGetAdditionalSetByCallerMagnitudes },
		{ "GetCastOwner", &ANinjaCombatCastActor::execGetCastOwner },
		{ "GetDynamicGameplayTags", &ANinjaCombatCastActor::execGetDynamicGameplayTags },
		{ "GetWeapon", &ANinjaCombatCastActor::execGetWeapon },
		{ "HandleOverlap", &ANinjaCombatCastActor::execHandleOverlap },
		{ "ShouldApplyToTarget", &ANinjaCombatCastActor::execShouldApplyToTarget },
		{ "TryAlignWithFloor", &ANinjaCombatCastActor::execTryAlignWithFloor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatCastActor);
UClass* Z_Construct_UClass_ANinjaCombatCastActor_NoRegister()
{
	return ANinjaCombatCastActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaCombatCastActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base implementation of a cast.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatCastActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base implementation of a cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldIgnoreSource_MetaData[] = {
		{ "Category", "Cast" },
		{ "Comment", "/** If set to true, then ignores the source whenever a collision is detected. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "If set to true, then ignores the source whenever a collision is detected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReinforceHitResults_MetaData[] = {
		{ "Category", "Cast" },
		{ "Comment", "/**\n\x09 * If set to true, reinforces hit result on targets.\n\x09 * \n\x09 * Usually, you only need this if your cast should trigger hit/death reactions. Otherwise,\n\x09 * if it's just an area of effect, that applies an effect, you can turn this off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "If set to true, reinforces hit result on targets.\n\nUsually, you only need this if your cast should trigger hit/death reactions. Otherwise,\nif it's just an area of effect, that applies an effect, you can turn this off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTryToAlignWithFloor_MetaData[] = {
		{ "Category", "Cast" },
		{ "Comment", "/** If set to true, automatically tries to align the actor with the floor. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "If set to true, automatically tries to align the actor with the floor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorTraceChannel_MetaData[] = {
		{ "Category", "Cast" },
		{ "Comment", "/** Trace Channel used to detect the floor. */" },
		{ "EditCondition", "bTryToAlignWithFloor" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Trace Channel used to detect the floor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorOffset_MetaData[] = {
		{ "Category", "Cast" },
		{ "Comment", "/** An offset added to the final position before placing on the floor. */" },
		{ "EditCondition", "bTryToAlignWithFloor" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "An offset added to the final position before placing on the floor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastOwnerPtr_MetaData[] = {
		{ "Comment", "/** Source, usually an ability, that originated this cast. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Source, usually an ability, that originated this cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastSphere_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "Comment", "/** Collision sphere for the cast. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatCastActor.h" },
		{ "ToolTip", "Collision sphere for the cast." },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldIgnoreSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldIgnoreSource;
	static void NewProp_bReinforceHitResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinforceHitResults;
	static void NewProp_bTryToAlignWithFloor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryToAlignWithFloor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FloorTraceChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorOffset;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CastOwnerPtr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastSphere;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_AlignWithFloor, "AlignWithFloor" }, // 790121319
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToHitResult, "ApplyEffectToHitResult" }, // 3878264356
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_ApplyEffectToTarget, "ApplyEffectToTarget" }, // 2164387160
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_GetAdditionalSetByCallerMagnitudes, "GetAdditionalSetByCallerMagnitudes" }, // 228716937
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_GetCastOwner, "GetCastOwner" }, // 2395734700
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_GetDynamicGameplayTags, "GetDynamicGameplayTags" }, // 479879158
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_GetWeapon, "GetWeapon" }, // 3614635986
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_HandleOverlap, "HandleOverlap" }, // 3186111724
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_ShouldApplyToTarget, "ShouldApplyToTarget" }, // 1752534742
		{ &Z_Construct_UFunction_ANinjaCombatCastActor_TryAlignWithFloor, "TryAlignWithFloor" }, // 1358622643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatCastActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bShouldIgnoreSource_SetBit(void* Obj)
{
	((ANinjaCombatCastActor*)Obj)->bShouldIgnoreSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bShouldIgnoreSource = { "bShouldIgnoreSource", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatCastActor), &Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bShouldIgnoreSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldIgnoreSource_MetaData), NewProp_bShouldIgnoreSource_MetaData) };
void Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bReinforceHitResults_SetBit(void* Obj)
{
	((ANinjaCombatCastActor*)Obj)->bReinforceHitResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bReinforceHitResults = { "bReinforceHitResults", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatCastActor), &Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bReinforceHitResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReinforceHitResults_MetaData), NewProp_bReinforceHitResults_MetaData) };
void Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bTryToAlignWithFloor_SetBit(void* Obj)
{
	((ANinjaCombatCastActor*)Obj)->bTryToAlignWithFloor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bTryToAlignWithFloor = { "bTryToAlignWithFloor", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANinjaCombatCastActor), &Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bTryToAlignWithFloor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTryToAlignWithFloor_MetaData), NewProp_bTryToAlignWithFloor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_FloorTraceChannel = { "FloorTraceChannel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatCastActor, FloorTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorTraceChannel_MetaData), NewProp_FloorTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_FloorOffset = { "FloorOffset", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatCastActor, FloorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorOffset_MetaData), NewProp_FloorOffset_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_CastOwnerPtr = { "CastOwnerPtr", nullptr, (EPropertyFlags)0x0044000000000020, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatCastActor, CastOwnerPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastOwnerPtr_MetaData), NewProp_CastOwnerPtr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_CastSphere = { "CastSphere", nullptr, (EPropertyFlags)0x014400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaCombatCastActor, CastSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastSphere_MetaData), NewProp_CastSphere_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatCastActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bShouldIgnoreSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bReinforceHitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_bTryToAlignWithFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_FloorTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_FloorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_CastOwnerPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCastActor_Statics::NewProp_CastSphere,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCastActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaCombatCastActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANinjaCombatPoolableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCastActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatCastInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaCombatCastActor, ICombatCastInterface), false },  // 3593470449
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatCastActor_Statics::ClassParams = {
	&ANinjaCombatCastActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANinjaCombatCastActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCastActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCastActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaCombatCastActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaCombatCastActor()
{
	if (!Z_Registration_Info_UClass_ANinjaCombatCastActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatCastActor.OuterSingleton, Z_Construct_UClass_ANinjaCombatCastActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaCombatCastActor.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<ANinjaCombatCastActor>()
{
	return ANinjaCombatCastActor::StaticClass();
}
void ANinjaCombatCastActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CastOwnerPtr(TEXT("CastOwnerPtr"));
	const bool bIsValid = true
		&& Name_CastOwnerPtr == ClassReps[(int32)ENetFields_Private::CastOwnerPtr].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANinjaCombatCastActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatCastActor);
ANinjaCombatCastActor::~ANinjaCombatCastActor() {}
// End Class ANinjaCombatCastActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatCastActor, ANinjaCombatCastActor::StaticClass, TEXT("ANinjaCombatCastActor"), &Z_Registration_Info_UClass_ANinjaCombatCastActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatCastActor), 1676936597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_2162782089(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
