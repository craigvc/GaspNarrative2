// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_HitReaction.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_HitReaction() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_HitReaction();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_HitReaction_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatContextAnimationAbility();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UCombatAbility_HitReaction Function ExecuteHitReaction
struct CombatAbility_HitReaction_eventExecuteHitReaction_Parms
{
	FGameplayEventData TriggerEventData;
};
static const FName NAME_UCombatAbility_HitReaction_ExecuteHitReaction = FName(TEXT("ExecuteHitReaction"));
void UCombatAbility_HitReaction::ExecuteHitReaction(FGameplayEventData const& TriggerEventData)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_HitReaction_ExecuteHitReaction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_HitReaction_eventExecuteHitReaction_Parms Parms;
		Parms.TriggerEventData=TriggerEventData;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ExecuteHitReaction_Implementation(TriggerEventData);
	}
}
struct Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hit Reaction Ability" },
		{ "Comment", "/**\n\x09 * Handles the hit.\n\x09 *\n\x09 * You may build any custom behavior for your Hit Reactions in this method, without the\n\x09 * need to worry about keeping the original behavior when the ability activates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_HitReaction.h" },
		{ "ToolTip", "Handles the hit.\n\nYou may build any custom behavior for your Hit Reactions in this method, without the\nneed to worry about keeping the original behavior when the ability activates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerEventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::NewProp_TriggerEventData = { "TriggerEventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_HitReaction_eventExecuteHitReaction_Parms, TriggerEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEventData_MetaData), NewProp_TriggerEventData_MetaData) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::NewProp_TriggerEventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_HitReaction, nullptr, "ExecuteHitReaction", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::PropPointers), sizeof(CombatAbility_HitReaction_eventExecuteHitReaction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_HitReaction_eventExecuteHitReaction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_HitReaction::execExecuteHitReaction)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_TriggerEventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteHitReaction_Implementation(Z_Param_Out_TriggerEventData);
	P_NATIVE_END;
}
// End Class UCombatAbility_HitReaction Function ExecuteHitReaction

// Begin Class UCombatAbility_HitReaction Function GetHitResult
struct Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics
{
	struct CombatAbility_HitReaction_eventGetHitResult_Parms
	{
		FGameplayEventData TriggerEventData;
		FHitResult OutHitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the Hit Result from the Trigger Event Data.\n\x09 *\n\x09 * @param TriggerEventData\x09\x09Information about the event that triggered the activation.\n\x09 * @param OutHitResult\x09\x09\x09Output for the hit result in the event data.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if a Hit Result was obtained.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_HitReaction.h" },
		{ "ToolTip", "Provides the Hit Result from the Trigger Event Data.\n\n@param TriggerEventData              Information about the event that triggered the activation.\n@param OutHitResult                  Output for the hit result in the event data.\n@return                                              True if a Hit Result was obtained." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutHitResult_MetaData[] = {
		{ "DisplayName", "Hit Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerEventData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_TriggerEventData = { "TriggerEventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_HitReaction_eventGetHitResult_Parms, TriggerEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEventData_MetaData), NewProp_TriggerEventData_MetaData) }; // 1231635826
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_OutHitResult = { "OutHitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_HitReaction_eventGetHitResult_Parms, OutHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutHitResult_MetaData), NewProp_OutHitResult_MetaData) }; // 4100991306
void Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_HitReaction_eventGetHitResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_HitReaction_eventGetHitResult_Parms), &Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_TriggerEventData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_OutHitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_HitReaction, nullptr, "GetHitResult", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::CombatAbility_HitReaction_eventGetHitResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14482401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::CombatAbility_HitReaction_eventGetHitResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_HitReaction::execGetHitResult)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_TriggerEventData);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCombatAbility_HitReaction::GetHitResult(Z_Param_Out_TriggerEventData,Z_Param_Out_OutHitResult);
	P_NATIVE_END;
}
// End Class UCombatAbility_HitReaction Function GetHitResult

