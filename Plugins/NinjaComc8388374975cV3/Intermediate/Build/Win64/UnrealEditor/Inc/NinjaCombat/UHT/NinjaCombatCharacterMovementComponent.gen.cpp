// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatCharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatMovementManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCharacterMovementComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatCharacterMovementComponent Function GetDefaultAcceleration
struct Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics
{
	struct NinjaCombatCharacterMovementComponent_eventGetDefaultAcceleration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Movement Manager" },
		{ "Comment", "/**\n\x09 * Provides the default acceleration, before any changes (like \"blocking\"). \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Provides the default acceleration, before any changes (like \"blocking\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCharacterMovementComponent_eventGetDefaultAcceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCharacterMovementComponent, nullptr, "GetDefaultAcceleration", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::NinjaCombatCharacterMovementComponent_eventGetDefaultAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::NinjaCombatCharacterMovementComponent_eventGetDefaultAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCharacterMovementComponent::execGetDefaultAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultAcceleration();
	P_NATIVE_END;
}
// End Class UNinjaCombatCharacterMovementComponent Function GetDefaultAcceleration

// Begin Class UNinjaCombatCharacterMovementComponent Function GetDefaultDeceleration
struct Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics
{
	struct NinjaCombatCharacterMovementComponent_eventGetDefaultDeceleration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Movement Manager" },
		{ "Comment", "/**\n\x09 * Provides the default deceleration, before any changes (like \"blocking\"). \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Provides the default deceleration, before any changes (like \"blocking\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCharacterMovementComponent_eventGetDefaultDeceleration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCharacterMovementComponent, nullptr, "GetDefaultDeceleration", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::NinjaCombatCharacterMovementComponent_eventGetDefaultDeceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::NinjaCombatCharacterMovementComponent_eventGetDefaultDeceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCharacterMovementComponent::execGetDefaultDeceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultDeceleration();
	P_NATIVE_END;
}
// End Class UNinjaCombatCharacterMovementComponent Function GetDefaultDeceleration

// Begin Class UNinjaCombatCharacterMovementComponent Function GetDefaultWalkSpeed
struct Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics
{
	struct NinjaCombatCharacterMovementComponent_eventGetDefaultWalkSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Movement Manager" },
		{ "Comment", "/**\n\x09 * Provides the default walk speed, before any changes (like \"blocking\"). \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Provides the default walk speed, before any changes (like \"blocking\")." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatCharacterMovementComponent_eventGetDefaultWalkSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatCharacterMovementComponent, nullptr, "GetDefaultWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::NinjaCombatCharacterMovementComponent_eventGetDefaultWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::NinjaCombatCharacterMovementComponent_eventGetDefaultWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatCharacterMovementComponent::execGetDefaultWalkSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultWalkSpeed();
	P_NATIVE_END;
}
// End Class UNinjaCombatCharacterMovementComponent Function GetDefaultWalkSpeed

// Begin Class UNinjaCombatCharacterMovementComponent
void UNinjaCombatCharacterMovementComponent::StaticRegisterNativesUNinjaCombatCharacterMovementComponent()
{
	UClass* Class = UNinjaCombatCharacterMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultAcceleration", &UNinjaCombatCharacterMovementComponent::execGetDefaultAcceleration },
		{ "GetDefaultDeceleration", &UNinjaCombatCharacterMovementComponent::execGetDefaultDeceleration },
		{ "GetDefaultWalkSpeed", &UNinjaCombatCharacterMovementComponent::execGetDefaultWalkSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatCharacterMovementComponent);
UClass* Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_NoRegister()
{
	return UNinjaCombatCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "IncludePath", "Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStrafeWhileLockedOnTarget_MetaData[] = {
		{ "Category", "Combat|Strafing" },
		{ "Comment", "/**\n\x09 * Defines if the owner will strafe while locked on a target.\n\x09 *\n\x09 * By default, this leads to an adjustment in the owner's Character Movement Component's flags\n\x09 * expected for such behavior: \"bOrientRotationToMovement\" and \"bUseControllerDesiredRotation\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Defines if the owner will strafe while locked on a target.\n\nBy default, this leads to an adjustment in the owner's Character Movement Component's flags\nexpected for such behavior: \"bOrientRotationToMovement\" and \"bUseControllerDesiredRotation\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafingWalkSpeed_MetaData[] = {
		{ "Category", "Combat|Strafing" },
		{ "Comment", "/** Strafing walk speed, set to the Movement Component. */" },
		{ "EditCondition", "bStrafeWhileLockedOnTarget" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Strafing walk speed, set to the Movement Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafingAcceleration_MetaData[] = {
		{ "Category", "Combat|Strafing" },
		{ "Comment", "/** Strafing acceleration, set to the Movement Component. */" },
		{ "EditCondition", "bStrafeWhileLockedOnTarget" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Strafing acceleration, set to the Movement Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrafingDeceleration_MetaData[] = {
		{ "Category", "Combat|Strafing" },
		{ "Comment", "/** Strafing deceleration, set to the Movement Component. */" },
		{ "EditCondition", "bStrafeWhileLockedOnTarget" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Strafing deceleration, set to the Movement Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWalkWhileBlocking_MetaData[] = {
		{ "Category", "Combat|Blocking" },
		{ "Comment", "/**\n\x09 * Defines if the owner will walk while blocking.\n\x09 *\n\x09 * By default, this leads to a change in the owner's Character Movement Component's walk speed,\n\x09 * walk acceleration and walk deceleration. All these values are restored to their original\n\x09 * values when the block state stops.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Defines if the owner will walk while blocking.\n\nBy default, this leads to a change in the owner's Character Movement Component's walk speed,\nwalk acceleration and walk deceleration. All these values are restored to their original\nvalues when the block state stops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingWalkSpeed_MetaData[] = {
		{ "Category", "Combat|Blocking" },
		{ "Comment", "/** Blocking walk speed, set to the Movement Component. */" },
		{ "EditCondition", "bWalkWhileBlocking" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Blocking walk speed, set to the Movement Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingAcceleration_MetaData[] = {
		{ "Category", "Combat|Blocking" },
		{ "Comment", "/** Blocking acceleration, set to the Movement Component. */" },
		{ "EditCondition", "bWalkWhileBlocking" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Blocking acceleration, set to the Movement Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingDeceleration_MetaData[] = {
		{ "Category", "Combat|Blocking" },
		{ "Comment", "/** Blocking deceleration, set to the Movement Component. */" },
		{ "EditCondition", "bWalkWhileBlocking" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatCharacterMovementComponent.h" },
		{ "ToolTip", "Blocking deceleration, set to the Movement Component." },
	};
#endif // WITH_METADATA
	static void NewProp_bStrafeWhileLockedOnTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrafeWhileLockedOnTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafingWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafingAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrafingDeceleration;
	static void NewProp_bWalkWhileBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkWhileBlocking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockingWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockingAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockingDeceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultAcceleration, "GetDefaultAcceleration" }, // 2475896242
		{ &Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultDeceleration, "GetDefaultDeceleration" }, // 3249404019
		{ &Z_Construct_UFunction_UNinjaCombatCharacterMovementComponent_GetDefaultWalkSpeed, "GetDefaultWalkSpeed" }, // 1645121644
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bStrafeWhileLockedOnTarget_SetBit(void* Obj)
{
	((UNinjaCombatCharacterMovementComponent*)Obj)->bStrafeWhileLockedOnTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bStrafeWhileLockedOnTarget = { "bStrafeWhileLockedOnTarget", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatCharacterMovementComponent), &Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bStrafeWhileLockedOnTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStrafeWhileLockedOnTarget_MetaData), NewProp_bStrafeWhileLockedOnTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_StrafingWalkSpeed = { "StrafingWalkSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCharacterMovementComponent, StrafingWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafingWalkSpeed_MetaData), NewProp_StrafingWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_StrafingAcceleration = { "StrafingAcceleration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCharacterMovementComponent, StrafingAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafingAcceleration_MetaData), NewProp_StrafingAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_StrafingDeceleration = { "StrafingDeceleration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCharacterMovementComponent, StrafingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrafingDeceleration_MetaData), NewProp_StrafingDeceleration_MetaData) };
void Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bWalkWhileBlocking_SetBit(void* Obj)
{
	((UNinjaCombatCharacterMovementComponent*)Obj)->bWalkWhileBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bWalkWhileBlocking = { "bWalkWhileBlocking", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatCharacterMovementComponent), &Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bWalkWhileBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWalkWhileBlocking_MetaData), NewProp_bWalkWhileBlocking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_BlockingWalkSpeed = { "BlockingWalkSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCharacterMovementComponent, BlockingWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingWalkSpeed_MetaData), NewProp_BlockingWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_BlockingAcceleration = { "BlockingAcceleration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCharacterMovementComponent, BlockingAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingAcceleration_MetaData), NewProp_BlockingAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_BlockingDeceleration = { "BlockingDeceleration", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatCharacterMovementComponent, BlockingDeceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingDeceleration_MetaData), NewProp_BlockingDeceleration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bStrafeWhileLockedOnTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_StrafingWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_StrafingAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_StrafingDeceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_bWalkWhileBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_BlockingWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_BlockingAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::NewProp_BlockingDeceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatMovementManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatCharacterMovementComponent, ICombatMovementManagerInterface), false },  // 1705533943
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::ClassParams = {
	&UNinjaCombatCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatCharacterMovementComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatCharacterMovementComponent>()
{
	return UNinjaCombatCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatCharacterMovementComponent);
UNinjaCombatCharacterMovementComponent::~UNinjaCombatCharacterMovementComponent() {}
// End Class UNinjaCombatCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatCharacterMovementComponent, UNinjaCombatCharacterMovementComponent::StaticClass, TEXT("UNinjaCombatCharacterMovementComponent"), &Z_Registration_Info_UClass_UNinjaCombatCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatCharacterMovementComponent), 2311721324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatCharacterMovementComponent_h_1396795740(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
