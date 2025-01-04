// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Components/NinjaCombatBaseComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatBaseComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseComponent();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatBaseComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatBaseComponent Function BindToAbilitySystemComponent
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Timer-friendly function to connect to the Ability Component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Timer-friendly function to connect to the Ability Component." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "BindToAbilitySystemComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execBindToAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function BindToAbilitySystemComponent

// Begin Class UNinjaCombatBaseComponent Function GetAbilitySystemComponentFromOwner
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics
{
	struct NinjaCombatBaseComponent_eventGetAbilitySystemComponentFromOwner_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Retrieves the Ability System Component from the owner, via the ASC interface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Retrieves the Ability System Component from the owner, via the ASC interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseComponent_eventGetAbilitySystemComponentFromOwner_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "GetAbilitySystemComponentFromOwner", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::NinjaCombatBaseComponent_eventGetAbilitySystemComponentFromOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::NinjaCombatBaseComponent_eventGetAbilitySystemComponentFromOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execGetAbilitySystemComponentFromOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponentFromOwner();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function GetAbilitySystemComponentFromOwner

// Begin Class UNinjaCombatBaseComponent Function GetCachedAbilitySystemComponent
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics
{
	struct NinjaCombatBaseComponent_eventGetCachedAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Provides the Ability System Component already stored.\n\x09 * \n\x09 * Only ever available if the property \"bBindToAbilityComponent\" is set to true\n\x09 * or an Ability System Component was provided via the appropriate Setter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Provides the Ability System Component already stored.\n\nOnly ever available if the property \"bBindToAbilityComponent\" is set to true\nor an Ability System Component was provided via the appropriate Setter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseComponent_eventGetCachedAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "GetCachedAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::NinjaCombatBaseComponent_eventGetCachedAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::NinjaCombatBaseComponent_eventGetCachedAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execGetCachedAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetCachedAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function GetCachedAbilitySystemComponent

// Begin Class UNinjaCombatBaseComponent Function HasGameplayTag
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics
{
	struct NinjaCombatBaseComponent_eventHasGameplayTag_Parms
	{
		FGameplayTag TagToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Evaluates if the owner has a certain Gameplay Tag.\n\x09 * The Ability Component must be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Evaluates if the owner has a certain Gameplay Tag.\nThe Ability Component must be available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NewProp_TagToCheck = { "TagToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseComponent_eventHasGameplayTag_Parms, TagToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagToCheck_MetaData), NewProp_TagToCheck_MetaData) }; // 1298103297
void Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatBaseComponent_eventHasGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatBaseComponent_eventHasGameplayTag_Parms), &Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NewProp_TagToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "HasGameplayTag", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NinjaCombatBaseComponent_eventHasGameplayTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::NinjaCombatBaseComponent_eventHasGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execHasGameplayTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_TagToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGameplayTag(Z_Param_Out_TagToCheck);
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function HasGameplayTag

// Begin Class UNinjaCombatBaseComponent Function OwnerHasAuthority
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics
{
	struct NinjaCombatBaseComponent_eventOwnerHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Checks if the owner has network authority.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Checks if the owner has network authority." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatBaseComponent_eventOwnerHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatBaseComponent_eventOwnerHasAuthority_Parms), &Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "OwnerHasAuthority", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::NinjaCombatBaseComponent_eventOwnerHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::NinjaCombatBaseComponent_eventOwnerHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execOwnerHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OwnerHasAuthority();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function OwnerHasAuthority

// Begin Class UNinjaCombatBaseComponent Function OwnerIsLocallyControlled
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics
{
	struct NinjaCombatBaseComponent_eventOwnerIsLocallyControlled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Checks if the owner is locally controlled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Checks if the owner is locally controlled." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatBaseComponent_eventOwnerIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatBaseComponent_eventOwnerIsLocallyControlled_Parms), &Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "OwnerIsLocallyControlled", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::NinjaCombatBaseComponent_eventOwnerIsLocallyControlled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::NinjaCombatBaseComponent_eventOwnerIsLocallyControlled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execOwnerIsLocallyControlled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OwnerIsLocallyControlled();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function OwnerIsLocallyControlled

// Begin Class UNinjaCombatBaseComponent Function OwnerIsLocalPlayer
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics
{
	struct NinjaCombatBaseComponent_eventOwnerIsLocalPlayer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Checks if the owner is locally controlled by a player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Checks if the owner is locally controlled by a player." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NinjaCombatBaseComponent_eventOwnerIsLocalPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NinjaCombatBaseComponent_eventOwnerIsLocalPlayer_Parms), &Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "OwnerIsLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::NinjaCombatBaseComponent_eventOwnerIsLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::NinjaCombatBaseComponent_eventOwnerIsLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execOwnerIsLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OwnerIsLocalPlayer();
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function OwnerIsLocalPlayer

// Begin Class UNinjaCombatBaseComponent Function SetAbilitySystemComponent
struct Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics
{
	struct NinjaCombatBaseComponent_eventSetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* NewAbilitySystemComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Components" },
		{ "Comment", "/**\n\x09 * Sets an Ability System Component and triggers the binding.\n\x09 * Alternative to the \"bBindToAbilityComponent\", which could create a timer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Sets an Ability System Component and triggers the binding.\nAlternative to the \"bBindToAbilityComponent\", which could create a timer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::NewProp_NewAbilitySystemComponent = { "NewAbilitySystemComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatBaseComponent_eventSetAbilitySystemComponent_Parms, NewAbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAbilitySystemComponent_MetaData), NewProp_NewAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::NewProp_NewAbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatBaseComponent, nullptr, "SetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::NinjaCombatBaseComponent_eventSetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::NinjaCombatBaseComponent_eventSetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatBaseComponent::execSetAbilitySystemComponent)
{
	P_GET_OBJECT(UAbilitySystemComponent,Z_Param_NewAbilitySystemComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilitySystemComponent(Z_Param_NewAbilitySystemComponent);
	P_NATIVE_END;
}
// End Class UNinjaCombatBaseComponent Function SetAbilitySystemComponent

// Begin Class UNinjaCombatBaseComponent
void UNinjaCombatBaseComponent::StaticRegisterNativesUNinjaCombatBaseComponent()
{
	UClass* Class = UNinjaCombatBaseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToAbilitySystemComponent", &UNinjaCombatBaseComponent::execBindToAbilitySystemComponent },
		{ "GetAbilitySystemComponentFromOwner", &UNinjaCombatBaseComponent::execGetAbilitySystemComponentFromOwner },
		{ "GetCachedAbilitySystemComponent", &UNinjaCombatBaseComponent::execGetCachedAbilitySystemComponent },
		{ "HasGameplayTag", &UNinjaCombatBaseComponent::execHasGameplayTag },
		{ "OwnerHasAuthority", &UNinjaCombatBaseComponent::execOwnerHasAuthority },
		{ "OwnerIsLocallyControlled", &UNinjaCombatBaseComponent::execOwnerIsLocallyControlled },
		{ "OwnerIsLocalPlayer", &UNinjaCombatBaseComponent::execOwnerIsLocalPlayer },
		{ "SetAbilitySystemComponent", &UNinjaCombatBaseComponent::execSetAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatBaseComponent);
UClass* Z_Construct_UClass_UNinjaCombatBaseComponent_NoRegister()
{
	return UNinjaCombatBaseComponent::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatBaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Components/NinjaCombatBaseComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponentPtr_MetaData[] = {
		{ "Comment", "/** Ability System connected to the owner. */" },
		{ "ModuleRelativePath", "Public/Components/NinjaCombatBaseComponent.h" },
		{ "ToolTip", "Ability System connected to the owner." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AbilitySystemComponentPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_BindToAbilitySystemComponent, "BindToAbilitySystemComponent" }, // 4184984957
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_GetAbilitySystemComponentFromOwner, "GetAbilitySystemComponentFromOwner" }, // 2133965694
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_GetCachedAbilitySystemComponent, "GetCachedAbilitySystemComponent" }, // 1419094883
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_HasGameplayTag, "HasGameplayTag" }, // 3664720931
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerHasAuthority, "OwnerHasAuthority" }, // 389117290
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocallyControlled, "OwnerIsLocallyControlled" }, // 994616095
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_OwnerIsLocalPlayer, "OwnerIsLocalPlayer" }, // 3941251289
		{ &Z_Construct_UFunction_UNinjaCombatBaseComponent_SetAbilitySystemComponent, "SetAbilitySystemComponent" }, // 490430566
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatBaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::NewProp_AbilitySystemComponentPtr = { "AbilitySystemComponentPtr", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatBaseComponent, AbilitySystemComponentPtr), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponentPtr_MetaData), NewProp_AbilitySystemComponentPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::NewProp_AbilitySystemComponentPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::ClassParams = {
	&UNinjaCombatBaseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatBaseComponent()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatBaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatBaseComponent.OuterSingleton, Z_Construct_UClass_UNinjaCombatBaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatBaseComponent.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatBaseComponent>()
{
	return UNinjaCombatBaseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatBaseComponent);
UNinjaCombatBaseComponent::~UNinjaCombatBaseComponent() {}
// End Class UNinjaCombatBaseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatBaseComponent, UNinjaCombatBaseComponent::StaticClass, TEXT("UNinjaCombatBaseComponent"), &Z_Registration_Info_UClass_UNinjaCombatBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatBaseComponent), 599029262U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_329250984(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatBaseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
