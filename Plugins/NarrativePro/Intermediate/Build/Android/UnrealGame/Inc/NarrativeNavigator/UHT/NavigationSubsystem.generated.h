// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameplayTag;
struct FPointOfInterestLocation;
#ifdef NARRATIVENAVIGATOR_NavigationSubsystem_generated_h
#error "NavigationSubsystem.generated.h already included, missing '#pragma once' in NavigationSubsystem.h"
#endif
#define NARRATIVENAVIGATOR_NavigationSubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointOfInterestLocation_Statics; \
	NARRATIVENAVIGATOR_API static class UScriptStruct* StaticStruct();


template<> NARRATIVENAVIGATOR_API UScriptStruct* StaticStruct<struct FPointOfInterestLocation>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNearestPOIToPoint); \
	DECLARE_FUNCTION(execGetPointOfInterest); \
	DECLARE_FUNCTION(execAddPointOfInterest_Actor); \
	DECLARE_FUNCTION(execAddPointOfInterest_Vector);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSubsystem(); \
	friend struct Z_Construct_UClass_UNavigationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNavigationSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeNavigator"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationSubsystem(UNavigationSubsystem&&); \
	UNavigationSubsystem(const UNavigationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNavigationSubsystem) \
	NO_API virtual ~UNavigationSubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_50_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENAVIGATOR_API UClass* StaticClass<class UNavigationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NavigationSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
