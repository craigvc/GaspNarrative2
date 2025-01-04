// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Combo/STTask_ActivateComboAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAbilityEndedData;
#ifdef NINJACOMBAT_STTask_ActivateComboAbility_generated_h
#error "STTask_ActivateComboAbility.generated.h already included, missing '#pragma once' in STTask_ActivateComboAbility.h"
#endif
#define NINJACOMBAT_STTask_ActivateComboAbility_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAbilityEnded);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTTask_ActivateComboAbility(); \
	friend struct Z_Construct_UClass_USTTask_ActivateComboAbility_Statics; \
public: \
	DECLARE_CLASS(USTTask_ActivateComboAbility, UStateTreeTaskBlueprintBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(USTTask_ActivateComboAbility)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USTTask_ActivateComboAbility(USTTask_ActivateComboAbility&&); \
	USTTask_ActivateComboAbility(const USTTask_ActivateComboAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTTask_ActivateComboAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTTask_ActivateComboAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTTask_ActivateComboAbility) \
	NO_API virtual ~USTTask_ActivateComboAbility();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_26_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class USTTask_ActivateComboAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Combo_STTask_ActivateComboAbility_h


#define FOREACH_ENUM_ECOMBOCOUNTCHANGE(op) \
	op(EComboCountChange::NoChange) \
	op(EComboCountChange::IncrementCount) \
	op(EComboCountChange::ResetCount) 

enum class EComboCountChange : uint8;
template<> struct TIsUEnumClass<EComboCountChange> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<EComboCountChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
