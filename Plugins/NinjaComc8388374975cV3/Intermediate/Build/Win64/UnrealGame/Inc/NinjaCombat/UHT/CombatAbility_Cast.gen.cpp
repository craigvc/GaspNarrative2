// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/AbilitySystem/Abilities/CombatAbility_Cast.h"
#include "GameplayAbilities/Public/Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTargetingSystem/Public/Types/TargetingSystemTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatAbility_Cast() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitTargetData_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJACOMBAT_API UClass* Z_Construct_UClass_UAbilityTask_SpawnCast_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Cast();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatAbility_Cast_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UCombatTargetActorModifierInterface_NoRegister();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatAnimationAbility();
NINJACOMBAT_API UClass* Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum ECombatCastTrigger
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatCastTrigger;
static UEnum* ECombatCastTrigger_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatCastTrigger.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatCastTrigger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("ECombatCastTrigger"));
	}
	return Z_Registration_Info_UEnum_ECombatCastTrigger.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatCastTrigger>()
{
	return ECombatCastTrigger_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbilityActivation.Comment", "/** The cast is triggered immediately, as soon as the Gameplay Ability starts. */" },
		{ "AbilityActivation.Name", "ECombatCastTrigger::AbilityActivation" },
		{ "AbilityActivation.ToolTip", "The cast is triggered immediately, as soon as the Gameplay Ability starts." },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Determines what will actually trigger the cast.\n */" },
		{ "GameplayEvent.Comment", "/**\n\x09 * The cast is triggered by the \"Combat.Event.Cast\" Gameplay Event, which can be triggered\n\x09 * by anything in the system, including the provided \"Cast\" Animation Notify.\n\x09 */" },
		{ "GameplayEvent.Name", "ECombatCastTrigger::GameplayEvent" },
		{ "GameplayEvent.ToolTip", "The cast is triggered by the \"Combat.Event.Cast\" Gameplay Event, which can be triggered\nby anything in the system, including the provided \"Cast\" Animation Notify." },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Determines what will actually trigger the cast." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatCastTrigger::AbilityActivation", (int64)ECombatCastTrigger::AbilityActivation },
		{ "ECombatCastTrigger::GameplayEvent", (int64)ECombatCastTrigger::GameplayEvent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"ECombatCastTrigger",
	"ECombatCastTrigger",
	Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger()
{
	if (!Z_Registration_Info_UEnum_ECombatCastTrigger.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatCastTrigger.InnerSingleton, Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatCastTrigger.InnerSingleton;
}
// End Enum ECombatCastTrigger

// Begin Enum ECombatCastTargeting
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatCastTargeting;
static UEnum* ECombatCastTargeting_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatCastTargeting.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatCastTargeting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("ECombatCastTargeting"));
	}
	return Z_Registration_Info_UEnum_ECombatCastTargeting.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatCastTargeting>()
{
	return ECombatCastTargeting_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Types of targets supported by the cast ability.\n *\n * The Cast Ability relies heavily on its targeting systems and supports the Gameplay Targeting\n * System, a standalone Cast Actor that works independently of the Gameplay Ability and the usual\n * Gameplay Ability Target Actor, that supports confirmation.\n *\n * The Targeting mechanism determines if this cast can benefit the caster or benefit other targets,\n * so whatever gets captured/filter by the Target logic will receive the Gameplay Effect.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "SpawnActor.Comment", "/**\n\x09 * The cast effect will be applied to all targets collected by a Spawned Actor.\n\x09 *\n\x09 * This is a \"fire-and-forget\" spawn, meaning that the Ability can end, and the actor will continue\n\x09 * applying its Gameplay Effect to any targets collected, while the actor itself is active. \n\x09 */" },
		{ "SpawnActor.Name", "ECombatCastTargeting::SpawnActor" },
		{ "SpawnActor.ToolTip", "The cast effect will be applied to all targets collected by a Spawned Actor.\n\nThis is a \"fire-and-forget\" spawn, meaning that the Ability can end, and the actor will continue\napplying its Gameplay Effect to any targets collected, while the actor itself is active." },
		{ "TargetingSystem.Comment", "/**\n\x09 * The cast effect will be applied to all targets collected via the Targeting System.\n\x09 *\n\x09 * You *could* do something similar using a Gameplay Ability Target Actor, but then you would have\n\x09 * the cost of spawning that actor or at least retrieving from the pool. If all you need is instant\n\x09 * targeting, the Targeting System is a great way to do so.\n\x09 */" },
		{ "TargetingSystem.Name", "ECombatCastTargeting::TargetingSystem" },
		{ "TargetingSystem.ToolTip", "The cast effect will be applied to all targets collected via the Targeting System.\n\nYou *could* do something similar using a Gameplay Ability Target Actor, but then you would have\nthe cost of spawning that actor or at least retrieving from the pool. If all you need is instant\ntargeting, the Targeting System is a great way to do so." },
		{ "ToolTip", "Types of targets supported by the cast ability.\n\nThe Cast Ability relies heavily on its targeting systems and supports the Gameplay Targeting\nSystem, a standalone Cast Actor that works independently of the Gameplay Ability and the usual\nGameplay Ability Target Actor, that supports confirmation.\n\nThe Targeting mechanism determines if this cast can benefit the caster or benefit other targets,\nso whatever gets captured/filter by the Target logic will receive the Gameplay Effect." },
		{ "WaitForConfirmation.Comment", "/**\n\x09 * The cast effect will be applied to all targets collected and confirmed by a Spawned Actor.\n\x09 *\n\x09 * This waits for confirmation, using the Gameplay Ability System targeting actors. The ability\n\x09 * will start the Wait Target Data task, spawn the actor and wait for confirmation of targets.\n\x09 *\n\x09 * Please note that the Cast Actor is also compatible with the GAS Targeting Actor, while also\n\x09 * being compatible with the Combat Actor pool. The actor will be retrieved from the pool if\n\x09 * the Avatar has a pool that contains the desired actor.\n\x09 */" },
		{ "WaitForConfirmation.Name", "ECombatCastTargeting::WaitForConfirmation" },
		{ "WaitForConfirmation.ToolTip", "The cast effect will be applied to all targets collected and confirmed by a Spawned Actor.\n\nThis waits for confirmation, using the Gameplay Ability System targeting actors. The ability\nwill start the Wait Target Data task, spawn the actor and wait for confirmation of targets.\n\nPlease note that the Cast Actor is also compatible with the GAS Targeting Actor, while also\nbeing compatible with the Combat Actor pool. The actor will be retrieved from the pool if\nthe Avatar has a pool that contains the desired actor." },
		{ "WaitForConfirmationAndSpawnActor.Comment", "/**\n\x09 * Once a target is confirmed, its location will be retrieved and a Cast Actor will be spawned.\n\x09 *\n\x09 * This is a hybrid strategy that can support complex behaviors, allowing players to confirm\n\x09 * targeting, using something like a UI element or decal, and then spawning an actor that will\n\x09 * effectively apply damage at that area.\n\x09 */" },
		{ "WaitForConfirmationAndSpawnActor.Name", "ECombatCastTargeting::WaitForConfirmationAndSpawnActor" },
		{ "WaitForConfirmationAndSpawnActor.ToolTip", "Once a target is confirmed, its location will be retrieved and a Cast Actor will be spawned.\n\nThis is a hybrid strategy that can support complex behaviors, allowing players to confirm\ntargeting, using something like a UI element or decal, and then spawning an actor that will\neffectively apply damage at that area." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatCastTargeting::TargetingSystem", (int64)ECombatCastTargeting::TargetingSystem },
		{ "ECombatCastTargeting::SpawnActor", (int64)ECombatCastTargeting::SpawnActor },
		{ "ECombatCastTargeting::WaitForConfirmation", (int64)ECombatCastTargeting::WaitForConfirmation },
		{ "ECombatCastTargeting::WaitForConfirmationAndSpawnActor", (int64)ECombatCastTargeting::WaitForConfirmationAndSpawnActor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"ECombatCastTargeting",
	"ECombatCastTargeting",
	Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting()
{
	if (!Z_Registration_Info_UEnum_ECombatCastTargeting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatCastTargeting.InnerSingleton, Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatCastTargeting.InnerSingleton;
}
// End Enum ECombatCastTargeting

// Begin Enum ECombatCastCommitTime
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombatCastCommitTime;
static UEnum* ECombatCastCommitTime_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombatCastCommitTime.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombatCastCommitTime.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("ECombatCastCommitTime"));
	}
	return Z_Registration_Info_UEnum_ECombatCastCommitTime.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatCastCommitTime>()
{
	return ECombatCastCommitTime_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbilityActivates.Comment", "/** The cost and cooldown are commited as soon as the Ability Activates. */" },
		{ "AbilityActivates.Name", "ECombatCastCommitTime::AbilityActivates" },
		{ "AbilityActivates.ToolTip", "The cost and cooldown are commited as soon as the Ability Activates." },
		{ "BlueprintType", "true" },
		{ "CastStarts.Comment", "/** The cost and cooldown are commited when the Cast starts (Gameplay Event). */" },
		{ "CastStarts.Name", "ECombatCastCommitTime::CastStarts" },
		{ "CastStarts.ToolTip", "The cost and cooldown are commited when the Cast starts (Gameplay Event)." },
		{ "Comment", "/**\n * Determines when the Cost and Cooldown are being commited.\n *\n * A Cast can have that happening at different times, all illustrated by this enum. If the commit\n * is happening after the activation, then the Cost and Cooldown are at least checked before the\n * Ability/Cast starts.\n */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "TargetsAcquired.Comment", "/** The cost and cooldown are commited when targets are acquired. */" },
		{ "TargetsAcquired.Name", "ECombatCastCommitTime::TargetsAcquired" },
		{ "TargetsAcquired.ToolTip", "The cost and cooldown are commited when targets are acquired." },
		{ "ToolTip", "Determines when the Cost and Cooldown are being commited.\n\nA Cast can have that happening at different times, all illustrated by this enum. If the commit\nis happening after the activation, then the Cost and Cooldown are at least checked before the\nAbility/Cast starts." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombatCastCommitTime::AbilityActivates", (int64)ECombatCastCommitTime::AbilityActivates },
		{ "ECombatCastCommitTime::CastStarts", (int64)ECombatCastCommitTime::CastStarts },
		{ "ECombatCastCommitTime::TargetsAcquired", (int64)ECombatCastCommitTime::TargetsAcquired },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"ECombatCastCommitTime",
	"ECombatCastCommitTime",
	Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime()
{
	if (!Z_Registration_Info_UEnum_ECombatCastCommitTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombatCastCommitTime.InnerSingleton, Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombatCastCommitTime.InnerSingleton;
}
// End Enum ECombatCastCommitTime

// Begin Class UCombatAbility_Cast Function CastToTargets
struct CombatAbility_Cast_eventCastToTargets_Parms
{
	TArray<AActor*> TargetsFound;
};
static const FName NAME_UCombatAbility_Cast_CastToTargets = FName(TEXT("CastToTargets"));
void UCombatAbility_Cast::CastToTargets(TArray<AActor*> const& TargetsFound)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_CastToTargets);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventCastToTargets_Parms Parms;
		Parms.TargetsFound=TargetsFound;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CastToTargets_Implementation(TargetsFound);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Applies the cast effect to all targets found.\n\x09 *\n\x09 * @param TargetsFound\n\x09 *\x09\x09""Array of targets that will receive the Gameplay Effect from this cast.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Applies the cast effect to all targets found.\n\n@param TargetsFound\n             Array of targets that will receive the Gameplay Effect from this cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetsFound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetsFound_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetsFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::NewProp_TargetsFound_Inner = { "TargetsFound", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::NewProp_TargetsFound = { "TargetsFound", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventCastToTargets_Parms, TargetsFound), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetsFound_MetaData), NewProp_TargetsFound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::NewProp_TargetsFound_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::NewProp_TargetsFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "CastToTargets", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::PropPointers), sizeof(CombatAbility_Cast_eventCastToTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventCastToTargets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execCastToTargets)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetsFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CastToTargets_Implementation(Z_Param_Out_TargetsFound);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function CastToTargets

// Begin Class UCombatAbility_Cast Function CollectTargetsFromTargetingSystem
struct Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Collects targets using the Gameplay Targeting System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Collects targets using the Gameplay Targeting System." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "CollectTargetsFromTargetingSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execCollectTargetsFromTargetingSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CollectTargetsFromTargetingSystem();
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function CollectTargetsFromTargetingSystem

// Begin Class UCombatAbility_Cast Function CreateTargetingSource
struct CombatAbility_Cast_eventCreateTargetingSource_Parms
{
	FGameplayAbilityTargetingLocationInfo ReturnValue;
};
static const FName NAME_UCombatAbility_Cast_CreateTargetingSource = FName(TEXT("CreateTargetingSource"));
FGameplayAbilityTargetingLocationInfo UCombatAbility_Cast::CreateTargetingSource() const
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_CreateTargetingSource);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventCreateTargetingSource_Parms Parms;
		const_cast<UCombatAbility_Cast*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCombatAbility_Cast*>(this)->CreateTargetingSource_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Creates a targeting source that can be used by the Targeting System or Actor.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09""A Source Location Info for targeting. By default, this function creates an\n\x09 *\x09\x09""Actor Transform Location Type, using the Avatar's Location as its value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Creates a targeting source that can be used by the Targeting System or Actor.\n\n@return\n             A Source Location Info for targeting. By default, this function creates an\n             Actor Transform Location Type, using the Avatar's Location as its value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventCreateTargetingSource_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(0, nullptr) }; // 1311887580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "CreateTargetingSource", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::PropPointers), sizeof(CombatAbility_Cast_eventCreateTargetingSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventCreateTargetingSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execCreateTargetingSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayAbilityTargetingLocationInfo*)Z_Param__Result=P_THIS->CreateTargetingSource_Implementation();
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function CreateTargetingSource

// Begin Class UCombatAbility_Cast Function GetTargetingSourceTransform
struct CombatAbility_Cast_eventGetTargetingSourceTransform_Parms
{
	FTransform ReturnValue;
};
static const FName NAME_UCombatAbility_Cast_GetTargetingSourceTransform = FName(TEXT("GetTargetingSourceTransform"));
FTransform UCombatAbility_Cast::GetTargetingSourceTransform() const
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_GetTargetingSourceTransform);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventGetTargetingSourceTransform_Parms Parms;
		const_cast<UCombatAbility_Cast*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UCombatAbility_Cast*>(this)->GetTargetingSourceTransform_Implementation();
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Defines the Transform used as the Cast Source.\n\x09 *\n\x09 * Used by the Targeting System as the Source Location and also for the Spawned Actors\n\x09 * as their original transform. Override this if you need something different from the\n\x09 * Avatar's location.\n\x09 *\n\x09 * @return\n\x09 *\x09\x09The Transform used as a source for all Targeting modes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Defines the Transform used as the Cast Source.\n\nUsed by the Targeting System as the Source Location and also for the Spawned Actors\nas their original transform. Override this if you need something different from the\nAvatar's location.\n\n@return\n             The Transform used as a source for all Targeting modes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventGetTargetingSourceTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "GetTargetingSourceTransform", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::PropPointers), sizeof(CombatAbility_Cast_eventGetTargetingSourceTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventGetTargetingSourceTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execGetTargetingSourceTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTargetingSourceTransform_Implementation();
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function GetTargetingSourceTransform

// Begin Class UCombatAbility_Cast Function HandleCastActorReady
struct CombatAbility_Cast_eventHandleCastActorReady_Parms
{
	const UNinjaCombatCastRequest* OriginalRequest;
	AActor* SpawnedActor;
};
static const FName NAME_UCombatAbility_Cast_HandleCastActorReady = FName(TEXT("HandleCastActorReady"));
void UCombatAbility_Cast::HandleCastActorReady(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_HandleCastActorReady);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventHandleCastActorReady_Parms Parms;
		Parms.OriginalRequest=OriginalRequest;
		Parms.SpawnedActor=SpawnedActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleCastActorReady_Implementation(OriginalRequest, SpawnedActor);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Handles a Cast Actor that has been initialized and not spawned yet.\n\x09 *\n\x09 * This function can be extended to set any pre-requisite data to the Cast Actor,\n\x09 * that should be available before the actor begins play or is activated from the pool.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Handles a Cast Actor that has been initialized and not spawned yet.\n\nThis function can be extended to set any pre-requisite data to the Cast Actor,\nthat should be available before the actor begins play or is activated from the pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalRequest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::NewProp_OriginalRequest = { "OriginalRequest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleCastActorReady_Parms, OriginalRequest), Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalRequest_MetaData), NewProp_OriginalRequest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleCastActorReady_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::NewProp_OriginalRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "HandleCastActorReady", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::PropPointers), sizeof(CombatAbility_Cast_eventHandleCastActorReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventHandleCastActorReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execHandleCastActorReady)
{
	P_GET_OBJECT(UNinjaCombatCastRequest,Z_Param_OriginalRequest);
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCastActorReady_Implementation(Z_Param_OriginalRequest,Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function HandleCastActorReady

// Begin Class UCombatAbility_Cast Function HandleCastActorSpawned
struct CombatAbility_Cast_eventHandleCastActorSpawned_Parms
{
	const UNinjaCombatCastRequest* OriginalRequest;
	AActor* SpawnedActor;
};
static const FName NAME_UCombatAbility_Cast_HandleCastActorSpawned = FName(TEXT("HandleCastActorSpawned"));
void UCombatAbility_Cast::HandleCastActorSpawned(const UNinjaCombatCastRequest* OriginalRequest, AActor* SpawnedActor)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_HandleCastActorSpawned);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventHandleCastActorSpawned_Parms Parms;
		Parms.OriginalRequest=OriginalRequest;
		Parms.SpawnedActor=SpawnedActor;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleCastActorSpawned_Implementation(OriginalRequest, SpawnedActor);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Handles a Cast Actor that has been spawned or activated from the pool.\n\x09 *\n\x09 * This function can be extended to handle any logic when the Cat Actor has finished\n\x09 * spawned or activated from the pool. Just keep in mind that it will only run in the\n\x09 * authority/local player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Handles a Cast Actor that has been spawned or activated from the pool.\n\nThis function can be extended to handle any logic when the Cat Actor has finished\nspawned or activated from the pool. Just keep in mind that it will only run in the\nauthority/local player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalRequest;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::NewProp_OriginalRequest = { "OriginalRequest", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleCastActorSpawned_Parms, OriginalRequest), Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalRequest_MetaData), NewProp_OriginalRequest_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleCastActorSpawned_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::NewProp_OriginalRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "HandleCastActorSpawned", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::PropPointers), sizeof(CombatAbility_Cast_eventHandleCastActorSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventHandleCastActorSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execHandleCastActorSpawned)
{
	P_GET_OBJECT(UNinjaCombatCastRequest,Z_Param_OriginalRequest);
	P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCastActorSpawned_Implementation(Z_Param_OriginalRequest,Z_Param_SpawnedActor);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function HandleCastActorSpawned

// Begin Class UCombatAbility_Cast Function HandleTargetDataCancelled
struct CombatAbility_Cast_eventHandleTargetDataCancelled_Parms
{
	FGameplayAbilityTargetDataHandle Data;
};
static const FName NAME_UCombatAbility_Cast_HandleTargetDataCancelled = FName(TEXT("HandleTargetDataCancelled"));
void UCombatAbility_Cast::HandleTargetDataCancelled(FGameplayAbilityTargetDataHandle const& Data)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_HandleTargetDataCancelled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventHandleTargetDataCancelled_Parms Parms;
		Parms.Data=Data;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleTargetDataCancelled_Implementation(Data);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Handles the cancellation of target selection.\n\x09 *\n\x09 * By default, it will cancel the Ability itself, but this can be overriden to do other things,\n\x09 * such as playing a new Montage, triggering a Gameplay Cue or interrupting any other effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Handles the cancellation of target selection.\n\nBy default, it will cancel the Ability itself, but this can be overriden to do other things,\nsuch as playing a new Montage, triggering a Gameplay Cue or interrupting any other effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleTargetDataCancelled_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "HandleTargetDataCancelled", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::PropPointers), sizeof(CombatAbility_Cast_eventHandleTargetDataCancelled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventHandleTargetDataCancelled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execHandleTargetDataCancelled)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetDataCancelled_Implementation(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function HandleTargetDataCancelled

// Begin Class UCombatAbility_Cast Function HandleTargetDataConfirmed
struct CombatAbility_Cast_eventHandleTargetDataConfirmed_Parms
{
	FGameplayAbilityTargetDataHandle Data;
};
static const FName NAME_UCombatAbility_Cast_HandleTargetDataConfirmed = FName(TEXT("HandleTargetDataConfirmed"));
void UCombatAbility_Cast::HandleTargetDataConfirmed(FGameplayAbilityTargetDataHandle const& Data)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_HandleTargetDataConfirmed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventHandleTargetDataConfirmed_Parms Parms;
		Parms.Data=Data;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleTargetDataConfirmed_Implementation(Data);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Handles all targets collected from the Targeting Actor, based on the \"Targeting\" property.\n\x09 *\n\x09 * By default, it will do one of two things, depending on the class configuration: It can\n\x09 * apply the Gameplay Effect to all targets collected by the Targeting Actor right away,\n\x09 * or it can spawn the Cast Actor, with the Effect Spec and allowing it to apply to targets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Handles all targets collected from the Targeting Actor, based on the \"Targeting\" property.\n\nBy default, it will do one of two things, depending on the class configuration: It can\napply the Gameplay Effect to all targets collected by the Targeting Actor right away,\nor it can spawn the Cast Actor, with the Effect Spec and allowing it to apply to targets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleTargetDataConfirmed_Parms, Data), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2741862775
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "HandleTargetDataConfirmed", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::PropPointers), sizeof(CombatAbility_Cast_eventHandleTargetDataConfirmed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventHandleTargetDataConfirmed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execHandleTargetDataConfirmed)
{
	P_GET_STRUCT_REF(FGameplayAbilityTargetDataHandle,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetDataConfirmed_Implementation(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function HandleTargetDataConfirmed

// Begin Class UCombatAbility_Cast Function HandleTargetsReady
struct CombatAbility_Cast_eventHandleTargetsReady_Parms
{
	FTargetingRequestHandle TargetingRequestHandle;
};
static const FName NAME_UCombatAbility_Cast_HandleTargetsReady = FName(TEXT("HandleTargetsReady"));
void UCombatAbility_Cast::HandleTargetsReady(FTargetingRequestHandle TargetingRequestHandle)
{
	UFunction* Func = FindFunctionChecked(NAME_UCombatAbility_Cast_HandleTargetsReady);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		CombatAbility_Cast_eventHandleTargetsReady_Parms Parms;
		Parms.TargetingRequestHandle=TargetingRequestHandle;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HandleTargetsReady_Implementation(TargetingRequestHandle);
	}
}
struct Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cast Ability" },
		{ "Comment", "/**\n\x09 * Handles targets collected using the Gameplay Targeting System.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Handles targets collected using the Gameplay Targeting System." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingRequestHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::NewProp_TargetingRequestHandle = { "TargetingRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventHandleTargetsReady_Parms, TargetingRequestHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(0, nullptr) }; // 1432709645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::NewProp_TargetingRequestHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "HandleTargetsReady", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::PropPointers), sizeof(CombatAbility_Cast_eventHandleTargetsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::Function_MetaDataParams) };
static_assert(sizeof(CombatAbility_Cast_eventHandleTargetsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execHandleTargetsReady)
{
	P_GET_STRUCT(FTargetingRequestHandle,Z_Param_TargetingRequestHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTargetsReady_Implementation(Z_Param_TargetingRequestHandle);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function HandleTargetsReady

// Begin Class UCombatAbility_Cast Function SpawnCastActor
struct Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics
{
	struct CombatAbility_Cast_eventSpawnCastActor_Parms
	{
		UNinjaCombatCastRequest* CastRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Spawns the Targeting Actor using the Spawn Task and allows the Ability to end.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Spawns the Targeting Actor using the Spawn Task and allows the Ability to end." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::NewProp_CastRequest = { "CastRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CombatAbility_Cast_eventSpawnCastActor_Parms, CastRequest), Z_Construct_UClass_UNinjaCombatCastRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::NewProp_CastRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "SpawnCastActor", nullptr, nullptr, Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::CombatAbility_Cast_eventSpawnCastActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::CombatAbility_Cast_eventSpawnCastActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execSpawnCastActor)
{
	P_GET_OBJECT(UNinjaCombatCastRequest,Z_Param_CastRequest);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnCastActor(Z_Param_CastRequest);
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function SpawnCastActor

// Begin Class UCombatAbility_Cast Function SpawnTargetingActorAndWaitConfirmation
struct Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Spawns the Targeting Actor using the Wait Confirmation Task and waits for confirmation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Spawns the Targeting Actor using the Wait Confirmation Task and waits for confirmation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "SpawnTargetingActorAndWaitConfirmation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execSpawnTargetingActorAndWaitConfirmation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnTargetingActorAndWaitConfirmation();
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function SpawnTargetingActorAndWaitConfirmation

// Begin Class UCombatAbility_Cast Function StartCast
struct Z_Construct_UFunction_UCombatAbility_Cast_StartCast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ninja Combat|Abilities" },
		{ "Comment", "/**\n\x09 * Starts the Cast, using the appropriate strategy, as per the Ability Setup.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Starts the Cast, using the appropriate strategy, as per the Ability Setup." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatAbility_Cast_StartCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatAbility_Cast, nullptr, "StartCast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatAbility_Cast_StartCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatAbility_Cast_StartCast_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatAbility_Cast_StartCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatAbility_Cast_StartCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatAbility_Cast::execStartCast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCast();
	P_NATIVE_END;
}
// End Class UCombatAbility_Cast Function StartCast

// Begin Class UCombatAbility_Cast
void UCombatAbility_Cast::StaticRegisterNativesUCombatAbility_Cast()
{
	UClass* Class = UCombatAbility_Cast::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CastToTargets", &UCombatAbility_Cast::execCastToTargets },
		{ "CollectTargetsFromTargetingSystem", &UCombatAbility_Cast::execCollectTargetsFromTargetingSystem },
		{ "CreateTargetingSource", &UCombatAbility_Cast::execCreateTargetingSource },
		{ "GetTargetingSourceTransform", &UCombatAbility_Cast::execGetTargetingSourceTransform },
		{ "HandleCastActorReady", &UCombatAbility_Cast::execHandleCastActorReady },
		{ "HandleCastActorSpawned", &UCombatAbility_Cast::execHandleCastActorSpawned },
		{ "HandleTargetDataCancelled", &UCombatAbility_Cast::execHandleTargetDataCancelled },
		{ "HandleTargetDataConfirmed", &UCombatAbility_Cast::execHandleTargetDataConfirmed },
		{ "HandleTargetsReady", &UCombatAbility_Cast::execHandleTargetsReady },
		{ "SpawnCastActor", &UCombatAbility_Cast::execSpawnCastActor },
		{ "SpawnTargetingActorAndWaitConfirmation", &UCombatAbility_Cast::execSpawnTargetingActorAndWaitConfirmation },
		{ "StartCast", &UCombatAbility_Cast::execStartCast },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatAbility_Cast);
UClass* Z_Construct_UClass_UCombatAbility_Cast_NoRegister()
{
	return UCombatAbility_Cast::StaticClass();
}
struct Z_Construct_UClass_UCombatAbility_Cast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles a cast, something like a Buff, Incantation or Area of Effect.\n */" },
		{ "IncludePath", "AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles a cast, something like a Buff, Incantation or Area of Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastTrigger_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * Determines when the casting will actually happen \n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Determines when the casting will actually happen" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Targeting_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * The logic used by this Ability to collect its targets.\n\x09 *\n\x09 * Make sure to check each comment in the Combat Cast Targeting struct to understand all\n\x09 * options available for targeting.\n\x09 * \n\x09 * The logic will determine if this ability targets its owner or external targets, the ability\n\x09 * itself is agnostic to that, and it could even benefit both, without additional handling.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "The logic used by this Ability to collect its targets.\n\nMake sure to check each comment in the Combat Cast Targeting struct to understand all\noptions available for targeting.\n\nThe logic will determine if this ability targets its owner or external targets, the ability\nitself is agnostic to that, and it could even benefit both, without additional handling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommitTime_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * Determines when the Ability Cost and Cooldown are commited.\n\x09 *\n\x09 * If the Cost and Cooldown are not commited when the Ability starts, the Ability will at least\n\x09 * perform a check for these when it activates.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Determines when the Ability Cost and Cooldown are commited.\n\nIf the Cost and Cooldown are not commited when the Ability starts, the Ability will at least\nperform a check for these when it activates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastEffectClass_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * Gameplay Effect applied to any target collected by the Cast Ability.\n\x09 *\n\x09 * The logic is fully contained in the Targeting logic (targeting preset, or actors/confirmation),\n\x09 * and the Ability does not know what type of target (self, allies, enemies, etc.) is receiving\n\x09 * the effect.\n\x09 *\n\x09 * If you need lots of flexibility, covering multiple types of target, then create a Gameplay\n\x09 * Effect that applies multiple other effects to targets, based on certain criteria, such as the\n\x09 * presence of tags or other custom ones.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Gameplay Effect applied to any target collected by the Cast Ability.\n\nThe logic is fully contained in the Targeting logic (targeting preset, or actors/confirmation),\nand the Ability does not know what type of target (self, allies, enemies, etc.) is receiving\nthe effect.\n\nIf you need lots of flexibility, covering multiple types of target, then create a Gameplay\nEffect that applies multiple other effects to targets, based on certain criteria, such as the\npresence of tags or other custom ones." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastEffectLevel_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/** Level to apply the Gameplay Effect. */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Level to apply the Gameplay Effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingPreset_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/** The Targeting Preset used to collect targets for the cast. */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::TargetingSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "The Targeting Preset used to collect targets for the cast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerformAsyncTargeting_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/** Determines if Targeting is done asynchronously. */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::TargetingSystem" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Determines if Targeting is done asynchronously." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingActorClass_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * The Gameplay Ability Target Actor spawned to collect targets and deliberately confirm them.\n\x09 *\n\x09 * This Actor is responsible for collecting targets and at some point confirm back to the\n\x09 * ability so the ability can apply the Gameplay Effect to all confirmed targets.\n\x09 *\n\x09 * The Ability will try to retrieve this actor from the Avatar's Actor Pool.\n\x09 */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::WaitForConfirmation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "The Gameplay Ability Target Actor spawned to collect targets and deliberately confirm them.\n\nThis Actor is responsible for collecting targets and at some point confirm back to the\nability so the ability can apply the Gameplay Effect to all confirmed targets.\n\nThe Ability will try to retrieve this actor from the Avatar's Actor Pool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionWhenConfirmed_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/** An optional Montage Section name used when the targeting is confirmed. */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::WaitForConfirmation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "An optional Montage Section name used when the targeting is confirmed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionWhenCancelled_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/** An optional Montage Section name used when the targeting is confirmed. */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::WaitForConfirmation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "An optional Montage Section name used when the targeting is confirmed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfirmationType_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * Type of confirmation expected for the targeting.\n\x09 *\n\x09 * For instant confirmations, without any visual elements, you might want to consider using\n\x09 * the Targeting System instead, which is also supported by this Cast Ability. That has the\n\x09 * benefit of not requiring any actors and therefor it's overhead.\n\x09 */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::WaitForConfirmation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "Type of confirmation expected for the targeting.\n\nFor instant confirmations, without any visual elements, you might want to consider using\nthe Targeting System instead, which is also supported by this Cast Ability. That has the\nbenefit of not requiring any actors and therefor it's overhead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastActorClass_MetaData[] = {
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * The Cast Actor spawned to collect targets and apply the Gameplay Effect.\n\x09 *\n\x09 * This actor is self-contained and will receive a full Gameplay Effect Spec Handle that\n\x09 * can be used to apply the Gameplay Effect to any targets collected by it, in any way.\n\x09 *\n\x09 * The Ability will try to retrieve this actor from the Avatar's Actor Pool. Must be a\n\x09 * valid implementation of \"CombatCastInterface\".\n\x09 */" },
		{ "EditCondition", "Targeting == ECombatCastTargeting::SpawnActor || Targeting == ECombatCastTargeting::WaitForConfirmationAndSpawnActor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "MustImplement", "/Script/NinjaCombat.CombatCastInterface" },
		{ "ToolTip", "The Cast Actor spawned to collect targets and apply the Gameplay Effect.\n\nThis actor is self-contained and will receive a full Gameplay Effect Spec Handle that\ncan be used to apply the Gameplay Effect to any targets collected by it, in any way.\n\nThe Ability will try to retrieve this actor from the Avatar's Actor Pool. Must be a\nvalid implementation of \"CombatCastInterface\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticsGameplayCue_MetaData[] = {
		{ "Categories", "GameplayCue" },
		{ "Category", "Combat Ability|Cast" },
		{ "Comment", "/**\n\x09 * A Gameplay Tag for the Cue applied when the cast succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
		{ "ToolTip", "A Gameplay Tag for the Cue applied when the cast succeeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastEventTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetingTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCastTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaitTargetConfirmationTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/Abilities/CombatAbility_Cast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CastTrigger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CastTrigger;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Targeting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Targeting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitTime_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CommitTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastEffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CastEffectLevel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
	static void NewProp_bPerformAsyncTargeting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformAsyncTargeting;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetingActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionWhenConfirmed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionWhenCancelled;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConfirmationType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CastActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CosmeticsGameplayCue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CastEventTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnCastTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaitTargetConfirmationTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatAbility_Cast_CastToTargets, "CastToTargets" }, // 1669467139
		{ &Z_Construct_UFunction_UCombatAbility_Cast_CollectTargetsFromTargetingSystem, "CollectTargetsFromTargetingSystem" }, // 214746808
		{ &Z_Construct_UFunction_UCombatAbility_Cast_CreateTargetingSource, "CreateTargetingSource" }, // 50560933
		{ &Z_Construct_UFunction_UCombatAbility_Cast_GetTargetingSourceTransform, "GetTargetingSourceTransform" }, // 3567312508
		{ &Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorReady, "HandleCastActorReady" }, // 1370815722
		{ &Z_Construct_UFunction_UCombatAbility_Cast_HandleCastActorSpawned, "HandleCastActorSpawned" }, // 728643115
		{ &Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataCancelled, "HandleTargetDataCancelled" }, // 3244225678
		{ &Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetDataConfirmed, "HandleTargetDataConfirmed" }, // 2251834901
		{ &Z_Construct_UFunction_UCombatAbility_Cast_HandleTargetsReady, "HandleTargetsReady" }, // 1826646139
		{ &Z_Construct_UFunction_UCombatAbility_Cast_SpawnCastActor, "SpawnCastActor" }, // 1135927765
		{ &Z_Construct_UFunction_UCombatAbility_Cast_SpawnTargetingActorAndWaitConfirmation, "SpawnTargetingActorAndWaitConfirmation" }, // 1832585708
		{ &Z_Construct_UFunction_UCombatAbility_Cast_StartCast, "StartCast" }, // 2461666981
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatAbility_Cast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastTrigger = { "CastTrigger", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CastTrigger), Z_Construct_UEnum_NinjaCombat_ECombatCastTrigger, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastTrigger_MetaData), NewProp_CastTrigger_MetaData) }; // 1872463302
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_Targeting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_Targeting = { "Targeting", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, Targeting), Z_Construct_UEnum_NinjaCombat_ECombatCastTargeting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Targeting_MetaData), NewProp_Targeting_MetaData) }; // 3300246896
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CommitTime_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CommitTime = { "CommitTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CommitTime), Z_Construct_UEnum_NinjaCombat_ECombatCastCommitTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommitTime_MetaData), NewProp_CommitTime_MetaData) }; // 1155219122
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastEffectClass = { "CastEffectClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CastEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastEffectClass_MetaData), NewProp_CastEffectClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastEffectLevel = { "CastEffectLevel", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CastEffectLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastEffectLevel_MetaData), NewProp_CastEffectLevel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingPreset_MetaData), NewProp_TargetingPreset_MetaData) };
void Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_bPerformAsyncTargeting_SetBit(void* Obj)
{
	((UCombatAbility_Cast*)Obj)->bPerformAsyncTargeting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_bPerformAsyncTargeting = { "bPerformAsyncTargeting", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCombatAbility_Cast), &Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_bPerformAsyncTargeting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerformAsyncTargeting_MetaData), NewProp_bPerformAsyncTargeting_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_TargetingActorClass = { "TargetingActorClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, TargetingActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingActorClass_MetaData), NewProp_TargetingActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_SectionWhenConfirmed = { "SectionWhenConfirmed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, SectionWhenConfirmed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionWhenConfirmed_MetaData), NewProp_SectionWhenConfirmed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_SectionWhenCancelled = { "SectionWhenCancelled", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, SectionWhenCancelled), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionWhenCancelled_MetaData), NewProp_SectionWhenCancelled_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_ConfirmationType = { "ConfirmationType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, ConfirmationType), Z_Construct_UEnum_GameplayAbilities_EGameplayTargetingConfirmation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfirmationType_MetaData), NewProp_ConfirmationType_MetaData) }; // 687318860
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastActorClass = { "CastActorClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CastActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastActorClass_MetaData), NewProp_CastActorClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CosmeticsGameplayCue = { "CosmeticsGameplayCue", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CosmeticsGameplayCue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CosmeticsGameplayCue_MetaData), NewProp_CosmeticsGameplayCue_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastEventTask = { "CastEventTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, CastEventTask), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastEventTask_MetaData), NewProp_CastEventTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_TargetingTask = { "TargetingTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, TargetingTask), Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetingTask_MetaData), NewProp_TargetingTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_SpawnCastTask = { "SpawnCastTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, SpawnCastTask), Z_Construct_UClass_UAbilityTask_SpawnCast_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCastTask_MetaData), NewProp_SpawnCastTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_WaitTargetConfirmationTask = { "WaitTargetConfirmationTask", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatAbility_Cast, WaitTargetConfirmationTask), Z_Construct_UClass_UAbilityTask_WaitTargetData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaitTargetConfirmationTask_MetaData), NewProp_WaitTargetConfirmationTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatAbility_Cast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastTrigger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_Targeting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_Targeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CommitTime_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CommitTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastEffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastEffectLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_TargetingPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_bPerformAsyncTargeting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_TargetingActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_SectionWhenConfirmed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_SectionWhenCancelled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_ConfirmationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CosmeticsGameplayCue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_CastEventTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_TargetingTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_SpawnCastTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatAbility_Cast_Statics::NewProp_WaitTargetConfirmationTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Cast_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatAbility_Cast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaCombatAnimationAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Cast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCombatAbility_Cast_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCombatTargetActorModifierInterface_NoRegister, (int32)VTABLE_OFFSET(UCombatAbility_Cast, ICombatTargetActorModifierInterface), false },  // 2957859729
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatAbility_Cast_Statics::ClassParams = {
	&UCombatAbility_Cast::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatAbility_Cast_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Cast_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatAbility_Cast_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatAbility_Cast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatAbility_Cast()
{
	if (!Z_Registration_Info_UClass_UCombatAbility_Cast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatAbility_Cast.OuterSingleton, Z_Construct_UClass_UCombatAbility_Cast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatAbility_Cast.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UCombatAbility_Cast>()
{
	return UCombatAbility_Cast::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatAbility_Cast);
UCombatAbility_Cast::~UCombatAbility_Cast() {}
// End Class UCombatAbility_Cast

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECombatCastTrigger_StaticEnum, TEXT("ECombatCastTrigger"), &Z_Registration_Info_UEnum_ECombatCastTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1872463302U) },
		{ ECombatCastTargeting_StaticEnum, TEXT("ECombatCastTargeting"), &Z_Registration_Info_UEnum_ECombatCastTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3300246896U) },
		{ ECombatCastCommitTime_StaticEnum, TEXT("ECombatCastCommitTime"), &Z_Registration_Info_UEnum_ECombatCastCommitTime, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1155219122U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatAbility_Cast, UCombatAbility_Cast::StaticClass, TEXT("UCombatAbility_Cast"), &Z_Registration_Info_UClass_UCombatAbility_Cast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatAbility_Cast), 429406055U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_3948373642(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Abilities_CombatAbility_Cast_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
