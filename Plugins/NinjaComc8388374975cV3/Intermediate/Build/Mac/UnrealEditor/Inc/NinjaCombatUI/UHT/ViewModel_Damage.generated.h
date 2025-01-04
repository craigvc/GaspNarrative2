// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ViewModel/ViewModel_Damage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FDamageEntry;
#ifdef NINJACOMBATUI_ViewModel_Damage_generated_h
#error "ViewModel_Damage.generated.h already included, missing '#pragma once' in ViewModel_Damage.h"
#endif
#define NINJACOMBATUI_ViewModel_Damage_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleDamageReceived);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_ACCESSORS \
static void GetbReceivedBlockingHit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbReceivedBlockingHit_WrapperImpl(void* Object, const void* InValue); \
static void GetbReceivedBreakerHit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbReceivedBreakerHit_WrapperImpl(void* Object, const void* InValue); \
static void GetbReceivedCriticalHit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbReceivedCriticalHit_WrapperImpl(void* Object, const void* InValue); \
static void GetbReceivedFatalHit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbReceivedFatalHit_WrapperImpl(void* Object, const void* InValue); \
static void GetbReceivedStaggeringHit_WrapperImpl(const void* Object, void* OutValue); \
static void SetbReceivedStaggeringHit_WrapperImpl(void* Object, const void* InValue); \
static void GetLastDamageReceived_WrapperImpl(const void* Object, void* OutValue); \
static void SetLastDamageReceived_WrapperImpl(void* Object, const void* InValue);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_Damage(); \
	friend struct Z_Construct_UClass_UViewModel_Damage_Statics; \
public: \
	DECLARE_CLASS(UViewModel_Damage, UNinjaCombatViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_Damage)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModel_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_Damage(UViewModel_Damage&&); \
	UViewModel_Damage(const UViewModel_Damage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_Damage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewModel_Damage) \
	NO_API virtual ~UViewModel_Damage();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJACOMBATUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bReceivedBlockingHit) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bReceivedBreakerHit) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bReceivedCriticalHit) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bReceivedFatalHit) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bReceivedStaggeringHit) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(LastDamageReceived) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bReceivedBlockingHit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bReceivedBreakerHit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bReceivedCriticalHit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bReceivedFatalHit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(bReceivedStaggeringHit) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(LastDamageReceived) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_ENHANCED_CONSTRUCTORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h_16_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATUI_API UClass* StaticClass<class UViewModel_Damage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_Damage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
