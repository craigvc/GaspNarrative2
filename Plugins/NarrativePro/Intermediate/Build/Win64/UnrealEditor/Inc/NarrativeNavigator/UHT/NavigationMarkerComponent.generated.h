// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationMarkerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UNarrativeNavigationComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FLinearColor;
struct FNavigationMarkerSettings;
#ifdef NARRATIVENAVIGATOR_NavigationMarkerComponent_generated_h
#error "NavigationMarkerComponent.generated.h already included, missing '#pragma once' in NavigationMarkerComponent.h"
#endif
#define NARRATIVENAVIGATOR_NavigationMarkerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_10_DELEGATE \
NARRATIVENAVIGATOR_API void FOnRefreshRequired_DelegateWrapper(const FMulticastScriptDelegate& OnRefreshRequired);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_11_DELEGATE \
NARRATIVENAVIGATOR_API void FOnSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSelected, UNarrativeNavigationComponent* Selector, APlayerController* SelectorOwner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FZoneDrawData_Statics; \
	NARRATIVENAVIGATOR_API static class UScriptStruct* StaticStruct();


template<> NARRATIVENAVIGATOR_API UScriptStruct* StaticStruct<struct FZoneDrawData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationMarkerSettings_Statics; \
	NARRATIVENAVIGATOR_API static class UScriptStruct* StaticStruct();


template<> NARRATIVENAVIGATOR_API UScriptStruct* StaticStruct<struct FNavigationMarkerSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveDomains); \
	DECLARE_FUNCTION(execAddDomains); \
	DECLARE_FUNCTION(execSetDomains); \
	DECLARE_FUNCTION(execSetDefaultDomains); \
	DECLARE_FUNCTION(execOnSelect); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetMarkerColor); \
	DECLARE_FUNCTION(execGetMarkerDisplayText); \
	DECLARE_FUNCTION(execGetMarkerActionText); \
	DECLARE_FUNCTION(execRefreshMarker); \
	DECLARE_FUNCTION(execGetMarkerSettings);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationMarkerComponent(); \
	friend struct Z_Construct_UClass_UNavigationMarkerComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationMarkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeNavigator"), NO_API) \
	DECLARE_SERIALIZER(UNavigationMarkerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationMarkerComponent(UNavigationMarkerComponent&&); \
	UNavigationMarkerComponent(const UNavigationMarkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationMarkerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationMarkerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationMarkerComponent) \
	NO_API virtual ~UNavigationMarkerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_91_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENAVIGATOR_API UClass* StaticClass<class UNavigationMarkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationMarkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
