// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ViewModel/ViewModel_CombatVitals.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBATUI_ViewModel_CombatVitals_generated_h
#error "ViewModel_CombatVitals.generated.h already included, missing '#pragma once' in ViewModel_CombatVitals.h"
#endif
#define NINJACOMBATUI_ViewModel_CombatVitals_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_ACCESSORS \
static void GetbIsDead_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsDead_WrapperImpl(void* Object, const void* InValue); \
static void GetHealth_WrapperImpl(const void* Object, void* OutValue); \
static void SetHealth_WrapperImpl(void* Object, const void* InValue); \
static void GetHealthPercent_WrapperImpl(const void* Object, void* OutValue); \
static void SetHealthPercent_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxHealthTotal_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxHealthTotal_WrapperImpl(void* Object, const void* InValue); \
static void GetStamina_WrapperImpl(const void* Object, void* OutValue); \
static void SetStamina_WrapperImpl(void* Object, const void* InValue); \
static void GetStaminaPercent_WrapperImpl(const void* Object, void* OutValue); \
static void SetStaminaPercent_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxStaminaTotal_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxStaminaTotal_WrapperImpl(void* Object, const void* InValue); \
static void GetMagic_WrapperImpl(const void* Object, void* OutValue); \
static void SetMagic_WrapperImpl(void* Object, const void* InValue); \
static void GetMagicPercent_WrapperImpl(const void* Object, void* OutValue); \
static void SetMagicPercent_WrapperImpl(void* Object, const void* InValue); \
static void GetMaxMagicTotal_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaxMagicTotal_WrapperImpl(void* Object, const void* InValue);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_CombatVitals(); \
	friend struct Z_Construct_UClass_UViewModel_CombatVitals_Statics; \
public: \
	DECLARE_CLASS(UViewModel_CombatVitals, UNinjaCombatViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_CombatVitals)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModel_CombatVitals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_CombatVitals(UViewModel_CombatVitals&&); \
	UViewModel_CombatVitals(const UViewModel_CombatVitals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_CombatVitals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_CombatVitals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewModel_CombatVitals) \
	NO_API virtual ~UViewModel_CombatVitals();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJACOMBATUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsDead) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Health) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(HealthPercent) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(MaxHealthTotal) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Stamina) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(StaminaPercent) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(MaxStaminaTotal) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Magic) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(MagicPercent) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(MaxMagicTotal) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsDead) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Health) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(HealthPercent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(MaxHealthTotal) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Stamina) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(StaminaPercent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(MaxStaminaTotal) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Magic) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(MagicPercent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(MaxMagicTotal) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_ENHANCED_CONSTRUCTORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h_19_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATUI_API UClass* StaticClass<class UViewModel_CombatVitals>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_CombatVitals_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
