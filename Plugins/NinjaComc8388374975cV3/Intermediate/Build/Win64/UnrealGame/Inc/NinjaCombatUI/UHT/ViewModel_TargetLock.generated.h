// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ViewModel/ViewModel_TargetLock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UActorComponent;
#ifdef NINJACOMBATUI_ViewModel_TargetLock_generated_h
#error "ViewModel_TargetLock.generated.h already included, missing '#pragma once' in ViewModel_TargetLock.h"
#endif
#define NINJACOMBATUI_ViewModel_TargetLock_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTargetChanged); \
	DECLARE_FUNCTION(execGetWidgetOwner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_ACCESSORS \
static void GetbIsLockedByHUDOwner_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsLockedByHUDOwner_WrapperImpl(void* Object, const void* InValue);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewModel_TargetLock(); \
	friend struct Z_Construct_UClass_UViewModel_TargetLock_Statics; \
public: \
	DECLARE_CLASS(UViewModel_TargetLock, UNinjaCombatViewModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatUI"), NO_API) \
	DECLARE_SERIALIZER(UViewModel_TargetLock) \
	virtual UObject* _getUObject() const override { return const_cast<UViewModel_TargetLock*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewModel_TargetLock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UViewModel_TargetLock(UViewModel_TargetLock&&); \
	UViewModel_TargetLock(const UViewModel_TargetLock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewModel_TargetLock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewModel_TargetLock); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewModel_TargetLock) \
	NO_API virtual ~UViewModel_TargetLock();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_FIELDNOTIFY \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_BEGIN(NINJACOMBATUI_API ) \
	UE_FIELD_NOTIFICATION_DECLARE_FIELD(bIsLockedByHUDOwner) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_BEGIN(bIsLockedByHUDOwner) \
	UE_FIELD_NOTIFICATION_DECLARE_ENUM_FIELD_END() \
	UE_FIELD_NOTIFICATION_DECLARE_CLASS_DESCRIPTOR_END();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_ENHANCED_CONSTRUCTORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h_16_FIELDNOTIFY \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATUI_API UClass* StaticClass<class UViewModel_TargetLock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_ViewModel_ViewModel_TargetLock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
