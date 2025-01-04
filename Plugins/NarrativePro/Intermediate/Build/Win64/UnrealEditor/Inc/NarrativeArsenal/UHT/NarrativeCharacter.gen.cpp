// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeCharacter.h"
#include "NarrativeArsenal/Public/GAS/NarrativeCombatAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterAppearance_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UTeamMarkerComponent_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem_NoRegister();
NARRATIVEARSENAL_API UFunction* Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FCombatTraceData();
NARRATIVEARSENAL_API UScriptStruct* Z_Construct_UScriptStruct_FUnarmedCombatData();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin ScriptStruct FUnarmedCombatData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UnarmedCombatData;
class UScriptStruct* FUnarmedCombatData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UnarmedCombatData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UnarmedCombatData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnarmedCombatData, (UObject*)Z_Construct_UPackage__Script_NarrativeArsenal(), TEXT("UnarmedCombatData"));
	}
	return Z_Registration_Info_UScriptStruct_UnarmedCombatData.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<FUnarmedCombatData>()
{
	return FUnarmedCombatData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUnarmedCombatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Weapons store this themselves, and players store this also for unarmed combat. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Weapons store this themselves, and players store this also for unarmed combat." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceData_MetaData[] = {
		{ "Category", "Unarmed Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Unarmed Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedAttackMontages_MetaData[] = {
		{ "Category", "Unarmed Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyUnarmedAttackMontages_MetaData[] = {
		{ "Category", "Unarmed Combat Data" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnarmedAttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnarmedAttackMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyUnarmedAttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyUnarmedAttackMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnarmedCombatData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_TraceData = { "TraceData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnarmedCombatData, TraceData), Z_Construct_UScriptStruct_FCombatTraceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceData_MetaData), NewProp_TraceData_MetaData) }; // 378338725
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnarmedCombatData, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_UnarmedAttackMontages_Inner = { "UnarmedAttackMontages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_UnarmedAttackMontages = { "UnarmedAttackMontages", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnarmedCombatData, UnarmedAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedAttackMontages_MetaData), NewProp_UnarmedAttackMontages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_HeavyUnarmedAttackMontages_Inner = { "HeavyUnarmedAttackMontages", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_HeavyUnarmedAttackMontages = { "HeavyUnarmedAttackMontages", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnarmedCombatData, HeavyUnarmedAttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyUnarmedAttackMontages_MetaData), NewProp_HeavyUnarmedAttackMontages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_TraceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_UnarmedAttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_UnarmedAttackMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_HeavyUnarmedAttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewProp_HeavyUnarmedAttackMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
	nullptr,
	&NewStructOps,
	"UnarmedCombatData",
	Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::PropPointers),
	sizeof(FUnarmedCombatData),
	alignof(FUnarmedCombatData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnarmedCombatData()
{
	if (!Z_Registration_Info_UScriptStruct_UnarmedCombatData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UnarmedCombatData.InnerSingleton, Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UnarmedCombatData.InnerSingleton;
}
// End ScriptStruct FUnarmedCombatData

// Begin Delegate FOnDied
struct Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics
{
	struct _Script_NarrativeArsenal_eventOnDied_Parms
	{
		ANarrativeCharacter* Character;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Delegates \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Delegates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NarrativeArsenal_eventOnDied_Parms, Character), Z_Construct_UClass_ANarrativeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature_Statics::NewProp_Character,
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
void FOnDied_DelegateWrapper(const FMulticastScriptDelegate& OnDied, ANarrativeCharacter* Character)
{
	struct _Script_NarrativeArsenal_eventOnDied_Parms
	{
		ANarrativeCharacter* Character;
	};
	_Script_NarrativeArsenal_eventOnDied_Parms Parms;
	Parms.Character=Character;
	OnDied.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDied

// Begin Class ANarrativeCharacter Function BPDamagedBy
struct NarrativeCharacter_eventBPDamagedBy_Parms
{
	AController* DamagerController;
	float Damage;
};
static const FName NAME_ANarrativeCharacter_BPDamagedBy = FName(TEXT("BPDamagedBy"));
void ANarrativeCharacter::BPDamagedBy(AController* DamagerController, const float Damage)
{
	NarrativeCharacter_eventBPDamagedBy_Parms Parms;
	Parms.DamagerController=DamagerController;
	Parms.Damage=Damage;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_BPDamagedBy);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagerController;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::NewProp_DamagerController = { "DamagerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventBPDamagedBy_Parms, DamagerController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventBPDamagedBy_Parms, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::NewProp_DamagerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "BPDamagedBy", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::PropPointers), sizeof(NarrativeCharacter_eventBPDamagedBy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventBPDamagedBy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function BPDamagedBy

// Begin Class ANarrativeCharacter Function ClearAnimBPOverride
struct Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "ClearAnimBPOverride", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execClearAnimBPOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAnimBPOverride();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function ClearAnimBPOverride

// Begin Class ANarrativeCharacter Function GetCharacterLevel
struct Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics
{
	struct NarrativeCharacter_eventGetCharacterLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetCharacterLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetCharacterLevel", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NarrativeCharacter_eventGetCharacterLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::NarrativeCharacter_eventGetCharacterLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetCharacterLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCharacterLevel();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetCharacterLevel

// Begin Class ANarrativeCharacter Function GetEquipmentComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics
{
	struct NarrativeCharacter_eventGetEquipmentComponent_Parms
	{
		UEquipmentComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetEquipmentComponent_Parms, ReturnValue), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetEquipmentComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NarrativeCharacter_eventGetEquipmentComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::NarrativeCharacter_eventGetEquipmentComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetEquipmentComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEquipmentComponent**)Z_Param__Result=P_THIS->GetEquipmentComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetEquipmentComponent

// Begin Class ANarrativeCharacter Function GetFaceMesh
struct Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics
{
	struct NarrativeCharacter_eventGetFaceMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetFaceMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetFaceMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::NarrativeCharacter_eventGetFaceMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::NarrativeCharacter_eventGetFaceMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetFaceMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFaceMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetFaceMesh

// Begin Class ANarrativeCharacter Function GetFeetMesh
struct Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics
{
	struct NarrativeCharacter_eventGetFeetMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetFeetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetFeetMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::NarrativeCharacter_eventGetFeetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::NarrativeCharacter_eventGetFeetMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetFeetMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetFeetMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetFeetMesh

// Begin Class ANarrativeCharacter Function GetHeadLookAtLocation
struct NarrativeCharacter_eventGetHeadLookAtLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	NarrativeCharacter_eventGetHeadLookAtLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static const FName NAME_ANarrativeCharacter_GetHeadLookAtLocation = FName(TEXT("GetHeadLookAtLocation"));
FVector ANarrativeCharacter::GetHeadLookAtLocation()
{
	NarrativeCharacter_eventGetHeadLookAtLocation_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_GetHeadLookAtLocation);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetHeadLookAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetHeadLookAtLocation", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::PropPointers), sizeof(NarrativeCharacter_eventGetHeadLookAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventGetHeadLookAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function GetHeadLookAtLocation

// Begin Class ANarrativeCharacter Function GetHealth
struct Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics
{
	struct NarrativeCharacter_eventGetHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NarrativeCharacter_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::NarrativeCharacter_eventGetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHealth();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetHealth

// Begin Class ANarrativeCharacter Function GetLegsMesh
struct Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics
{
	struct NarrativeCharacter_eventGetLegsMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetLegsMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetLegsMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::NarrativeCharacter_eventGetLegsMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::NarrativeCharacter_eventGetLegsMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetLegsMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetLegsMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetLegsMesh

// Begin Class ANarrativeCharacter Function GetMarkerComponent
struct Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics
{
	struct NarrativeCharacter_eventGetMarkerComponent_Parms
	{
		UTeamMarkerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMarkerComponent_Parms, ReturnValue), Z_Construct_UClass_UTeamMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMarkerComponent", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NarrativeCharacter_eventGetMarkerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::NarrativeCharacter_eventGetMarkerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMarkerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTeamMarkerComponent**)Z_Param__Result=P_THIS->GetMarkerComponent();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMarkerComponent

// Begin Class ANarrativeCharacter Function GetMaxHealth
struct Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics
{
	struct NarrativeCharacter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NarrativeCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::NarrativeCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMaxHealth

// Begin Class ANarrativeCharacter Function GetMaxStamina
struct Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics
{
	struct NarrativeCharacter_eventGetMaxStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetMaxStamina", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NarrativeCharacter_eventGetMaxStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::NarrativeCharacter_eventGetMaxStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetMaxStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetMaxStamina

// Begin Class ANarrativeCharacter Function GetPercentToNextLevel
struct Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics
{
	struct NarrativeCharacter_eventGetPercentToNextLevel_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetPercentToNextLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetPercentToNextLevel", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NarrativeCharacter_eventGetPercentToNextLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::NarrativeCharacter_eventGetPercentToNextLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetPercentToNextLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPercentToNextLevel();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetPercentToNextLevel

// Begin Class ANarrativeCharacter Function GetStamina
struct Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics
{
	struct NarrativeCharacter_eventGetStamina_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetStamina", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NarrativeCharacter_eventGetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::NarrativeCharacter_eventGetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStamina();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetStamina

// Begin Class ANarrativeCharacter Function GetTorsoMesh
struct Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics
{
	struct NarrativeCharacter_eventGetTorsoMesh_Parms
	{
		USkeletalMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetTorsoMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetTorsoMesh", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::NarrativeCharacter_eventGetTorsoMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::NarrativeCharacter_eventGetTorsoMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetTorsoMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetTorsoMesh();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetTorsoMesh

// Begin Class ANarrativeCharacter Function GetWeapon
struct Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics
{
	struct NarrativeCharacter_eventGetWeapon_Parms
	{
		UWeaponItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Returns our equipped weapon item. This is the item in our inventory driving our weapon, it holds data like the weapons abilities, spread, damage etc.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Returns our equipped weapon item. This is the item in our inventory driving our weapon, it holds data like the weapons abilities, spread, damage etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetWeapon_Parms, ReturnValue), Z_Construct_UClass_UWeaponItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetWeapon", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NarrativeCharacter_eventGetWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::NarrativeCharacter_eventGetWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWeaponItem**)Z_Param__Result=P_THIS->GetWeapon();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetWeapon

// Begin Class ANarrativeCharacter Function GetWeaponVisual
struct Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics
{
	struct NarrativeCharacter_eventGetWeaponVisual_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "Comment", "//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetWeaponVisual_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetWeaponVisual", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NarrativeCharacter_eventGetWeaponVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::NarrativeCharacter_eventGetWeaponVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetWeaponVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetWeaponVisual();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetWeaponVisual

// Begin Class ANarrativeCharacter Function GetXP
struct Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics
{
	struct NarrativeCharacter_eventGetXP_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventGetXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "GetXP", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NarrativeCharacter_eventGetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::NarrativeCharacter_eventGetXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_GetXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_GetXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execGetXP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetXP();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function GetXP

// Begin Class ANarrativeCharacter Function IsAlive
struct Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics
{
	struct NarrativeCharacter_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventIsAlive_Parms), &Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NarrativeCharacter_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::NarrativeCharacter_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function IsAlive

// Begin Class ANarrativeCharacter Function IsWeaponHolstered
struct Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics
{
	struct NarrativeCharacter_eventIsWeaponHolstered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NarrativeCharacter_eventIsWeaponHolstered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventIsWeaponHolstered_Parms), &Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "IsWeaponHolstered", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NarrativeCharacter_eventIsWeaponHolstered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::NarrativeCharacter_eventIsWeaponHolstered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execIsWeaponHolstered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponHolstered();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function IsWeaponHolstered

// Begin Class ANarrativeCharacter Function LevelToXP
struct Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics
{
	struct NarrativeCharacter_eventLevelToXP_Parms
	{
		int32 Level;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventLevelToXP_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventLevelToXP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "LevelToXP", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NarrativeCharacter_eventLevelToXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::NarrativeCharacter_eventLevelToXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_LevelToXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_LevelToXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execLevelToXP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->LevelToXP(Z_Param_Level);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function LevelToXP

// Begin Class ANarrativeCharacter Function OnEndDialogue
static const FName NAME_ANarrativeCharacter_OnEndDialogue = FName(TEXT("OnEndDialogue"));
void ANarrativeCharacter::OnEndDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_OnEndDialogue);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when this character finishes being a dialogue avatar. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when this character finishes being a dialogue avatar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnEndDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function OnEndDialogue

// Begin Class ANarrativeCharacter Function OnEnterDialogue
static const FName NAME_ANarrativeCharacter_OnEnterDialogue = FName(TEXT("OnEnterDialogue"));
void ANarrativeCharacter::OnEnterDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_OnEnterDialogue);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "Comment", "//Called when this character becomes a dialogue avatar. \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Called when this character becomes a dialogue avatar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnEnterDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ANarrativeCharacter Function OnEnterDialogue

// Begin Class ANarrativeCharacter Function OnRep_bWeaponHolstered
struct Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "OnRep_bWeaponHolstered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execOnRep_bWeaponHolstered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bWeaponHolstered();
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function OnRep_bWeaponHolstered

// Begin Class ANarrativeCharacter Function SetAnimBPOverride
struct Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics
{
	struct NarrativeCharacter_eventSetAnimBPOverride_Parms
	{
		TSubclassOf<UAnimInstance> NewAnimBP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewAnimBP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::NewProp_NewAnimBP = { "NewAnimBP", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventSetAnimBPOverride_Parms, NewAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::NewProp_NewAnimBP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SetAnimBPOverride", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::NarrativeCharacter_eventSetAnimBPOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::NarrativeCharacter_eventSetAnimBPOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSetAnimBPOverride)
{
	P_GET_OBJECT(UClass,Z_Param_NewAnimBP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimBPOverride(Z_Param_NewAnimBP);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SetAnimBPOverride

// Begin Class ANarrativeCharacter Function SetAppearance
struct NarrativeCharacter_eventSetAppearance_Parms
{
	UCharacterAppearance* CharacterApperance;
};
static const FName NAME_ANarrativeCharacter_SetAppearance = FName(TEXT("SetAppearance"));
void ANarrativeCharacter::SetAppearance(UCharacterAppearance* CharacterApperance)
{
	UFunction* Func = FindFunctionChecked(NAME_ANarrativeCharacter_SetAppearance);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NarrativeCharacter_eventSetAppearance_Parms Parms;
		Parms.CharacterApperance=CharacterApperance;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetAppearance_Implementation(CharacterApperance);
	}
}
struct Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterApperance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::NewProp_CharacterApperance = { "CharacterApperance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventSetAppearance_Parms, CharacterApperance), Z_Construct_UClass_UCharacterAppearance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::NewProp_CharacterApperance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SetAppearance", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::PropPointers), sizeof(NarrativeCharacter_eventSetAppearance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::Function_MetaDataParams) };
static_assert(sizeof(NarrativeCharacter_eventSetAppearance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SetAppearance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SetAppearance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSetAppearance)
{
	P_GET_OBJECT(UCharacterAppearance,Z_Param_CharacterApperance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAppearance_Implementation(Z_Param_CharacterApperance);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SetAppearance

// Begin Class ANarrativeCharacter Function SetWeaponHolstered
struct Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics
{
	struct NarrativeCharacter_eventSetWeaponHolstered_Parms
	{
		bool bHolster;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|Getters/Setters" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHolster_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bHolster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHolster;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster_SetBit(void* Obj)
{
	((NarrativeCharacter_eventSetWeaponHolstered_Parms*)Obj)->bHolster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster = { "bHolster", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NarrativeCharacter_eventSetWeaponHolstered_Parms), &Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHolster_MetaData), NewProp_bHolster_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NewProp_bHolster,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "SetWeaponHolstered", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NarrativeCharacter_eventSetWeaponHolstered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::NarrativeCharacter_eventSetWeaponHolstered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execSetWeaponHolstered)
{
	P_GET_UBOOL(Z_Param_bHolster);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponHolstered(Z_Param_bHolster);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function SetWeaponHolstered

// Begin Class ANarrativeCharacter Function XPToLevel
struct Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics
{
	struct NarrativeCharacter_eventXPToLevel_Parms
	{
		float XP;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Narrative|NarrativeCharacter|Attributes" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventXPToLevel_Parms, XP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XP_MetaData), NewProp_XP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NarrativeCharacter_eventXPToLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANarrativeCharacter, nullptr, "XPToLevel", nullptr, nullptr, Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NarrativeCharacter_eventXPToLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::NarrativeCharacter_eventXPToLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANarrativeCharacter_XPToLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANarrativeCharacter_XPToLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANarrativeCharacter::execXPToLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_XP);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->XPToLevel(Z_Param_XP);
	P_NATIVE_END;
}
// End Class ANarrativeCharacter Function XPToLevel

// Begin Class ANarrativeCharacter
void ANarrativeCharacter::StaticRegisterNativesANarrativeCharacter()
{
	UClass* Class = ANarrativeCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAnimBPOverride", &ANarrativeCharacter::execClearAnimBPOverride },
		{ "GetCharacterLevel", &ANarrativeCharacter::execGetCharacterLevel },
		{ "GetEquipmentComponent", &ANarrativeCharacter::execGetEquipmentComponent },
		{ "GetFaceMesh", &ANarrativeCharacter::execGetFaceMesh },
		{ "GetFeetMesh", &ANarrativeCharacter::execGetFeetMesh },
		{ "GetHealth", &ANarrativeCharacter::execGetHealth },
		{ "GetLegsMesh", &ANarrativeCharacter::execGetLegsMesh },
		{ "GetMarkerComponent", &ANarrativeCharacter::execGetMarkerComponent },
		{ "GetMaxHealth", &ANarrativeCharacter::execGetMaxHealth },
		{ "GetMaxStamina", &ANarrativeCharacter::execGetMaxStamina },
		{ "GetPercentToNextLevel", &ANarrativeCharacter::execGetPercentToNextLevel },
		{ "GetStamina", &ANarrativeCharacter::execGetStamina },
		{ "GetTorsoMesh", &ANarrativeCharacter::execGetTorsoMesh },
		{ "GetWeapon", &ANarrativeCharacter::execGetWeapon },
		{ "GetWeaponVisual", &ANarrativeCharacter::execGetWeaponVisual },
		{ "GetXP", &ANarrativeCharacter::execGetXP },
		{ "IsAlive", &ANarrativeCharacter::execIsAlive },
		{ "IsWeaponHolstered", &ANarrativeCharacter::execIsWeaponHolstered },
		{ "LevelToXP", &ANarrativeCharacter::execLevelToXP },
		{ "OnRep_bWeaponHolstered", &ANarrativeCharacter::execOnRep_bWeaponHolstered },
		{ "SetAnimBPOverride", &ANarrativeCharacter::execSetAnimBPOverride },
		{ "SetAppearance", &ANarrativeCharacter::execSetAppearance },
		{ "SetWeaponHolstered", &ANarrativeCharacter::execSetWeaponHolstered },
		{ "XPToLevel", &ANarrativeCharacter::execXPToLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeCharacter);
UClass* Z_Construct_UClass_ANarrativeCharacter_NoRegister()
{
	return ANarrativeCharacter::StaticClass();
}
struct Z_Construct_UClass_ANarrativeCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**Base class for characters built on Narrative Pro framework. Sets up some core stuff you probably want - a navigation marker, interactions, inventories, etc. */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealFramework/NarrativeCharacter.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for characters built on Narrative Pro framework. Sets up some core stuff you probably want - a navigation marker, interactions, inventories, etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDied_MetaData[] = {
		{ "Category", "Narrative|NarrativeCharacter" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "Comment", "/**Base body mesh - use this for metahumans */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Base body mesh - use this for metahumans" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TorsoMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LegsMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeetMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HelmetMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlovesMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceMesh_MetaData[] = {
		{ "Category", "Narrative|Components|Body Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Narrative|Components|GAS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerComponent_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSetBase_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentComp_MetaData[] = {
		{ "Category", "Narrative|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttributes_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default attributes for a character for initializing on spawn/respawn.\n// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Default attributes for a character for initializing on spawn/respawn.\nThis is an instant GE that overrides the values for attributes that get reset on spawn/respawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupEffects_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// These effects are only applied one time on startup\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "These effects are only applied one time on startup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "// Default abilities to grant the player  \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Default abilities to grant the player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelExponentX_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "//Lowering this number means the base XP required per level is higher \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Lowering this number means the base XP required per level is higher" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelExponentY_MetaData[] = {
		{ "Category", "Narrative|Abilities" },
		{ "Comment", "//Upping this value means higher jumps between levels, ie levels will grow exponentially \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Upping this value means higher jumps between levels, ie levels will grow exponentially" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedWeaponVisual_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/**Weaponed weapon visual, should one exist. */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Weaponed weapon visual, should one exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponHolstered_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** True if the weapon is currently holstered, false otherwise. TODO: This should probably be in ANarrativeCharacter.  */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "True if the weapon is currently holstered, false otherwise. TODO: This should probably be in ANarrativeCharacter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedAnimBP_MetaData[] = {
		{ "Category", "Narrative|Animation" },
		{ "Comment", "// Default unarmed anim layer\n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Default unarmed anim layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAnimBP_MetaData[] = {
		{ "Category", "Narrative|Animation" },
		{ "Comment", "// Current override anim layer \n" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Current override anim layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnarmedCombatData_MetaData[] = {
		{ "Category", "Narrative|Trace" },
		{ "Comment", "/** Data specifically related to unarmed combat */" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeCharacter.h" },
		{ "ToolTip", "Data specifically related to unarmed combat" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LegsMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HelmetMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlovesMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSetBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentComp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAttributes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAbilities;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelExponentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelExponentY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedWeaponVisual;
	static void NewProp_bWeaponHolstered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponHolstered;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnarmedAnimBP;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideAnimBP;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnarmedCombatData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANarrativeCharacter_BPDamagedBy, "BPDamagedBy" }, // 1874096347
		{ &Z_Construct_UFunction_ANarrativeCharacter_ClearAnimBPOverride, "ClearAnimBPOverride" }, // 284587041
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetCharacterLevel, "GetCharacterLevel" }, // 1714753261
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetEquipmentComponent, "GetEquipmentComponent" }, // 704330751
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetFaceMesh, "GetFaceMesh" }, // 1752419721
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetFeetMesh, "GetFeetMesh" }, // 1329521373
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetHeadLookAtLocation, "GetHeadLookAtLocation" }, // 3055907105
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetHealth, "GetHealth" }, // 4188271426
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetLegsMesh, "GetLegsMesh" }, // 1790239564
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMarkerComponent, "GetMarkerComponent" }, // 3710431724
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMaxHealth, "GetMaxHealth" }, // 3790152558
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetMaxStamina, "GetMaxStamina" }, // 2513410169
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetPercentToNextLevel, "GetPercentToNextLevel" }, // 3467727690
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetStamina, "GetStamina" }, // 621067486
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetTorsoMesh, "GetTorsoMesh" }, // 7269130
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetWeapon, "GetWeapon" }, // 2496643385
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetWeaponVisual, "GetWeaponVisual" }, // 3325182054
		{ &Z_Construct_UFunction_ANarrativeCharacter_GetXP, "GetXP" }, // 1230823503
		{ &Z_Construct_UFunction_ANarrativeCharacter_IsAlive, "IsAlive" }, // 3668497127
		{ &Z_Construct_UFunction_ANarrativeCharacter_IsWeaponHolstered, "IsWeaponHolstered" }, // 754076340
		{ &Z_Construct_UFunction_ANarrativeCharacter_LevelToXP, "LevelToXP" }, // 2634821544
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnEndDialogue, "OnEndDialogue" }, // 293036731
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnEnterDialogue, "OnEnterDialogue" }, // 1298993400
		{ &Z_Construct_UFunction_ANarrativeCharacter_OnRep_bWeaponHolstered, "OnRep_bWeaponHolstered" }, // 1468653420
		{ &Z_Construct_UFunction_ANarrativeCharacter_SetAnimBPOverride, "SetAnimBPOverride" }, // 931001157
		{ &Z_Construct_UFunction_ANarrativeCharacter_SetAppearance, "SetAppearance" }, // 876877668
		{ &Z_Construct_UFunction_ANarrativeCharacter_SetWeaponHolstered, "SetWeaponHolstered" }, // 2581977157
		{ &Z_Construct_UFunction_ANarrativeCharacter_XPToLevel, "XPToLevel" }, // 3551883128
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OnDied = { "OnDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, OnDied), Z_Construct_UDelegateFunction_NarrativeArsenal_OnDied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDied_MetaData), NewProp_OnDied_MetaData) }; // 2631229624
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, BodyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMesh_MetaData), NewProp_BodyMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_TorsoMesh = { "TorsoMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, TorsoMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TorsoMesh_MetaData), NewProp_TorsoMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LegsMesh = { "LegsMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, LegsMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LegsMesh_MetaData), NewProp_LegsMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_FeetMesh = { "FeetMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, FeetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeetMesh_MetaData), NewProp_FeetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_HelmetMesh = { "HelmetMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, HelmetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HelmetMesh_MetaData), NewProp_HelmetMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_GlovesMesh = { "GlovesMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, GlovesMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlovesMesh_MetaData), NewProp_GlovesMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_FaceMesh = { "FaceMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, FaceMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceMesh_MetaData), NewProp_FaceMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComponent_MetaData), NewProp_MotionWarpingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, AbilitySystemComponent), Z_Construct_UClass_UNarrativeAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MarkerComponent = { "MarkerComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, MarkerComponent), Z_Construct_UClass_UTeamMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerComponent_MetaData), NewProp_MarkerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AttributeSetBase = { "AttributeSetBase", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, AttributeSetBase), Z_Construct_UClass_UNarrativeAttributeSetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSetBase_MetaData), NewProp_AttributeSetBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_EquipmentComp = { "EquipmentComp", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, EquipmentComp), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentComp_MetaData), NewProp_EquipmentComp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAttributes = { "DefaultAttributes", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, DefaultAttributes), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAttributes_MetaData), NewProp_DefaultAttributes_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects_Inner = { "StartupEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects = { "StartupEffects", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, StartupEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupEffects_MetaData), NewProp_StartupEffects_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities_Inner = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UNarrativeGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, DefaultAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbilities_MetaData), NewProp_DefaultAbilities_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentX = { "LevelExponentX", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, LevelExponentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelExponentX_MetaData), NewProp_LevelExponentX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentY = { "LevelExponentY", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, LevelExponentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelExponentY_MetaData), NewProp_LevelExponentY_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_SpawnedWeaponVisual = { "SpawnedWeaponVisual", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, SpawnedWeaponVisual), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedWeaponVisual_MetaData), NewProp_SpawnedWeaponVisual_MetaData) };
void Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered_SetBit(void* Obj)
{
	((ANarrativeCharacter*)Obj)->bWeaponHolstered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered = { "bWeaponHolstered", "OnRep_bWeaponHolstered", (EPropertyFlags)0x0020080100020035, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ANarrativeCharacter), &Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponHolstered_MetaData), NewProp_bWeaponHolstered_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedAnimBP = { "UnarmedAnimBP", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, UnarmedAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedAnimBP_MetaData), NewProp_UnarmedAnimBP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OverrideAnimBP = { "OverrideAnimBP", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, OverrideAnimBP), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideAnimBP_MetaData), NewProp_OverrideAnimBP_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedCombatData = { "UnarmedCombatData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANarrativeCharacter, UnarmedCombatData), Z_Construct_UScriptStruct_FUnarmedCombatData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnarmedCombatData_MetaData), NewProp_UnarmedCombatData_MetaData) }; // 660487530
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OnDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_BodyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_TorsoMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LegsMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_FeetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_HelmetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_GlovesMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_FaceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MotionWarpingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_MarkerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_AttributeSetBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_EquipmentComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_StartupEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_DefaultAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_LevelExponentY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_SpawnedWeaponVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_bWeaponHolstered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedAnimBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_OverrideAnimBP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANarrativeCharacter_Statics::NewProp_UnarmedCombatData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANarrativeCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANarrativeCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, IGameplayTagAssetInterface), false },  // 2592985258
	{ Z_Construct_UClass_UNarrativeTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANarrativeCharacter, INarrativeTeamAgentInterface), false },  // 1836146804
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeCharacter_Statics::ClassParams = {
	&ANarrativeCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeCharacter()
{
	if (!Z_Registration_Info_UClass_ANarrativeCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeCharacter.OuterSingleton, Z_Construct_UClass_ANarrativeCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeCharacter.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeCharacter>()
{
	return ANarrativeCharacter::StaticClass();
}
void ANarrativeCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bWeaponHolstered(TEXT("bWeaponHolstered"));
	const bool bIsValid = true
		&& Name_bWeaponHolstered == ClassReps[(int32)ENetFields_Private::bWeaponHolstered].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ANarrativeCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeCharacter);
ANarrativeCharacter::~ANarrativeCharacter() {}
// End Class ANarrativeCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnarmedCombatData::StaticStruct, Z_Construct_UScriptStruct_FUnarmedCombatData_Statics::NewStructOps, TEXT("UnarmedCombatData"), &Z_Registration_Info_UScriptStruct_UnarmedCombatData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnarmedCombatData), 660487530U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeCharacter, ANarrativeCharacter::StaticClass, TEXT("ANarrativeCharacter"), &Z_Registration_Info_UClass_ANarrativeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeCharacter), 1532597129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_3673650136(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeCharacter_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
