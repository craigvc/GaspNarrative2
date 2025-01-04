// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/NinjaCombatDelegates.h"
#include "NinjaCombat/Public/Types/FDamageEntry.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatDelegates() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDelegates();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDelegates_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEntry();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FCombatTargetChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms
	{
		UActorComponent* TargetManager;
		const AActor* NewCombatTarget;
		const AActor* OldCombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCombatTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms, TargetManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetManager_MetaData), NewProp_TargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::NewProp_NewCombatTarget = { "NewCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms, NewCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCombatTarget_MetaData), NewProp_NewCombatTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::NewProp_OldCombatTarget = { "OldCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms, OldCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCombatTarget_MetaData), NewProp_OldCombatTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::NewProp_TargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::NewProp_NewCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::NewProp_OldCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "CombatTargetChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCombatTargetChangedDelegate_DelegateWrapper(const FScriptDelegate& CombatTargetChangedDelegate, UActorComponent* TargetManager, const AActor* NewCombatTarget, const AActor* OldCombatTarget)
{
	struct _Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms
	{
		UActorComponent* TargetManager;
		const AActor* NewCombatTarget;
		const AActor* OldCombatTarget;
	};
	_Script_NinjaCombat_eventCombatTargetChangedDelegate_Parms Parms;
	Parms.TargetManager=TargetManager;
	Parms.NewCombatTarget=NewCombatTarget;
	Parms.OldCombatTarget=OldCombatTarget;
	CombatTargetChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FCombatTargetChangedDelegate

// Begin Delegate FCombatTargetChangedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms
	{
		UActorComponent* TargetManager;
		const AActor* NewCombatTarget;
		const AActor* OldCombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldCombatTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCombatTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms, TargetManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetManager_MetaData), NewProp_TargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::NewProp_NewCombatTarget = { "NewCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms, NewCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCombatTarget_MetaData), NewProp_NewCombatTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::NewProp_OldCombatTarget = { "OldCombatTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms, OldCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldCombatTarget_MetaData), NewProp_OldCombatTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::NewProp_TargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::NewProp_NewCombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::NewProp_OldCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "CombatTargetChangedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCombatTargetChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CombatTargetChangedMCDelegate, UActorComponent* TargetManager, const AActor* NewCombatTarget, const AActor* OldCombatTarget)
{
	struct _Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms
	{
		UActorComponent* TargetManager;
		const AActor* NewCombatTarget;
		const AActor* OldCombatTarget;
	};
	_Script_NinjaCombat_eventCombatTargetChangedMCDelegate_Parms Parms;
	Parms.TargetManager=TargetManager;
	Parms.NewCombatTarget=NewCombatTarget;
	Parms.OldCombatTarget=OldCombatTarget;
	CombatTargetChangedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCombatTargetChangedMCDelegate

// Begin Delegate FBlockingStateChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsBlocking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::NewProp_DefenseManager = { "DefenseManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms, DefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseManager_MetaData), NewProp_DefenseManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms*)Obj)->bIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::NewProp_DefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "BlockingStateChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlockingStateChangedDelegate_DelegateWrapper(const FScriptDelegate& BlockingStateChangedDelegate, UActorComponent* DefenseManager, bool bIsBlocking)
{
	struct _Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsBlocking;
	};
	_Script_NinjaCombat_eventBlockingStateChangedDelegate_Parms Parms;
	Parms.DefenseManager=DefenseManager;
	Parms.bIsBlocking=bIsBlocking ? true : false;
	BlockingStateChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBlockingStateChangedDelegate

// Begin Delegate FBlockingStateChangedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsBlocking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::NewProp_DefenseManager = { "DefenseManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms, DefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseManager_MetaData), NewProp_DefenseManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms*)Obj)->bIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::NewProp_DefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "BlockingStateChangedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlockingStateChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlockingStateChangedMCDelegate, UActorComponent* DefenseManager, bool bIsBlocking)
{
	struct _Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsBlocking;
	};
	_Script_NinjaCombat_eventBlockingStateChangedMCDelegate_Parms Parms;
	Parms.DefenseManager=DefenseManager;
	Parms.bIsBlocking=bIsBlocking ? true : false;
	BlockingStateChangedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBlockingStateChangedMCDelegate

// Begin Delegate FInvulnerabilityStateChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsInvulnerable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefenseManager;
	static void NewProp_bIsInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvulnerable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::NewProp_DefenseManager = { "DefenseManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms, DefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseManager_MetaData), NewProp_DefenseManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms*)Obj)->bIsInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable = { "bIsInvulnerable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::NewProp_DefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "InvulnerabilityStateChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInvulnerabilityStateChangedDelegate_DelegateWrapper(const FScriptDelegate& InvulnerabilityStateChangedDelegate, UActorComponent* DefenseManager, bool bIsInvulnerable)
{
	struct _Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsInvulnerable;
	};
	_Script_NinjaCombat_eventInvulnerabilityStateChangedDelegate_Parms Parms;
	Parms.DefenseManager=DefenseManager;
	Parms.bIsInvulnerable=bIsInvulnerable ? true : false;
	InvulnerabilityStateChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FInvulnerabilityStateChangedDelegate

// Begin Delegate FInvulnerabilityStateChangedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsInvulnerable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefenseManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefenseManager;
	static void NewProp_bIsInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvulnerable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::NewProp_DefenseManager = { "DefenseManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms, DefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefenseManager_MetaData), NewProp_DefenseManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms*)Obj)->bIsInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable = { "bIsInvulnerable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::NewProp_DefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsInvulnerable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "InvulnerabilityStateChangedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInvulnerabilityStateChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& InvulnerabilityStateChangedMCDelegate, UActorComponent* DefenseManager, bool bIsInvulnerable)
{
	struct _Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms
	{
		UActorComponent* DefenseManager;
		bool bIsInvulnerable;
	};
	_Script_NinjaCombat_eventInvulnerabilityStateChangedMCDelegate_Parms Parms;
	Parms.DefenseManager=DefenseManager;
	Parms.bIsInvulnerable=bIsInvulnerable ? true : false;
	InvulnerabilityStateChangedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FInvulnerabilityStateChangedMCDelegate

// Begin Delegate FStaggeredStateChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms
	{
		UActorComponent* DamageManager;
		bool bIsStaggered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::NewProp_DamageManager = { "DamageManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms, DamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageManager_MetaData), NewProp_DamageManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsStaggered_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms*)Obj)->bIsStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsStaggered = { "bIsStaggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsStaggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::NewProp_DamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::NewProp_bIsStaggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "StaggeredStateChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStaggeredStateChangedDelegate_DelegateWrapper(const FScriptDelegate& StaggeredStateChangedDelegate, UActorComponent* DamageManager, bool bIsStaggered)
{
	struct _Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms
	{
		UActorComponent* DamageManager;
		bool bIsStaggered;
	};
	_Script_NinjaCombat_eventStaggeredStateChangedDelegate_Parms Parms;
	Parms.DamageManager=DamageManager;
	Parms.bIsStaggered=bIsStaggered ? true : false;
	StaggeredStateChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FStaggeredStateChangedDelegate

// Begin Delegate FStaggeredStateChangedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms
	{
		UActorComponent* DamageManager;
		bool bIsStaggered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::NewProp_DamageManager = { "DamageManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms, DamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageManager_MetaData), NewProp_DamageManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsStaggered_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms*)Obj)->bIsStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsStaggered = { "bIsStaggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsStaggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::NewProp_DamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::NewProp_bIsStaggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "StaggeredStateChangedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStaggeredStateChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& StaggeredStateChangedMCDelegate, UActorComponent* DamageManager, bool bIsStaggered)
{
	struct _Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms
	{
		UActorComponent* DamageManager;
		bool bIsStaggered;
	};
	_Script_NinjaCombat_eventStaggeredStateChangedMCDelegate_Parms Parms;
	Parms.DamageManager=DamageManager;
	Parms.bIsStaggered=bIsStaggered ? true : false;
	StaggeredStateChangedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FStaggeredStateChangedMCDelegate

// Begin Delegate FComboTargetCountChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 TargetCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms, TargetCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::NewProp_TargetCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboTargetCountChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboTargetCountChangedDelegate_DelegateWrapper(const FScriptDelegate& ComboTargetCountChangedDelegate, UActorComponent* ComboManager, int32 TargetCount)
{
	struct _Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 TargetCount;
	};
	_Script_NinjaCombat_eventComboTargetCountChangedDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.TargetCount=TargetCount;
	ComboTargetCountChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FComboTargetCountChangedDelegate

// Begin Delegate FComboTargetCountMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 TargetCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms, TargetCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::NewProp_TargetCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboTargetCountMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboTargetCountMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboTargetCountMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboTargetCountMCDelegate, UActorComponent* ComboManager, int32 TargetCount)
{
	struct _Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 TargetCount;
	};
	_Script_NinjaCombat_eventComboTargetCountMCDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.TargetCount=TargetCount;
	ComboTargetCountMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FComboTargetCountMCDelegate

// Begin Delegate FComboWindowChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboWindowChangedDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bInComboWindow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComboWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboWindowChangedDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::NewProp_bInComboWindow_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventComboWindowChangedDelegate_Parms*)Obj)->bInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::NewProp_bInComboWindow = { "bInComboWindow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventComboWindowChangedDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::NewProp_bInComboWindow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::NewProp_bInComboWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboWindowChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboWindowChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboWindowChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboWindowChangedDelegate_DelegateWrapper(const FScriptDelegate& ComboWindowChangedDelegate, UActorComponent* ComboManager, bool bInComboWindow)
{
	struct _Script_NinjaCombat_eventComboWindowChangedDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bInComboWindow;
	};
	_Script_NinjaCombat_eventComboWindowChangedDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.bInComboWindow=bInComboWindow ? true : false;
	ComboWindowChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FComboWindowChangedDelegate

// Begin Delegate FComboWindowChangedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bInComboWindow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bInComboWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInComboWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::NewProp_bInComboWindow_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms*)Obj)->bInComboWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::NewProp_bInComboWindow = { "bInComboWindow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::NewProp_bInComboWindow_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::NewProp_bInComboWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboWindowChangedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboWindowChangedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboWindowChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboWindowChangedMCDelegate, UActorComponent* ComboManager, bool bInComboWindow)
{
	struct _Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bInComboWindow;
	};
	_Script_NinjaCombat_eventComboWindowChangedMCDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.bInComboWindow=bInComboWindow ? true : false;
	ComboWindowChangedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FComboWindowChangedMCDelegate

// Begin Delegate FComboCountChangedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboCountChangedDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 ComboCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboCountChangedDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboCountChangedDelegate_Parms, ComboCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::NewProp_ComboCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboCountChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboCountChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboCountChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboCountChangedDelegate_DelegateWrapper(const FScriptDelegate& ComboCountChangedDelegate, UActorComponent* ComboManager, int32 ComboCount)
{
	struct _Script_NinjaCombat_eventComboCountChangedDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 ComboCount;
	};
	_Script_NinjaCombat_eventComboCountChangedDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.ComboCount=ComboCount;
	ComboCountChangedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FComboCountChangedDelegate

// Begin Delegate FComboCountChangedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 ComboCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms, ComboCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::NewProp_ComboCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboCountChangedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboCountChangedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboCountChangedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboCountChangedMCDelegate, UActorComponent* ComboManager, int32 ComboCount)
{
	struct _Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		int32 ComboCount;
	};
	_Script_NinjaCombat_eventComboCountChangedMCDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.ComboCount=ComboCount;
	ComboCountChangedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FComboCountChangedMCDelegate

// Begin Delegate FComboFinishedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboFinishedDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboFinishedDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventComboFinishedDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventComboFinishedDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboFinishedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboFinishedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboFinishedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboFinishedDelegate_DelegateWrapper(const FScriptDelegate& ComboFinishedDelegate, UActorComponent* ComboManager, bool bWasSuccessful)
{
	struct _Script_NinjaCombat_eventComboFinishedDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bWasSuccessful;
	};
	_Script_NinjaCombat_eventComboFinishedDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	ComboFinishedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FComboFinishedDelegate

// Begin Delegate FComboFinishedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventComboFinishedMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventComboFinishedMCDelegate_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_NinjaCombat_eventComboFinishedMCDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_NinjaCombat_eventComboFinishedMCDelegate_Parms), &Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "ComboFinishedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboFinishedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventComboFinishedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_ComboFinishedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComboFinishedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComboFinishedMCDelegate, UActorComponent* ComboManager, bool bWasSuccessful)
{
	struct _Script_NinjaCombat_eventComboFinishedMCDelegate_Parms
	{
		UActorComponent* ComboManager;
		bool bWasSuccessful;
	};
	_Script_NinjaCombat_eventComboFinishedMCDelegate_Parms Parms;
	Parms.ComboManager=ComboManager;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	ComboFinishedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FComboFinishedMCDelegate

// Begin Delegate FDamageReceivedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventDamageReceivedDelegate_Parms
	{
		AActor* Causer;
		AActor* Target;
		FDamageEntry DamageEntry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventDamageReceivedDelegate_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventDamageReceivedDelegate_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::NewProp_DamageEntry = { "DamageEntry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventDamageReceivedDelegate_Parms, DamageEntry), Z_Construct_UScriptStruct_FDamageEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEntry_MetaData), NewProp_DamageEntry_MetaData) }; // 3044778572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::NewProp_DamageEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "DamageReceivedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventDamageReceivedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventDamageReceivedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDamageReceivedDelegate_DelegateWrapper(const FScriptDelegate& DamageReceivedDelegate, AActor* Causer, AActor* Target, FDamageEntry const& DamageEntry)
{
	struct _Script_NinjaCombat_eventDamageReceivedDelegate_Parms
	{
		AActor* Causer;
		AActor* Target;
		FDamageEntry DamageEntry;
	};
	_Script_NinjaCombat_eventDamageReceivedDelegate_Parms Parms;
	Parms.Causer=Causer;
	Parms.Target=Target;
	Parms.DamageEntry=DamageEntry;
	DamageReceivedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FDamageReceivedDelegate

// Begin Delegate FDamageReceivedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms
	{
		AActor* Causer;
		AActor* Target;
		FDamageEntry DamageEntry;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEntry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEntry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::NewProp_DamageEntry = { "DamageEntry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms, DamageEntry), Z_Construct_UScriptStruct_FDamageEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEntry_MetaData), NewProp_DamageEntry_MetaData) }; // 3044778572
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::NewProp_DamageEntry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "DamageReceivedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDamageReceivedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& DamageReceivedMCDelegate, AActor* Causer, AActor* Target, FDamageEntry const& DamageEntry)
{
	struct _Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms
	{
		AActor* Causer;
		AActor* Target;
		FDamageEntry DamageEntry;
	};
	_Script_NinjaCombat_eventDamageReceivedMCDelegate_Parms Parms;
	Parms.Causer=Causer;
	Parms.Target=Target;
	Parms.DamageEntry=DamageEntry;
	DamageReceivedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDamageReceivedMCDelegate

// Begin Delegate FOwnerDiedDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventOwnerDiedDelegate_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventOwnerDiedDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "OwnerDiedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventOwnerDiedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventOwnerDiedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOwnerDiedDelegate_DelegateWrapper(const FScriptDelegate& OwnerDiedDelegate, AActor* Actor)
{
	struct _Script_NinjaCombat_eventOwnerDiedDelegate_Parms
	{
		AActor* Actor;
	};
	_Script_NinjaCombat_eventOwnerDiedDelegate_Parms Parms;
	Parms.Actor=Actor;
	OwnerDiedDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOwnerDiedDelegate

// Begin Delegate FOwnerDiedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventOwnerDiedMCDelegate_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventOwnerDiedMCDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "OwnerDiedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventOwnerDiedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventOwnerDiedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOwnerDiedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& OwnerDiedMCDelegate, AActor* Actor)
{
	struct _Script_NinjaCombat_eventOwnerDiedMCDelegate_Parms
	{
		AActor* Actor;
	};
	_Script_NinjaCombat_eventOwnerDiedMCDelegate_Parms Parms;
	Parms.Actor=Actor;
	OwnerDiedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOwnerDiedMCDelegate

// Begin Delegate FCombatAnimationEventDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "CombatAnimationEventDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCombatAnimationEventDelegate_DelegateWrapper(const FScriptDelegate& CombatAnimationEventDelegate)
{
	CombatAnimationEventDelegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FCombatAnimationEventDelegate

// Begin Delegate FCombatAnimationEventMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "CombatAnimationEventMCDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_CombatAnimationEventMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCombatAnimationEventMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& CombatAnimationEventMCDelegate)
{
	CombatAnimationEventMCDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FCombatAnimationEventMCDelegate

// Begin Delegate FAttackStartedMCDelegate
struct Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics
{
	struct _Script_NinjaCombat_eventAttackStartedMCDelegate_Parms
	{
		UNinjaCombatManagerComponent* CombatManager;
		FGameplayTagContainer AbilityTags;
		AActor* CurrentTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::NewProp_CombatManager = { "CombatManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventAttackStartedMCDelegate_Parms, CombatManager), Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatManager_MetaData), NewProp_CombatManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventAttackStartedMCDelegate_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NinjaCombat_eventAttackStartedMCDelegate_Parms, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::NewProp_CombatManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::NewProp_CurrentTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat, nullptr, "AttackStartedMCDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventAttackStartedMCDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::_Script_NinjaCombat_eventAttackStartedMCDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAttackStartedMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& AttackStartedMCDelegate, UNinjaCombatManagerComponent* CombatManager, FGameplayTagContainer AbilityTags, AActor* CurrentTarget)
{
	struct _Script_NinjaCombat_eventAttackStartedMCDelegate_Parms
	{
		UNinjaCombatManagerComponent* CombatManager;
		FGameplayTagContainer AbilityTags;
		AActor* CurrentTarget;
	};
	_Script_NinjaCombat_eventAttackStartedMCDelegate_Parms Parms;
	Parms.CombatManager=CombatManager;
	Parms.AbilityTags=AbilityTags;
	Parms.CurrentTarget=CurrentTarget;
	AttackStartedMCDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAttackStartedMCDelegate

// Begin Class UNinjaCombatDelegates
void UNinjaCombatDelegates::StaticRegisterNativesUNinjaCombatDelegates()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatDelegates);
UClass* Z_Construct_UClass_UNinjaCombatDelegates_NoRegister()
{
	return UNinjaCombatDelegates::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatDelegates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NinjaCombatDelegates.h" },
		{ "ModuleRelativePath", "Public/NinjaCombatDelegates.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatDelegates>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatDelegates_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDelegates_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatDelegates_Statics::ClassParams = {
	&UNinjaCombatDelegates::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDelegates_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatDelegates_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatDelegates()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatDelegates.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatDelegates.OuterSingleton, Z_Construct_UClass_UNinjaCombatDelegates_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatDelegates.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatDelegates>()
{
	return UNinjaCombatDelegates::StaticClass();
}
UNinjaCombatDelegates::UNinjaCombatDelegates(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatDelegates);
UNinjaCombatDelegates::~UNinjaCombatDelegates() {}
// End Class UNinjaCombatDelegates

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatDelegates, UNinjaCombatDelegates::StaticClass, TEXT("UNinjaCombatDelegates"), &Z_Registration_Info_UClass_UNinjaCombatDelegates, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatDelegates), 1470768835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_1472639396(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_NinjaCombatDelegates_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
