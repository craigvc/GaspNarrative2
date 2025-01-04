// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaFactionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNinjaFactionDataAsset;
class UNinjaFactionDataAsset; 
class UNinjaFactionSubsystem;
class UObject;
struct FFactionManagerRecord;
struct FFactionMembership;
struct FFactionMembershipRecord;
struct FFactionReputationTableRow;
struct FGameplayTag;
#ifdef NINJAFACTIONS_NinjaFactionComponent_generated_h
#error "NinjaFactionComponent.generated.h already included, missing '#pragma once' in NinjaFactionComponent.h"
#endif
#define NINJAFACTIONS_NinjaFactionComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_22_DELEGATE \
static void FFactionMemebershipMCDelegate_DelegateWrapper(const FMulticastScriptDelegate& FactionMemebershipMCDelegate, FFactionMembership const& FactionMembership);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RemoveFaction_Validate(const UNinjaFactionDataAsset* ); \
	virtual void Server_RemoveFaction_Implementation(const UNinjaFactionDataAsset* FactionData); \
	virtual bool Server_SetMainFaction_Validate(const UNinjaFactionDataAsset* ); \
	virtual void Server_SetMainFaction_Implementation(const UNinjaFactionDataAsset* FactionData); \
	virtual bool Server_AddReputationFromSource_Validate(const UObject* , FGameplayTag const& ); \
	virtual void Server_AddReputationFromSource_Implementation(const UObject* Source, FGameplayTag const& EventTag); \
	virtual bool Server_AddReputation_Validate(const UNinjaFactionDataAsset* , int32 , const UObject* , FGameplayTag const& ); \
	virtual void Server_AddReputation_Implementation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag const& EventTag); \
	virtual bool Server_AddFaction_Validate(const UNinjaFactionDataAsset* , int32 , const UObject* , FGameplayTag const& , bool ); \
	virtual void Server_AddFaction_Implementation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag const& EventTag, bool bMainFaction); \
	virtual bool IsValidFactionUpdate_Implementation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag EventTag) const; \
	virtual bool IsValidFactionAssignment_Implementation(const UNinjaFactionDataAsset* FactionData, int32 Reputation, const UObject* Source, FGameplayTag EventTag) const; \
	virtual void SynchronizeDefaultFactions_Implementation(); \
	DECLARE_FUNCTION(execServer_RemoveFaction); \
	DECLARE_FUNCTION(execServer_SetMainFaction); \
	DECLARE_FUNCTION(execServer_AddReputationFromSource); \
	DECLARE_FUNCTION(execServer_AddReputation); \
	DECLARE_FUNCTION(execServer_AddFaction); \
	DECLARE_FUNCTION(execIsValidFactionUpdate); \
	DECLARE_FUNCTION(execIsValidFactionAssignment); \
	DECLARE_FUNCTION(execSynchronizeDefaultFactions); \
	DECLARE_FUNCTION(execProcessReputationAndTier); \
	DECLARE_FUNCTION(execGetFactionSubsystem); \
	DECLARE_FUNCTION(execLoadFactionMemberships); \
	DECLARE_FUNCTION(execGetMembershipRecordsForSerialization); \
	DECLARE_FUNCTION(execGetFactionRecordForSerialization); \
	DECLARE_FUNCTION(execIsValidSourceAndEvent); \
	DECLARE_FUNCTION(execGetAttitude); \
	DECLARE_FUNCTION(execGetReputationRewards); \
	DECLARE_FUNCTION(execGetReputationTier); \
	DECLARE_FUNCTION(execHasMembership); \
	DECLARE_FUNCTION(execResetFactions); \
	DECLARE_FUNCTION(execRemoveFaction); \
	DECLARE_FUNCTION(execSetMainFaction); \
	DECLARE_FUNCTION(execAddReputationFromSource); \
	DECLARE_FUNCTION(execAddReputation); \
	DECLARE_FUNCTION(execAddFaction); \
	DECLARE_FUNCTION(execAddFactionFromMembership); \
	DECLARE_FUNCTION(execGetFactionMembership); \
	DECLARE_FUNCTION(execGetMainFactionMembership); \
	DECLARE_FUNCTION(execGetFactionMemberships);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaFactionComponent(); \
	friend struct Z_Construct_UClass_UNinjaFactionComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaFactionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NO_API) \
	DECLARE_SERIALIZER(UNinjaFactionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MembershipList=NETFIELD_REP_START, \
		NETFIELD_REP_END=MembershipList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaFactionComponent(UNinjaFactionComponent&&); \
	UNinjaFactionComponent(const UNinjaFactionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaFactionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaFactionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaFactionComponent) \
	NO_API virtual ~UNinjaFactionComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class UNinjaFactionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Components_NinjaFactionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
