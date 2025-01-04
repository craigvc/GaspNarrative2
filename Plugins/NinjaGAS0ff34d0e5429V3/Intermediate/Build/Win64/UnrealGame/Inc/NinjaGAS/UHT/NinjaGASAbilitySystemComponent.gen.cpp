// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaGAS/Public/AbilitySystem/NinjaGASAbilitySystemComponent.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaGASAbilitySystemComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJAGAS_API UClass* Z_Construct_UClass_UAbilitySystemDefaultsInterface_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister();
NINJAGAS_API UClass* Z_Construct_UClass_UNinjaGASDataAsset_NoRegister();
NINJAGAS_API UFunction* Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NinjaGAS();
// End Cross Module References

// Begin Delegate FAbilitySystemAvatarChangedSignature
struct Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics
{
	struct NinjaGASAbilitySystemComponent_eventAbilitySystemAvatarChangedSignature_Parms
	{
		AActor* NewAvatar;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAvatar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::NewProp_NewAvatar = { "NewAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventAbilitySystemAvatarChangedSignature_Parms, NewAvatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::NewProp_NewAvatar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "AbilitySystemAvatarChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::NinjaGASAbilitySystemComponent_eventAbilitySystemAvatarChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::NinjaGASAbilitySystemComponent_eventAbilitySystemAvatarChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UNinjaGASAbilitySystemComponent::FAbilitySystemAvatarChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& AbilitySystemAvatarChangedSignature, AActor* NewAvatar)
{
	struct NinjaGASAbilitySystemComponent_eventAbilitySystemAvatarChangedSignature_Parms
	{
		AActor* NewAvatar;
	};
	NinjaGASAbilitySystemComponent_eventAbilitySystemAvatarChangedSignature_Parms Parms;
	Parms.NewAvatar=NewAvatar;
	AbilitySystemAvatarChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAbilitySystemAvatarChangedSignature

// Begin Class UNinjaGASAbilitySystemComponent Function AddGameplayCueLocally
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics
{
	struct NinjaGASAbilitySystemComponent_eventAddGameplayCueLocally_Parms
	{
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Locally adds an <b>Actor<b> Gameplay Cue.\n\x09 *\n\x09 * When adding this Gameplay Cue locally, make sure to also remove it locally.\n\x09 * \n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag for the Gameplay Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters for the Gameplay Cue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Locally adds an <b>Actor<b> Gameplay Cue.\n\nWhen adding this Gameplay Cue locally, make sure to also remove it locally.\n\n@param GameplayCueTag                        Gameplay Tag for the Gameplay Cue.\n@param GameplayCueParameters         Parameters for the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventAddGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventAddGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "AddGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::NinjaGASAbilitySystemComponent_eventAddGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::NinjaGASAbilitySystemComponent_eventAddGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execAddGameplayCueLocally)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGameplayCueLocally(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function AddGameplayCueLocally

// Begin Class UNinjaGASAbilitySystemComponent Function ApplyGameplayEffectClassToSelf
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics
{
	struct NinjaGASAbilitySystemComponent_eventApplyGameplayEffectClassToSelf_Parms
	{
		TSubclassOf<UGameplayEffect> EffectClass;
		float Level;
		FActiveGameplayEffectHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Grants a new effect to the owner.\n\x09 *\n\x09 * @param EffectClass\x09\x09""Effect class being granted to the owner.\n\x09 * @param Level\x09\x09\x09\x09Initial level for the effect.\n\x09 * @return\x09\x09\x09\x09\x09The handle that can be used for maintenance.\n\x09 */" },
		{ "CPP_Default_Level", "1.000000" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Grants a new effect to the owner.\n\n@param EffectClass           Effect class being granted to the owner.\n@param Level                         Initial level for the effect.\n@return                                      The handle that can be used for maintenance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventApplyGameplayEffectClassToSelf_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventApplyGameplayEffectClassToSelf_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventApplyGameplayEffectClassToSelf_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "ApplyGameplayEffectClassToSelf", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NinjaGASAbilitySystemComponent_eventApplyGameplayEffectClassToSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::NinjaGASAbilitySystemComponent_eventApplyGameplayEffectClassToSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execApplyGameplayEffectClassToSelf)
{
	P_GET_OBJECT(UClass,Z_Param_EffectClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->ApplyGameplayEffectClassToSelf(Z_Param_EffectClass,Z_Param_Level);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function ApplyGameplayEffectClassToSelf

// Begin Class UNinjaGASAbilitySystemComponent Function CancelAbilitiesByTags
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics
{
	struct NinjaGASAbilitySystemComponent_eventCancelAbilitiesByTags_Parms
	{
		FGameplayTagContainer AbilityTags;
		FGameplayTagContainer CancelFilterTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Cancels Gameplay Abilities by their matching tags.\n\x09 *\n\x09 * @param AbilityTags\x09\x09Gameplay Tags used to target abilities to cancel.\n\x09 * @param CancelFilterTags\x09""A filter that excludes an ability from being cancelled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Cancels Gameplay Abilities by their matching tags.\n\n@param AbilityTags           Gameplay Tags used to target abilities to cancel.\n@param CancelFilterTags      A filter that excludes an ability from being cancelled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CancelFilterTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventCancelAbilitiesByTags_Parms, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::NewProp_CancelFilterTags = { "CancelFilterTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventCancelAbilitiesByTags_Parms, CancelFilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::NewProp_AbilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::NewProp_CancelFilterTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "CancelAbilitiesByTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::NinjaGASAbilitySystemComponent_eventCancelAbilitiesByTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::NinjaGASAbilitySystemComponent_eventCancelAbilitiesByTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execCancelAbilitiesByTags)
{
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_AbilityTags);
	P_GET_STRUCT(FGameplayTagContainer,Z_Param_CancelFilterTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAbilitiesByTags(Z_Param_AbilityTags,Z_Param_CancelFilterTags);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function CancelAbilitiesByTags

// Begin Class UNinjaGASAbilitySystemComponent Function ExecuteGameplayCueLocal
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics
{
	struct NinjaGASAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms
	{
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Locally executes a <b>Static<b> Gameplay Cue.\n\x09 * \n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag for the Gameplay Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters for the Gameplay Cue.\n\x09 */" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Locally executes a <b>Static<b> Gameplay Cue.\n\n@param GameplayCueTag                        Gameplay Tag for the Gameplay Cue.\n@param GameplayCueParameters         Parameters for the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "ExecuteGameplayCueLocal", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NinjaGASAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::NinjaGASAbilitySystemComponent_eventExecuteGameplayCueLocal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execExecuteGameplayCueLocal)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteGameplayCueLocal(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function ExecuteGameplayCueLocal

// Begin Class UNinjaGASAbilitySystemComponent Function GetAnimInstanceFromActorInfo
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics
{
	struct NinjaGASAbilitySystemComponent_eventGetAnimInstanceFromActorInfo_Parms
	{
		UAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Obtains the Anim Instance from the Actor Info.\n\x09 *\n\x09 * Takes into consideration the pointer in the Actor Info, before calling the\n\x09 * Getter function that will always attempt to retrieve it from the mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Obtains the Anim Instance from the Actor Info.\n\nTakes into consideration the pointer in the Actor Info, before calling the\nGetter function that will always attempt to retrieve it from the mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventGetAnimInstanceFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "GetAnimInstanceFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::NinjaGASAbilitySystemComponent_eventGetAnimInstanceFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::NinjaGASAbilitySystemComponent_eventGetAnimInstanceFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execGetAnimInstanceFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimInstance**)Z_Param__Result=P_THIS->GetAnimInstanceFromActorInfo();
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function GetAnimInstanceFromActorInfo

// Begin Class UNinjaGASAbilitySystemComponent Function GiveAbilityFromClass
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics
{
	struct NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms
	{
		const TSubclassOf<UGameplayAbility> AbilityClass;
		int32 Level;
		int32 Input;
		FGameplayAbilitySpecHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Grants a new ability to the owner.\n\x09 * \n\x09 * @param AbilityClass\x09\x09""Ability class being granted to the owner.\n\x09 * @param Level\x09\x09\x09\x09Initial level for the ability.\n\x09 * @param Input\x09\x09\x09\x09""An Input ID for the old input system.\n\x09 * @return\x09\x09\x09\x09\x09The handle that can be used for activation.\n\x09 */" },
		{ "CPP_Default_Input", "-1" },
		{ "CPP_Default_Level", "1" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Grants a new ability to the owner.\n\n@param AbilityClass          Ability class being granted to the owner.\n@param Level                         Initial level for the ability.\n@param Input                         An Input ID for the old input system.\n@return                                      The handle that can be used for activation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_AbilityClass = { "AbilityClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms, AbilityClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityClass_MetaData), NewProp_AbilityClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms, Input), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_AbilityClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "GiveAbilityFromClass", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::NinjaGASAbilitySystemComponent_eventGiveAbilityFromClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execGiveAbilityFromClass)
{
	P_GET_OBJECT(UClass,Z_Param_AbilityClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_GET_PROPERTY(FIntProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilitySpecHandle*)Z_Param__Result=P_THIS->GiveAbilityFromClass(Z_Param_AbilityClass,Z_Param_Level,Z_Param_Input);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function GiveAbilityFromClass

// Begin Class UNinjaGASAbilitySystemComponent Function RemoveGameplayCueLocally
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics
{
	struct NinjaGASAbilitySystemComponent_eventRemoveGameplayCueLocally_Parms
	{
		FGameplayTag GameplayCueTag;
		FGameplayCueParameters GameplayCueParameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "GameplayCueParameters" },
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Locally removes an <b>Actor<b> Gameplay Cue.\n\x09 * \n\x09 * @param GameplayCueTag\x09\x09\x09Gameplay Tag for the Gameplay Cue.\n\x09 * @param GameplayCueParameters\x09\x09Parameters for the Gameplay Cue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Locally removes an <b>Actor<b> Gameplay Cue.\n\n@param GameplayCueTag                        Gameplay Tag for the Gameplay Cue.\n@param GameplayCueParameters         Parameters for the Gameplay Cue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueTag_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventRemoveGameplayCueLocally_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueTag_MetaData), NewProp_GameplayCueTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventRemoveGameplayCueLocally_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueParameters_MetaData), NewProp_GameplayCueParameters_MetaData) }; // 98506619
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::NewProp_GameplayCueParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "RemoveGameplayCueLocally", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::NinjaGASAbilitySystemComponent_eventRemoveGameplayCueLocally_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::NinjaGASAbilitySystemComponent_eventRemoveGameplayCueLocally_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execRemoveGameplayCueLocally)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
	P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGameplayCueLocally(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function RemoveGameplayCueLocally

// Begin Class UNinjaGASAbilitySystemComponent Function TryBatchActivateAbility
struct Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics
{
	struct NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms
	{
		FGameplayAbilitySpecHandle AbilityHandle;
		bool bEndAbilityImmediately;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja GAS|Ability System" },
		{ "Comment", "/**\n\x09 * Tries to activate the ability by the handle, aggregating all RPCs that happened in the same frame.\n\x09 *\n\x09 * @param AbilityHandle\n\x09 *\x09\x09Handle used to identify the ability.\n\x09 *\x09\x09\n\x09 * @param bEndAbilityImmediately\n\x09 *\x09\x09""Determines if the EndAbility is triggered right away or later, with its own RPC. This requires the Ability\n\x09 *\x09\x09to either implement IBatchGameplayAbilityInterface or be a subclass of NinjaGASGameplayAbility.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Tries to activate the ability by the handle, aggregating all RPCs that happened in the same frame.\n\n@param AbilityHandle\n             Handle used to identify the ability.\n\n@param bEndAbilityImmediately\n             Determines if the EndAbility is triggered right away or later, with its own RPC. This requires the Ability\n             to either implement IBatchGameplayAbilityInterface or be a subclass of NinjaGASGameplayAbility." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityHandle;
	static void NewProp_bEndAbilityImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndAbilityImmediately;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_AbilityHandle = { "AbilityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms, AbilityHandle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
void Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_bEndAbilityImmediately_SetBit(void* Obj)
{
	((NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms*)Obj)->bEndAbilityImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_bEndAbilityImmediately = { "bEndAbilityImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms), &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_bEndAbilityImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms), &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_AbilityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_bEndAbilityImmediately,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaGASAbilitySystemComponent, nullptr, "TryBatchActivateAbility", nullptr, nullptr, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::NinjaGASAbilitySystemComponent_eventTryBatchActivateAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaGASAbilitySystemComponent::execTryBatchActivateAbility)
{
	P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_AbilityHandle);
	P_GET_UBOOL(Z_Param_bEndAbilityImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryBatchActivateAbility(Z_Param_AbilityHandle,Z_Param_bEndAbilityImmediately);
	P_NATIVE_END;
}
// End Class UNinjaGASAbilitySystemComponent Function TryBatchActivateAbility

// Begin Class UNinjaGASAbilitySystemComponent
void UNinjaGASAbilitySystemComponent::StaticRegisterNativesUNinjaGASAbilitySystemComponent()
{
	UClass* Class = UNinjaGASAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayCueLocally", &UNinjaGASAbilitySystemComponent::execAddGameplayCueLocally },
		{ "ApplyGameplayEffectClassToSelf", &UNinjaGASAbilitySystemComponent::execApplyGameplayEffectClassToSelf },
		{ "CancelAbilitiesByTags", &UNinjaGASAbilitySystemComponent::execCancelAbilitiesByTags },
		{ "ExecuteGameplayCueLocal", &UNinjaGASAbilitySystemComponent::execExecuteGameplayCueLocal },
		{ "GetAnimInstanceFromActorInfo", &UNinjaGASAbilitySystemComponent::execGetAnimInstanceFromActorInfo },
		{ "GiveAbilityFromClass", &UNinjaGASAbilitySystemComponent::execGiveAbilityFromClass },
		{ "RemoveGameplayCueLocally", &UNinjaGASAbilitySystemComponent::execRemoveGameplayCueLocally },
		{ "TryBatchActivateAbility", &UNinjaGASAbilitySystemComponent::execTryBatchActivateAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaGASAbilitySystemComponent);
UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent_NoRegister()
{
	return UNinjaGASAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "NinjaGAS" },
		{ "Comment", "/**\n * Specialized version of the Ability System Component.\n *\n * Includes many quality of life elements that are an aggregation of multiple common practices.\n *\n * - Data-driven configuration of default Gameplay Abilities.\n * - Support for runtime IK Retarget setup, where the animation is driven by a hidden mesh.\n * - Batch activation and local cues, as per Dan Tranek's GAS Compendium.\n * - Lazy loading the ASC, as per Alvaro Jover-Alvarez (Vorixo)'s blog.\n *\n * Additional references:\n * \n * - https://github.com/tranek/GASDocumentation\n * - https://vorixo.github.io/devtricks/lazy-loading-asc/\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Specialized version of the Ability System Component.\n\nIncludes many quality of life elements that are an aggregation of multiple common practices.\n\n- Data-driven configuration of default Gameplay Abilities.\n- Support for runtime IK Retarget setup, where the animation is driven by a hidden mesh.\n- Batch activation and local cues, as per Dan Tranek's GAS Compendium.\n- Lazy loading the ASC, as per Alvaro Jover-Alvarez (Vorixo)'s blog.\n\nAdditional references:\n\n- https://github.com/tranek/GASDocumentation\n- https://vorixo.github.io/devtricks/lazy-loading-asc/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilitySystemAvatarChanged_MetaData[] = {
		{ "Comment", "/** Broadcasts a changed in the Avatar. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Broadcasts a changed in the Avatar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilitySetup_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/**\n\x09 * Default configuration for the Ability System.\n\x09 * \n\x09 * Can be overriden by avatars implementing the Ability System Defaults Interface.\n\x09 * If avatars override the default data asset, this one is fully ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Default configuration for the Ability System.\n\nCan be overriden by avatars implementing the Ability System Defaults Interface.\nIf avatars override the default data asset, this one is fully ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbilityBatchRPC_MetaData[] = {
		{ "Category", "Ability System" },
		{ "Comment", "/**\n\x09 * Determines if the ASC can batch-activate abilities.\n\x09 *\n\x09 * This means that multiple abilities activating together can be bundled in the same RPC.\n\x09 * Once enabled, abilities can be activated in a batch via the \"TryBatchActivate\" functions.\n\x09 */" },
		{ "DisplayName", "Enable Ability Batch RPCs" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Determines if the ASC can batch-activate abilities.\n\nThis means that multiple abilities activating together can be bundled in the same RPC.\nOnce enabled, abilities can be activated in a batch via the \"TryBatchActivate\" functions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAbilitySetup_MetaData[] = {
		{ "Comment", "/** Actual ability setup used to initialize this ASC. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Actual ability setup used to initialize this ASC." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddedAttributes_MetaData[] = {
		{ "Comment", "/** Attribute sets we initialized and are keeping track. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "Attribute sets we initialized and are keeping track." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectHandles_MetaData[] = {
		{ "Comment", "/** All effects we initialized by default. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "All effects we initialized by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilityHandles_MetaData[] = {
		{ "Comment", "/** All abilities we initialized by default. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/NinjaGASAbilitySystemComponent.h" },
		{ "ToolTip", "All abilities we initialized by default." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilitySystemAvatarChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAbilitySetup;
	static void NewProp_bEnableAbilityBatchRPC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbilityBatchRPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAbilitySetup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AddedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEffectHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultEffectHandles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAbilityHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilityHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature, "AbilitySystemAvatarChangedSignature__DelegateSignature" }, // 4063931541
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_AddGameplayCueLocally, "AddGameplayCueLocally" }, // 2460759102
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ApplyGameplayEffectClassToSelf, "ApplyGameplayEffectClassToSelf" }, // 4054326887
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_CancelAbilitiesByTags, "CancelAbilitiesByTags" }, // 1771394540
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_ExecuteGameplayCueLocal, "ExecuteGameplayCueLocal" }, // 3715176247
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GetAnimInstanceFromActorInfo, "GetAnimInstanceFromActorInfo" }, // 1547435077
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_GiveAbilityFromClass, "GiveAbilityFromClass" }, // 1390206887
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_RemoveGameplayCueLocally, "RemoveGameplayCueLocally" }, // 1478995381
		{ &Z_Construct_UFunction_UNinjaGASAbilitySystemComponent_TryBatchActivateAbility, "TryBatchActivateAbility" }, // 231416721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaGASAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_OnAbilitySystemAvatarChanged = { "OnAbilitySystemAvatarChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAbilitySystemComponent, OnAbilitySystemAvatarChanged), Z_Construct_UDelegateFunction_UNinjaGASAbilitySystemComponent_AbilitySystemAvatarChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilitySystemAvatarChanged_MetaData), NewProp_OnAbilitySystemAvatarChanged_MetaData) }; // 4063931541
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultAbilitySetup = { "DefaultAbilitySetup", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAbilitySystemComponent, DefaultAbilitySetup), Z_Construct_UClass_UNinjaGASDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilitySetup_MetaData), NewProp_DefaultAbilitySetup_MetaData) };
void Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_bEnableAbilityBatchRPC_SetBit(void* Obj)
{
	((UNinjaGASAbilitySystemComponent*)Obj)->bEnableAbilityBatchRPC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_bEnableAbilityBatchRPC = { "bEnableAbilityBatchRPC", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNinjaGASAbilitySystemComponent), &Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_bEnableAbilityBatchRPC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAbilityBatchRPC_MetaData), NewProp_bEnableAbilityBatchRPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_CurrentAbilitySetup = { "CurrentAbilitySetup", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAbilitySystemComponent, CurrentAbilitySetup), Z_Construct_UClass_UNinjaGASDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAbilitySetup_MetaData), NewProp_CurrentAbilitySetup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_AddedAttributes_Inner = { "AddedAttributes", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_AddedAttributes = { "AddedAttributes", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAbilitySystemComponent, AddedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddedAttributes_MetaData), NewProp_AddedAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultEffectHandles_Inner = { "DefaultEffectHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultEffectHandles = { "DefaultEffectHandles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAbilitySystemComponent, DefaultEffectHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEffectHandles_MetaData), NewProp_DefaultEffectHandles_MetaData) }; // 290910411
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_Inner = { "DefaultAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles = { "DefaultAbilityHandles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaGASAbilitySystemComponent, DefaultAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilityHandles_MetaData), NewProp_DefaultAbilityHandles_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_OnAbilitySystemAvatarChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultAbilitySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_bEnableAbilityBatchRPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_CurrentAbilitySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_AddedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_AddedAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultEffectHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultEffectHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::NewProp_DefaultAbilityHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaGAS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemDefaultsInterface_NoRegister, (int32)VTABLE_OFFSET(UNinjaGASAbilitySystemComponent, IAbilitySystemDefaultsInterface), false },  // 941413795
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::ClassParams = {
	&UNinjaGASAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaGASAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaGASAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaGASAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaGASAbilitySystemComponent.OuterSingleton;
}
template<> NINJAGAS_API UClass* StaticClass<UNinjaGASAbilitySystemComponent>()
{
	return UNinjaGASAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaGASAbilitySystemComponent);
UNinjaGASAbilitySystemComponent::~UNinjaGASAbilitySystemComponent() {}
// End Class UNinjaGASAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaGASAbilitySystemComponent, UNinjaGASAbilitySystemComponent::StaticClass, TEXT("UNinjaGASAbilitySystemComponent"), &Z_Registration_Info_UClass_UNinjaGASAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaGASAbilitySystemComponent), 2069756203U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_2926791156(TEXT("/Script/NinjaGAS"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
