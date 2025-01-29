// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArsenalStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANarrativeGameMode;
class ANarrativeGameState;
class ANarrativePlayerController;
class UArsenalSettings;
class UNarrativeCombatDeveloperSettings;
class UNarrativeGameUserSettings;
class UNarrativeTimeOfDaySettings;
class UNarrativeUIDeveloperSettings;
class UObject;
enum class ENarrativeGameplayDifficulty : uint8;
struct FGameplayTagContainer;
#ifdef NARRATIVEARSENAL_ArsenalStatics_generated_h
#error "ArsenalStatics.generated.h already included, missing '#pragma once' in ArsenalStatics.h"
#endif
#define NARRATIVEARSENAL_ArsenalStatics_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNarrativeGameMode); \
	DECLARE_FUNCTION(execGetNarrativeGameState); \
	DECLARE_FUNCTION(execGetTotalAccumulatedTime); \
	DECLARE_FUNCTION(execTimeToString); \
	DECLARE_FUNCTION(execGetTimeOfDayAsString); \
	DECLARE_FUNCTION(execIsTimeInRange); \
	DECLARE_FUNCTION(execGetTimeOfDay); \
	DECLARE_FUNCTION(execReplaceInputVariables); \
	DECLARE_FUNCTION(execGetGameResolution); \
	DECLARE_FUNCTION(execGetGameplayDifficultyLevel); \
	DECLARE_FUNCTION(execGetNarrativeGameUserSettings); \
	DECLARE_FUNCTION(execGetCharacterCreatorMapName); \
	DECLARE_FUNCTION(execGetGameEntryMapName); \
	DECLARE_FUNCTION(execGetCombatSettings); \
	DECLARE_FUNCTION(execGetNarrativeUISettings); \
	DECLARE_FUNCTION(execGetTimeOfDaySettings); \
	DECLARE_FUNCTION(execGetNarrativeProSettings); \
	DECLARE_FUNCTION(execRemoveFactionsFromActor); \
	DECLARE_FUNCTION(execAddFactionsToActor); \
	DECLARE_FUNCTION(execGetAttitude); \
	DECLARE_FUNCTION(execIsSameTeam);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArsenalStatics(); \
	friend struct Z_Construct_UClass_UArsenalStatics_Statics; \
public: \
	DECLARE_CLASS(UArsenalStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UArsenalStatics)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArsenalStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArsenalStatics(UArsenalStatics&&); \
	UArsenalStatics(const UArsenalStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArsenalStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArsenalStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArsenalStatics) \
	NO_API virtual ~UArsenalStatics();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UArsenalStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
