// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/GAS/NarrativeAbilitySystemComponent.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeAbilitySystemComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeNPCController_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FAttackToken();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FSavedAttribute();
NARRATIVESAVESYSTEM_API UClass* Z_Construct_UClass_UNarrativeSavableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FSavedAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedAttribute;
class UScriptStruct* FSavedAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedAttribute, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("SavedAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_SavedAttribute.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FSavedAttribute>()
{
	return FSavedAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSavedAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[] = {
		{ "Category", "Saving" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Saving" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000001010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedAttribute, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeName_MetaData), NewProp_AttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000001010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_AttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"SavedAttribute",
	Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttribute_Statics::PropPointers),
	sizeof(FSavedAttribute),
	alignof(FSavedAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_SavedAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSavedAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SavedAttribute.InnerSingleton;
}
// End ScriptStruct FSavedAttribute

// Begin ScriptStruct FAttackToken
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttackToken;
class UScriptStruct* FAttackToken::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttackToken.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttackToken.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttackToken, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("AttackToken"));
	}
	return Z_Registration_Info_UScriptStruct_AttackToken.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FAttackToken>()
{
	return FAttackToken::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttackToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//An attack token that has been created for a given attacker. Inspired by \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "An attack token that has been created for a given attacker. Inspired by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Comment", "//The NPC that owns this attack token\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "The NPC that owns this attack token" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenGrantedTime_MetaData[] = {
		{ "Comment", "//The game time that the token was granted \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "The game time that the token was granted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TokenGrantedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttackToken>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAttackToken_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackToken, Owner), Z_Construct_UClass_ANarrativeNPCController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAttackToken_Statics::NewProp_TokenGrantedTime = { "TokenGrantedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttackToken, TokenGrantedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenGrantedTime_MetaData), NewProp_TokenGrantedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttackToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackToken_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttackToken_Statics::NewProp_TokenGrantedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttackToken_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"AttackToken",
	Z_Construct_UScriptStruct_FAttackToken_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackToken_Statics::PropPointers),
	sizeof(FAttackToken),
	alignof(FAttackToken),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttackToken_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttackToken_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttackToken()
{
	if (!Z_Registration_Info_UScriptStruct_AttackToken.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttackToken.InnerSingleton, Z_Construct_UScriptStruct_FAttackToken_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttackToken.InnerSingleton;
}
// End ScriptStruct FAttackToken

// Begin Delegate FOnDied
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnDied_Parms
	{
		AActor* KilledActor;
		UNarrativeAbilitySystemComponent* KilledActorASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Delegates \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KilledActorASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KilledActorASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::NewProp_KilledActor = { "KilledActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnDied_Parms, KilledActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::NewProp_KilledActorASC = { "KilledActorASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnDied_Parms, KilledActorASC), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KilledActorASC_MetaData), NewProp_KilledActorASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::NewProp_KilledActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::NewProp_KilledActorASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NarrativeArsenal, nullptr, "OnDied__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::_Script_NarrativeArsenal_eventOnDied_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDied_DelegateWrapper(const FMulticastScriptDelegate& OnDied, AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{
	struct _Script_NarrativeArsenal_eventOnDied_Parms
	{
		AActor* KilledActor;
		UNarrativeAbilitySystemComponent* KilledActorASC;
	};
	_Script_NarrativeArsenal_eventOnDied_Parms Parms;
	Parms.KilledActor=KilledActor;
	Parms.KilledActorASC=KilledActorASC;
	OnDied.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDied

// Begin Class UNarrativeAbilitySystemComponent Function OnRep_bIsDead
struct Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNarrativeAbilitySystemComponent, nullptr, "OnRep_bIsDead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNarrativeAbilitySystemComponent::execOnRep_bIsDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bIsDead();
	P_NATIVE_END;
}
// End Class UNarrativeAbilitySystemComponent Function OnRep_bIsDead

// Begin Class UNarrativeAbilitySystemComponent
void UNarrativeAbilitySystemComponent::StaticRegisterNativesUNarrativeAbilitySystemComponent()
{
	UClass* Class = UNarrativeAbilitySystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_bIsDead", &UNarrativeAbilitySystemComponent::execOnRep_bIsDead },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNarrativeAbilitySystemComponent);
UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister()
{
	return UNarrativeAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom Ability system component for Narrative pro. Has ISavableComponent for saving attributes.\n */" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GAS/NarrativeAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Custom Ability system component for Narrative pro. Has ISavableComponent for saving attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributesToSave_MetaData[] = {
		{ "Category", "Saving" },
		{ "Comment", "//This defines the attributes that should be saved to disk \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "This defines the attributes that should be saved to disk" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAttackTokens_MetaData[] = {
		{ "Category", "Attack Tokens" },
		{ "Comment", "//ATTACK TOKENS - maintained really just on the server, clients don't need to worry about these\n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "ATTACK TOKENS - maintained really just on the server, clients don't need to worry about these" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackPriority_MetaData[] = {
		{ "Category", "Attack Tokens" },
		{ "Comment", "//NPCs will use this value when they decide whether they should attack us or not. Higher priority people are attacked first \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "NPCs will use this value when they decide whether they should attack us or not. Higher priority people are attacked first" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAttackTokens_MetaData[] = {
		{ "Comment", "/**The attackers we've granted a token to are in here. We don't actally bother with a TokenHandle \n\x09or anything extra as that overcomplicates things - tokens are just pointers to the token holder*/" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "The attackers we've granted a token to are in here. We don't actally bother with a TokenHandle\n       or anything extra as that overcomplicates things - tokens are just pointers to the token holder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDied_MetaData[] = {
		{ "Category", "Narrative|GAS" },
		{ "Comment", "//Any ASC owner wishing to do something OnDeath should bind to this - it fires on server and all clients when the ASC dies. \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "Any ASC owner wishing to do something OnDeath should bind to this - it fires on server and all clients when the ASC dies." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[] = {
		{ "Category", "Narrative|GAS" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedAttributes_MetaData[] = {
		{ "Comment", "//We use this to remember attribute -> attribute value \n" },
		{ "ModuleRelativePath", "Public/GAS/NarrativeAbilitySystemComponent.h" },
		{ "ToolTip", "We use this to remember attribute -> attribute value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesToSave_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesToSave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttackTokens;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedAttackTokens_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAttackTokens;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDied;
	static void NewProp_bIsDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAttributes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedAttributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNarrativeAbilitySystemComponent_OnRep_bIsDead, "OnRep_bIsDead" }, // 602130103
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNarrativeAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_AttributesToSave_Inner = { "AttributesToSave", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(0, nullptr) }; // 2792951819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_AttributesToSave = { "AttributesToSave", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, AttributesToSave), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributesToSave_MetaData), NewProp_AttributesToSave_MetaData) }; // 2792951819
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_NumAttackTokens = { "NumAttackTokens", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, NumAttackTokens), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAttackTokens_MetaData), NewProp_NumAttackTokens_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_AttackPriority = { "AttackPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, AttackPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackPriority_MetaData), NewProp_AttackPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_GrantedAttackTokens_Inner = { "GrantedAttackTokens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttackToken, METADATA_PARAMS(0, nullptr) }; // 3161305063
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_GrantedAttackTokens = { "GrantedAttackTokens", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, GrantedAttackTokens), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrantedAttackTokens_MetaData), NewProp_GrantedAttackTokens_MetaData) }; // 3161305063
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_OnDied = { "OnDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, OnDied), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDied_MetaData), NewProp_OnDied_MetaData) }; // 1316151693
void Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_bIsDead_SetBit(void* Obj)
{
	((UNarrativeAbilitySystemComponent*)Obj)->bIsDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_bIsDead = { "bIsDead", "OnRep_bIsDead", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNarrativeAbilitySystemComponent), &Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDead_MetaData), NewProp_bIsDead_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes_Inner = { "SavedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedAttribute, METADATA_PARAMS(0, nullptr) }; // 2261838316
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes = { "SavedAttributes", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNarrativeAbilitySystemComponent, SavedAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedAttributes_MetaData), NewProp_SavedAttributes_MetaData) }; // 2261838316
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_AttributesToSave_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_AttributesToSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_NumAttackTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_AttackPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_GrantedAttackTokens_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_GrantedAttackTokens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_OnDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_bIsDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::NewProp_SavedAttributes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNarrativeSavableComponent_NoRegister, (int32)VTABLE_OFFSET(UNarrativeAbilitySystemComponent, INarrativeSavableComponent), false },  // 1573843113
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::ClassParams = {
	&UNarrativeAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UNarrativeAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UNarrativeAbilitySystemComponent>()
{
	return UNarrativeAbilitySystemComponent::StaticClass();
}
void UNarrativeAbilitySystemComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bIsDead(TEXT("bIsDead"));
	const bool bIsValid = true
		&& Name_bIsDead == ClassReps[(int32)ENetFields_Private::bIsDead].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UNarrativeAbilitySystemComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNarrativeAbilitySystemComponent);
UNarrativeAbilitySystemComponent::~UNarrativeAbilitySystemComponent() {}
// End Class UNarrativeAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavedAttribute::StaticStruct, Z_Construct_UScriptStruct_FSavedAttribute_Statics::NewStructOps, TEXT("SavedAttribute"), &Z_Registration_Info_UScriptStruct_SavedAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedAttribute), 2261838316U) },
		{ FAttackToken::StaticStruct, Z_Construct_UScriptStruct_FAttackToken_Statics::NewStructOps, TEXT("AttackToken"), &Z_Registration_Info_UScriptStruct_AttackToken, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttackToken), 3161305063U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNarrativeAbilitySystemComponent, UNarrativeAbilitySystemComponent::StaticClass, TEXT("UNarrativeAbilitySystemComponent"), &Z_Registration_Info_UClass_UNarrativeAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNarrativeAbilitySystemComponent), 2877670344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_928353937(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeAbilitySystemComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
