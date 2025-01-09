// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeCommonUISubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVECOMMONUI_NarrativeCommonUISubsystem_generated_h
#error "NarrativeCommonUISubsystem.generated.h already included, missing '#pragma once' in NarrativeCommonUISubsystem.h"
#endif
#define NARRATIVECOMMONUI_NarrativeCommonUISubsystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_9_DELEGATE \
NARRATIVECOMMONUI_API void FNarrativeHandleSubtitle_DelegateWrapper(const FMulticastScriptDelegate& NarrativeHandleSubtitle, FText const& SubtitleText);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSetSubtitle); \
	DECLARE_FUNCTION(execShowNotification);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeCommonUISubsystem(); \
	friend struct Z_Construct_UClass_UNarrativeCommonUISubsystem_Statics; \
public: \
	DECLARE_CLASS(UNarrativeCommonUISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeCommonUI"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeCommonUISubsystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeCommonUISubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeCommonUISubsystem(UNarrativeCommonUISubsystem&&); \
	UNarrativeCommonUISubsystem(const UNarrativeCommonUISubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeCommonUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeCommonUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeCommonUISubsystem) \
	NO_API virtual ~UNarrativeCommonUISubsystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVECOMMONUI_API UClass* StaticClass<class UNarrativeCommonUISubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeCommonUI_Public_NarrativeCommonUISubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
