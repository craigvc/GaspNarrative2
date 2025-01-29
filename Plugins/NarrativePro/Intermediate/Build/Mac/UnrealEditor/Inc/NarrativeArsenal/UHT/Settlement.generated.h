// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settlements/Settlement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANarrativeNPCCharacter;
struct FGuid;
struct FSettlementSpawn;
#ifdef NARRATIVEARSENAL_Settlement_generated_h
#error "Settlement.generated.h already included, missing '#pragma once' in Settlement.h"
#endif
#define NARRATIVEARSENAL_Settlement_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSettlementSpawn_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSettlementSpawn>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDisabled); \
	DECLARE_FUNCTION(execGetSpawnData); \
	DECLARE_FUNCTION(execReleaseNPC); \
	DECLARE_FUNCTION(execClaimNPC); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsCleared);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASettlement(); \
	friend struct Z_Construct_UClass_ASettlement_Statics; \
public: \
	DECLARE_CLASS(ASettlement, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ASettlement) \
	virtual UObject* _getUObject() const override { return const_cast<ASettlement*>(this); }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASettlement(ASettlement&&); \
	ASettlement(const ASettlement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASettlement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASettlement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASettlement) \
	NO_API virtual ~ASettlement();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_77_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ASettlement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Settlements_Settlement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
