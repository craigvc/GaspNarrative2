// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Animation/NinjaCombatAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimInstance();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAnimInstance Function CalculateBlendValues
struct NinjaCombatAnimInstance_eventCalculateBlendValues_Parms
{
	float DeltaSeconds;
};
static const FName NAME_UNinjaCombatAnimInstance_CalculateBlendValues = FName(TEXT("CalculateBlendValues"));
void UNinjaCombatAnimInstance::CalculateBlendValues(float DeltaSeconds)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimInstance_CalculateBlendValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimInstance_eventCalculateBlendValues_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CalculateBlendValues_Implementation(DeltaSeconds);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation Instance" },
		{ "Comment", "/**\n\x09 * Calculates blend values, based on the current locomotion state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Calculates blend values, based on the current locomotion state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventCalculateBlendValues_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "CalculateBlendValues", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::PropPointers), sizeof(NinjaCombatAnimInstance_eventCalculateBlendValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimInstance_eventCalculateBlendValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execCalculateBlendValues)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateBlendValues_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function CalculateBlendValues

// Begin Class UNinjaCombatAnimInstance Function CalculateLocomotionValues
struct NinjaCombatAnimInstance_eventCalculateLocomotionValues_Parms
{
	float DeltaSeconds;
};
static const FName NAME_UNinjaCombatAnimInstance_CalculateLocomotionValues = FName(TEXT("CalculateLocomotionValues"));
void UNinjaCombatAnimInstance::CalculateLocomotionValues(float DeltaSeconds)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimInstance_CalculateLocomotionValues);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimInstance_eventCalculateLocomotionValues_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CalculateLocomotionValues_Implementation(DeltaSeconds);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation Instance" },
		{ "Comment", "/**\n\x09 * Calculates locomotion values, based on the current stored character.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Calculates locomotion values, based on the current stored character." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventCalculateLocomotionValues_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "CalculateLocomotionValues", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::PropPointers), sizeof(NinjaCombatAnimInstance_eventCalculateLocomotionValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimInstance_eventCalculateLocomotionValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execCalculateLocomotionValues)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateLocomotionValues_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function CalculateLocomotionValues

