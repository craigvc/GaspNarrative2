// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ViewModel/ViewModel_PoiseAndStagger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
#ifdef NINJACOMBATUI_ViewModel_PoiseAndStagger_generated_h
#error "ViewModel_PoiseAndStagger.generated.h already included, missing '#pragma once' in ViewModel_PoiseAndStagger.h"
#endif
#define NINJACOMBATUI_ViewModel_PoiseAndStagger_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStaggeredStateChanged);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_ACCESSORS \
static void GetbIsStaggered_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsStaggered_WrapperImpl(void* Object, const void* InValue); \
static void GetPoise_WrapperImpl(const void* Object, void* OutValue); \
static void SetPoise_WrapperImpl(void* Object, const void* InValue); \
static void GetPoiseDamage_WrapperImpl(const void* Object, void* OutValue); \
static void SetPoiseDamage_WrapperImpl(void* Object, const void* InValue); \
static void GetPoiseRecovery_WrapperImpl(const void* Object, void* OutValue); \
static void SetPoiseRecovery_WrapperImpl(void* Object, const void* InValue); \
static void GetPoiseRecoveryInterval_WrapperImpl(const void* Object, void* OutValue); \
static void SetPoiseRecoveryInterval_WrapperImpl(void* Object, const void* InValue); \
static void GetPoisePercent_WrapperImpl(const void* Object, void* OutValue); \
static void SetPoisePercent_WrapperImpl(void* Object, const void* InValue); \
static void GetStaggerDuration_WrapperImpl(const void* Object, void* OutValue); \
static void SetStaggerDuration_WrapperImpl(void* Object, const void* InValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_PoiseAndStagger(); \
	friend struct Z_Construct_UClass_UViewModel_PoiseAndStagger_Statics; \
public: \
	DECLARE_CLASS(UViewModel_PoiseAndStagger, UNinjaCombatViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_PoiseAndStagger)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModel_PoiseAndStagger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_PoiseAndStagger(UViewModel_PoiseAndStagger&&); \
	UViewModel_PoiseAndStagger(const UViewModel_PoiseAndStagger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_PoiseAndStagger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_PoiseAndStagger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewModel_PoiseAndStagger) \
	NO_API virtual ~UViewModel_PoiseAndStagger();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJACOMBATUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsStaggered) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(Poise) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PoiseDamage) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PoiseRecovery) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PoiseRecoveryInterval) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(PoisePercent) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(StaggerDuration) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsStaggered) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(Poise) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PoiseDamage) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PoiseRecovery) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PoiseRecoveryInterval) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(PoisePercent) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD(StaggerDuration) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h_19_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATUI_API UClass* StaticClass<class UViewModel_PoiseAndStagger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_PoiseAndStagger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
