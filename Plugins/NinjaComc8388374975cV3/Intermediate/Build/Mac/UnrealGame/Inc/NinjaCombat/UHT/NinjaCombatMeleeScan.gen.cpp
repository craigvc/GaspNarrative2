// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatMeleeScan.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatMeleeScan() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EMeleeScanMode();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatMeleeScan Function GetCauser
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics
{
	struct NinjaCombatMeleeScan_eventGetCauser_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Gets the causer for this scan, which may be the character or a weapon.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Gets the causer for this scan, which may be the character or a weapon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventGetCauser_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "GetCauser", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::NinjaCombatMeleeScan_eventGetCauser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::NinjaCombatMeleeScan_eventGetCauser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execGetCauser)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCauser();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function GetCauser

// Begin Class UNinjaCombatMeleeScan Function GetDuration
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics
{
	struct NinjaCombatMeleeScan_eventGetDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Returns a duration for this Melee Scan.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Returns a duration for this Melee Scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::NinjaCombatMeleeScan_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::NinjaCombatMeleeScan_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function GetDuration

// Begin Class UNinjaCombatMeleeScan Function GetIgnoredActors
struct NinjaCombatMeleeScan_eventGetIgnoredActors_Parms
{
	TArray<AActor*> ReturnValue;
};
static const FName NAME_UNinjaCombatMeleeScan_GetIgnoredActors = FName(TEXT("GetIgnoredActors"));
TArray<AActor*> UNinjaCombatMeleeScan::GetIgnoredActors() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatMeleeScan_GetIgnoredActors);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMeleeScan_eventGetIgnoredActors_Parms Parms;
		const_cast<UNinjaCombatMeleeScan*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatMeleeScan*>(this)->GetIgnoredActors_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Determines all actors that should be ignored in a hit-scan. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Determines all actors that should be ignored in a hit-scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventGetIgnoredActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "GetIgnoredActors", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::PropPointers), sizeof(NinjaCombatMeleeScan_eventGetIgnoredActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMeleeScan_eventGetIgnoredActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execGetIgnoredActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetIgnoredActors_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function GetIgnoredActors

// Begin Class UNinjaCombatMeleeScan Function GetInstigator
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics
{
	struct NinjaCombatMeleeScan_eventGetInstigator_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Gets the instigator for this scan.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Gets the instigator for this scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::NinjaCombatMeleeScan_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::NinjaCombatMeleeScan_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function GetInstigator

// Begin Class UNinjaCombatMeleeScan Function GetMeleeHitOverride
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics
{
	struct NinjaCombatMeleeScan_eventGetMeleeHitOverride_Parms
	{
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Provides a Gameplay Effect used to override the original hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Provides a Gameplay Effect used to override the original hit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventGetMeleeHitOverride_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "GetMeleeHitOverride", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::NinjaCombatMeleeScan_eventGetMeleeHitOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::NinjaCombatMeleeScan_eventGetMeleeHitOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execGetMeleeHitOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetMeleeHitOverride();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function GetMeleeHitOverride

// Begin Class UNinjaCombatMeleeScan Function GetTrailGameplayCueTag
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics
{
	struct NinjaCombatMeleeScan_eventGetTrailGameplayCueTag_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Provides the Gameplay Tag for the cue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Provides the Gameplay Tag for the cue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventGetTrailGameplayCueTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "GetTrailGameplayCueTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::NinjaCombatMeleeScan_eventGetTrailGameplayCueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::NinjaCombatMeleeScan_eventGetTrailGameplayCueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execGetTrailGameplayCueTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetTrailGameplayCueTag();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function GetTrailGameplayCueTag

// Begin Class UNinjaCombatMeleeScan Function HasValidScanData
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics
{
	struct NinjaCombatMeleeScan_eventHasValidScanData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Checks if this instance has valid data for a Melee Scan.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Checks if this instance has valid data for a Melee Scan." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatMeleeScan_eventHasValidScanData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatMeleeScan_eventHasValidScanData_Parms), &Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "HasValidScanData", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::NinjaCombatMeleeScan_eventHasValidScanData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::NinjaCombatMeleeScan_eventHasValidScanData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execHasValidScanData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasValidScanData();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function HasValidScanData

// Begin Class UNinjaCombatMeleeScan Function NewInstance
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics
{
	struct NinjaCombatMeleeScan_eventNewInstance_Parms
	{
		TSubclassOf<UNinjaCombatMeleeScan> MeleeScanClass;
		AActor* Owner;
		AActor* Instigator;
		AActor* Causer;
		UMeshComponent* ScanMesh;
		TArray<FName> SocketNames;
		TEnumAsByte<ECollisionChannel> ScanChannel;
		EMeleeScanMode ScanMode;
		FVector ShapeDimensions;
		float Duration;
		UNinjaCombatMeleeScan* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Creates a new instance of the Melee Scan.\n\x09 *\n\x09 * You have the option to use the default class or provide a customized one.\n\x09 * In case you want to use the default one, you can just provide it or null to the Melee Scan Class.\n\x09 */" },
		{ "CPP_Default_Duration", "1.500000" },
		{ "CPP_Default_ShapeDimensions", "" },
		{ "DisplayName", "New Melee Scan Instance" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Creates a new instance of the Melee Scan.\n\nYou have the option to use the default class or provide a customized one.\nIn case you want to use the default one, you can just provide it or null to the Melee Scan Class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeScanClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScanChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScanMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScanMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeDimensions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_MeleeScanClass = { "MeleeScanClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, MeleeScanClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanMesh = { "ScanMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, ScanMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanMesh_MetaData), NewProp_ScanMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_SocketNames_Inner = { "SocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_SocketNames = { "SocketNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, SocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNames_MetaData), NewProp_SocketNames_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanChannel = { "ScanChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, ScanChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanMode = { "ScanMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, ScanMode), Z_Construct_UEnum_NinjaCombat_EMeleeScanMode, METADATA_PARAMS(0, nullptr) }; // 4155429208
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ShapeDimensions = { "ShapeDimensions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, ShapeDimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventNewInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_MeleeScanClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_SocketNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_SocketNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ScanMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ShapeDimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "NewInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NinjaCombatMeleeScan_eventNewInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::NinjaCombatMeleeScan_eventNewInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execNewInstance)
{
	P_GET_OBJECT(UClass,Z_Param_MeleeScanClass);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Causer);
	P_GET_OBJECT(UMeshComponent,Z_Param_ScanMesh);
	P_GET_TARRAY_REF(FName,Z_Param_Out_SocketNames);
	P_GET_PROPERTY(FByteProperty,Z_Param_ScanChannel);
	P_GET_ENUM(EMeleeScanMode,Z_Param_ScanMode);
	P_GET_STRUCT(FVector,Z_Param_ShapeDimensions);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatMeleeScan**)Z_Param__Result=UNinjaCombatMeleeScan::NewInstance(Z_Param_MeleeScanClass,Z_Param_Owner,Z_Param_Instigator,Z_Param_Causer,Z_Param_ScanMesh,Z_Param_Out_SocketNames,ECollisionChannel(Z_Param_ScanChannel),EMeleeScanMode(Z_Param_ScanMode),Z_Param_ShapeDimensions,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function NewInstance

// Begin Class UNinjaCombatMeleeScan Function ScanForTargets
struct NinjaCombatMeleeScan_eventScanForTargets_Parms
{
	TArray<FHitResult> OutHits;
};
static const FName NAME_UNinjaCombatMeleeScan_ScanForTargets = FName(TEXT("ScanForTargets"));
void UNinjaCombatMeleeScan::ScanForTargets(TArray<FHitResult>& OutHits)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatMeleeScan_ScanForTargets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatMeleeScan_eventScanForTargets_Parms Parms;
		Parms.OutHits=OutHits;
	ProcessEvent(Func,&Parms);
		OutHits=Parms.OutHits;
	}
	else
	{
		ScanForTargets_Implementation(OutHits);
	}
}
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Scan for targets, considering the setup represented by this instance.\n\x09 *\n\x09 * The scan is done by collecting targets between the previous and current Socket Positions\n\x09 * in the provided Mesh Component. Anything hit in between will be added to the result array.\n\x09 * \n\x09 * @param OutHits\n\x09 *\x09\x09""All Hit Results collected for this scan.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Scan for targets, considering the setup represented by this instance.\n\nThe scan is done by collecting targets between the previous and current Socket Positions\nin the provided Mesh Component. Anything hit in between will be added to the result array.\n\n@param OutHits\n             All Hit Results collected for this scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventScanForTargets_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::NewProp_OutHits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::NewProp_OutHits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "ScanForTargets", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::PropPointers), sizeof(NinjaCombatMeleeScan_eventScanForTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatMeleeScan_eventScanForTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execScanForTargets)
{
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHits);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScanForTargets_Implementation(Z_Param_Out_OutHits);
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function ScanForTargets

// Begin Class UNinjaCombatMeleeScan Function SetMeleeHitOverride
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics
{
	struct NinjaCombatMeleeScan_eventSetMeleeHitOverride_Parms
	{
		const TSubclassOf<UGameplayEffect> NewMeleeHitOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Sets the Melee Hit override for this class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Sets the Melee Hit override for this class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMeleeHitOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewMeleeHitOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::NewProp_NewMeleeHitOverride = { "NewMeleeHitOverride", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventSetMeleeHitOverride_Parms, NewMeleeHitOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMeleeHitOverride_MetaData), NewProp_NewMeleeHitOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::NewProp_NewMeleeHitOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "SetMeleeHitOverride", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::NinjaCombatMeleeScan_eventSetMeleeHitOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::NinjaCombatMeleeScan_eventSetMeleeHitOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execSetMeleeHitOverride)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UGameplayEffect>,Z_Param_Out_NewMeleeHitOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeleeHitOverride(Z_Param_Out_NewMeleeHitOverride);
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function SetMeleeHitOverride

// Begin Class UNinjaCombatMeleeScan Function SetTrailGameplayCue
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics
{
	struct NinjaCombatMeleeScan_eventSetTrailGameplayCue_Parms
	{
		FGameplayTag NewTrailGameplayCueTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Sets the new Gameplay Cue Tag for the trail.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Sets the new Gameplay Cue Tag for the trail." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTrailGameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTrailGameplayCueTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::NewProp_NewTrailGameplayCueTag = { "NewTrailGameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatMeleeScan_eventSetTrailGameplayCue_Parms, NewTrailGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTrailGameplayCueTag_MetaData), NewProp_NewTrailGameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::NewProp_NewTrailGameplayCueTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "SetTrailGameplayCue", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::NinjaCombatMeleeScan_eventSetTrailGameplayCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::NinjaCombatMeleeScan_eventSetTrailGameplayCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execSetTrailGameplayCue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_NewTrailGameplayCueTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrailGameplayCue(Z_Param_NewTrailGameplayCueTag);
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function SetTrailGameplayCue

// Begin Class UNinjaCombatMeleeScan Function SnapshotSocketPositions
struct Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Snapshots all socket positions from the current mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Snapshots all socket positions from the current mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatMeleeScan, nullptr, "SnapshotSocketPositions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatMeleeScan::execSnapshotSocketPositions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SnapshotSocketPositions();
	P_NATIVE_END;
}
// End Class UNinjaCombatMeleeScan Function SnapshotSocketPositions

// Begin Class UNinjaCombatMeleeScan
void UNinjaCombatMeleeScan::StaticRegisterNativesUNinjaCombatMeleeScan()
{
	UClass* Class = UNinjaCombatMeleeScan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCauser", &UNinjaCombatMeleeScan::execGetCauser },
		{ "GetDuration", &UNinjaCombatMeleeScan::execGetDuration },
		{ "GetIgnoredActors", &UNinjaCombatMeleeScan::execGetIgnoredActors },
		{ "GetInstigator", &UNinjaCombatMeleeScan::execGetInstigator },
		{ "GetMeleeHitOverride", &UNinjaCombatMeleeScan::execGetMeleeHitOverride },
		{ "GetTrailGameplayCueTag", &UNinjaCombatMeleeScan::execGetTrailGameplayCueTag },
		{ "HasValidScanData", &UNinjaCombatMeleeScan::execHasValidScanData },
		{ "NewInstance", &UNinjaCombatMeleeScan::execNewInstance },
		{ "ScanForTargets", &UNinjaCombatMeleeScan::execScanForTargets },
		{ "SetMeleeHitOverride", &UNinjaCombatMeleeScan::execSetMeleeHitOverride },
		{ "SetTrailGameplayCue", &UNinjaCombatMeleeScan::execSetTrailGameplayCue },
		{ "SnapshotSocketPositions", &UNinjaCombatMeleeScan::execSnapshotSocketPositions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatMeleeScan);
UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister()
{
	return UNinjaCombatMeleeScan::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatMeleeScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a Melee Scan happening in the Combat System.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatMeleeScan.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Represents a Melee Scan happening in the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Determines if the Debug Mode is activated for this scan's execution.\n\x09 *\n\x09 * In debug mode, the scans will draw lines or spheres displaying targets that were collected\n\x09 * and will be returned on each call to the Scan For Targets function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Determines if the Debug Mode is activated for this scan's execution.\n\nIn debug mode, the scans will draw lines or spheres displaying targets that were collected\nand will be returned on each call to the Scan For Targets function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Maximum duration for this scan if not deliberately cancelled. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Maximum duration for this scan if not deliberately cancelled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanOwner_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Actor that has triggered this scan. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Actor that has triggered this scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Instigator for this scan. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Instigator for this scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Causer of this scan. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Causer of this scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanMesh_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** The Mesh Component from which the scan will execute. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "The Mesh Component from which the scan will execute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNames_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Sockets used for the Melee Scan.\n\x09 *\n\x09 * Most melee weapons will only have one set of sockets, but the reason why this is separate from\n\x09 * the weapon itself is to allow different melee scans to be performed by different parts of the\n\x09 * same weapon, which may be the case for something like a dual-blade.\n\x09 *\n\x09 * If the scan is set to be performed by the owner directly (i.e. a punch or kick), then these\n\x09 * sockets must be present in the owner's mesh and, as before, it may refer to different parts\n\x09 * of the mesh such as the hands or feet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Sockets used for the Melee Scan.\n\nMost melee weapons will only have one set of sockets, but the reason why this is separate from\nthe weapon itself is to allow different melee scans to be performed by different parts of the\nsame weapon, which may be the case for something like a dual-blade.\n\nIf the scan is set to be performed by the owner directly (i.e. a punch or kick), then these\nsockets must be present in the owner's mesh and, as before, it may refer to different parts\nof the mesh such as the hands or feet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanChannel_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Channel used for the scan.\n\x09 *\n\x09 * Set by default in the Combat System Settings, but can be overriden in this scan data to any\n\x09 * other channel that may be more appropriate for this particular case (which is recommended).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Channel used for the scan.\n\nSet by default in the Combat System Settings, but can be overriden in this scan data to any\nother channel that may be more appropriate for this particular case (which is recommended)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScanMode_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Scan Mode to be used.\n\x09 *\n\x09 * Some melee systems may benefit from a Line Trace where others would benefit better from a\n\x09 * Sphere Trace. This setting allows you to adjust them on a per-scan basis. Depending on how\n\x09 * your collisions are set up, you may need to change the scan channel too.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Scan Mode to be used.\n\nSome melee systems may benefit from a Line Trace where others would benefit better from a\nSphere Trace. This setting allows you to adjust them on a per-scan basis. Depending on how\nyour collisions are set up, you may need to change the scan channel too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeHitOverride_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/**\n\x09 * Gameplay Effect that overrides the one set in the ability.\n\x09 * Useful when the same montage have many attacks that require different types of damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Gameplay Effect that overrides the one set in the ability.\nUseful when the same montage have many attacks that require different types of damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailGameplayCueTag_MetaData[] = {
		{ "Category", "Melee Scan" },
		{ "Comment", "/** Gameplay Cue Tag for the Melee Scan cosmetics (Weapon Trails). */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatMeleeScan.h" },
		{ "ToolTip", "Gameplay Cue Tag for the Melee Scan cosmetics (Weapon Trails)." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScanMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketNames;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScanChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScanMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScanMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MeleeHitOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrailGameplayCueTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_GetCauser, "GetCauser" }, // 1548344080
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_GetDuration, "GetDuration" }, // 2102907178
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_GetIgnoredActors, "GetIgnoredActors" }, // 1344940998
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_GetInstigator, "GetInstigator" }, // 3917088158
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_GetMeleeHitOverride, "GetMeleeHitOverride" }, // 1250882211
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_GetTrailGameplayCueTag, "GetTrailGameplayCueTag" }, // 3603114588
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_HasValidScanData, "HasValidScanData" }, // 276894419
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_NewInstance, "NewInstance" }, // 1361951370
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_ScanForTargets, "ScanForTargets" }, // 3192046791
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_SetMeleeHitOverride, "SetMeleeHitOverride" }, // 1295605971
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_SetTrailGameplayCue, "SetTrailGameplayCue" }, // 3542587512
		{ &Z_Construct_UFunction_UNinjaCombatMeleeScan_SnapshotSocketPositions, "SnapshotSocketPositions" }, // 793704114
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatMeleeScan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((UNinjaCombatMeleeScan*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatMeleeScan), &Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebug_MetaData), NewProp_bEnableDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanOwner = { "ScanOwner", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, ScanOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanOwner_MetaData), NewProp_ScanOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Causer_MetaData), NewProp_Causer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanMesh = { "ScanMesh", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, ScanMesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanMesh_MetaData), NewProp_ScanMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_SocketNames_Inner = { "SocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_SocketNames = { "SocketNames", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, SocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNames_MetaData), NewProp_SocketNames_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanChannel = { "ScanChannel", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, ScanChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanChannel_MetaData), NewProp_ScanChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanMode = { "ScanMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, ScanMode), Z_Construct_UEnum_NinjaCombat_EMeleeScanMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScanMode_MetaData), NewProp_ScanMode_MetaData) }; // 4155429208
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_MeleeHitOverride = { "MeleeHitOverride", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, MeleeHitOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeHitOverride_MetaData), NewProp_MeleeHitOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_TrailGameplayCueTag = { "TrailGameplayCueTag", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatMeleeScan, TrailGameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailGameplayCueTag_MetaData), NewProp_TrailGameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_SocketNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_SocketNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_ScanMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_MeleeHitOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::NewProp_TrailGameplayCueTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::ClassParams = {
	&UNinjaCombatMeleeScan::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatMeleeScan()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatMeleeScan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatMeleeScan.OuterSingleton, Z_Construct_UClass_UNinjaCombatMeleeScan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatMeleeScan.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatMeleeScan>()
{
	return UNinjaCombatMeleeScan::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatMeleeScan);
UNinjaCombatMeleeScan::~UNinjaCombatMeleeScan() {}
// End Class UNinjaCombatMeleeScan

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatMeleeScan, UNinjaCombatMeleeScan::StaticClass, TEXT("UNinjaCombatMeleeScan"), &Z_Registration_Info_UClass_UNinjaCombatMeleeScan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatMeleeScan), 409266332U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_848256333(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatMeleeScan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