// Begin Class UNinjaCombatAnimInstance Function GetCharacterMovement
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics
{
	struct NinjaCombatAnimInstance_eventGetCharacterMovement_Parms
	{
		UCharacterMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Ninja Combat|Animation" },
		{ "Comment", "/**\n\x09 * Provides the Movement Component assigned to the owning character.\n\x09 * Make sure to check before using it, as it may be null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Provides the Movement Component assigned to the owning character.\nMake sure to check before using it, as it may be null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventGetCharacterMovement_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "GetCharacterMovement", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::NinjaCombatAnimInstance_eventGetCharacterMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::NinjaCombatAnimInstance_eventGetCharacterMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execGetCharacterMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetCharacterMovement();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function GetCharacterMovement

// Begin Class UNinjaCombatAnimInstance Function HandleBlockingStateChanged
struct NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms
{
	UActorComponent* DefenseManager;
	bool bIsBlocking;
};
static const FName NAME_UNinjaCombatAnimInstance_HandleBlockingStateChanged = FName(TEXT("HandleBlockingStateChanged"));
void UNinjaCombatAnimInstance::HandleBlockingStateChanged(UActorComponent* DefenseManager, bool bIsBlocking)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimInstance_HandleBlockingStateChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms Parms;
		Parms.DefenseManager=DefenseManager;
		Parms.bIsBlocking=bIsBlocking ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleBlockingStateChanged_Implementation(DefenseManager, bIsBlocking);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation Instance" },
		{ "Comment", "/**\n\x09 * Reacts to a change in the Blocking state, which can modify the upper body instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Reacts to a change in the Blocking state, which can modify the upper body instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefenseManager;
	static void NewProp_bIsBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::NewProp_DefenseManager = { "DefenseManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms, DefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseManager_MetaData), NewProp_DefenseManager_MetaData) };
void Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
{
	((NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms*)Obj)->bIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms), &Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::NewProp_DefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::NewProp_bIsBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "HandleBlockingStateChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::PropPointers), sizeof(NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimInstance_eventHandleBlockingStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execHandleBlockingStateChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_DefenseManager);
	P_GET_UBOOL(Z_Param_bIsBlocking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBlockingStateChanged_Implementation(Z_Param_DefenseManager,Z_Param_bIsBlocking);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function HandleBlockingStateChanged

// Begin Class UNinjaCombatAnimInstance Function HandleCombatTargetChanged
struct NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms
{
	UActorComponent* TargetManager;
	const AActor* CombatTarget;
	const AActor* OldCombatTarget;
};
static const FName NAME_UNinjaCombatAnimInstance_HandleCombatTargetChanged = FName(TEXT("HandleCombatTargetChanged"));
void UNinjaCombatAnimInstance::HandleCombatTargetChanged(UActorComponent* TargetManager, const AActor* CombatTarget, const AActor* OldCombatTarget)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimInstance_HandleCombatTargetChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms Parms;
		Parms.TargetManager=TargetManager;
		Parms.CombatTarget=CombatTarget;
		Parms.OldCombatTarget=OldCombatTarget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleCombatTargetChanged_Implementation(TargetManager, CombatTarget, OldCombatTarget);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation Instance" },
		{ "Comment", "/**\n\x09 * Reacts to a change in the Combat Target, which can enable or disable strafing.\n\x09 * By default, strafing is determined by the presence of a current Combat Target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Reacts to a change in the Combat Target, which can enable or disable strafing.\nBy default, strafing is determined by the presence of a current Combat Target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms, TargetManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetManager_MetaData), NewProp_TargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTarget_MetaData), NewProp_CombatTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::NewProp_OldCombatTarget = { "OldCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms, OldCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCombatTarget_MetaData), NewProp_OldCombatTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::NewProp_TargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::NewProp_OldCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "HandleCombatTargetChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::PropPointers), sizeof(NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimInstance_eventHandleCombatTargetChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execHandleCombatTargetChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_TargetManager);
	P_GET_OBJECT(AActor,Z_Param_CombatTarget);
	P_GET_OBJECT(AActor,Z_Param_OldCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCombatTargetChanged_Implementation(Z_Param_TargetManager,Z_Param_CombatTarget,Z_Param_OldCombatTarget);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function HandleCombatTargetChanged

// Begin Class UNinjaCombatAnimInstance Function HandleDyingState
struct NinjaCombatAnimInstance_eventHandleDyingState_Parms
{
	AActor* Actor;
};
static const FName NAME_UNinjaCombatAnimInstance_HandleDyingState = FName(TEXT("HandleDyingState"));
void UNinjaCombatAnimInstance::HandleDyingState(AActor* Actor)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimInstance_HandleDyingState);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimInstance_eventHandleDyingState_Parms Parms;
		Parms.Actor=Actor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleDyingState_Implementation(Actor);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation Instance" },
		{ "Comment", "/**\n\x09 * Reacts to a change in the Dying state, which can trigger animation transitions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Reacts to a change in the Dying state, which can trigger animation transitions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventHandleDyingState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "HandleDyingState", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::PropPointers), sizeof(NinjaCombatAnimInstance_eventHandleDyingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimInstance_eventHandleDyingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execHandleDyingState)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDyingState_Implementation(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function HandleDyingState

// Begin Class UNinjaCombatAnimInstance Function HandleStaggeredStateChanged
struct NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms
{
	UActorComponent* DamageManager;
	bool bIsStaggered;
};
static const FName NAME_UNinjaCombatAnimInstance_HandleStaggeredStateChanged = FName(TEXT("HandleStaggeredStateChanged"));
void UNinjaCombatAnimInstance::HandleStaggeredStateChanged(UActorComponent* DamageManager, bool bIsStaggered)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimInstance_HandleStaggeredStateChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms Parms;
		Parms.DamageManager=DamageManager;
		Parms.bIsStaggered=bIsStaggered ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleStaggeredStateChanged_Implementation(DamageManager, bIsStaggered);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat Animation Instance" },
		{ "Comment", "/**\n\x09 * Reacts to a change in the Staggered state, which can trigger animation transitions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Reacts to a change in the Staggered state, which can trigger animation transitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageManager;
	static void NewProp_bIsStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::NewProp_DamageManager = { "DamageManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms, DamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageManager_MetaData), NewProp_DamageManager_MetaData) };
void Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::NewProp_bIsStaggered_SetBit(void* Obj)
{
	((NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms*)Obj)->bIsStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::NewProp_bIsStaggered = { "bIsStaggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms), &Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::NewProp_bIsStaggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::NewProp_DamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::NewProp_bIsStaggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "HandleStaggeredStateChanged", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::PropPointers), sizeof(NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimInstance_eventHandleStaggeredStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execHandleStaggeredStateChanged)
{
	P_GET_OBJECT(UActorComponent,Z_Param_DamageManager);
	P_GET_UBOOL(Z_Param_bIsStaggered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStaggeredStateChanged_Implementation(Z_Param_DamageManager,Z_Param_bIsStaggered);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function HandleStaggeredStateChanged

// Begin Class UNinjaCombatAnimInstance Function TryGetCharacterOwner
struct Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics
{
	struct NinjaCombatAnimInstance_eventTryGetCharacterOwner_Parms
	{
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation" },
		{ "Comment", "/**\n\x09 * Provides the specialized character using this Animation Instance.\n\x09 * Make sure to check before using it, as it may be null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Provides the specialized character using this Animation Instance.\nMake sure to check before using it, as it may be null." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimInstance_eventTryGetCharacterOwner_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimInstance, nullptr, "TryGetCharacterOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::NinjaCombatAnimInstance_eventTryGetCharacterOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::NinjaCombatAnimInstance_eventTryGetCharacterOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimInstance::execTryGetCharacterOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->TryGetCharacterOwner();
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimInstance Function TryGetCharacterOwner

// Begin Class UNinjaCombatAnimInstance
void UNinjaCombatAnimInstance::StaticRegisterNativesUNinjaCombatAnimInstance()
{
	UClass* Class = UNinjaCombatAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateBlendValues", &UNinjaCombatAnimInstance::execCalculateBlendValues },
		{ "CalculateLocomotionValues", &UNinjaCombatAnimInstance::execCalculateLocomotionValues },
		{ "GetCharacterMovement", &UNinjaCombatAnimInstance::execGetCharacterMovement },
		{ "HandleBlockingStateChanged", &UNinjaCombatAnimInstance::execHandleBlockingStateChanged },
		{ "HandleCombatTargetChanged", &UNinjaCombatAnimInstance::execHandleCombatTargetChanged },
		{ "HandleDyingState", &UNinjaCombatAnimInstance::execHandleDyingState },
		{ "HandleStaggeredStateChanged", &UNinjaCombatAnimInstance::execHandleStaggeredStateChanged },
		{ "TryGetCharacterOwner", &UNinjaCombatAnimInstance::execTryGetCharacterOwner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAnimInstance);
UClass* Z_Construct_UClass_UNinjaCombatAnimInstance_NoRegister()
{
	return UNinjaCombatAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation Instance that can be assigned to the Main Mesh (i.e. the Mannequin).\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/NinjaCombatAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Animation Instance that can be assigned to the Main Mesh (i.e. the Mannequin)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInAir_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Checks if the character is in midair. */" },
		{ "DisplayName", "Is In Air?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Checks if the character is in midair." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouching_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Checks if the character is crouching. */" },
		{ "DisplayName", "Is Crouching?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Checks if the character is crouching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccelerating_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Informs if the character is accelerating. */" },
		{ "DisplayName", "Is Accelerating?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Informs if the character is accelerating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMoving_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Informs if the character is actually moving (has any ground speed). */" },
		{ "DisplayName", "Is Moving?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Informs if the character is actually moving (has any ground speed)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartedMoving_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Informs if the character started moving in this frame */" },
		{ "DisplayName", "Started Moving?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Informs if the character started moving in this frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Current character acceleration. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Current character acceleration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Current movement speed. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Current movement speed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** The actual speed the capsule moved since last frame. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "The actual speed the capsule moved since last frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Current movement direction, in degrees [-180, 180]. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Current movement direction, in degrees [-180, 180]." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "Comment", "/** Current character's velocity. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Current character's velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStrafing_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "/** Informs if the character is currently strafing. */" },
		{ "DisplayName", "Is Strafing?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Informs if the character is currently strafing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBlocking_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "/** Is the character blocking? */" },
		{ "DisplayName", "Is Blocking?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Is the character blocking?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaggered_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "/** Informs if the character is staggered */" },
		{ "DisplayName", "Is Staggered?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Informs if the character is staggered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[] = {
		{ "Category", "Combat" },
		{ "Comment", "/** Informs if the character started dying. */" },
		{ "DisplayName", "Is Dying?" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "Informs if the character started dying." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullBodyBlend_MetaData[] = {
		{ "Category", "Blends" },
		{ "Comment", "/** How much the full body should be blended. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "How much the full body should be blended." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBodyBlend_MetaData[] = {
		{ "Category", "Blends" },
		{ "Comment", "/** How much the upper body should be blended. */" },
		{ "ModuleRelativePath", "Public/Animation/NinjaCombatAnimInstance.h" },
		{ "ToolTip", "How much the upper body should be blended." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAir;
	static void NewProp_bCrouching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouching;
	static void NewProp_bAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelerating;
	static void NewProp_bMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoving;
	static void NewProp_bStartedMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedMoving;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static void NewProp_bStrafing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrafing;
	static void NewProp_bBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlocking;
	static void NewProp_bStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaggered;
	static void NewProp_bDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullBodyBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperBodyBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateBlendValues, "CalculateBlendValues" }, // 2760385423
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_CalculateLocomotionValues, "CalculateLocomotionValues" }, // 131123500
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_GetCharacterMovement, "GetCharacterMovement" }, // 911896129
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleBlockingStateChanged, "HandleBlockingStateChanged" }, // 1113624830
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleCombatTargetChanged, "HandleCombatTargetChanged" }, // 3378124170
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleDyingState, "HandleDyingState" }, // 2364880075
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_HandleStaggeredStateChanged, "HandleStaggeredStateChanged" }, // 4265014835
		{ &Z_Construct_UFunction_UNinjaCombatAnimInstance_TryGetCharacterOwner, "TryGetCharacterOwner" }, // 8981816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bInAir_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bInAir = { "bInAir", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInAir_MetaData), NewProp_bInAir_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bCrouching_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bCrouching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bCrouching = { "bCrouching", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bCrouching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouching_MetaData), NewProp_bCrouching_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bAccelerating_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bAccelerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bAccelerating = { "bAccelerating", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccelerating_MetaData), NewProp_bAccelerating_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bMoving_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bMoving = { "bMoving", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMoving_MetaData), NewProp_bMoving_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStartedMoving_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bStartedMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStartedMoving = { "bStartedMoving", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStartedMoving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartedMoving_MetaData), NewProp_bStartedMoving_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_DisplacementSpeed = { "DisplacementSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, DisplacementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementSpeed_MetaData), NewProp_DisplacementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStrafing_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bStrafing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStrafing = { "bStrafing", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStrafing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStrafing_MetaData), NewProp_bStrafing_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bBlocking_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bBlocking = { "bBlocking", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBlocking_MetaData), NewProp_bBlocking_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStaggered_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStaggered = { "bStaggered", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStaggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaggered_MetaData), NewProp_bStaggered_MetaData) };
void Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bDead_SetBit(void* Obj)
{
	((UNinjaCombatAnimInstance*)Obj)->bDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatAnimInstance), &Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDead_MetaData), NewProp_bDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_FullBodyBlend = { "FullBodyBlend", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, FullBodyBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullBodyBlend_MetaData), NewProp_FullBodyBlend_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_UpperBodyBlend = { "UpperBodyBlend", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimInstance, UpperBodyBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBodyBlend_MetaData), NewProp_UpperBodyBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bCrouching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStartedMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_DisplacementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStrafing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bStaggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_bDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_FullBodyBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::NewProp_UpperBodyBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::ClassParams = {
	&UNinjaCombatAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::PropPointers),
	0,
	0x009000A9u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAnimInstance()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAnimInstance.OuterSingleton, Z_Construct_UClass_UNinjaCombatAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAnimInstance.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAnimInstance>()
{
	return UNinjaCombatAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAnimInstance);
UNinjaCombatAnimInstance::~UNinjaCombatAnimInstance() {}
// End Class UNinjaCombatAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAnimInstance, UNinjaCombatAnimInstance::StaticClass, TEXT("UNinjaCombatAnimInstance"), &Z_Registration_Info_UClass_UNinjaCombatAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAnimInstance), 151495892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_2521024812(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Animation_NinjaCombatAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
