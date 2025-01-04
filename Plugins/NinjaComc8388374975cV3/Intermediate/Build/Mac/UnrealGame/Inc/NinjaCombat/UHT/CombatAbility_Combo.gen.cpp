// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_Combo.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_Combo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Combo();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Combo_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FComboEventMapping();
STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FComboEventMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComboEventMapping;
class UScriptStruct* FComboEventMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComboEventMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComboEventMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComboEventMapping, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("ComboEventMapping"));
	}
	return Z_Registration_Info_UScriptStruct_ComboEventMapping.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FComboEventMapping>()
{
	return FComboEventMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComboEventMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Maps Input Actions to Event Tags.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Maps Input Actions to Event Tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "Combo Event Mapping" },
		{ "Comment", "/** Input Action that will trigger the combo event. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Input Action that will trigger the combo event." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboEventTag_MetaData[] = {
		{ "Category", "Combo Event Mapping" },
		{ "Comment", "/** Gameplay Tag representing the combo event. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Gameplay Tag representing the combo event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboEventTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComboEventMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComboEventMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboEventMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComboEventMapping_Statics::NewProp_ComboEventTag = { "ComboEventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComboEventMapping, ComboEventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboEventTag_MetaData), NewProp_ComboEventTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComboEventMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboEventMapping_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComboEventMapping_Statics::NewProp_ComboEventTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboEventMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComboEventMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"ComboEventMapping",
	Z_Construct_UScriptStruct_FComboEventMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboEventMapping_Statics::PropPointers),
	sizeof(FComboEventMapping),
	alignof(FComboEventMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComboEventMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComboEventMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComboEventMapping()
{
	if (!Z_Registration_Info_UScriptStruct_ComboEventMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComboEventMapping.InnerSingleton, Z_Construct_UScriptStruct_FComboEventMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComboEventMapping.InnerSingleton;
}
// End ScriptStruct FComboEventMapping

// Begin Class UCombatAbility_Combo Function AdvanceCombo
struct Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics
{
	struct CombatAbility_Combo_eventAdvanceCombo_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Advances the combo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Advances the combo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventAdvanceCombo_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "AdvanceCombo", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::CombatAbility_Combo_eventAdvanceCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::CombatAbility_Combo_eventAdvanceCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execAdvanceCombo)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AdvanceCombo(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function AdvanceCombo

// Begin Class UCombatAbility_Combo Function ApplyComboWindowEffect
struct Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Applies the Combo Window Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Applies the Combo Window Effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "ApplyComboWindowEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execApplyComboWindowEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyComboWindowEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function ApplyComboWindowEffect

// Begin Class UCombatAbility_Combo Function GetComboCount
struct Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics
{
	struct CombatAbility_Combo_eventGetComboCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Provides the current counter for the combo. \n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Provides the current counter for the combo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetComboCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "GetComboCount", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::CombatAbility_Combo_eventGetComboCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::CombatAbility_Combo_eventGetComboCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execGetComboCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetComboCount();
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function GetComboCount

// Begin Class UCombatAbility_Combo Function GetComboEventFromInputAction
struct Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics
{
	struct CombatAbility_Combo_eventGetComboEventFromInputAction_Parms
	{
		const UInputAction* InputAction;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Retrieves a Gameplay Tag for the Combo Event related to an input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Retrieves a Gameplay Tag for the Combo Event related to an input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetComboEventFromInputAction_Parms, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetComboEventFromInputAction_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "GetComboEventFromInputAction", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::CombatAbility_Combo_eventGetComboEventFromInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::CombatAbility_Combo_eventGetComboEventFromInputAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execGetComboEventFromInputAction)
{
	P_GET_OBJECT(UInputAction,Z_Param_InputAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetComboEventFromInputAction(Z_Param_InputAction);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function GetComboEventFromInputAction

// Begin Class UCombatAbility_Combo Function GetInputActionFromEvent
struct CombatAbility_Combo_eventGetInputActionFromEvent_Parms
{
	FGameplayEventData Payload;
	const UInputAction* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatAbility_Combo_eventGetInputActionFromEvent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UCombatAbility_Combo_GetInputActionFromEvent = FName(TEXT("GetInputActionFromEvent"));
const UInputAction* UCombatAbility_Combo::GetInputActionFromEvent(FGameplayEventData const& Payload) const
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Combo_GetInputActionFromEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Combo_eventGetInputActionFromEvent_Parms Parms;
		Parms.Payload=Payload;
		const_cast<UCombatAbility_Combo*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCombatAbility_Combo*>(this)->GetInputActionFromEvent_Implementation(Payload);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Ability" },
		{ "Comment", "/**\n\x09 * Retrieves the Input Action from an Event Payload.\n\x09 * Checks both the Primary and Secondary Optional Objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Retrieves the Input Action from an Event Payload.\nChecks both the Primary and Secondary Optional Objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetInputActionFromEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1231635826
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetInputActionFromEvent_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "GetInputActionFromEvent", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::PropPointers), sizeof(CombatAbility_Combo_eventGetInputActionFromEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Combo_eventGetInputActionFromEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execGetInputActionFromEvent)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->GetInputActionFromEvent_Implementation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function GetInputActionFromEvent

// Begin Class UCombatAbility_Combo Function GetTargetHitFromEvent
struct CombatAbility_Combo_eventGetTargetHitFromEvent_Parms
{
	FGameplayEventData Payload;
	const AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	CombatAbility_Combo_eventGetTargetHitFromEvent_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UCombatAbility_Combo_GetTargetHitFromEvent = FName(TEXT("GetTargetHitFromEvent"));
const AActor* UCombatAbility_Combo::GetTargetHitFromEvent(FGameplayEventData const& Payload) const
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Combo_GetTargetHitFromEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Combo_eventGetTargetHitFromEvent_Parms Parms;
		Parms.Payload=Payload;
		const_cast<UCombatAbility_Combo*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCombatAbility_Combo*>(this)->GetTargetHitFromEvent_Implementation(Payload);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combo Ability" },
		{ "Comment", "/**\n\x09 * Retrieves the Actor (Target Hit) from an Event Payload.\n\x09 * Checks both the Primary and Secondary Optional Objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Retrieves the Actor (Target Hit) from an Event Payload.\nChecks both the Primary and Secondary Optional Objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetTargetHitFromEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1231635826
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventGetTargetHitFromEvent_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "GetTargetHitFromEvent", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::PropPointers), sizeof(CombatAbility_Combo_eventGetTargetHitFromEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Combo_eventGetTargetHitFromEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execGetTargetHitFromEvent)
{
	P_GET_STRUCT_REF(FGameplayEventData,Z_Param_Out_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AActor**)Z_Param__Result=P_THIS->GetTargetHitFromEvent_Implementation(Z_Param_Out_Payload);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function GetTargetHitFromEvent

// Begin Class UCombatAbility_Combo Function HandleComboFinished
struct Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics
{
	struct CombatAbility_Combo_eventHandleComboFinished_Parms
	{
		UActorComponent* ComboManager;
		bool bSucceeded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Handles the Combo Finished event, broadcast by the Combo Manager.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Handles the Combo Finished event, broadcast by the Combo Manager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboManager;
	static void NewProp_bSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSucceeded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::NewProp_ComboManager = { "ComboManager", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventHandleComboFinished_Parms, ComboManager), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboManager_MetaData), NewProp_ComboManager_MetaData) };
void Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::NewProp_bSucceeded_SetBit(void* Obj)
{
	((CombatAbility_Combo_eventHandleComboFinished_Parms*)Obj)->bSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::NewProp_bSucceeded = { "bSucceeded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_Combo_eventHandleComboFinished_Parms), &Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::NewProp_bSucceeded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::NewProp_ComboManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::NewProp_bSucceeded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "HandleComboFinished", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::CombatAbility_Combo_eventHandleComboFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::CombatAbility_Combo_eventHandleComboFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execHandleComboFinished)
{
	P_GET_OBJECT(UActorComponent,Z_Param_ComboManager);
	P_GET_UBOOL(Z_Param_bSucceeded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComboFinished(Z_Param_ComboManager,Z_Param_bSucceeded);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function HandleComboFinished

// Begin Class UCombatAbility_Combo Function InComboWindow
struct Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics
{
	struct CombatAbility_Combo_eventInComboWindow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Checks if this ability is in the combo window.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Checks if this ability is in the combo window." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CombatAbility_Combo_eventInComboWindow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CombatAbility_Combo_eventInComboWindow_Parms), &Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "InComboWindow", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::CombatAbility_Combo_eventInComboWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::CombatAbility_Combo_eventInComboWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execInComboWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InComboWindow();
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function InComboWindow

// Begin Class UCombatAbility_Combo Function RegisterTargetFromPayload
struct Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics
{
	struct CombatAbility_Combo_eventRegisterTargetFromPayload_Parms
	{
		FGameplayEventData Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Registers an incoming target from a combo attack.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Registers an incoming target from a combo attack." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventRegisterTargetFromPayload_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(0, nullptr) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "RegisterTargetFromPayload", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::CombatAbility_Combo_eventRegisterTargetFromPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::CombatAbility_Combo_eventRegisterTargetFromPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execRegisterTargetFromPayload)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterTargetFromPayload(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function RegisterTargetFromPayload

// Begin Class UCombatAbility_Combo Function RemoveComboWindowEffect
struct Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Revokes the active Combo Window Effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Revokes the active Combo Window Effect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "RemoveComboWindowEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execRemoveComboWindowEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveComboWindowEffect();
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function RemoveComboWindowEffect

// Begin Class UCombatAbility_Combo Function ResetCurrentTargets
struct Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Resets the target count for the current combo.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Resets the target count for the current combo." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "ResetCurrentTargets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execResetCurrentTargets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCurrentTargets();
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function ResetCurrentTargets

// Begin Class UCombatAbility_Combo Function Server_AdvanceCombo
struct CombatAbility_Combo_eventServer_AdvanceCombo_Parms
{
	FGameplayEventData Payload;
};
static const FName NAME_UCombatAbility_Combo_Server_AdvanceCombo = FName(TEXT("Server_AdvanceCombo"));
void UCombatAbility_Combo::Server_AdvanceCombo(FGameplayEventData const& Payload)
{
	CombatAbility_Combo_eventServer_AdvanceCombo_Parms Parms;
	Parms.Payload=Payload;
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Combo_Server_AdvanceCombo);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Advances the combo in the server.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Advances the combo in the server." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Combo_eventServer_AdvanceCombo_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) }; // 1231635826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Combo, nullptr, "Server_AdvanceCombo", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::PropPointers), sizeof(CombatAbility_Combo_eventServer_AdvanceCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Combo_eventServer_AdvanceCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Combo::execServer_AdvanceCombo)
{
	P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_AdvanceCombo_Validate(Z_Param_Payload))
	{
		RPC_ValidateFailed(TEXT("Server_AdvanceCombo_Validate"));
		return;
	}
	P_THIS->Server_AdvanceCombo_Implementation(Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UCombatAbility_Combo Function Server_AdvanceCombo

// Begin Class UCombatAbility_Combo
void UCombatAbility_Combo::StaticRegisterNativesUCombatAbility_Combo()
{
	UClass* Class = UCombatAbility_Combo::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvanceCombo", &UCombatAbility_Combo::execAdvanceCombo },
		{ "ApplyComboWindowEffect", &UCombatAbility_Combo::execApplyComboWindowEffect },
		{ "GetComboCount", &UCombatAbility_Combo::execGetComboCount },
		{ "GetComboEventFromInputAction", &UCombatAbility_Combo::execGetComboEventFromInputAction },
		{ "GetInputActionFromEvent", &UCombatAbility_Combo::execGetInputActionFromEvent },
		{ "GetTargetHitFromEvent", &UCombatAbility_Combo::execGetTargetHitFromEvent },
		{ "HandleComboFinished", &UCombatAbility_Combo::execHandleComboFinished },
		{ "InComboWindow", &UCombatAbility_Combo::execInComboWindow },
		{ "RegisterTargetFromPayload", &UCombatAbility_Combo::execRegisterTargetFromPayload },
		{ "RemoveComboWindowEffect", &UCombatAbility_Combo::execRemoveComboWindowEffect },
		{ "ResetCurrentTargets", &UCombatAbility_Combo::execResetCurrentTargets },
		{ "Server_AdvanceCombo", &UCombatAbility_Combo::execServer_AdvanceCombo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_Combo);
UClass* Z_Construct_UClass_UCombatAbility_Combo_NoRegister()
{
	return UCombatAbility_Combo::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_Combo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An ability that works in conjunction with the Combo Component to orchestrate multiple abilities.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An ability that works in conjunction with the Combo Component to orchestrate multiple abilities." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboTree_MetaData[] = {
		{ "Category", "Combat Ability|Combo" },
		{ "Comment", "/** State Tree representing the Combo. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "RequiredAssetDataTags", "Schema=/Script/NinjaCombat.NinjaCombatComboComponentSchema" },
		{ "ToolTip", "State Tree representing the Combo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClasses_MetaData[] = {
		{ "Category", "Combat Ability|Combo" },
		{ "Comment", "/**\n\x09 * Gameplay Abilities used by the combo, granted when the main ability's avatar is set.\n\x09 * These abilities are granted using the same level as the Combo Ability.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Gameplay Abilities used by the combo, granted when the main ability's avatar is set.\nThese abilities are granted using the same level as the Combo Ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventMode_MetaData[] = {
		{ "Category", "Combat Ability|Combo" },
		{ "Comment", "/** Determines how events are determined for the Combo: Input Actions or Direct Tags. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Determines how events are determined for the Combo: Input Actions or Direct Tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventMappings_MetaData[] = {
		{ "Category", "Combat Ability|Combo" },
		{ "Comment", "/** Input Actions mapped to events in the combo. */" },
		{ "EditCondition", "EventMode == ECombatComboEventMode::InputAction" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "TitleProperty", "InputAction" },
		{ "ToolTip", "Input Actions mapped to events in the combo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboWindowEffectClass_MetaData[] = {
		{ "Category", "Combat Ability|Combo" },
		{ "Comment", "/** Gameplay Effect applied when the character is in a Combo Window. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Gameplay Effect applied when the character is in a Combo Window." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboEventTask_MetaData[] = {
		{ "Comment", "/** Keeps track of combo events. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Combo.h" },
		{ "ToolTip", "Keeps track of combo events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboTree;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityClasses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EventMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EventMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventMappings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComboWindowEffectClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboEventTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_Combo_AdvanceCombo, "AdvanceCombo" }, // 4274461300
		{ &Z_Construct_UFunction_UCombatAbility_Combo_ApplyComboWindowEffect, "ApplyComboWindowEffect" }, // 3998620278
		{ &Z_Construct_UFunction_UCombatAbility_Combo_GetComboCount, "GetComboCount" }, // 1569955765
		{ &Z_Construct_UFunction_UCombatAbility_Combo_GetComboEventFromInputAction, "GetComboEventFromInputAction" }, // 2613593073
		{ &Z_Construct_UFunction_UCombatAbility_Combo_GetInputActionFromEvent, "GetInputActionFromEvent" }, // 802295823
		{ &Z_Construct_UFunction_UCombatAbility_Combo_GetTargetHitFromEvent, "GetTargetHitFromEvent" }, // 2710638593
		{ &Z_Construct_UFunction_UCombatAbility_Combo_HandleComboFinished, "HandleComboFinished" }, // 1292085975
		{ &Z_Construct_UFunction_UCombatAbility_Combo_InComboWindow, "InComboWindow" }, // 3041824650
		{ &Z_Construct_UFunction_UCombatAbility_Combo_RegisterTargetFromPayload, "RegisterTargetFromPayload" }, // 680175998
		{ &Z_Construct_UFunction_UCombatAbility_Combo_RemoveComboWindowEffect, "RemoveComboWindowEffect" }, // 1554850905
		{ &Z_Construct_UFunction_UCombatAbility_Combo_ResetCurrentTargets, "ResetCurrentTargets" }, // 3426568532
		{ &Z_Construct_UFunction_UCombatAbility_Combo_Server_AdvanceCombo, "Server_AdvanceCombo" }, // 4024596054
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_Combo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_ComboTree = { "ComboTree", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Combo, ComboTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboTree_MetaData), NewProp_ComboTree_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_AbilityClasses_Inner = { "AbilityClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_AbilityClasses = { "AbilityClasses", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Combo, AbilityClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClasses_MetaData), NewProp_AbilityClasses_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMode = { "EventMode", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Combo, EventMode), Z_Construct_UEnum_NinjaCombat_ECombatComboEventMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventMode_MetaData), NewProp_EventMode_MetaData) }; // 1120850582
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMappings_Inner = { "EventMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComboEventMapping, METADATA_PARAMS(0, nullptr) }; // 610236175
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMappings = { "EventMappings", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Combo, EventMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventMappings_MetaData), NewProp_EventMappings_MetaData) }; // 610236175
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_ComboWindowEffectClass = { "ComboWindowEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Combo, ComboWindowEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboWindowEffectClass_MetaData), NewProp_ComboWindowEffectClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_ComboEventTask = { "ComboEventTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Combo, ComboEventTask), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboEventTask_MetaData), NewProp_ComboEventTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_Combo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_ComboTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_AbilityClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_AbilityClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_EventMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_ComboWindowEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Combo_Statics::NewProp_ComboEventTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Combo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_Combo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Combo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_Combo_Statics::ClassParams = {
	&UCombatAbility_Combo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_Combo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Combo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Combo_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_Combo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_Combo()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_Combo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_Combo.OuterSingleton, Z_Construct_UClass_UCombatAbility_Combo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_Combo.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_Combo>()
{
	return UCombatAbility_Combo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_Combo);
UCombatAbility_Combo::~UCombatAbility_Combo() {}
// End Class UCombatAbility_Combo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComboEventMapping::StaticStruct, Z_Construct_UScriptStruct_FComboEventMapping_Statics::NewStructOps, TEXT("ComboEventMapping"), &Z_Registration_Info_UScriptStruct_ComboEventMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComboEventMapping), 610236175U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_Combo, UCombatAbility_Combo::StaticClass, TEXT("UCombatAbility_Combo"), &Z_Registration_Info_UClass_UCombatAbility_Combo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_Combo), 775291019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_375978361(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Combo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
