// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/WeaponItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNarrativeAnimSet;
struct FCombatTraceData;
#ifdef NARRATIVEARSENAL_WeaponItem_generated_h
#error "WeaponItem.generated.h already included, missing '#pragma once' in WeaponItem.h"
#endif
#define NARRATIVEARSENAL_WeaponItem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAttackRange); \
	DECLARE_FUNCTION(execGetTraceData); \
	DECLARE_FUNCTION(execCanAttack); \
	DECLARE_FUNCTION(execWantsReload); \
	DECLARE_FUNCTION(execIsHolstered); \
	DECLARE_FUNCTION(execGetComboAnims); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execConsumeAmmo); \
	DECLARE_FUNCTION(execHandleUnWield); \
	DECLARE_FUNCTION(execHandleWield);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponItem(); \
	friend struct Z_Construct_UClass_UWeaponItem_Statics; \
public: \
	DECLARE_CLASS(UWeaponItem, UEquippableItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UWeaponItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AmmoInClip=NETFIELD_REP_START, \
		NETFIELD_REP_END=AmmoInClip	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponItem(UWeaponItem&&); \
	UWeaponItem(const UWeaponItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponItem) \
	NO_API virtual ~UWeaponItem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UWeaponItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
