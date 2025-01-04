// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatManagerComponent.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "NinjaCombat/Public/Types/FDamageList.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatManagerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDamageManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatDefenseManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetManagerInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDamageDataAsset_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature();
NINJACOMBAT_API UFunction* Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FDamageList();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatManagerComponent Function BroadcastAttack
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics
{
	struct NinjaCombatManagerComponent_eventBroadcastAttack_Parms
	{
		FGameplayTagContainer AbilityTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Requests a broadcast regarding an attack that is starting.\n\x09 *\n\x09 * @param AbilityTags\n\x09 *\x09\x09Gameplay Tags that can identify the attack (a Gameplay Ability).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Requests a broadcast regarding an attack that is starting.\n\n@param AbilityTags\n             Gameplay Tags that can identify the attack (a Gameplay Ability)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventBroadcastAttack_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::NewProp_AbilityTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "BroadcastAttack", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::NinjaCombatManagerComponent_eventBroadcastAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::NinjaCombatManagerComponent_eventBroadcastAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execBroadcastAttack)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BroadcastAttack(Z_Param_AbilityTags);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function BroadcastAttack

// Begin Class UNinjaCombatManagerComponent Function CancelMeleeScanRequest
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics
{
	struct NinjaCombatManagerComponent_eventCancelMeleeScanRequest_Parms
	{
		int32 RequestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Cancels an active Melee Scan and dispatches the proper client and authoritative parts.\n\x09 *\n\x09 * @param RequestId\n\x09 *\x09\x09Melee Scan Request Identifier, provided by \"RegisterMeleeScanRequest\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cancels an active Melee Scan and dispatches the proper client and authoritative parts.\n\n@param RequestId\n             Melee Scan Request Identifier, provided by \"RegisterMeleeScanRequest\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCancelMeleeScanRequest_Parms, RequestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::NewProp_RequestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CancelMeleeScanRequest", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::NinjaCombatManagerComponent_eventCancelMeleeScanRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::NinjaCombatManagerComponent_eventCancelMeleeScanRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCancelMeleeScanRequest)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RequestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelMeleeScanRequest(Z_Param_RequestId);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CancelMeleeScanRequest

// Begin Class UNinjaCombatManagerComponent Function CreateComboManagerComponent
struct NinjaCombatManagerComponent_eventCreateComboManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateComboManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateComboManagerComponent = FName(TEXT("CreateComboManagerComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateComboManagerComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateComboManagerComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateComboManagerComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateComboManagerComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Combo Manager component used by the Combat System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Combo Manager component used by the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateComboManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateComboManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateComboManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateComboManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateComboManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateComboManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateComboManagerComponent

// Begin Class UNinjaCombatManagerComponent Function CreateDamageManagerComponent
struct NinjaCombatManagerComponent_eventCreateDamageManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateDamageManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateDamageManagerComponent = FName(TEXT("CreateDamageManagerComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateDamageManagerComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateDamageManagerComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateDamageManagerComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateDamageManagerComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Damage Manager component used by the Combat System.\n\x09 * By default, the Damage Manager component is a pointer to the Combat Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Damage Manager component used by the Combat System.\nBy default, the Damage Manager component is a pointer to the Combat Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateDamageManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateDamageManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateDamageManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateDamageManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateDamageManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateDamageManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateDamageManagerComponent

// Begin Class UNinjaCombatManagerComponent Function CreateDefenseManagerComponent
struct NinjaCombatManagerComponent_eventCreateDefenseManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateDefenseManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateDefenseManagerComponent = FName(TEXT("CreateDefenseManagerComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateDefenseManagerComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateDefenseManagerComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateDefenseManagerComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateDefenseManagerComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Defense Manager component used by the Combat System.\n\x09 * By default, the Defense Manager component is a pointer to the Combat Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Defense Manager component used by the Combat System.\nBy default, the Defense Manager component is a pointer to the Combat Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateDefenseManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateDefenseManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateDefenseManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateDefenseManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateDefenseManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateDefenseManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateDefenseManagerComponent

// Begin Class UNinjaCombatManagerComponent Function CreateDissolveManagerComponent
struct NinjaCombatManagerComponent_eventCreateDissolveManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateDissolveManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateDissolveManagerComponent = FName(TEXT("CreateDissolveManagerComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateDissolveManagerComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateDissolveManagerComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateDissolveManagerComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateDissolveManagerComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Dissolve Manager component used by the Combat System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Dissolve Manager component used by the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateDissolveManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateDissolveManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateDissolveManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateDissolveManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateDissolveManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateDissolveManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateDissolveManagerComponent

// Begin Class UNinjaCombatManagerComponent Function CreateForwardReference
struct NinjaCombatManagerComponent_eventCreateForwardReference_Parms
{
	USceneComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateForwardReference_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateForwardReference = FName(TEXT("CreateForwardReference"));
USceneComponent* UNinjaCombatManagerComponent::CreateForwardReference() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateForwardReference);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateForwardReference_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateForwardReference_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates a forward reference that can be used by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates a forward reference that can be used by this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateForwardReference_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateForwardReference", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateForwardReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateForwardReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateForwardReference)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->CreateForwardReference_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateForwardReference

// Begin Class UNinjaCombatManagerComponent Function CreateMotionWarpingComponent
struct NinjaCombatManagerComponent_eventCreateMotionWarpingComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateMotionWarpingComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateMotionWarpingComponent = FName(TEXT("CreateMotionWarpingComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateMotionWarpingComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateMotionWarpingComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateMotionWarpingComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateMotionWarpingComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Motion Warping component used by the Combat System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Motion Warping component used by the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateMotionWarpingComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateMotionWarpingComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateMotionWarpingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateMotionWarpingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateMotionWarpingComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateMotionWarpingComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateMotionWarpingComponent

// Begin Class UNinjaCombatManagerComponent Function CreatePhysicalAnimationComponent
struct NinjaCombatManagerComponent_eventCreatePhysicalAnimationComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreatePhysicalAnimationComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent = FName(TEXT("CreatePhysicalAnimationComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreatePhysicalAnimationComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreatePhysicalAnimationComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreatePhysicalAnimationComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Physical Animation component used by the Combat System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Physical Animation component used by the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreatePhysicalAnimationComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreatePhysicalAnimationComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreatePhysicalAnimationComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreatePhysicalAnimationComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreatePhysicalAnimationComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreatePhysicalAnimationComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreatePhysicalAnimationComponent

// Begin Class UNinjaCombatManagerComponent Function CreateTargetManagerComponent
struct NinjaCombatManagerComponent_eventCreateTargetManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateTargetManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateTargetManagerComponent = FName(TEXT("CreateTargetManagerComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateTargetManagerComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateTargetManagerComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateTargetManagerComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateTargetManagerComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Target Manager component used by the Combat System.\n\x09 * By default, the Target Manager component is a pointer to the Combat Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Target Manager component used by the Combat System.\nBy default, the Target Manager component is a pointer to the Combat Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateTargetManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateTargetManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateTargetManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateTargetManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateTargetManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateTargetManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateTargetManagerComponent

// Begin Class UNinjaCombatManagerComponent Function CreateWeaponManagerComponent
struct NinjaCombatManagerComponent_eventCreateWeaponManagerComponent_Parms
{
	UActorComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventCreateWeaponManagerComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_CreateWeaponManagerComponent = FName(TEXT("CreateWeaponManagerComponent"));
UActorComponent* UNinjaCombatManagerComponent::CreateWeaponManagerComponent() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_CreateWeaponManagerComponent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventCreateWeaponManagerComponent_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->CreateWeaponManagerComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Creates the Weapon Manager component used by the Combat System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Creates the Weapon Manager component used by the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventCreateWeaponManagerComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "CreateWeaponManagerComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventCreateWeaponManagerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventCreateWeaponManagerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execCreateWeaponManagerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->CreateWeaponManagerComponent_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function CreateWeaponManagerComponent

// Begin Class UNinjaCombatManagerComponent Function FinishDyingWrapper
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Timer wrapper for the interface call.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Timer wrapper for the interface call." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "FinishDyingWrapper", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execFinishDyingWrapper)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishDyingWrapper();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function FinishDyingWrapper

// Begin Class UNinjaCombatManagerComponent Function GameplayCue_Combat_Death
struct NinjaCombatManagerComponent_eventGameplayCue_Combat_Death_Parms
{
	TEnumAsByte<EGameplayCueEvent::Type> EventType;
	FGameplayCueParameters Parameters;
};
static const FName NAME_UNinjaCombatManagerComponent_GameplayCue_Combat_Death = FName(TEXT("GameplayCue_Combat_Death"));
void UNinjaCombatManagerComponent::GameplayCue_Combat_Death(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_GameplayCue_Combat_Death);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventGameplayCue_Combat_Death_Parms Parms;
		Parms.EventType=EventType;
		Parms.Parameters=Parameters;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		GameplayCue_Combat_Death_Implementation(EventType, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Handles The Hit Gameplay Cue defined by the \"GameplayCue.Combat.Death\" Tag.\n\x09 * Routing to this method happens through the Gameplay Cue Interface.\n\x09 */" },
		{ "DisplayName", "Handle Death Gameplay Cue" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Handles The Hit Gameplay Cue defined by the \"GameplayCue.Combat.Death\" Tag.\nRouting to this method happens through the Gameplay Cue Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGameplayCue_Combat_Death_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(0, nullptr) }; // 2915167709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGameplayCue_Combat_Death_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GameplayCue_Combat_Death", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventGameplayCue_Combat_Death_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventGameplayCue_Combat_Death_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGameplayCue_Combat_Death)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameplayCue_Combat_Death_Implementation(EGameplayCueEvent::Type(Z_Param_EventType),Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GameplayCue_Combat_Death

// Begin Class UNinjaCombatManagerComponent Function GameplayCue_Combat_Hit
struct NinjaCombatManagerComponent_eventGameplayCue_Combat_Hit_Parms
{
	TEnumAsByte<EGameplayCueEvent::Type> EventType;
	FGameplayCueParameters Parameters;
};
static const FName NAME_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit = FName(TEXT("GameplayCue_Combat_Hit"));
void UNinjaCombatManagerComponent::GameplayCue_Combat_Hit(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventGameplayCue_Combat_Hit_Parms Parms;
		Parms.EventType=EventType;
		Parms.Parameters=Parameters;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		GameplayCue_Combat_Hit_Implementation(EventType, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Handles The Hit Gameplay Cue defined by the \"GameplayCue.Combat.Hit\" Tag.\n\x09 * Routing to this method happens through the Gameplay Cue Interface.\n\x09 */" },
		{ "DisplayName", "Handle Hit Gameplay Cue" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Handles The Hit Gameplay Cue defined by the \"GameplayCue.Combat.Hit\" Tag.\nRouting to this method happens through the Gameplay Cue Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGameplayCue_Combat_Hit_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(0, nullptr) }; // 2915167709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGameplayCue_Combat_Hit_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GameplayCue_Combat_Hit", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventGameplayCue_Combat_Hit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventGameplayCue_Combat_Hit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGameplayCue_Combat_Hit)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameplayCue_Combat_Hit_Implementation(EGameplayCueEvent::Type(Z_Param_EventType),Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GameplayCue_Combat_Hit

// Begin Class UNinjaCombatManagerComponent Function GameplayCue_Combat_MeleeTrails
struct NinjaCombatManagerComponent_eventGameplayCue_Combat_MeleeTrails_Parms
{
	TEnumAsByte<EGameplayCueEvent::Type> EventType;
	FGameplayCueParameters Parameters;
};
static const FName NAME_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails = FName(TEXT("GameplayCue_Combat_MeleeTrails"));
void UNinjaCombatManagerComponent::GameplayCue_Combat_MeleeTrails(EGameplayCueEvent::Type EventType, FGameplayCueParameters const& Parameters)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventGameplayCue_Combat_MeleeTrails_Parms Parms;
		Parms.EventType=EventType;
		Parms.Parameters=Parameters;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		GameplayCue_Combat_MeleeTrails_Implementation(EventType, Parameters);
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Handles The Hit Gameplay Cue defined by the \"GameplayCue.Combat.MeleeTrails\" Tag.\n\x09 * Routing to this method happens through the Gameplay Cue Interface.\n\x09 */" },
		{ "DisplayName", "Handle Melee Trails Gameplay Cue" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Handles The Hit Gameplay Cue defined by the \"GameplayCue.Combat.MeleeTrails\" Tag.\nRouting to this method happens through the Gameplay Cue Interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGameplayCue_Combat_MeleeTrails_Parms, EventType), Z_Construct_UEnum_GameplayAbilities_EGameplayCueEvent, METADATA_PARAMS(0, nullptr) }; // 2915167709
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGameplayCue_Combat_MeleeTrails_Parms, Parameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::NewProp_EventType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GameplayCue_Combat_MeleeTrails", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventGameplayCue_Combat_MeleeTrails_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventGameplayCue_Combat_MeleeTrails_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGameplayCue_Combat_MeleeTrails)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GameplayCue_Combat_MeleeTrails_Implementation(EGameplayCueEvent::Type(Z_Param_EventType),Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GameplayCue_Combat_MeleeTrails

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheComboManager
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheComboManager_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Combo Manager assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Combo Manager using the Combat Interface on the owner,\n\x09 * if no component is returned, then one will be created, registered and returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Combo Manager assigned to the owner.\n\nFirst, attempts to retrieve the Combo Manager using the Combat Interface on the owner,\nif no component is returned, then one will be created, registered and returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheComboManager_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheComboManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheComboManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheComboManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheComboManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheComboManager();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheComboManager

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheDamageManager
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheDamageManager_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Damage Manager assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Damage Manager using the Combat Interface on the owner.\n\x09 * If no component is returned, the Combat Manager - which a valid substitution, is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Damage Manager assigned to the owner.\n\nFirst, attempts to retrieve the Damage Manager using the Combat Interface on the owner.\nIf no component is returned, the Combat Manager - which a valid substitution, is returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheDamageManager_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheDamageManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheDamageManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheDamageManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheDamageManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheDamageManager();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheDamageManager

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheDefenseManager
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheDefenseManager_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Defense Manager assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Defense Manager using the Combat Interface on the owner.\n\x09 * If no component is returned, the Combat Manager - which a valid substitution, is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Defense Manager assigned to the owner.\n\nFirst, attempts to retrieve the Defense Manager using the Combat Interface on the owner.\nIf no component is returned, the Combat Manager - which a valid substitution, is returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheDefenseManager_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheDefenseManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheDefenseManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheDefenseManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheDefenseManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheDefenseManager();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheDefenseManager

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheDissolveManager
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheDissolveManager_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Dissolve Manager assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Dissolve Manager using the Combat Interface on the owner,\n\x09 * if no component is returned, then one will be created, registered and returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Dissolve Manager assigned to the owner.\n\nFirst, attempts to retrieve the Dissolve Manager using the Combat Interface on the owner,\nif no component is returned, then one will be created, registered and returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheDissolveManager_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheDissolveManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheDissolveManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheDissolveManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheDissolveManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheDissolveManager();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheDissolveManager

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheMotionWarping
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheMotionWarping_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Motion Warping component assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Motion Warping component using the Combat Interface on the owner,\n\x09 * if no component is returned, then one will be created, registered and returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Motion Warping component assigned to the owner.\n\nFirst, attempts to retrieve the Motion Warping component using the Combat Interface on the owner,\nif no component is returned, then one will be created, registered and returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheMotionWarping_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheMotionWarping", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::NinjaCombatManagerComponent_eventGetAndCacheMotionWarping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::NinjaCombatManagerComponent_eventGetAndCacheMotionWarping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheMotionWarping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheMotionWarping();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheMotionWarping

// Begin Class UNinjaCombatManagerComponent Function GetAndCachePhysicalAnimation
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCachePhysicalAnimation_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Physical Animation component assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Physical Animation component using the Combat Interface on the owner,\n\x09 * if no component is returned, then one will be created, registered and returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Physical Animation component assigned to the owner.\n\nFirst, attempts to retrieve the Physical Animation component using the Combat Interface on the owner,\nif no component is returned, then one will be created, registered and returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCachePhysicalAnimation_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCachePhysicalAnimation", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::NinjaCombatManagerComponent_eventGetAndCachePhysicalAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::NinjaCombatManagerComponent_eventGetAndCachePhysicalAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCachePhysicalAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCachePhysicalAnimation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCachePhysicalAnimation

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheTargetManager
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheTargetManager_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Target Manager assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Target Manager using the Combat Interface on the owner.\n\x09 * If no component is returned, the Combat Manager - which a valid substitution, is returned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Target Manager assigned to the owner.\n\nFirst, attempts to retrieve the Target Manager using the Combat Interface on the owner.\nIf no component is returned, the Combat Manager - which a valid substitution, is returned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheTargetManager_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheTargetManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheTargetManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheTargetManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheTargetManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheTargetManager();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheTargetManager

// Begin Class UNinjaCombatManagerComponent Function GetAndCacheWeaponManager
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics
{
	struct NinjaCombatManagerComponent_eventGetAndCacheWeaponManager_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Provides the Weapon Manager assigned to the owner.\n\x09 *\n\x09 * First, attempts to retrieve the Weapon Warping component using the Combat Interface on the owner,\n\x09 * if no component is returned, then one will be created, registered and returned.\n\x09 *\n\x09 * The default Weapon Manager does not have much value when empty, so it's unlikely that a project\n\x09 * would allow the Combat Manager to create one automatically.\n\x09 *\n\x09 * However, if you are using something like the Inventory System, then you could override the Factory\n\x09 * Function to generate the correct Equipment Weapon Manager by default.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Provides the Weapon Manager assigned to the owner.\n\nFirst, attempts to retrieve the Weapon Warping component using the Combat Interface on the owner,\nif no component is returned, then one will be created, registered and returned.\n\nThe default Weapon Manager does not have much value when empty, so it's unlikely that a project\nwould allow the Combat Manager to create one automatically.\n\nHowever, if you are using something like the Inventory System, then you could override the Factory\nFunction to generate the correct Equipment Weapon Manager by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetAndCacheWeaponManager_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetAndCacheWeaponManager", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheWeaponManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::NinjaCombatManagerComponent_eventGetAndCacheWeaponManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetAndCacheWeaponManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetAndCacheWeaponManager();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetAndCacheWeaponManager

// Begin Class UNinjaCombatManagerComponent Function GetBlockAngle
struct NinjaCombatManagerComponent_eventGetBlockAngle_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatManagerComponent_eventGetBlockAngle_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNinjaCombatManagerComponent_GetBlockAngle = FName(TEXT("GetBlockAngle"));
float UNinjaCombatManagerComponent::GetBlockAngle() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_GetBlockAngle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventGetBlockAngle_Parms Parms;
		const_cast<UNinjaCombatManagerComponent*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatManagerComponent*>(this)->GetBlockAngle_Implementation();
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Retrieves the Block Angle used by this component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Retrieves the Block Angle used by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventGetBlockAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "GetBlockAngle", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventGetBlockAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventGetBlockAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execGetBlockAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBlockAngle_Implementation();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function GetBlockAngle

// Begin Class UNinjaCombatManagerComponent Function HandleCombatTargetDeath
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics
{
	struct NinjaCombatManagerComponent_eventHandleCombatTargetDeath_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the current target dying.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the current target dying." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventHandleCombatTargetDeath_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "HandleCombatTargetDeath", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::NinjaCombatManagerComponent_eventHandleCombatTargetDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::NinjaCombatManagerComponent_eventHandleCombatTargetDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execHandleCombatTargetDeath)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCombatTargetDeath(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function HandleCombatTargetDeath

// Begin Class UNinjaCombatManagerComponent Function HandleCombatTargetDestroyed
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics
{
	struct NinjaCombatManagerComponent_eventHandleCombatTargetDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the current target being destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the current target being destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventHandleCombatTargetDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "HandleCombatTargetDestroyed", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::NinjaCombatManagerComponent_eventHandleCombatTargetDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::NinjaCombatManagerComponent_eventHandleCombatTargetDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execHandleCombatTargetDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCombatTargetDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function HandleCombatTargetDestroyed

// Begin Class UNinjaCombatManagerComponent Function OnRep_CombatTarget
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics
{
	struct NinjaCombatManagerComponent_eventOnRep_CombatTarget_Parms
	{
		AActor* OldCombatTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Reacts to the replication of a combat target.\n\x09 *\n\x09 * It should ensure that the local version is different, before triggering any broadcasts, since\n\x09 * the Target Management allows prediction of the local target, for reactive inputs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of a combat target.\n\nIt should ensure that the local version is different, before triggering any broadcasts, since\nthe Target Management allows prediction of the local target, for reactive inputs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::NewProp_OldCombatTarget = { "OldCombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventOnRep_CombatTarget_Parms, OldCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::NewProp_OldCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "OnRep_CombatTarget", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::NinjaCombatManagerComponent_eventOnRep_CombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::NinjaCombatManagerComponent_eventOnRep_CombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execOnRep_CombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_OldCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CombatTarget(Z_Param_OldCombatTarget);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function OnRep_CombatTarget

// Begin Class UNinjaCombatManagerComponent Function OnRep_IsBlocking
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics
{
	struct NinjaCombatManagerComponent_eventOnRep_IsBlocking_Parms
	{
		bool bWasBlocking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Reacts to the replication of the \"Blocking\" property. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Blocking\" property." },
	};
#endif // WITH_METADATA
	static void NewProp_bWasBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasBlocking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::NewProp_bWasBlocking_SetBit(void* Obj)
{
	((NinjaCombatManagerComponent_eventOnRep_IsBlocking_Parms*)Obj)->bWasBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::NewProp_bWasBlocking = { "bWasBlocking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatManagerComponent_eventOnRep_IsBlocking_Parms), &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::NewProp_bWasBlocking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::NewProp_bWasBlocking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "OnRep_IsBlocking", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::NinjaCombatManagerComponent_eventOnRep_IsBlocking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::NinjaCombatManagerComponent_eventOnRep_IsBlocking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execOnRep_IsBlocking)
{
	P_GET_UBOOL(Z_Param_bWasBlocking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsBlocking(Z_Param_bWasBlocking);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function OnRep_IsBlocking

// Begin Class UNinjaCombatManagerComponent Function OnRep_IsDead
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Reacts to the replication of the \"Dead\" property. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Dead\" property." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "OnRep_IsDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execOnRep_IsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsDead();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function OnRep_IsDead

// Begin Class UNinjaCombatManagerComponent Function OnRep_IsInvulnerable
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics
{
	struct NinjaCombatManagerComponent_eventOnRep_IsInvulnerable_Parms
	{
		bool bWasInvulnerable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Reacts to the replication of the \"Invulnerable\" property. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Invulnerable\" property." },
	};
#endif // WITH_METADATA
	static void NewProp_bWasInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInvulnerable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::NewProp_bWasInvulnerable_SetBit(void* Obj)
{
	((NinjaCombatManagerComponent_eventOnRep_IsInvulnerable_Parms*)Obj)->bWasInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::NewProp_bWasInvulnerable = { "bWasInvulnerable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatManagerComponent_eventOnRep_IsInvulnerable_Parms), &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::NewProp_bWasInvulnerable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::NewProp_bWasInvulnerable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "OnRep_IsInvulnerable", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::NinjaCombatManagerComponent_eventOnRep_IsInvulnerable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::NinjaCombatManagerComponent_eventOnRep_IsInvulnerable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execOnRep_IsInvulnerable)
{
	P_GET_UBOOL(Z_Param_bWasInvulnerable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsInvulnerable(Z_Param_bWasInvulnerable);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function OnRep_IsInvulnerable

// Begin Class UNinjaCombatManagerComponent Function OnRep_IsStaggered
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics
{
	struct NinjaCombatManagerComponent_eventOnRep_IsStaggered_Parms
	{
		bool bWasStaggered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Reacts to the replication of the \"Staggered\" property. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Reacts to the replication of the \"Staggered\" property." },
	};
#endif // WITH_METADATA
	static void NewProp_bWasStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasStaggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::NewProp_bWasStaggered_SetBit(void* Obj)
{
	((NinjaCombatManagerComponent_eventOnRep_IsStaggered_Parms*)Obj)->bWasStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::NewProp_bWasStaggered = { "bWasStaggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatManagerComponent_eventOnRep_IsStaggered_Parms), &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::NewProp_bWasStaggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::NewProp_bWasStaggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "OnRep_IsStaggered", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::NinjaCombatManagerComponent_eventOnRep_IsStaggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::NinjaCombatManagerComponent_eventOnRep_IsStaggered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execOnRep_IsStaggered)
{
	P_GET_UBOOL(Z_Param_bWasStaggered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_IsStaggered(Z_Param_bWasStaggered);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function OnRep_IsStaggered

// Begin Class UNinjaCombatManagerComponent Function RegisterMeleeScanRequest
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics
{
	struct NinjaCombatManagerComponent_eventRegisterMeleeScanRequest_Parms
	{
		const UNinjaCombatMeleeScan* MeleeScan;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Registers a new Melee Scan request and dispatches the proper client and authoritative parts.\n\x09 *\n\x09 * @param MeleeScan\x09\x09Transfer Object containing the details for the Melee Scan.\n\x09 * @return\x09\x09\x09\x09""An identifier for the Melee Scan Request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Registers a new Melee Scan request and dispatches the proper client and authoritative parts.\n\n@param MeleeScan             Transfer Object containing the details for the Melee Scan.\n@return                              An identifier for the Melee Scan Request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScan;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::NewProp_MeleeScan = { "MeleeScan", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventRegisterMeleeScanRequest_Parms, MeleeScan), Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScan_MetaData), NewProp_MeleeScan_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventRegisterMeleeScanRequest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::NewProp_MeleeScan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "RegisterMeleeScanRequest", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::NinjaCombatManagerComponent_eventRegisterMeleeScanRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::NinjaCombatManagerComponent_eventRegisterMeleeScanRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execRegisterMeleeScanRequest)
{
	P_GET_OBJECT(UNinjaCombatMeleeScan,Z_Param_MeleeScan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RegisterMeleeScanRequest(Z_Param_MeleeScan);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function RegisterMeleeScanRequest

// Begin Class UNinjaCombatManagerComponent Function RotateControllerToTarget
struct NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms
{
	AController* Controller;
	const AActor* CurrentTarget;
	float DeltaTime;
};
static const FName NAME_UNinjaCombatManagerComponent_RotateControllerToTarget = FName(TEXT("RotateControllerToTarget"));
void UNinjaCombatManagerComponent::RotateControllerToTarget(AController* Controller, const AActor* CurrentTarget, float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_RotateControllerToTarget);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms Parms;
		Parms.Controller=Controller;
		Parms.CurrentTarget=CurrentTarget;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RotateControllerToTarget_Implementation(Controller, CurrentTarget, DeltaTime);
	}
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "/**\n\x09 * Rotates the Controller assigned to the owner to the current Combat Target.\n\x09 *\n\x09 * @param Controller\x09\x09""Controller to rotate.\n\x09 * @param CurrentTarget\x09\x09Target to rotate the controller.\n\x09 * @param DeltaTime\x09\x09\x09Interval to calculate the rotation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Rotates the Controller assigned to the owner to the current Combat Target.\n\n@param Controller            Controller to rotate.\n@param CurrentTarget         Target to rotate the controller.\n@param DeltaTime                     Interval to calculate the rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "RotateControllerToTarget", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventRotateControllerToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execRotateControllerToTarget)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_OBJECT(AActor,Z_Param_CurrentTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateControllerToTarget_Implementation(Z_Param_Controller,Z_Param_CurrentTarget,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function RotateControllerToTarget

// Begin Class UNinjaCombatManagerComponent Function SafelyDestroyOwner
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Safely destroys the owner by ensuring no active abilities still remain.\n\x09 * Will postpone the destruction to the next tick if needed, until abilities are finished.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Safely destroys the owner by ensuring no active abilities still remain.\nWill postpone the destruction to the next tick if needed, until abilities are finished." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "SafelyDestroyOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execSafelyDestroyOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SafelyDestroyOwner();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function SafelyDestroyOwner

// Begin Class UNinjaCombatManagerComponent Function Server_SetCombatTarget
struct NinjaCombatManagerComponent_eventServer_SetCombatTarget_Parms
{
	AActor* NewCombatTarget;
};
static const FName NAME_UNinjaCombatManagerComponent_Server_SetCombatTarget = FName(TEXT("Server_SetCombatTarget"));
void UNinjaCombatManagerComponent::Server_SetCombatTarget(AActor* NewCombatTarget)
{
	NinjaCombatManagerComponent_eventServer_SetCombatTarget_Parms Parms;
	Parms.NewCombatTarget=NewCombatTarget;
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatManagerComponent_Server_SetCombatTarget);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Triggers an RPC to set a new Combat Target in the authority.\n\x09 * \n\x09 * @param NewCombatTarget\n\x09 *\x09\x09New combat target to be set in the authority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Triggers an RPC to set a new Combat Target in the authority.\n\n@param NewCombatTarget\n             New combat target to be set in the authority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCombatTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::NewProp_NewCombatTarget = { "NewCombatTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatManagerComponent_eventServer_SetCombatTarget_Parms, NewCombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::NewProp_NewCombatTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "Server_SetCombatTarget", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::PropPointers), sizeof(NinjaCombatManagerComponent_eventServer_SetCombatTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatManagerComponent_eventServer_SetCombatTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execServer_SetCombatTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewCombatTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_SetCombatTarget_Validate(Z_Param_NewCombatTarget))
	{
		RPC_ValidateFailed(TEXT("Server_SetCombatTarget_Validate"));
		return;
	}
	P_THIS->Server_SetCombatTarget_Implementation(Z_Param_NewCombatTarget);
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function Server_SetCombatTarget

// Begin Class UNinjaCombatManagerComponent Function TryEnableRagdollPhysics
struct Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Combat Manager" },
		{ "Comment", "/**\n\x09 * Tries to enable the Ragdoll Physics, based on the settings for the owner.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Tries to enable the Ragdoll Physics, based on the settings for the owner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatManagerComponent, nullptr, "TryEnableRagdollPhysics", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatManagerComponent::execTryEnableRagdollPhysics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryEnableRagdollPhysics();
	P_NATIVE_END;
}
// End Class UNinjaCombatManagerComponent Function TryEnableRagdollPhysics

// Begin Class UNinjaCombatManagerComponent
void UNinjaCombatManagerComponent::StaticRegisterNativesUNinjaCombatManagerComponent()
{
	UClass* Class = UNinjaCombatManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BroadcastAttack", &UNinjaCombatManagerComponent::execBroadcastAttack },
		{ "CancelMeleeScanRequest", &UNinjaCombatManagerComponent::execCancelMeleeScanRequest },
		{ "CreateComboManagerComponent", &UNinjaCombatManagerComponent::execCreateComboManagerComponent },
		{ "CreateDamageManagerComponent", &UNinjaCombatManagerComponent::execCreateDamageManagerComponent },
		{ "CreateDefenseManagerComponent", &UNinjaCombatManagerComponent::execCreateDefenseManagerComponent },
		{ "CreateDissolveManagerComponent", &UNinjaCombatManagerComponent::execCreateDissolveManagerComponent },
		{ "CreateForwardReference", &UNinjaCombatManagerComponent::execCreateForwardReference },
		{ "CreateMotionWarpingComponent", &UNinjaCombatManagerComponent::execCreateMotionWarpingComponent },
		{ "CreatePhysicalAnimationComponent", &UNinjaCombatManagerComponent::execCreatePhysicalAnimationComponent },
		{ "CreateTargetManagerComponent", &UNinjaCombatManagerComponent::execCreateTargetManagerComponent },
		{ "CreateWeaponManagerComponent", &UNinjaCombatManagerComponent::execCreateWeaponManagerComponent },
		{ "FinishDyingWrapper", &UNinjaCombatManagerComponent::execFinishDyingWrapper },
		{ "GameplayCue_Combat_Death", &UNinjaCombatManagerComponent::execGameplayCue_Combat_Death },
		{ "GameplayCue_Combat_Hit", &UNinjaCombatManagerComponent::execGameplayCue_Combat_Hit },
		{ "GameplayCue_Combat_MeleeTrails", &UNinjaCombatManagerComponent::execGameplayCue_Combat_MeleeTrails },
		{ "GetAndCacheComboManager", &UNinjaCombatManagerComponent::execGetAndCacheComboManager },
		{ "GetAndCacheDamageManager", &UNinjaCombatManagerComponent::execGetAndCacheDamageManager },
		{ "GetAndCacheDefenseManager", &UNinjaCombatManagerComponent::execGetAndCacheDefenseManager },
		{ "GetAndCacheDissolveManager", &UNinjaCombatManagerComponent::execGetAndCacheDissolveManager },
		{ "GetAndCacheMotionWarping", &UNinjaCombatManagerComponent::execGetAndCacheMotionWarping },
		{ "GetAndCachePhysicalAnimation", &UNinjaCombatManagerComponent::execGetAndCachePhysicalAnimation },
		{ "GetAndCacheTargetManager", &UNinjaCombatManagerComponent::execGetAndCacheTargetManager },
		{ "GetAndCacheWeaponManager", &UNinjaCombatManagerComponent::execGetAndCacheWeaponManager },
		{ "GetBlockAngle", &UNinjaCombatManagerComponent::execGetBlockAngle },
		{ "HandleCombatTargetDeath", &UNinjaCombatManagerComponent::execHandleCombatTargetDeath },
		{ "HandleCombatTargetDestroyed", &UNinjaCombatManagerComponent::execHandleCombatTargetDestroyed },
		{ "OnRep_CombatTarget", &UNinjaCombatManagerComponent::execOnRep_CombatTarget },
		{ "OnRep_IsBlocking", &UNinjaCombatManagerComponent::execOnRep_IsBlocking },
		{ "OnRep_IsDead", &UNinjaCombatManagerComponent::execOnRep_IsDead },
		{ "OnRep_IsInvulnerable", &UNinjaCombatManagerComponent::execOnRep_IsInvulnerable },
		{ "OnRep_IsStaggered", &UNinjaCombatManagerComponent::execOnRep_IsStaggered },
		{ "RegisterMeleeScanRequest", &UNinjaCombatManagerComponent::execRegisterMeleeScanRequest },
		{ "RotateControllerToTarget", &UNinjaCombatManagerComponent::execRotateControllerToTarget },
		{ "SafelyDestroyOwner", &UNinjaCombatManagerComponent::execSafelyDestroyOwner },
		{ "Server_SetCombatTarget", &UNinjaCombatManagerComponent::execServer_SetCombatTarget },
		{ "TryEnableRagdollPhysics", &UNinjaCombatManagerComponent::execTryEnableRagdollPhysics },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatManagerComponent);
UClass* Z_Construct_UClass_UNinjaCombatManagerComponent_NoRegister()
{
	return UNinjaCombatManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "NinjaCombat" },
		{ "Comment", "/**\n * Manages targets, damage and defense for a combatant.\n */" },
		{ "IncludePath", "Components/NinjaCombatManagerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Manages targets, damage and defense for a combatant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackStarted_MetaData[] = {
		{ "Comment", "/** Broadcasts an attack that has started. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts an attack that has started." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCombatTargetChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts a change in the combat target. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts a change in the combat target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaggerStateChanged_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Broadcasts a change in the Stagger state. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts a change in the Stagger state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDamageReceived_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/**\n\x09 * Broadcasts information about damage applied to the owner.\n\x09 * \n\x09 * The Struct has a dedicated native breaker that should be transparent for Blueprints but C++ users\n\x09 * can also benefit from it. It's available in as UNinjaCombatFunctionLibrary::BreakDamageStruct. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts information about damage applied to the owner.\n\nThe Struct has a dedicated native breaker that should be transparent for Blueprints but C++ users\ncan also benefit from it. It's available in as UNinjaCombatFunctionLibrary::BreakDamageStruct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOwnerStartedDying_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Broadcasts a change in the current Dead State of the owning character. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts a change in the current Dead State of the owning character." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOwnerFinishedDying_MetaData[] = {
		{ "Category", "Damage" },
		{ "Comment", "/** Broadcasts the end of the death cycle. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts the end of the death cycle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlockingStateChanged_MetaData[] = {
		{ "Category", "Defense" },
		{ "Comment", "/** Broadcasts information about the blocking state. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts information about the blocking state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInvulnerabilityStateChanged_MetaData[] = {
		{ "Category", "Defense" },
		{ "Comment", "/** Broadcasts information about the invulnerability state. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Broadcasts information about the invulnerability state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateControllerToTarget_MetaData[] = {
		{ "Category", "Combat|Target Manager" },
		{ "Comment", "/** If set to true, rotates the Controller to always look at the locked target. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "If set to true, rotates the Controller to always look at the locked target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockControllerPitch_MetaData[] = {
		{ "Category", "Combat|Target Manager" },
		{ "Comment", "/** Determines if the pitch should be locked. */" },
		{ "EditCondition", "bRotateControllerToTarget" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Determines if the pitch should be locked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockControllerYaw_MetaData[] = {
		{ "Category", "Combat|Target Manager" },
		{ "Comment", "/** Determines if the yaw should be locked. */" },
		{ "EditCondition", "bRotateControllerToTarget" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Determines if the yaw should be locked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Combat|Target Manager" },
		{ "Comment", "/** How fast we should interpolate between the current rotation and the look at rotation. */" },
		{ "EditCondition", "bRotateControllerToTarget" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "How fast we should interpolate between the current rotation and the look at rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPredictTarget_MetaData[] = {
		{ "Category", "Combat|Target Manager" },
		{ "Comment", "/**\n\x09 * If set to true, allows locally controlled clients to predict targets, before replication from server.\n\x09 * This will provide an immediate targeting reaction to local player, at the expense of trusting it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "If set to true, allows locally controlled clients to predict targets, before replication from server.\nThis will provide an immediate targeting reaction to local player, at the expense of trusting it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMarkerActorClass_MetaData[] = {
		{ "Category", "Combat|Target Manager" },
		{ "Comment", "/** The Target Lock actor that will be used in the local player, when locked to a target. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "The Target Lock actor that will be used in the local player, when locked to a target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnblockableDamageTags_MetaData[] = {
		{ "Category", "Combat|Defense Manager" },
		{ "Comment", "/** List of gameplay tags representing damage that cannot be blocked. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "List of gameplay tags representing damage that cannot be blocked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStandEffectClass_MetaData[] = {
		{ "Category", "Combat|Defense Manager" },
		{ "Comment", "/** Applies the effects of a Last Stand. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Applies the effects of a Last Stand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageData_MetaData[] = {
		{ "Category", "Combat|Damage Manager" },
		{ "Comment", "/** All handlers available to this damage manager. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "All handlers available to this damage manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseAnimations_MetaData[] = {
		{ "Category", "Combat|Damage Manager" },
		{ "Comment", "/**\n\x09 * Determines if the Skeletal Mesh should pause animation processing.\n\x09 * \n\x09 * This can be useful to keep the character from standing up after finishing a death montage,\n\x09 * especially during Opportunity Attacks, when the victim is \"forced\" to leave the scene, and\n\x09 * even a looping montage section will be interrupted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Determines if the Skeletal Mesh should pause animation processing.\n\nThis can be useful to keep the character from standing up after finishing a death montage,\nespecially during Opportunity Attacks, when the victim is \"forced\" to leave the scene, and\neven a looping montage section will be interrupted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[] = {
		{ "Comment", "/** Current combat target, replicated across all actors. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Current combat target, replicated across all actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocking_MetaData[] = {
		{ "Comment", "/** Informs if the owning actor is blocking. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Informs if the owning actor is blocking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInvulnerable_MetaData[] = {
		{ "Comment", "/** Informs if the owning actor is invulnerable. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Informs if the owning actor is invulnerable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaggered_MetaData[] = {
		{ "Comment", "/** Informs if the owning actor is staggered. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Informs if the owning actor is staggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Comment", "/** Informs if the owning actor has died. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Informs if the owning actor has died." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedForwardReference_MetaData[] = {
		{ "Comment", "/** Cache to the Forward Reference used by combat abilities. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cache to the Forward Reference used by combat abilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedComboManager_MetaData[] = {
		{ "Comment", "/** Cached Combo Manager assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Combo Manager assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDamageManager_MetaData[] = {
		{ "Comment", "/** Cached Damage Manager assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Damage Manager assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefenseManager_MetaData[] = {
		{ "Comment", "/** Cached Defense Manager assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Defense Manager assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedDissolveManager_MetaData[] = {
		{ "Comment", "/** Cached Dissolve Manager assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Dissolve Manager assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMotionWarping_MetaData[] = {
		{ "Comment", "/** Cached Motion Warping Component assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Motion Warping Component assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPhysicalAnimation_MetaData[] = {
		{ "Comment", "/** Cached Physical Animation component assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Physical Animation component assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedTargetManager_MetaData[] = {
		{ "Comment", "/** Cached Target Manager assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Target Manager assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWeaponManager_MetaData[] = {
		{ "Comment", "/** Cached Target Manager assigned to this component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Cached Target Manager assigned to this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLockActor_MetaData[] = {
		{ "Comment", "/** Target Lock actor maintained by this component. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "Target Lock actor maintained by this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeScanMap_MetaData[] = {
		{ "Comment", "/** All Melee Scans being tracked by this combat manager. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "All Melee Scans being tracked by this combat manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTakenList_MetaData[] = {
		{ "Comment", "/** List of recent damage received by this component. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatManagerComponent.h" },
		{ "ToolTip", "List of recent damage received by this component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAttackStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCombatTargetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaggerStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDamageReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOwnerStartedDying;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOwnerFinishedDying;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockingStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInvulnerabilityStateChanged;
	static void NewProp_bRotateControllerToTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateControllerToTarget;
	static void NewProp_bLockControllerPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockControllerPitch;
	static void NewProp_bLockControllerYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockControllerYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static void NewProp_bCanPredictTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPredictTarget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetMarkerActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnblockableDamageTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LastStandEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageData;
	static void NewProp_bShouldPauseAnimations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseAnimations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
	static void NewProp_bIsBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
	static void NewProp_bIsInvulnerable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInvulnerable;
	static void NewProp_bIsStaggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaggered;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedForwardReference;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedComboManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedDamageManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedDefenseManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedDissolveManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMotionWarping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedPhysicalAnimation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedTargetManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedWeaponManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLockActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeScanMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeleeScanMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MeleeScanMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageTakenList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_BroadcastAttack, "BroadcastAttack" }, // 2196952933
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CancelMeleeScanRequest, "CancelMeleeScanRequest" }, // 374012134
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateComboManagerComponent, "CreateComboManagerComponent" }, // 3971977631
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDamageManagerComponent, "CreateDamageManagerComponent" }, // 1374997585
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDefenseManagerComponent, "CreateDefenseManagerComponent" }, // 2732350721
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateDissolveManagerComponent, "CreateDissolveManagerComponent" }, // 733555374
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateForwardReference, "CreateForwardReference" }, // 3949948262
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateMotionWarpingComponent, "CreateMotionWarpingComponent" }, // 1239789985
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreatePhysicalAnimationComponent, "CreatePhysicalAnimationComponent" }, // 2898474721
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateTargetManagerComponent, "CreateTargetManagerComponent" }, // 3935136021
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_CreateWeaponManagerComponent, "CreateWeaponManagerComponent" }, // 2183092450
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_FinishDyingWrapper, "FinishDyingWrapper" }, // 109840000
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Death, "GameplayCue_Combat_Death" }, // 2230903793
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_Hit, "GameplayCue_Combat_Hit" }, // 440994111
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GameplayCue_Combat_MeleeTrails, "GameplayCue_Combat_MeleeTrails" }, // 1887462374
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheComboManager, "GetAndCacheComboManager" }, // 3309606383
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDamageManager, "GetAndCacheDamageManager" }, // 2254600152
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDefenseManager, "GetAndCacheDefenseManager" }, // 978726403
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheDissolveManager, "GetAndCacheDissolveManager" }, // 53150434
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheMotionWarping, "GetAndCacheMotionWarping" }, // 2877067110
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCachePhysicalAnimation, "GetAndCachePhysicalAnimation" }, // 1670865348
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheTargetManager, "GetAndCacheTargetManager" }, // 1605802512
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetAndCacheWeaponManager, "GetAndCacheWeaponManager" }, // 1410536501
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_GetBlockAngle, "GetBlockAngle" }, // 2571404522
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDeath, "HandleCombatTargetDeath" }, // 53151196
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_HandleCombatTargetDestroyed, "HandleCombatTargetDestroyed" }, // 2688863755
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_CombatTarget, "OnRep_CombatTarget" }, // 1029684388
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsBlocking, "OnRep_IsBlocking" }, // 3774842509
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsDead, "OnRep_IsDead" }, // 397750590
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsInvulnerable, "OnRep_IsInvulnerable" }, // 3271932983
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_OnRep_IsStaggered, "OnRep_IsStaggered" }, // 1946246631
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_RegisterMeleeScanRequest, "RegisterMeleeScanRequest" }, // 3332434602
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_RotateControllerToTarget, "RotateControllerToTarget" }, // 1446555376
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_SafelyDestroyOwner, "SafelyDestroyOwner" }, // 2221221743
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_Server_SetCombatTarget, "Server_SetCombatTarget" }, // 2612399763
		{ &Z_Construct_UFunction_UNinjaCombatManagerComponent_TryEnableRagdollPhysics, "TryEnableRagdollPhysics" }, // 1015643333
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnAttackStarted = { "OnAttackStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnAttackStarted), Z_Construct_UDelegateFunction_NinjaCombat_AttackStartedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackStarted_MetaData), NewProp_OnAttackStarted_MetaData) }; // 3583961339
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnCombatTargetChanged = { "OnCombatTargetChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnCombatTargetChanged), Z_Construct_UDelegateFunction_NinjaCombat_CombatTargetChangedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCombatTargetChanged_MetaData), NewProp_OnCombatTargetChanged_MetaData) }; // 3551979903
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnStaggerStateChanged = { "OnStaggerStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnStaggerStateChanged), Z_Construct_UDelegateFunction_NinjaCombat_StaggeredStateChangedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaggerStateChanged_MetaData), NewProp_OnStaggerStateChanged_MetaData) }; // 561976492
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnDamageReceived = { "OnDamageReceived", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnDamageReceived), Z_Construct_UDelegateFunction_NinjaCombat_DamageReceivedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDamageReceived_MetaData), NewProp_OnDamageReceived_MetaData) }; // 240942056
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnOwnerStartedDying = { "OnOwnerStartedDying", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnOwnerStartedDying), Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOwnerStartedDying_MetaData), NewProp_OnOwnerStartedDying_MetaData) }; // 2612945206
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnOwnerFinishedDying = { "OnOwnerFinishedDying", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnOwnerFinishedDying), Z_Construct_UDelegateFunction_NinjaCombat_OwnerDiedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOwnerFinishedDying_MetaData), NewProp_OnOwnerFinishedDying_MetaData) }; // 2612945206
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnBlockingStateChanged = { "OnBlockingStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnBlockingStateChanged), Z_Construct_UDelegateFunction_NinjaCombat_BlockingStateChangedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlockingStateChanged_MetaData), NewProp_OnBlockingStateChanged_MetaData) }; // 426741634
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnInvulnerabilityStateChanged = { "OnInvulnerabilityStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, OnInvulnerabilityStateChanged), Z_Construct_UDelegateFunction_NinjaCombat_InvulnerabilityStateChangedMCDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInvulnerabilityStateChanged_MetaData), NewProp_OnInvulnerabilityStateChanged_MetaData) }; // 4048427549
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bRotateControllerToTarget_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bRotateControllerToTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bRotateControllerToTarget = { "bRotateControllerToTarget", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bRotateControllerToTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateControllerToTarget_MetaData), NewProp_bRotateControllerToTarget_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerPitch_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bLockControllerPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerPitch = { "bLockControllerPitch", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockControllerPitch_MetaData), NewProp_bLockControllerPitch_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerYaw_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bLockControllerYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerYaw = { "bLockControllerYaw", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockControllerYaw_MetaData), NewProp_bLockControllerYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bCanPredictTarget_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bCanPredictTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bCanPredictTarget = { "bCanPredictTarget", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bCanPredictTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPredictTarget_MetaData), NewProp_bCanPredictTarget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_TargetMarkerActorClass = { "TargetMarkerActorClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, TargetMarkerActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMarkerActorClass_MetaData), NewProp_TargetMarkerActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_UnblockableDamageTags = { "UnblockableDamageTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, UnblockableDamageTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnblockableDamageTags_MetaData), NewProp_UnblockableDamageTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_LastStandEffectClass = { "LastStandEffectClass", nullptr, (EPropertyFlags)0x0024080002010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, LastStandEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStandEffectClass_MetaData), NewProp_LastStandEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_DamageData = { "DamageData", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, DamageData), Z_Construct_UClass_UNinjaCombatDamageDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageData_MetaData), NewProp_DamageData_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bShouldPauseAnimations_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bShouldPauseAnimations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bShouldPauseAnimations = { "bShouldPauseAnimations", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bShouldPauseAnimations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldPauseAnimations_MetaData), NewProp_bShouldPauseAnimations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CombatTarget = { "CombatTarget", "OnRep_CombatTarget", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatTarget_MetaData), NewProp_CombatTarget_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsBlocking = { "bIsBlocking", "OnRep_IsBlocking", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocking_MetaData), NewProp_bIsBlocking_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsInvulnerable_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bIsInvulnerable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsInvulnerable = { "bIsInvulnerable", "OnRep_IsInvulnerable", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsInvulnerable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInvulnerable_MetaData), NewProp_bIsInvulnerable_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsStaggered_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bIsStaggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsStaggered = { "bIsStaggered", "OnRep_IsStaggered", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsStaggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStaggered_MetaData), NewProp_bIsStaggered_MetaData) };
void Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UNinjaCombatManagerComponent*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsDead = { "bIsDead", "OnRep_IsDead", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNinjaCombatManagerComponent), &Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedForwardReference = { "CachedForwardReference", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedForwardReference), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedForwardReference_MetaData), NewProp_CachedForwardReference_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedComboManager = { "CachedComboManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedComboManager_MetaData), NewProp_CachedComboManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedDamageManager = { "CachedDamageManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedDamageManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDamageManager_MetaData), NewProp_CachedDamageManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedDefenseManager = { "CachedDefenseManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedDefenseManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDefenseManager_MetaData), NewProp_CachedDefenseManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedDissolveManager = { "CachedDissolveManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedDissolveManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedDissolveManager_MetaData), NewProp_CachedDissolveManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedMotionWarping = { "CachedMotionWarping", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedMotionWarping), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMotionWarping_MetaData), NewProp_CachedMotionWarping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedPhysicalAnimation = { "CachedPhysicalAnimation", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedPhysicalAnimation), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPhysicalAnimation_MetaData), NewProp_CachedPhysicalAnimation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedTargetManager = { "CachedTargetManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedTargetManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedTargetManager_MetaData), NewProp_CachedTargetManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedWeaponManager = { "CachedWeaponManager", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, CachedWeaponManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWeaponManager_MetaData), NewProp_CachedWeaponManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_TargetLockActor = { "TargetLockActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, TargetLockActor), Z_Construct_UClass_ANinjaCombatMarkerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLockActor_MetaData), NewProp_TargetLockActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_MeleeScanMap_ValueProp = { "MeleeScanMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNinjaCombatMeleeScan_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_MeleeScanMap_Key_KeyProp = { "MeleeScanMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_MeleeScanMap = { "MeleeScanMap", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, MeleeScanMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeScanMap_MetaData), NewProp_MeleeScanMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_DamageTakenList = { "DamageTakenList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatManagerComponent, DamageTakenList), Z_Construct_UScriptStruct_FDamageList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTakenList_MetaData), NewProp_DamageTakenList_MetaData) }; // 4097610254
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnAttackStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnCombatTargetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnStaggerStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnDamageReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnOwnerStartedDying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnOwnerFinishedDying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnBlockingStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_OnInvulnerabilityStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bRotateControllerToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bLockControllerYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_RotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bCanPredictTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_TargetMarkerActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_UnblockableDamageTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_LastStandEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_DamageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bShouldPauseAnimations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CombatTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsInvulnerable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsStaggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedForwardReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedDamageManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedDefenseManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedDissolveManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedMotionWarping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedPhysicalAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedTargetManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_CachedWeaponManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_TargetLockActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_MeleeScanMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_MeleeScanMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_MeleeScanMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::NewProp_DamageTakenList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatBaseComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayCueInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatManagerComponent, IGameplayCueInterface), false },  // 881046121
	{ Z_Construct_UClass_UCombatTargetManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatManagerComponent, ICombatTargetManagerInterface), false },  // 1774675437
	{ Z_Construct_UClass_UCombatDefenseManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatManagerComponent, ICombatDefenseManagerInterface), false },  // 3701697172
	{ Z_Construct_UClass_UCombatDamageManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaCombatManagerComponent, ICombatDamageManagerInterface), false },  // 1404672490
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::ClassParams = {
	&UNinjaCombatManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatManagerComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatManagerComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatManagerComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatManagerComponent>()
{
	return UNinjaCombatManagerComponent::StaticClass();
}
void UNinjaCombatManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CombatTarget(TEXT("CombatTarget"));
	static const FName Name_bIsBlocking(TEXT("bIsBlocking"));
	static const FName Name_bIsInvulnerable(TEXT("bIsInvulnerable"));
	static const FName Name_bIsStaggered(TEXT("bIsStaggered"));
	static const FName Name_bIsDead(TEXT("bIsDead"));
	static const FName Name_DamageTakenList(TEXT("DamageTakenList"));
	const bool bIsValid = true
		&& Name_CombatTarget == ClassReps[(int32)ENetFields_Private::CombatTarget].Property->GetFName()
		&& Name_bIsBlocking == ClassReps[(int32)ENetFields_Private::bIsBlocking].Property->GetFName()
		&& Name_bIsInvulnerable == ClassReps[(int32)ENetFields_Private::bIsInvulnerable].Property->GetFName()
		&& Name_bIsStaggered == ClassReps[(int32)ENetFields_Private::bIsStaggered].Property->GetFName()
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName()
		&& Name_DamageTakenList == ClassReps[(int32)ENetFields_Private::DamageTakenList].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNinjaCombatManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatManagerComponent);
UNinjaCombatManagerComponent::~UNinjaCombatManagerComponent() {}
// End Class UNinjaCombatManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatManagerComponent, UNinjaCombatManagerComponent::StaticClass, TEXT("UNinjaCombatManagerComponent"), &Z_Registration_Info_UClass_UNinjaCombatManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatManagerComponent), 724086228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_2014993552(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
