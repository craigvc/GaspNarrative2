// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/FactionSourceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaFactionComponent;
class UNinjaFactionDataAsset;
class UNinjaFactionDataAsset; 
struct FGameplayTag;
#ifdef NINJAFACTIONS_FactionSourceInterface_generated_h
#error "FactionSourceInterface.generated.h already included, missing '#pragma once' in FactionSourceInterface.h"
#endif
#define NINJAFACTIONS_FactionSourceInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TMap<UNinjaFactionDataAsset*,int32> GetReputationRewards_Implementation(const UNinjaFactionComponent* FactionMember, FGameplayTag EventTag) const { return TMap<UNinjaFactionDataAsset*,int32>(); }; \
	DECLARE_FUNCTION(execGetReputationRewards); \
	DECLARE_FUNCTION(execCanProvideFactionValues);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAFACTIONS_API UFactionSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFactionSourceInterface(UFactionSourceInterface&&); \
	UFactionSourceInterface(const UFactionSourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAFACTIONS_API, UFactionSourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFactionSourceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFactionSourceInterface) \
	NINJAFACTIONS_API virtual ~UFactionSourceInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFactionSourceInterface(); \
	friend struct Z_Construct_UClass_UFactionSourceInterface_Statics; \
public: \
	DECLARE_CLASS(UFactionSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaFactions"), NINJAFACTIONS_API) \
	DECLARE_SERIALIZER(UFactionSourceInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFactionSourceInterface() {} \
public: \
	typedef UFactionSourceInterface UClassType; \
	typedef IFactionSourceInterface ThisClass; \
	static bool Execute_CanProvideFactionValues(const UObject* O, const UNinjaFactionDataAsset* Faction, int32 Reputation, FGameplayTag EventTag); \
	static TMap<UNinjaFactionDataAsset*,int32> Execute_GetReputationRewards(const UObject* O, const UNinjaFactionComponent* FactionMember, FGameplayTag EventTag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAFACTIONS_API UClass* StaticClass<class UFactionSourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_Interfaces_FactionSourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
