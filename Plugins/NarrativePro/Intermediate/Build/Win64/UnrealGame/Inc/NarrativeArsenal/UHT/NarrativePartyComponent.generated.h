// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tales/NarrativePartyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UTalesComponent;
#ifdef NARRATIVEARSENAL_NarrativePartyComponent_generated_h
#error "NarrativePartyComponent.generated.h already included, missing '#pragma once' in NarrativePartyComponent.h"
#endif
#define NARRATIVEARSENAL_NarrativePartyComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPartyLeader); \
	DECLARE_FUNCTION(execGetPartyLeader); \
	DECLARE_FUNCTION(execGetPartyMemberStates); \
	DECLARE_FUNCTION(execGetPartyMembers); \
	DECLARE_FUNCTION(execRemovePartyMember); \
	DECLARE_FUNCTION(execAddPartyMember);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativePartyComponent(); \
	friend struct Z_Construct_UClass_UNarrativePartyComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativePartyComponent, UTalesComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativePartyComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PartyMemberStates=NETFIELD_REP_START, \
		NETFIELD_REP_END=PartyMemberStates	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativePartyComponent(UNarrativePartyComponent&&); \
	UNarrativePartyComponent(const UNarrativePartyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativePartyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativePartyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativePartyComponent) \
	NO_API virtual ~UNarrativePartyComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_33_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativePartyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Tales_NarrativePartyComponent_h


#define FOREACH_ENUM_EPARTYDIALOGUECONTROLPOLICY(op) \
	op(EPartyDialogueControlPolicy::PartyLeaderControlled) \
	op(EPartyDialogueControlPolicy::AllPlayers) 

enum class EPartyDialogueControlPolicy : uint8;
template<> struct TIsUEnumClass<EPartyDialogueControlPolicy> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EPartyDialogueControlPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
