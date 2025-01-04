// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_ScanMeleeTarget() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_ScanMeleeTarget();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Delegate FWaitMeleeScan
struct Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics
{
	struct AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms
	{
		const UNinjaCombatMeleeScan* MeleeScan;
		FGameplayAbilityTargetDataHandle Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::NewProp_MeleeScan = { "MeleeScan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms, MeleeScan), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScan_MetaData), NewProp_MeleeScan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::NewProp_MeleeScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ScanMeleeTarget, nullptr, "WaitMeleeScan__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UAbilityTask_ScanMeleeTarget::FWaitMeleeScan_DelegateWrapper(const FMulticastScriptDelegate& WaitMeleeScan, const UNinjaCombatMeleeScan* MeleeScan, FGameplayAbilityTargetDataHandle const& Data)
{
	struct AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms
	{
		const UNinjaCombatMeleeScan* MeleeScan;
		FGameplayAbilityTargetDataHandle Data;
	};
	AbilityTask_ScanMeleeTarget_eventWaitMeleeScan_Parms Parms;
	Parms.MeleeScan=MeleeScan;
	Parms.Data=Data;
	WaitMeleeScan.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FWaitMeleeScan

// Begin Class UAbilityTask_ScanMeleeTarget Function CreateTask
struct Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics
{
	struct AbilityTask_ScanMeleeTarget_eventCreateTask_Parms
	{
		UGameplayAbility* OwningAbility;
		bool bEnableDebug;
		UAbilityTask_ScanMeleeTarget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Creates the appropriate Ability Task, based on the provided data.\n\x09 */" },
		{ "CPP_Default_bEnableDebug", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
		{ "ToolTip", "Creates the appropriate Ability Task, based on the provided data." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
	static void NewProp_bEnableDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ScanMeleeTarget_eventCreateTask_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
{
	((AbilityTask_ScanMeleeTarget_eventCreateTask_Parms*)Obj)->bEnableDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityTask_ScanMeleeTarget_eventCreateTask_Parms), &Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ScanMeleeTarget_eventCreateTask_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_OwningAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_bEnableDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ScanMeleeTarget, nullptr, "CreateTask", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::AbilityTask_ScanMeleeTarget_eventCreateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::AbilityTask_ScanMeleeTarget_eventCreateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_ScanMeleeTarget::execCreateTask)
{
	P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
	P_GET_UBOOL(Z_Param_bEnableDebug);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilityTask_ScanMeleeTarget**)Z_Param__Result=UAbilityTask_ScanMeleeTarget::CreateTask(Z_Param_OwningAbility,Z_Param_bEnableDebug);
	P_NATIVE_END;
}
// End Class UAbilityTask_ScanMeleeTarget Function CreateTask

// Begin Class UAbilityTask_ScanMeleeTarget Function Join
struct Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics
{
	struct AbilityTask_ScanMeleeTarget_eventJoin_Parms
	{
		const UNinjaCombatMeleeScan* MeleeScan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Ability Tasks" },
		{ "Comment", "/**\n\x09 * Adds a new Melee Scan to this task.\n\x09 * \n\x09 * @param MeleeScan\n\x09 *\x09\x09New Scan details to be joined in this task.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
		{ "ToolTip", "Adds a new Melee Scan to this task.\n\n@param MeleeScan\n             New Scan details to be joined in this task." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::NewProp_MeleeScan = { "MeleeScan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityTask_ScanMeleeTarget_eventJoin_Parms, MeleeScan), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScan_MetaData), NewProp_MeleeScan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::NewProp_MeleeScan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_ScanMeleeTarget, nullptr, "Join", nullptr, nullptr, Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::AbilityTask_ScanMeleeTarget_eventJoin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::AbilityTask_ScanMeleeTarget_eventJoin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityTask_ScanMeleeTarget::execJoin)
{
	P_GET_OBJECT(UNinjaCombatMeleeScan,Z_Param_MeleeScan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Join(Z_Param_MeleeScan);
	P_NATIVE_END;
}
// End Class UAbilityTask_ScanMeleeTarget Function Join

// Begin Class UAbilityTask_ScanMeleeTarget
void UAbilityTask_ScanMeleeTarget::StaticRegisterNativesUAbilityTask_ScanMeleeTarget()
{
	UClass* Class = UAbilityTask_ScanMeleeTarget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateTask", &UAbilityTask_ScanMeleeTarget::execCreateTask },
		{ "Join", &UAbilityTask_ScanMeleeTarget::execJoin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_ScanMeleeTarget);
UClass* Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_NoRegister()
{
	return UAbilityTask_ScanMeleeTarget::StaticClass();
}
struct Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Performs a scan for melee attacks. \n */" },
		{ "IncludePath", "AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
		{ "ToolTip", "Performs a scan for melee attacks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMeleeTargetsFound_MetaData[] = {
		{ "Comment", "/** Broadcasts targets that we hit during the scan. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
		{ "ToolTip", "Broadcasts targets that we hit during the scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScans_MetaData[] = {
		{ "Comment", "/** All instances participating in this scan. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Tasks/AbilityTask_ScanMeleeTarget.h" },
		{ "ToolTip", "All instances participating in this scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeleeTargetsFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScans_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeScans;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_CreateTask, "CreateTask" }, // 3176212635
		{ &Z_Construct_UFunction_UAbilityTask_ScanMeleeTarget_Join, "Join" }, // 2073045510
		{ &Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature, "WaitMeleeScan__DelegateSignature" }, // 305873928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_ScanMeleeTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::NewProp_OnMeleeTargetsFound = { "OnMeleeTargetsFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ScanMeleeTarget, OnMeleeTargetsFound), Z_Construct_UDelegateFunction_UAbilityTask_ScanMeleeTarget_WaitMeleeScan__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMeleeTargetsFound_MetaData), NewProp_OnMeleeTargetsFound_MetaData) }; // 305873928
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::NewProp_MeleeScans_Inner = { "MeleeScans", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::NewProp_MeleeScans = { "MeleeScans", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityTask_ScanMeleeTarget, MeleeScans), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScans_MetaData), NewProp_MeleeScans_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::NewProp_OnMeleeTargetsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::NewProp_MeleeScans_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::NewProp_MeleeScans,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::ClassParams = {
	&UAbilityTask_ScanMeleeTarget::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityTask_ScanMeleeTarget()
{
	if (!Z_Registration_Info_UClass_UAbilityTask_ScanMeleeTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_ScanMeleeTarget.OuterSingleton, Z_Construct_UClass_UAbilityTask_ScanMeleeTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityTask_ScanMeleeTarget.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAbilityTask_ScanMeleeTarget>()
{
	return UAbilityTask_ScanMeleeTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_ScanMeleeTarget);
UAbilityTask_ScanMeleeTarget::~UAbilityTask_ScanMeleeTarget() {}
// End Class UAbilityTask_ScanMeleeTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_ScanMeleeTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_ScanMeleeTarget, UAbilityTask_ScanMeleeTarget::StaticClass, TEXT("UAbilityTask_ScanMeleeTarget"), &Z_Registration_Info_UClass_UAbilityTask_ScanMeleeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_ScanMeleeTarget), 3686579695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_ScanMeleeTarget_h_2548144497(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_ScanMeleeTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Tasks_AbilityTask_ScanMeleeTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
