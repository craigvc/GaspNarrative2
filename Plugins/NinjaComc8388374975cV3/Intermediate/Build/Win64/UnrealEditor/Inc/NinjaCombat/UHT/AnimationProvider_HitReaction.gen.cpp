// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationProvider_HitReaction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_HitReaction();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAnimationProvider_HitReaction_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister();
NINJACOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FHitReactionContext();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin ScriptStruct FHitReactionContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitReactionContext;
class UScriptStruct* FHitReactionContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitReactionContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitReactionContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitReactionContext, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("HitReactionContext"));
	}
	return Z_Registration_Info_UScriptStruct_HitReactionContext.OuterSingleton;
}
template<> NINJACOMBAT_API UScriptStruct* StaticStruct<FHitReactionContext>()
{
	return FHitReactionContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHitReactionContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Configuration Class for the Hit Reaction. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Configuration Class for the Hit Reaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextTags_MetaData[] = {
		{ "Category", "Directional Hit Context" },
		{ "Comment", "/** Context for the hit reaction. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Context for the hit reaction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Directional Hit Context" },
		{ "Comment", "/** Context for this Hit Reaction. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Context for this Hit Reaction." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContextTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitReactionContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitReactionContext_Statics::NewProp_ContextTags = { "ContextTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitReactionContext, ContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextTags_MetaData), NewProp_ContextTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitReactionContext_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHitReactionContext, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitReactionContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitReactionContext_Statics::NewProp_ContextTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitReactionContext_Statics::NewProp_AnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitReactionContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitReactionContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	&NewStructOps,
	"HitReactionContext",
	Z_Construct_UScriptStruct_FHitReactionContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitReactionContext_Statics::PropPointers),
	sizeof(FHitReactionContext),
	alignof(FHitReactionContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitReactionContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHitReactionContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHitReactionContext()
{
	if (!Z_Registration_Info_UScriptStruct_HitReactionContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitReactionContext.InnerSingleton, Z_Construct_UScriptStruct_FHitReactionContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HitReactionContext.InnerSingleton;
}
// End ScriptStruct FHitReactionContext

// Begin Class UAnimationProvider_HitReaction Function Applies
struct AnimationProvider_HitReaction_eventApplies_Parms
{
	FGameplayTagContainer AbilityContext;
	FHitReactionContext HitReactionContext;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AnimationProvider_HitReaction_eventApplies_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UAnimationProvider_HitReaction_Applies = FName(TEXT("Applies"));
bool UAnimationProvider_HitReaction::Applies(FGameplayTagContainer const& AbilityContext, FHitReactionContext const& HitReactionContext) const
{
	UFunction* Func = FindFunctionChecked(NAME_UAnimationProvider_HitReaction_Applies);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AnimationProvider_HitReaction_eventApplies_Parms Parms;
		Parms.AbilityContext=AbilityContext;
		Parms.HitReactionContext=HitReactionContext;
		const_cast<UAnimationProvider_HitReaction*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UAnimationProvider_HitReaction*>(this)->Applies_Implementation(AbilityContext, HitReactionContext);
	}
}
struct Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Directional Hit Animation Provider" },
		{ "Comment", "/**\n\x09 * Evaluates if a given context applies to a hit reaction.\n\x09 *\n\x09 * By default, this is a \"HasAnyExact\" check. However, you can extend this function to create\n\x09 * other types of filtering, such as using Gameplay Tag Queries and so on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Evaluates if a given context applies to a hit reaction.\n\nBy default, this is a \"HasAnyExact\" check. However, you can extend this function to create\nother types of filtering, such as using Gameplay Tag Queries and so on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactionContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitReactionContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_AbilityContext = { "AbilityContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationProvider_HitReaction_eventApplies_Parms, AbilityContext), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityContext_MetaData), NewProp_AbilityContext_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_HitReactionContext = { "HitReactionContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationProvider_HitReaction_eventApplies_Parms, HitReactionContext), Z_Construct_UScriptStruct_FHitReactionContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactionContext_MetaData), NewProp_HitReactionContext_MetaData) }; // 263413287
void Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationProvider_HitReaction_eventApplies_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationProvider_HitReaction_eventApplies_Parms), &Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_AbilityContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_HitReactionContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationProvider_HitReaction, nullptr, "Applies", nullptr, nullptr, Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::PropPointers), sizeof(AnimationProvider_HitReaction_eventApplies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimationProvider_HitReaction_eventApplies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationProvider_HitReaction::execApplies)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_AbilityContext);
	P_GET_STRUCT_REF(FHitReactionContext,Z_Param_Out_HitReactionContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Applies_Implementation(Z_Param_Out_AbilityContext,Z_Param_Out_HitReactionContext);
	P_NATIVE_END;
}
// End Class UAnimationProvider_HitReaction Function Applies

// Begin Class UAnimationProvider_HitReaction Function GetAnimationContext
struct Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics
{
	struct AnimationProvider_HitReaction_eventGetAnimationContext_Parms
	{
		const UNinjaCombatGameplayAbility* CombatAbility;
		FGameplayTagContainer OutContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation Provider" },
		{ "Comment", "/**\n\x09 * Provides the Animation Context from the ability, via the Animation Context Provider Interface.\n\x09 *\n\x09 * @param CombatAbility\x09\x09\x09""Ability implementing the Animation Context Provider interface.\n\x09 * @param OutContext\x09\x09\x09Gameplay Tags providing details about the ability's animation.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the context is valid (has any valid tags).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Provides the Animation Context from the ability, via the Animation Context Provider Interface.\n\n@param CombatAbility                 Ability implementing the Animation Context Provider interface.\n@param OutContext                    Gameplay Tags providing details about the ability's animation.\n@return                                              True if the context is valid (has any valid tags)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationProvider_HitReaction_eventGetAnimationContext_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAbility_MetaData), NewProp_CombatAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_OutContext = { "OutContext", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationProvider_HitReaction_eventGetAnimationContext_Parms, OutContext), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
void Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationProvider_HitReaction_eventGetAnimationContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationProvider_HitReaction_eventGetAnimationContext_Parms), &Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_OutContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationProvider_HitReaction, nullptr, "GetAnimationContext", nullptr, nullptr, Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::AnimationProvider_HitReaction_eventGetAnimationContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::AnimationProvider_HitReaction_eventGetAnimationContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationProvider_HitReaction::execGetAnimationContext)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OutContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAnimationProvider_HitReaction::GetAnimationContext(Z_Param_CombatAbility,Z_Param_Out_OutContext);
	P_NATIVE_END;
}
// End Class UAnimationProvider_HitReaction Function GetAnimationContext

// Begin Class UAnimationProvider_HitReaction Function GetEffectContext
struct Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics
{
	struct AnimationProvider_HitReaction_eventGetEffectContext_Parms
	{
		const UNinjaCombatGameplayAbility* CombatAbility;
		FGameplayEffectContextHandle OutHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation Provider" },
		{ "Comment", "/**\n\x09 * Provides the Effect Context from the ability, via the Animation Context Provider Interface.\n\x09 *\n\x09 * @param CombatAbility\x09\x09\x09""Ability implementing the Animation Context Provider interface.\n\x09 * @param OutHandle\x09\x09\x09\x09Gameplay Effect Handle containing trigger data, if any.\n\x09 * @return\x09\x09\x09\x09\x09\x09True if the effect handle is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Provides the Effect Context from the ability, via the Animation Context Provider Interface.\n\n@param CombatAbility                 Ability implementing the Animation Context Provider interface.\n@param OutHandle                             Gameplay Effect Handle containing trigger data, if any.\n@return                                              True if the effect handle is valid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationProvider_HitReaction_eventGetEffectContext_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAbility_MetaData), NewProp_CombatAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationProvider_HitReaction_eventGetEffectContext_Parms, OutHandle), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(0, nullptr) }; // 1628379207
void Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationProvider_HitReaction_eventGetEffectContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationProvider_HitReaction_eventGetEffectContext_Parms), &Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_OutHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationProvider_HitReaction, nullptr, "GetEffectContext", nullptr, nullptr, Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::AnimationProvider_HitReaction_eventGetEffectContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::AnimationProvider_HitReaction_eventGetEffectContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationProvider_HitReaction::execGetEffectContext)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_GET_STRUCT_REF(FGameplayEffectContextHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAnimationProvider_HitReaction::GetEffectContext(Z_Param_CombatAbility,Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// End Class UAnimationProvider_HitReaction Function GetEffectContext

// Begin Class UAnimationProvider_HitReaction
void UAnimationProvider_HitReaction::StaticRegisterNativesUAnimationProvider_HitReaction()
{
	UClass* Class = UAnimationProvider_HitReaction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Applies", &UAnimationProvider_HitReaction::execApplies },
		{ "GetAnimationContext", &UAnimationProvider_HitReaction::execGetAnimationContext },
		{ "GetEffectContext", &UAnimationProvider_HitReaction::execGetEffectContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationProvider_HitReaction);
UClass* Z_Construct_UClass_UAnimationProvider_HitReaction_NoRegister()
{
	return UAnimationProvider_HitReaction::StaticClass();
}
struct Z_Construct_UClass_UAnimationProvider_HitReaction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Provides appropriate animations for different types of damage impacts. \n */" },
		{ "DisplayName", "Directional Hits" },
		{ "IncludePath", "AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Provides appropriate animations for different types of damage impacts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactionContexts_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Maps specific types of damage to certain hit reactions.\n\x09 * If no mapping is found, then the default animation montage is used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "TitleProperty", "AnimMontage" },
		{ "ToolTip", "Maps specific types of damage to certain hit reactions.\nIf no mapping is found, then the default animation montage is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocationWeight_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Weight applied to the Hit Location, when determining the angle for the hit reaction.\n\x09 *\n\x09 * A value of 0 would completely ignore the Hit Location Weight, potentially favouring the Attacker Location instead.\n\x09 * A value of 1 would blend use the Hit Location Weight with the Attacker Location.\n\x09 *\n\x09 * If both weights are set to 0, then the default location is always used. If both weights are set to 1, then\n\x09 * an intermediate angle will be used. For example: Actor Angle = 0; Hit Angle = 90; Out Angle = 45.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Weight applied to the Hit Location, when determining the angle for the hit reaction.\n\nA value of 0 would completely ignore the Hit Location Weight, potentially favouring the Attacker Location instead.\nA value of 1 would blend use the Hit Location Weight with the Attacker Location.\n\nIf both weights are set to 0, then the default location is always used. If both weights are set to 1, then\nan intermediate angle will be used. For example: Actor Angle = 0; Hit Angle = 90; Out Angle = 45." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackerLocationWeight_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Weight applied to the Attacker Location, when determining the angle for the hit reaction.\n\x09 *\n\x09 * A value of 0 would completely ignore the Attacker Location Weight, potentially favouring the Hit Location instead.\n\x09 * A value of 1 would blend use the Attacker Location Weight with the Hit Location.\n\x09 *\n\x09 * If both weights are set to 0, then the default location is always used. If both weights are set to 1, then\n\x09 * an intermediate angle will be used. For example: Actor Angle = 0; Hit Angle = 90; Out Angle = 45.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h" },
		{ "ToolTip", "Weight applied to the Attacker Location, when determining the angle for the hit reaction.\n\nA value of 0 would completely ignore the Attacker Location Weight, potentially favouring the Hit Location instead.\nA value of 1 would blend use the Attacker Location Weight with the Hit Location.\n\nIf both weights are set to 0, then the default location is always used. If both weights are set to 1, then\nan intermediate angle will be used. For example: Actor Angle = 0; Hit Angle = 90; Out Angle = 45." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitReactionContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitReactionContexts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitLocationWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackerLocationWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationProvider_HitReaction_Applies, "Applies" }, // 2032166754
		{ &Z_Construct_UFunction_UAnimationProvider_HitReaction_GetAnimationContext, "GetAnimationContext" }, // 3431732901
		{ &Z_Construct_UFunction_UAnimationProvider_HitReaction_GetEffectContext, "GetEffectContext" }, // 3058713315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationProvider_HitReaction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_HitReactionContexts_Inner = { "HitReactionContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitReactionContext, METADATA_PARAMS(0, nullptr) }; // 263413287
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_HitReactionContexts = { "HitReactionContexts", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationProvider_HitReaction, HitReactionContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactionContexts_MetaData), NewProp_HitReactionContexts_MetaData) }; // 263413287
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_HitLocationWeight = { "HitLocationWeight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationProvider_HitReaction, HitLocationWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocationWeight_MetaData), NewProp_HitLocationWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_AttackerLocationWeight = { "AttackerLocationWeight", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationProvider_HitReaction, AttackerLocationWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackerLocationWeight_MetaData), NewProp_AttackerLocationWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_HitReactionContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_HitReactionContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_HitLocationWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::NewProp_AttackerLocationWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatDirectionalAnimationProvider,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::ClassParams = {
	&UAnimationProvider_HitReaction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationProvider_HitReaction()
{
	if (!Z_Registration_Info_UClass_UAnimationProvider_HitReaction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationProvider_HitReaction.OuterSingleton, Z_Construct_UClass_UAnimationProvider_HitReaction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationProvider_HitReaction.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UAnimationProvider_HitReaction>()
{
	return UAnimationProvider_HitReaction::StaticClass();
}
UAnimationProvider_HitReaction::UAnimationProvider_HitReaction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationProvider_HitReaction);
UAnimationProvider_HitReaction::~UAnimationProvider_HitReaction() {}
// End Class UAnimationProvider_HitReaction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHitReactionContext::StaticStruct, Z_Construct_UScriptStruct_FHitReactionContext_Statics::NewStructOps, TEXT("HitReactionContext"), &Z_Registration_Info_UScriptStruct_HitReactionContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitReactionContext), 263413287U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationProvider_HitReaction, UAnimationProvider_HitReaction::StaticClass, TEXT("UAnimationProvider_HitReaction"), &Z_Registration_Info_UClass_UAnimationProvider_HitReaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationProvider_HitReaction), 902157588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_2646447629(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
