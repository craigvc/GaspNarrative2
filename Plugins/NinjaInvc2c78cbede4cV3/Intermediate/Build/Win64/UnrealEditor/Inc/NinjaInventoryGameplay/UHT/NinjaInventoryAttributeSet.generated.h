// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/NinjaInventoryAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef NINJAINVENTORYGAMEPLAY_NinjaInventoryAttributeSet_generated_h
#error "NinjaInventoryAttributeSet.generated.h already included, missing '#pragma once' in NinjaInventoryAttributeSet.h"
#endif
#define NINJAINVENTORYGAMEPLAY_NinjaInventoryAttributeSet_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_BackpackSlots); \
	DECLARE_FUNCTION(execOnRep_WeightLimit); \
	DECLARE_FUNCTION(execOnRep_Encumbrance); \
	DECLARE_FUNCTION(execOnRep_AverageEquipmentLevel); \
	DECLARE_FUNCTION(execOnRep_EquipmentLevel); \
	DECLARE_FUNCTION(execOnRep_Wealth);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryAttributeSet(); \
	friend struct Z_Construct_UClass_UNinjaInventoryAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Wealth=NETFIELD_REP_START, \
		EquipmentLevel, \
		AverageEquipmentLevel, \
		Encumbrance, \
		WeightLimit, \
		BackpackSlots, \
		NETFIELD_REP_END=BackpackSlots	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UNinjaInventoryAttributeSet) \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryAttributeSet(UNinjaInventoryAttributeSet&&); \
	UNinjaInventoryAttributeSet(const UNinjaInventoryAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryAttributeSet) \
	NO_API virtual ~UNinjaInventoryAttributeSet();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UNinjaInventoryAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_NinjaInventoryAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