// Begin Class UCombatAbility_HitReaction Function RotateToInstigator
struct CombatAbility_HitReaction_eventRotateToInstigator_Parms
{
	FGameplayEventData TriggerEventData;
};
static const FName NAME_UCombatAbility_HitReaction_RotateToInstigator = FName(TEXT("RotateToInstigator"));
void UCombatAbility_HitReaction::RotateToInstigator(FGameplayEventData const& TriggerEventData)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_HitReaction_RotateToInstigator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_HitReaction_eventRotateToInstigator_Parms Parms;
		Parms.TriggerEventData=TriggerEventData;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RotateToInstigator_Implementation(TriggerEventData);
	}
}
struct Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hit Reaction Ability" },
		{ "Comment", "/**\n\x09 * Rotates the avatar to the event's instigator.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_HitReaction.h" },
		{ "ToolTip", "Rotates the avatar to the event's instigator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerEventData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::NewProp_TriggerEventData = { "TriggerEventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_HitReaction_eventRotateToInstigator_Parms, TriggerEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerEventData_MetaData), NewProp_TriggerEventData_MetaData) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::NewProp_TriggerEventData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_HitReaction, nullptr, "RotateToInstigator", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::PropPointers), sizeof(CombatAbility_HitReaction_eventRotateToInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_HitReaction_eventRotateToInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_HitReaction::execRotateToInstigator)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_TriggerEventData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateToInstigator_Implementation(Z_Param_Out_TriggerEventData);
	P_NATIVE_END;
}
// End Class UCombatAbility_HitReaction Function RotateToInstigator

// Begin Class UCombatAbility_HitReaction
void UCombatAbility_HitReaction::StaticRegisterNativesUCombatAbility_HitReaction()
{
	UClass* Class = UCombatAbility_HitReaction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteHitReaction", &UCombatAbility_HitReaction::execExecuteHitReaction },
		{ "GetHitResult", &UCombatAbility_HitReaction::execGetHitResult },
		{ "RotateToInstigator", &UCombatAbility_HitReaction::execRotateToInstigator },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_HitReaction);
UClass* Z_Construct_UClass_UCombatAbility_HitReaction_NoRegister()
{
	return UCombatAbility_HitReaction::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_HitReaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles Hit Reactions on the Avatar.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_HitReaction.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_HitReaction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles Hit Reactions on the Avatar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToSource_MetaData[] = {
		{ "Category", "Combat Ability|Hit Reaction" },
		{ "Comment", "/** Is set to true, makes the avatar rotate to the damage source. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_HitReaction.h" },
		{ "ToolTip", "Is set to true, makes the avatar rotate to the damage source." },
	};
#endif // WITH_METADATA
	static void NewProp_bRotateToSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_HitReaction_ExecuteHitReaction, "ExecuteHitReaction" }, // 844866369
		{ &Z_Construct_UFunction_UCombatAbility_HitReaction_GetHitResult, "GetHitResult" }, // 1498262265
		{ &Z_Construct_UFunction_UCombatAbility_HitReaction_RotateToInstigator, "RotateToInstigator" }, // 2899226463
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_HitReaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCombatAbility_HitReaction_Statics::NewProp_bRotateToSource_SetBit(void* Obj)
{
	((UCombatAbility_HitReaction*)Obj)->bRotateToSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatAbility_HitReaction_Statics::NewProp_bRotateToSource = { "bRotateToSource", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatAbility_HitReaction), &Z_Construct_UClass_UCombatAbility_HitReaction_Statics::NewProp_bRotateToSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateToSource_MetaData), NewProp_bRotateToSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_HitReaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_HitReaction_Statics::NewProp_bRotateToSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_HitReaction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_HitReaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatContextAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_HitReaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_HitReaction_Statics::ClassParams = {
	&UCombatAbility_HitReaction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_HitReaction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_HitReaction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_HitReaction_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_HitReaction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_HitReaction()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_HitReaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_HitReaction.OuterSingleton, Z_Construct_UClass_UCombatAbility_HitReaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_HitReaction.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_HitReaction>()
{
	return UCombatAbility_HitReaction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_HitReaction);
UCombatAbility_HitReaction::~UCombatAbility_HitReaction() {}
// End Class UCombatAbility_HitReaction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_HitReaction, UCombatAbility_HitReaction::StaticClass, TEXT("UCombatAbility_HitReaction"), &Z_Registration_Info_UClass_UCombatAbility_HitReaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_HitReaction), 2104055934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_1669326820(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_HitReaction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
