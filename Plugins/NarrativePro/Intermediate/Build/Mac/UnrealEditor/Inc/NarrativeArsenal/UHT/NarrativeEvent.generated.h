// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/NarrativeEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class UCharacterDefinition;
class UTalesComponent;
#ifdef NARRATIVEARSENAL_NarrativeEvent_generated_h
#error "NarrativeEvent.generated.h already included, missing '#pragma once' in NarrativeEvent.h"
#endif
#define NARRATIVEARSENAL_NarrativeEvent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCharacterTargets); \
	DECLARE_FUNCTION(execGetHintText); \
	DECLARE_FUNCTION(execGetGraphDisplayText); \
	DECLARE_FUNCTION(execExecuteEvent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeEvent(); \
	friend struct Z_Construct_UClass_UNarrativeEvent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeEvent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeEvent(UNarrativeEvent&&); \
	UNarrativeEvent(const UNarrativeEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeEvent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeEvent) \
	NO_API virtual ~UNarrativeEvent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_69_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativeEvent_h


#define FOREACH_ENUM_EPARTYEVENTPOLICY(op) \
	op(EPartyEventPolicy::Party) \
	op(EPartyEventPolicy::AllPartyMembers) \
	op(EPartyEventPolicy::PartyLeader) 

enum class EPartyEventPolicy;
template<> struct TIsUEnumClass<EPartyEventPolicy> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EPartyEventPolicy>();

#define FOREACH_ENUM_EEVENTRUNTIME(op) \
	op(EEventRuntime::Start) \
	op(EEventRuntime::End) \
	op(EEventRuntime::Both) 

enum class EEventRuntime : uint8;
template<> struct TIsUEnumClass<EEventRuntime> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EEventRuntime>();

#define FOREACH_ENUM_EEVENTFILTER(op) \
	op(EEventFilter::EF_Anyone) \
	op(EEventFilter::EF_OnlyNPCs) \
	op(EEventFilter::EF_OnlyPlayers) 

enum class EEventFilter : uint8;
template<> struct TIsUEnumClass<EEventFilter> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EEventFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
