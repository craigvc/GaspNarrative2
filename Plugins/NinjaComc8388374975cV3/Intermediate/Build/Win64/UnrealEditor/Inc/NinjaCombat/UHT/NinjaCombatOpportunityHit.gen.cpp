// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/GameFramework/NinjaCombatOpportunityHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatOpportunityHit() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatOpportunityHit();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatOpportunityHit_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UNinjaCombatOpportunityHit Function GetCauser
struct Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics
{
	struct NinjaCombatOpportunityHit_eventGetCauser_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Opportunity Hit" },
		{ "Comment", "/**\n\x09 * Gets the causer for this scan, which may be the character or a weapon.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Gets the causer for this scan, which may be the character or a weapon." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventGetCauser_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatOpportunityHit, nullptr, "GetCauser", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::NinjaCombatOpportunityHit_eventGetCauser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::NinjaCombatOpportunityHit_eventGetCauser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatOpportunityHit::execGetCauser)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetCauser();
	P_NATIVE_END;
}
// End Class UNinjaCombatOpportunityHit Function GetCauser

// Begin Class UNinjaCombatOpportunityHit Function GetInstigator
struct Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics
{
	struct NinjaCombatOpportunityHit_eventGetInstigator_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Opportunity Hit" },
		{ "Comment", "/**\n\x09 * Gets the instigator for this scan.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Gets the instigator for this scan." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatOpportunityHit, nullptr, "GetInstigator", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::NinjaCombatOpportunityHit_eventGetInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::NinjaCombatOpportunityHit_eventGetInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatOpportunityHit::execGetInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetInstigator();
	P_NATIVE_END;
}
// End Class UNinjaCombatOpportunityHit Function GetInstigator

// Begin Class UNinjaCombatOpportunityHit Function GetOpportunityHitEffect
struct Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics
{
	struct NinjaCombatOpportunityHit_eventGetOpportunityHitEffect_Parms
	{
		TSubclassOf<UGameplayEffect> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Provides a Gameplay Effect applied from this hit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Provides a Gameplay Effect applied from this hit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventGetOpportunityHitEffect_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatOpportunityHit, nullptr, "GetOpportunityHitEffect", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::NinjaCombatOpportunityHit_eventGetOpportunityHitEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::NinjaCombatOpportunityHit_eventGetOpportunityHitEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatOpportunityHit::execGetOpportunityHitEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UGameplayEffect>*)Z_Param__Result=P_THIS->GetOpportunityHitEffect();
	P_NATIVE_END;
}
// End Class UNinjaCombatOpportunityHit Function GetOpportunityHitEffect

// Begin Class UNinjaCombatOpportunityHit Function NewInstance
struct Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics
{
	struct NinjaCombatOpportunityHit_eventNewInstance_Parms
	{
		TSubclassOf<UNinjaCombatOpportunityHit> OpportunityHitClass;
		AActor* Owner;
		APawn* Instigator;
		AActor* Causer;
		TSubclassOf<UGameplayEffect> OpportunityHitEffect;
		UNinjaCombatOpportunityHit* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Melee Scan" },
		{ "Comment", "/**\n\x09 * Creates a new instance of the Opportunity Hit.\n\x09 *\n\x09 * You have the option to use the default class or provide a customized one.\n\x09 * In case you want to use the default one, you can just provide it or null to the Opportunity Hit Class.\n\x09 */" },
		{ "DisplayName", "New Melee Scan Instance" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Creates a new instance of the Opportunity Hit.\n\nYou have the option to use the default class or provide a customized one.\nIn case you want to use the default one, you can just provide it or null to the Opportunity Hit Class." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OpportunityHitClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OpportunityHitEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_OpportunityHitClass = { "OpportunityHitClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventNewInstance_Parms, OpportunityHitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNinjaCombatOpportunityHit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventNewInstance_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventNewInstance_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventNewInstance_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_OpportunityHitEffect = { "OpportunityHitEffect", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventNewInstance_Parms, OpportunityHitEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NinjaCombatOpportunityHit_eventNewInstance_Parms, ReturnValue), Z_Construct_UClass_UNinjaCombatOpportunityHit_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_OpportunityHitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_OpportunityHitEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCombatOpportunityHit, nullptr, "NewInstance", nullptr, nullptr, Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NinjaCombatOpportunityHit_eventNewInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::NinjaCombatOpportunityHit_eventNewInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNinjaCombatOpportunityHit::execNewInstance)
{
	P_GET_OBJECT(UClass,Z_Param_OpportunityHitClass);
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(APawn,Z_Param_Instigator);
	P_GET_OBJECT(AActor,Z_Param_Causer);
	P_GET_OBJECT(UClass,Z_Param_OpportunityHitEffect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNinjaCombatOpportunityHit**)Z_Param__Result=UNinjaCombatOpportunityHit::NewInstance(Z_Param_OpportunityHitClass,Z_Param_Owner,Z_Param_Instigator,Z_Param_Causer,Z_Param_OpportunityHitEffect);
	P_NATIVE_END;
}
// End Class UNinjaCombatOpportunityHit Function NewInstance

// Begin Class UNinjaCombatOpportunityHit
void UNinjaCombatOpportunityHit::StaticRegisterNativesUNinjaCombatOpportunityHit()
{
	UClass* Class = UNinjaCombatOpportunityHit::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCauser", &UNinjaCombatOpportunityHit::execGetCauser },
		{ "GetInstigator", &UNinjaCombatOpportunityHit::execGetInstigator },
		{ "GetOpportunityHitEffect", &UNinjaCombatOpportunityHit::execGetOpportunityHitEffect },
		{ "NewInstance", &UNinjaCombatOpportunityHit::execNewInstance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCombatOpportunityHit);
UClass* Z_Construct_UClass_UNinjaCombatOpportunityHit_NoRegister()
{
	return UNinjaCombatOpportunityHit::StaticClass();
}
struct Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an Opportunity Hit happening in the Combat System.\n */" },
		{ "IncludePath", "GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Represents an Opportunity Hit happening in the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpportunityOwner_MetaData[] = {
		{ "Category", "Opportunity Hit" },
		{ "Comment", "/** Actor that has triggered this opportunity hit. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Actor that has triggered this opportunity hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Opportunity Hit" },
		{ "Comment", "/** Instigator for this scan. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Instigator for this scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[] = {
		{ "Category", "Opportunity Hit" },
		{ "Comment", "/** Causer of this scan. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Causer of this scan." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpportunityHitEffect_MetaData[] = {
		{ "Category", "Opportunity Hit" },
		{ "Comment", "/** Gameplay Effect applied from this hit. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaCombatOpportunityHit.h" },
		{ "ToolTip", "Gameplay Effect applied from this hit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpportunityOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Causer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OpportunityHitEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetCauser, "GetCauser" }, // 4073672257
		{ &Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetInstigator, "GetInstigator" }, // 3168876731
		{ &Z_Construct_UFunction_UNinjaCombatOpportunityHit_GetOpportunityHitEffect, "GetOpportunityHitEffect" }, // 319148206
		{ &Z_Construct_UFunction_UNinjaCombatOpportunityHit_NewInstance, "NewInstance" }, // 2055822258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCombatOpportunityHit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_OpportunityOwner = { "OpportunityOwner", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatOpportunityHit, OpportunityOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpportunityOwner_MetaData), NewProp_OpportunityOwner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatOpportunityHit, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatOpportunityHit, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Causer_MetaData), NewProp_Causer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_OpportunityHitEffect = { "OpportunityHitEffect", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNinjaCombatOpportunityHit, OpportunityHitEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpportunityHitEffect_MetaData), NewProp_OpportunityHitEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_OpportunityOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_Causer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::NewProp_OpportunityHitEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::ClassParams = {
	&UNinjaCombatOpportunityHit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::Class_MetaDataParams), Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNinjaCombatOpportunityHit()
{
	if (!Z_Registration_Info_UClass_UNinjaCombatOpportunityHit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCombatOpportunityHit.OuterSingleton, Z_Construct_UClass_UNinjaCombatOpportunityHit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNinjaCombatOpportunityHit.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UNinjaCombatOpportunityHit>()
{
	return UNinjaCombatOpportunityHit::StaticClass();
}
UNinjaCombatOpportunityHit::UNinjaCombatOpportunityHit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCombatOpportunityHit);
UNinjaCombatOpportunityHit::~UNinjaCombatOpportunityHit() {}
// End Class UNinjaCombatOpportunityHit

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatOpportunityHit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCombatOpportunityHit, UNinjaCombatOpportunityHit::StaticClass, TEXT("UNinjaCombatOpportunityHit"), &Z_Registration_Info_UClass_UNinjaCombatOpportunityHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCombatOpportunityHit), 3205023075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatOpportunityHit_h_2239069582(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatOpportunityHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatOpportunityHit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
