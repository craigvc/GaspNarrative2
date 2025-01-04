// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaCombatComboManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateTreeRunStatus : uint8;
#ifdef NINJACOMBAT_NinjaCombatComboManagerComponent_generated_h
#error "NinjaCombatComboManagerComponent.generated.h already included, missing '#pragma once' in NinjaCombatComboManagerComponent.h"
#endif
#define NINJACOMBAT_NinjaCombatComboManagerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRep_ComboCount_Implementation(); \
	virtual void OnRep_TargetCount_Implementation(); \
	virtual void OnRep_InComboWindow_Implementation(bool bWasInComboWindow); \
	DECLARE_FUNCTION(execHandleTreeStatusChanged); \
	DECLARE_FUNCTION(execOnRep_ComboCount); \
	DECLARE_FUNCTION(execOnRep_TargetCount); \
	DECLARE_FUNCTION(execOnRep_InComboWindow); \
	DECLARE_FUNCTION(execBindToAbilitySystemComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCombatComboManagerComponent(); \
	friend struct Z_Construct_UClass_UNinjaCombatComboManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCombatComboManagerComponent, UStateTreeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCombatComboManagerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaCombatComboManagerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bInComboWindow=NETFIELD_REP_START, \
		TargetCount, \
		ComboCount, \
		NETFIELD_REP_END=ComboCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaCombatComboManagerComponent(UNinjaCombatComboManagerComponent&&); \
	UNinjaCombatComboManagerComponent(const UNinjaCombatComboManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCombatComboManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCombatComboManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCombatComboManagerComponent) \
	NO_API virtual ~UNinjaCombatComboManagerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UNinjaCombatComboManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Components_NinjaCombatComboManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
