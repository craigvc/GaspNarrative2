// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatAnimationProvider() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatAnimationProvider Function GetAbilityAnimationMontage
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics
{
	struct NinjaCombatAnimationProvider_eventGetAbilityAnimationMontage_Parms
	{
		const UNinjaCombatGameplayAbility* CombatAbility;
		UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation Provider" },
		{ "Comment", "/**\n\x09 * Retrieves an Ability Montage provided directly by the Gameplay Ability.\n\x09 *\n\x09 * By default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.\n\x09 * \n\x09 * This means that the ability will be able to define any Animation Montage, by any criteria\n\x09 * (such as a simple UPROPERTY, for example) that can be used by the provider.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Retrieves an Ability Montage provided directly by the Gameplay Ability.\n\nBy default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.\n\nThis means that the ability will be able to define any Animation Montage, by any criteria\n(such as a simple UPROPERTY, for example) that can be used by the provider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilityAnimationMontage_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAbility_MetaData), NewProp_CombatAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilityAnimationMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetAbilityAnimationMontage", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::NinjaCombatAnimationProvider_eventGetAbilityAnimationMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::NinjaCombatAnimationProvider_eventGetAbilityAnimationMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetAbilityAnimationMontage)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=UNinjaCombatAnimationProvider::GetAbilityAnimationMontage(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetAbilityAnimationMontage

// Begin Class UNinjaCombatAnimationProvider Function GetAbilityPlayRate
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics
{
	struct NinjaCombatAnimationProvider_eventGetAbilityPlayRate_Parms
	{
		const UNinjaCombatGameplayAbility* CombatAbility;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation Provider" },
		{ "Comment", "/**\n\x09 * Retrieves the appropriate Section Name, provided directly by the Gameplay Ability.\n\x09 *\n\x09 * By default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.\n\x09 * \n\x09 * This means that the ability will be able to define any Play Rate, by any criteria\n\x09 * (such as a simple UPROPERTY, for example) that can be used by the provider.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Retrieves the appropriate Section Name, provided directly by the Gameplay Ability.\n\nBy default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.\n\nThis means that the ability will be able to define any Play Rate, by any criteria\n(such as a simple UPROPERTY, for example) that can be used by the provider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilityPlayRate_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAbility_MetaData), NewProp_CombatAbility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilityPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetAbilityPlayRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::NinjaCombatAnimationProvider_eventGetAbilityPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::NinjaCombatAnimationProvider_eventGetAbilityPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetAbilityPlayRate)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UNinjaCombatAnimationProvider::GetAbilityPlayRate(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetAbilityPlayRate

// Begin Class UNinjaCombatAnimationProvider Function GetAbilitySectionName
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics
{
	struct NinjaCombatAnimationProvider_eventGetAbilitySectionName_Parms
	{
		const UNinjaCombatGameplayAbility* CombatAbility;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation Provider" },
		{ "Comment", "/**\n\x09 * Retrieves the appropriate Section Name, provided directly by the Gameplay Ability.\n\x09 *\n\x09 * By default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.\n\x09 * \n\x09 * This means that the ability will be able to define any Section Name, by any criteria\n\x09 * (such as a simple UPROPERTY, for example) that can be used by the provider.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Retrieves the appropriate Section Name, provided directly by the Gameplay Ability.\n\nBy default, uses the ICombatAnimationMontageProviderInterface, on the Gameplay Ability.\n\nThis means that the ability will be able to define any Section Name, by any criteria\n(such as a simple UPROPERTY, for example) that can be used by the provider." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilitySectionName_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAbility_MetaData), NewProp_CombatAbility_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilitySectionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetAbilitySectionName", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::NinjaCombatAnimationProvider_eventGetAbilitySectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::NinjaCombatAnimationProvider_eventGetAbilitySectionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetAbilitySectionName)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UNinjaCombatAnimationProvider::GetAbilitySectionName(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetAbilitySectionName

// Begin Class UNinjaCombatAnimationProvider Function GetAbilityTags
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics
{
	struct NinjaCombatAnimationProvider_eventGetAbilityTags_Parms
	{
		const UNinjaCombatGameplayAbility* CombatAbility;
		FGameplayTagContainer ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Animation Provider" },
		{ "Comment", "/**\n\x09 * Retrieves all Combat Ability Tags, including contextual ones.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Retrieves all Combat Ability Tags, including contextual ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatAbility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilityTags_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatAbility_MetaData), NewProp_CombatAbility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetAbilityTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetAbilityTags", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::NinjaCombatAnimationProvider_eventGetAbilityTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::NinjaCombatAnimationProvider_eventGetAbilityTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetAbilityTags)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTagContainer*)Z_Param__Result=UNinjaCombatAnimationProvider::GetAbilityTags(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetAbilityTags

// Begin Class UNinjaCombatAnimationProvider Function GetMontageToPlay
struct NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms
{
	UNinjaCombatGameplayAbility* CombatAbility;
	UAnimMontage* ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms()
		: ReturnValue(NULL)
	{
	}
};
static const FName NAME_UNinjaCombatAnimationProvider_GetMontageToPlay = FName(TEXT("GetMontageToPlay"));
UAnimMontage* UNinjaCombatAnimationProvider::GetMontageToPlay(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationProvider_GetMontageToPlay);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms Parms;
		Parms.CombatAbility=CombatAbility;
		const_cast<UNinjaCombatAnimationProvider*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatAnimationProvider*>(this)->GetMontageToPlay_Implementation(CombatAbility);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Provides the Animation Montage to be used by the requesting ability.\n\x09 * \n\x09 * @param CombatAbility\x09\x09""Ability requesting the montage.\n\x09 * @return\x09\x09\x09\x09\x09The Animation Montage to play.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Provides the Animation Montage to be used by the requesting ability.\n\n@param CombatAbility         Ability requesting the montage.\n@return                                      The Animation Montage to play." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetMontageToPlay", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::PropPointers), sizeof(NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimationProvider_eventGetMontageToPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetMontageToPlay)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetMontageToPlay_Implementation(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetMontageToPlay

// Begin Class UNinjaCombatAnimationProvider Function GetPlayRate
struct NinjaCombatAnimationProvider_eventGetPlayRate_Parms
{
	UNinjaCombatGameplayAbility* CombatAbility;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	NinjaCombatAnimationProvider_eventGetPlayRate_Parms()
		: ReturnValue(0)
	{
	}
};
static const FName NAME_UNinjaCombatAnimationProvider_GetPlayRate = FName(TEXT("GetPlayRate"));
float UNinjaCombatAnimationProvider::GetPlayRate(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationProvider_GetPlayRate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimationProvider_eventGetPlayRate_Parms Parms;
		Parms.CombatAbility=CombatAbility;
		const_cast<UNinjaCombatAnimationProvider*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatAnimationProvider*>(this)->GetPlayRate_Implementation(CombatAbility);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Provides a play rate for the montage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Provides a play rate for the montage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetPlayRate_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::PropPointers), sizeof(NinjaCombatAnimationProvider_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimationProvider_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetPlayRate)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayRate_Implementation(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetPlayRate

// Begin Class UNinjaCombatAnimationProvider Function GetSectionName
struct NinjaCombatAnimationProvider_eventGetSectionName_Parms
{
	UNinjaCombatGameplayAbility* CombatAbility;
	FName ReturnValue;
};
static const FName NAME_UNinjaCombatAnimationProvider_GetSectionName = FName(TEXT("GetSectionName"));
FName UNinjaCombatAnimationProvider::GetSectionName(UNinjaCombatGameplayAbility* CombatAbility) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNinjaCombatAnimationProvider_GetSectionName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NinjaCombatAnimationProvider_eventGetSectionName_Parms Parms;
		Parms.CombatAbility=CombatAbility;
		const_cast<UNinjaCombatAnimationProvider*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNinjaCombatAnimationProvider*>(this)->GetSectionName_Implementation(CombatAbility);
	}
}
struct Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Provides the Montage Section to be used.\n\x09 *\n\x09 * @param CombatAbility\x09\x09""Ability requesting the Section.\n\x09 * @return\x09\x09\x09\x09\x09The Montage Section to be Used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Provides the Montage Section to be used.\n\n@param CombatAbility         Ability requesting the Section.\n@return                                      The Montage Section to be Used." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatAbility;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::NewProp_CombatAbility = { "CombatAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetSectionName_Parms, CombatAbility), Z_Construct_UClass_UNinjaCombatGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatAnimationProvider_eventGetSectionName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::NewProp_CombatAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatAnimationProvider, nullptr, "GetSectionName", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::PropPointers), sizeof(NinjaCombatAnimationProvider_eventGetSectionName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::Function_MetaDataParams) };
static_assert(sizeof(NinjaCombatAnimationProvider_eventGetSectionName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatAnimationProvider::execGetSectionName)
{
	P_GET_OBJECT(UNinjaCombatGameplayAbility,Z_Param_CombatAbility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSectionName_Implementation(Z_Param_CombatAbility);
	P_NATIVE_END;
}
// End Class UNinjaCombatAnimationProvider Function GetSectionName

// Begin Class UNinjaCombatAnimationProvider
void UNinjaCombatAnimationProvider::StaticRegisterNativesUNinjaCombatAnimationProvider()
{
	UClass* Class = UNinjaCombatAnimationProvider::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilityAnimationMontage", &UNinjaCombatAnimationProvider::execGetAbilityAnimationMontage },
		{ "GetAbilityPlayRate", &UNinjaCombatAnimationProvider::execGetAbilityPlayRate },
		{ "GetAbilitySectionName", &UNinjaCombatAnimationProvider::execGetAbilitySectionName },
		{ "GetAbilityTags", &UNinjaCombatAnimationProvider::execGetAbilityTags },
		{ "GetMontageToPlay", &UNinjaCombatAnimationProvider::execGetMontageToPlay },
		{ "GetPlayRate", &UNinjaCombatAnimationProvider::execGetPlayRate },
		{ "GetSectionName", &UNinjaCombatAnimationProvider::execGetSectionName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatAnimationProvider);
UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider_NoRegister()
{
	return UNinjaCombatAnimationProvider::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides an Animation to be used by the Combat System.\n *\n * By default, it will use the Animation Interface to retrieve the information from the\n * Gameplay Ability. For more information, please check CombatAnimationMontageProviderInterface.\n */" },
		{ "DisplayName", "Combat Animation Provider" },
		{ "IncludePath", "AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Provides an Animation to be used by the Combat System.\n\nBy default, it will use the Animation Interface to retrieve the information from the\nGameplay Ability. For more information, please check CombatAnimationMontageProviderInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimationMontage_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Default Animation Montage used if no other asset is obtained.\n\x09 *\n\x09 * Obtaining a montage using the Animation Asset Provider Interface or the contextual\n\x09 * list of Animation Montages takes precedence over using this Animation Montage\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Default Animation Montage used if no other asset is obtained.\n\nObtaining a montage using the Animation Asset Provider Interface or the contextual\nlist of Animation Montages takes precedence over using this Animation Montage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSectionName_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Default Montage Section used if no other name is obtained.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Default Montage Section used if no other name is obtained." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayRate_MetaData[] = {
		{ "Category", "Animation Provider" },
		{ "Comment", "/**\n\x09 * Default Play Rate for animation montages if no other rate is obtained.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Providers/NinjaCombatAnimationProvider.h" },
		{ "ToolTip", "Default Play Rate for animation montages if no other rate is obtained." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAnimationMontage;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultSectionName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityAnimationMontage, "GetAbilityAnimationMontage" }, // 3243257714
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityPlayRate, "GetAbilityPlayRate" }, // 592204999
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilitySectionName, "GetAbilitySectionName" }, // 651528273
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetAbilityTags, "GetAbilityTags" }, // 2557575079
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetMontageToPlay, "GetMontageToPlay" }, // 3240926558
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetPlayRate, "GetPlayRate" }, // 141051356
		{ &Z_Construct_UFunction_UNinjaCombatAnimationProvider_GetSectionName, "GetSectionName" }, // 3229752010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatAnimationProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::NewProp_DefaultAnimationMontage = { "DefaultAnimationMontage", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationProvider, DefaultAnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAnimationMontage_MetaData), NewProp_DefaultAnimationMontage_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::NewProp_DefaultSectionName = { "DefaultSectionName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationProvider, DefaultSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSectionName_MetaData), NewProp_DefaultSectionName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::NewProp_DefaultPlayRate = { "DefaultPlayRate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatAnimationProvider, DefaultPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayRate_MetaData), NewProp_DefaultPlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::NewProp_DefaultAnimationMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::NewProp_DefaultSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::NewProp_DefaultPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::ClassParams = {
	&UNinjaCombatAnimationProvider::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::PropPointers),
	0,
	0x003110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatAnimationProvider()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatAnimationProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatAnimationProvider.OuterSingleton, Z_Construct_UClass_UNinjaCombatAnimationProvider_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatAnimationProvider.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatAnimationProvider>()
{
	return UNinjaCombatAnimationProvider::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatAnimationProvider);
UNinjaCombatAnimationProvider::~UNinjaCombatAnimationProvider() {}
// End Class UNinjaCombatAnimationProvider

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatAnimationProvider, UNinjaCombatAnimationProvider::StaticClass, TEXT("UNinjaCombatAnimationProvider"), &Z_Registration_Info_UClass_UNinjaCombatAnimationProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatAnimationProvider), 788948510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_1225834301(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_NinjaCombatAnimationProvider_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
