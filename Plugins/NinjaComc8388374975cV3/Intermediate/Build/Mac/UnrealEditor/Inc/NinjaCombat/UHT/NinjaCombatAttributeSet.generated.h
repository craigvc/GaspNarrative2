// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/NinjaCombatAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef NINJACOMBAT_NinjaCombatAttributeSet_generated_h
#error "NinjaCombatAttributeSet.generated.h already included, missing '#pragma once' in NinjaCombatAttributeSet.h"
#endif
#define NINJACOMBAT_NinjaCombatAttributeSet_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_StaggerDuration); \
	DECLARE_FUNCTION(execOnRep_PoiseRecoveryInterval); \
	DECLARE_FUNCTION(execOnRep_PoiseRecovery); \
	DECLARE_FUNCTION(execOnRep_PoiseDamage); \
	DECLARE_FUNCTION(execOnRep_Poise); \
	DECLARE_FUNCTION(execOnRep_LastStandHealthPercent); \
	DECLARE_FUNCTION(execOnRep_LastStandCount); \
	DECLARE_FUNCTION(execOnRep_ArmorReduction); \
	DECLARE_FUNCTION(execOnRep_DefenseStaminaCostRate); \
	DECLARE_FUNCTION(execOnRep_DefenseLimit); \
	DECLARE_FUNCTION(execOnRep_DefenseMitigation); \
	DECLARE_FUNCTION(execOnRep_DefenseChance); \
	DECLARE_FUNCTION(execOnRep_EvadeCooldown); \
	DECLARE_FUNCTION(execOnRep_EvadeStaminaCost); \
	DECLARE_FUNCTION(execOnRep_BlockCooldown); \
	DECLARE_FUNCTION(execOnRep_BlockStaminaCost); \
	DECLARE_FUNCTION(execOnRep_BlockStaminaCostRate); \
	DECLARE_FUNCTION(execOnRep_BlockLimit); \
	DECLARE_FUNCTION(execOnRep_BlockAngle); \
	DECLARE_FUNCTION(execOnRep_BlockMitigation); \
	DECLARE_FUNCTION(execOnRep_BlockChance); \
	DECLARE_FUNCTION(execOnRep_CriticalHitMultiplier); \
	DECLARE_FUNCTION(execOnRep_CriticalHitChance); \
	DECLARE_FUNCTION(execOnRep_BaseDamage); \
	DECLARE_FUNCTION(execOnRep_MagicRegenDelay); \
	DECLARE_FUNCTION(execOnRep_MagicRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxMagicPercent); \
	DECLARE_FUNCTION(execOnRep_MaxMagicAdd); \
	DECLARE_FUNCTION(execOnRep_MaxMagic); \
	DECLARE_FUNCTION(execOnRep_Magic); \
	DECLARE_FUNCTION(execOnRep_StaminaRegenDelay); \
	DECLARE_FUNCTION(execOnRep_StaminaRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxStaminaPercent); \
	DECLARE_FUNCTION(execOnRep_MaxStaminaAdd); \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealthPercent); \
	DECLARE_FUNCTION(execOnRep_MaxHealthAdd); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execGetAbsoluteMaxMagic); \
	DECLARE_FUNCTION(execGetAbsoluteMaxStamina); \
	DECLARE_FUNCTION(execGetAbsoluteMaxHealth);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatAttributeSet(); \
	friend struct Z_Construct_UClass_UNinjaCombatAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		MaxHealthAdd, \
		MaxHealthPercent, \
		HealthRegenRate, \
		Stamina, \
		MaxStamina, \
		MaxStaminaAdd, \
		MaxStaminaPercent, \
		StaminaRegenRate, \
		StaminaRegenDelay, \
		Magic, \
		MaxMagic, \
		MaxMagicAdd, \
		MaxMagicPercent, \
		MagicRegenRate, \
		MagicRegenDelay, \
		BaseDamage, \
		CriticalHitChance, \
		CriticalHitMultiplier, \
		BlockChance, \
		BlockMitigation, \
		BlockAngle, \
		BlockLimit, \
		BlockStaminaCostRate, \
		BlockStaminaCost, \
		BlockCooldown, \
		EvadeStaminaCost, \
		EvadeCooldown, \
		DefenseChance, \
		DefenseMitigation, \
		DefenseLimit, \
		DefenseStaminaCostRate, \
		ArmorReduction, \
		LastStandCount, \
		LastStandHealthPercent, \
		Poise, \
		PoiseDamage, \
		PoiseRecovery, \
		PoiseRecoveryInterval, \
		StaggerDuration, \
		NETFIELD_REP_END=StaggerDuration	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UNinjaCombatAttributeSet) \
public:


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatAttributeSet(UNinjaCombatAttributeSet&&); \
	UNinjaCombatAttributeSet(const UNinjaCombatAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaCombatAttributeSet) \
	NO_API virtual ~UNinjaCombatAttributeSet();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_31_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_NinjaCombatAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
