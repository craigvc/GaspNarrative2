// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Damage/NinjaCombatDamageHandler.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatDamageHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatDamageHandler Function HandleDamage
struct NinjaCombatDamageHandler_eventHandleDamage_Parms
{
	UActorComponent* DamageManager;
	FGameplayCueParameters Parameters;
};
static const FName NAME_UNinjaCombatDamageHandler_HandleDamage = FName(TEXT("HandleDamage"));
void UNinjaCombatDamageHandler::HandleDamage(UActorComponent* DamageManager, FGameplayCueParameters const& Parameters) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatDamageHandler_HandleDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatDamageHandler_eventHandleDamage_Parms Parms;
		Parms.DamageManager=DamageManager;
		Parms.Parameters=Parameters;
		const_cast<UNinjaCombatDamageHandler*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UNinjaCombatDamageHandler*>(this)->HandleDamage_Implementation(DamageManager, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Damage Handler" },
		{ "Comment", "/**\n\x09 * Handles a cosmetic aspect of incoming damage.\n\x09 *\n\x09 * @param DamageManager\x09\x09""Damage Manager that received the damage.\n\x09 * @param Parameters\x09\x09Gameplay Cue Parameters containing the damage information.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Handles a cosmetic aspect of incoming damage.\n\n@param DamageManager         Damage Manager that received the damage.\n@param Parameters            Gameplay Cue Parameters containing the damage information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageManager_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::NewProp_DamageManager = { "DamageManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventHandleDamage_Parms, DamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageManager_MetaData), NewProp_DamageManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventHandleDamage_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::NewProp_DamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "HandleDamage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::PropPointers), sizeof(NinjaCombatDamageHandler_eventHandleDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C08, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatDamageHandler_eventHandleDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execHandleDamage)
{
	P_GET_OBJECT(UActorComponent,Z_Param_DamageManager);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDamage_Implementation(Z_Param_DamageManager,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function HandleDamage

// Begin Class UNinjaCombatDamageHandler Function IsBlockedHit
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics
{
	struct NinjaCombatDamageHandler_eventIsBlockedHit_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the incoming damage was blocked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the incoming damage was blocked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsBlockedHit_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsBlockedHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsBlockedHit_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsBlockedHit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NinjaCombatDamageHandler_eventIsBlockedHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::NinjaCombatDamageHandler_eventIsBlockedHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsBlockedHit)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsBlockedHit(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsBlockedHit

// Begin Class UNinjaCombatDamageHandler Function IsBreakerHit
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics
{
	struct NinjaCombatDamageHandler_eventIsBreakerHit_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the incoming damage was a guard breaker.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the incoming damage was a guard breaker." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsBreakerHit_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsBreakerHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsBreakerHit_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsBreakerHit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NinjaCombatDamageHandler_eventIsBreakerHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::NinjaCombatDamageHandler_eventIsBreakerHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsBreakerHit)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsBreakerHit(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsBreakerHit

// Begin Class UNinjaCombatDamageHandler Function IsCriticalHit
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics
{
	struct NinjaCombatDamageHandler_eventIsCriticalHit_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the incoming damage was a critical hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the incoming damage was a critical hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsCriticalHit_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsCriticalHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsCriticalHit_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsCriticalHit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NinjaCombatDamageHandler_eventIsCriticalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::NinjaCombatDamageHandler_eventIsCriticalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsCriticalHit)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsCriticalHit(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsCriticalHit

// Begin Class UNinjaCombatDamageHandler Function IsDead
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics
{
	struct NinjaCombatDamageHandler_eventIsDead_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the Cue Parameters Struct informs the owner is dead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the Cue Parameters Struct informs the owner is dead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsDead_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsDead_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NinjaCombatDamageHandler_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::NinjaCombatDamageHandler_eventIsDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsDead)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsDead(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsDead

// Begin Class UNinjaCombatDamageHandler Function IsFatalHit
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics
{
	struct NinjaCombatDamageHandler_eventIsFatalHit_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the incoming damage was fatal.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the incoming damage was fatal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsFatalHit_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsFatalHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsFatalHit_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsFatalHit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NinjaCombatDamageHandler_eventIsFatalHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::NinjaCombatDamageHandler_eventIsFatalHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsFatalHit)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsFatalHit(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsFatalHit

// Begin Class UNinjaCombatDamageHandler Function IsMeleeDamage
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics
{
	struct NinjaCombatDamageHandler_eventIsMeleeDamage_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the Cue Parameters Struct contains a melee damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the Cue Parameters Struct contains a melee damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsMeleeDamage_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsMeleeDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsMeleeDamage_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsMeleeDamage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NinjaCombatDamageHandler_eventIsMeleeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::NinjaCombatDamageHandler_eventIsMeleeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsMeleeDamage)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsMeleeDamage(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsMeleeDamage

// Begin Class UNinjaCombatDamageHandler Function IsRangedDamage
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics
{
	struct NinjaCombatDamageHandler_eventIsRangedDamage_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the Cue Parameters Struct contains a ranged damage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the Cue Parameters Struct contains a ranged damage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsRangedDamage_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsRangedDamage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsRangedDamage_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsRangedDamage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NinjaCombatDamageHandler_eventIsRangedDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::NinjaCombatDamageHandler_eventIsRangedDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsRangedDamage)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsRangedDamage(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsRangedDamage

// Begin Class UNinjaCombatDamageHandler Function IsSourceAuthoritative
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics
{
	struct NinjaCombatDamageHandler_eventIsSourceAuthoritative_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates of the damage source is authoritative.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates of the damage source is authoritative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsSourceAuthoritative_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsSourceAuthoritative_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsSourceAuthoritative_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsSourceAuthoritative", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NinjaCombatDamageHandler_eventIsSourceAuthoritative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::NinjaCombatDamageHandler_eventIsSourceAuthoritative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsSourceAuthoritative)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsSourceAuthoritative(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsSourceAuthoritative

// Begin Class UNinjaCombatDamageHandler Function IsSourceLocallyController
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics
{
	struct NinjaCombatDamageHandler_eventIsSourceLocallyController_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates of the damage source is locally Controlled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates of the damage source is locally Controlled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsSourceLocallyController_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsSourceLocallyController_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsSourceLocallyController_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsSourceLocallyController", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NinjaCombatDamageHandler_eventIsSourceLocallyController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::NinjaCombatDamageHandler_eventIsSourceLocallyController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsSourceLocallyController)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsSourceLocallyController(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsSourceLocallyController

// Begin Class UNinjaCombatDamageHandler Function IsStaggerHit
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics
{
	struct NinjaCombatDamageHandler_eventIsStaggerHit_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates if the incoming damage was staggering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates if the incoming damage was staggering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsStaggerHit_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsStaggerHit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsStaggerHit_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsStaggerHit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NinjaCombatDamageHandler_eventIsStaggerHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::NinjaCombatDamageHandler_eventIsStaggerHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsStaggerHit)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsStaggerHit(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsStaggerHit

// Begin Class UNinjaCombatDamageHandler Function IsTargetAuthoritative
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics
{
	struct NinjaCombatDamageHandler_eventIsTargetAuthoritative_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates of the damage target is authoritative.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates of the damage target is authoritative." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsTargetAuthoritative_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsTargetAuthoritative_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsTargetAuthoritative_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsTargetAuthoritative", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NinjaCombatDamageHandler_eventIsTargetAuthoritative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::NinjaCombatDamageHandler_eventIsTargetAuthoritative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsTargetAuthoritative)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsTargetAuthoritative(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsTargetAuthoritative

// Begin Class UNinjaCombatDamageHandler Function IsTargetLocallyController
struct Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics
{
	struct NinjaCombatDamageHandler_eventIsTargetLocallyController_Parms
	{
		FGameplayCueParameters Parameters;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Damage Handler" },
		{ "Comment", "/**\n\x09 * Evaluates of the damage target is locally Controlled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Evaluates of the damage target is locally Controlled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatDamageHandler_eventIsTargetLocallyController_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
void Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatDamageHandler_eventIsTargetLocallyController_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatDamageHandler_eventIsTargetLocallyController_Parms), &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatDamageHandler, nullptr, "IsTargetLocallyController", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NinjaCombatDamageHandler_eventIsTargetLocallyController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::NinjaCombatDamageHandler_eventIsTargetLocallyController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatDamageHandler::execIsTargetLocallyController)
{
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNinjaCombatDamageHandler::IsTargetLocallyController(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatDamageHandler Function IsTargetLocallyController

// Begin Class UNinjaCombatDamageHandler
void UNinjaCombatDamageHandler::StaticRegisterNativesUNinjaCombatDamageHandler()
{
	UClass* Class = UNinjaCombatDamageHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleDamage", &UNinjaCombatDamageHandler::execHandleDamage },
		{ "IsBlockedHit", &UNinjaCombatDamageHandler::execIsBlockedHit },
		{ "IsBreakerHit", &UNinjaCombatDamageHandler::execIsBreakerHit },
		{ "IsCriticalHit", &UNinjaCombatDamageHandler::execIsCriticalHit },
		{ "IsDead", &UNinjaCombatDamageHandler::execIsDead },
		{ "IsFatalHit", &UNinjaCombatDamageHandler::execIsFatalHit },
		{ "IsMeleeDamage", &UNinjaCombatDamageHandler::execIsMeleeDamage },
		{ "IsRangedDamage", &UNinjaCombatDamageHandler::execIsRangedDamage },
		{ "IsSourceAuthoritative", &UNinjaCombatDamageHandler::execIsSourceAuthoritative },
		{ "IsSourceLocallyController", &UNinjaCombatDamageHandler::execIsSourceLocallyController },
		{ "IsStaggerHit", &UNinjaCombatDamageHandler::execIsStaggerHit },
		{ "IsTargetAuthoritative", &UNinjaCombatDamageHandler::execIsTargetAuthoritative },
		{ "IsTargetLocallyController", &UNinjaCombatDamageHandler::execIsTargetLocallyController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatDamageHandler);
UClass* Z_Construct_UClass_UNinjaCombatDamageHandler_NoRegister()
{
	return UNinjaCombatDamageHandler::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatDamageHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base implementation for a Damage Handler.\n */" },
		{ "IncludePath", "Damage/NinjaCombatDamageHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Damage/NinjaCombatDamageHandler.h" },
		{ "ToolTip", "Base implementation for a Damage Handler." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_HandleDamage, "HandleDamage" }, // 2064459629
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBlockedHit, "IsBlockedHit" }, // 1841051142
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsBreakerHit, "IsBreakerHit" }, // 182880479
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsCriticalHit, "IsCriticalHit" }, // 2731332928
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsDead, "IsDead" }, // 3233370008
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsFatalHit, "IsFatalHit" }, // 101469510
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsMeleeDamage, "IsMeleeDamage" }, // 1881371956
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsRangedDamage, "IsRangedDamage" }, // 3381106031
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceAuthoritative, "IsSourceAuthoritative" }, // 2109229171
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsSourceLocallyController, "IsSourceLocallyController" }, // 3128205365
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsStaggerHit, "IsStaggerHit" }, // 101985617
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetAuthoritative, "IsTargetAuthoritative" }, // 1468148277
		{ &Z_Construct_UFunction_UNinjaCombatDamageHandler_IsTargetLocallyController, "IsTargetLocallyController" }, // 3181410866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatDamageHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNinjaCombatDamageHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDamageHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatDamageHandler_Statics::ClassParams = {
	&UNinjaCombatDamageHandler::StaticClass,
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
	0x003110A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatDamageHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatDamageHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatDamageHandler()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatDamageHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatDamageHandler.OuterSingleton, Z_Construct_UClass_UNinjaCombatDamageHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatDamageHandler.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatDamageHandler>()
{
	return UNinjaCombatDamageHandler::StaticClass();
}
UNinjaCombatDamageHandler::UNinjaCombatDamageHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatDamageHandler);
UNinjaCombatDamageHandler::~UNinjaCombatDamageHandler() {}
// End Class UNinjaCombatDamageHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatDamageHandler, UNinjaCombatDamageHandler::StaticClass, TEXT("UNinjaCombatDamageHandler"), &Z_Registration_Info_UClass_UNinjaCombatDamageHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatDamageHandler), 1267834316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_4036432633(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Damage_NinjaCombatDamageHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
