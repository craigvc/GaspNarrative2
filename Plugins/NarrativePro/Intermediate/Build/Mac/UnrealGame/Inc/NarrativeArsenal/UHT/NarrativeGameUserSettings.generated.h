// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealFramework/NarrativeGameUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENarrativeGameplayDifficulty : uint8;
#ifdef NARRATIVEARSENAL_NarrativeGameUserSettings_generated_h
#error "NarrativeGameUserSettings.generated.h already included, missing '#pragma once' in NarrativeGameUserSettings.h"
#endif
#define NARRATIVEARSENAL_NarrativeGameUserSettings_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFieldOfView); \
	DECLARE_FUNCTION(execGetFieldOfView); \
	DECLARE_FUNCTION(execGetGameplayDifficulty); \
	DECLARE_FUNCTION(execSetGameplayDifficulty); \
	DECLARE_FUNCTION(execInventoryWantsTile); \
	DECLARE_FUNCTION(execSetInventoryWantsTile); \
	DECLARE_FUNCTION(execShouldCrouchToggle); \
	DECLARE_FUNCTION(execSetShouldCrouchToggle); \
	DECLARE_FUNCTION(execGetMusicAudioVolume); \
	DECLARE_FUNCTION(execSetMusicAudioVolume); \
	DECLARE_FUNCTION(execGetSFXAudioVolume); \
	DECLARE_FUNCTION(execSetSFXAudioVolume); \
	DECLARE_FUNCTION(execGetUIAudioVolume); \
	DECLARE_FUNCTION(execSetUIAudioVolume); \
	DECLARE_FUNCTION(execGetDialogueAudioVolume); \
	DECLARE_FUNCTION(execSetDialogueAudioVolume); \
	DECLARE_FUNCTION(execGetOverallAudioVolume); \
	DECLARE_FUNCTION(execSetOverallAudioVolume);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeGameUserSettings(); \
	friend struct Z_Construct_UClass_UNarrativeGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UNarrativeGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeGameUserSettings)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeGameUserSettings(UNarrativeGameUserSettings&&); \
	UNarrativeGameUserSettings(const UNarrativeGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeGameUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeGameUserSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeGameUserSettings) \
	NO_API virtual ~UNarrativeGameUserSettings();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_21_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeGameUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameUserSettings_h


#define FOREACH_ENUM_ENARRATIVEGAMEPLAYDIFFICULTY(op) \
	op(ENarrativeGameplayDifficulty::Easy) \
	op(ENarrativeGameplayDifficulty::Medium) \
	op(ENarrativeGameplayDifficulty::Hard) \
	op(ENarrativeGameplayDifficulty::Insane) 

enum class ENarrativeGameplayDifficulty : uint8;
template<> struct TIsUEnumClass<ENarrativeGameplayDifficulty> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeGameplayDifficulty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
