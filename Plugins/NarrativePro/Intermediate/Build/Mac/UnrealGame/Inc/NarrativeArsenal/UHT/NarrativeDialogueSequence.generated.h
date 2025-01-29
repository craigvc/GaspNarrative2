// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/NarrativeDialogueSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEARSENAL_NarrativeDialogueSequence_generated_h
#error "NarrativeDialogueSequence.generated.h already included, missing '#pragma once' in NarrativeDialogueSequence.h"
#endif
#define NARRATIVEARSENAL_NarrativeDialogueSequence_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FShotTrackingSettings_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FShotTrackingSettings>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execGetShotAnchorTransform); \
	DECLARE_FUNCTION(execPlaySequence); \
	DECLARE_FUNCTION(execEndSequence);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeDialogueSequence(); \
	friend struct Z_Construct_UClass_UNarrativeDialogueSequence_Statics; \
public: \
	DECLARE_CLASS(UNarrativeDialogueSequence, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeDialogueSequence)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeDialogueSequence(UNarrativeDialogueSequence&&); \
	UNarrativeDialogueSequence(const UNarrativeDialogueSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeDialogueSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeDialogueSequence); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeDialogueSequence) \
	NO_API virtual ~UNarrativeDialogueSequence();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_82_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeDialogueSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeDialogueSequence_h


#define FOREACH_ENUM_EANCHORORIGINRULE(op) \
	op(EAnchorOriginRule::AOR_Disabled) \
	op(EAnchorOriginRule::AOR_ConversationCenter) \
	op(EAnchorOriginRule::AOR_Speaker) \
	op(EAnchorOriginRule::AOR_Listener) \
	op(EAnchorOriginRule::AOR_Custom) 

enum class EAnchorOriginRule : uint8;
template<> struct TIsUEnumClass<EAnchorOriginRule> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EAnchorOriginRule>();

#define FOREACH_ENUM_EANCHORROTATIONRULE(op) \
	op(EAnchorRotationRule::ARR_AnchorActorForwardVector) \
	op(EAnchorRotationRule::ARR_Conversation) 

enum class EAnchorRotationRule : uint8;
template<> struct TIsUEnumClass<EAnchorRotationRule> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EAnchorRotationRule>();

#define FOREACH_ENUM_ESHOTTRACKINGRULE(op) \
	op(EShotTrackingRule::STR_Disabled) \
	op(EShotTrackingRule::STR_Speaker) \
	op(EShotTrackingRule::STR_Listener) \
	op(EShotTrackingRule::STR_Custom) 

enum class EShotTrackingRule : uint8;
template<> struct TIsUEnumClass<EShotTrackingRule> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EShotTrackingRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
