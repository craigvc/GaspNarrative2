// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeNavigationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACustomWaypoint;
class UNavigationMarkerComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FPointOfInterestLocation;
#ifdef NARRATIVENAVIGATOR_NarrativeNavigationComponent_generated_h
#error "NarrativeNavigationComponent.generated.h already included, missing '#pragma once' in NarrativeNavigationComponent.h"
#endif
#define NARRATIVENAVIGATOR_NarrativeNavigationComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_13_DELEGATE \
NARRATIVENAVIGATOR_API void FOnMarkerAdded_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerAdded, UNavigationMarkerComponent* Marker);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_14_DELEGATE \
NARRATIVENAVIGATOR_API void FOnMarkerRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnMarkerRemoved, UNavigationMarkerComponent* Marker);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_15_DELEGATE \
NARRATIVENAVIGATOR_API void FOnDiscoverPointOfInterest_DelegateWrapper(const FMulticastScriptDelegate& OnDiscoverPointOfInterest, FGameplayTag const& POITag);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_16_DELEGATE \
NARRATIVENAVIGATOR_API void FOnFastTravelRequested_DelegateWrapper(const FMulticastScriptDelegate& OnFastTravelRequested, FPointOfInterestLocation const& POI);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerSelectMarker_Implementation(UNavigationMarkerComponent* Marker); \
	DECLARE_FUNCTION(execRemoveCustomWaypoint); \
	DECLARE_FUNCTION(execPlaceCustomWaypoint); \
	DECLARE_FUNCTION(execHasDiscoveredPOI); \
	DECLARE_FUNCTION(execDiscoverPOI); \
	DECLARE_FUNCTION(execSetMapLayer); \
	DECLARE_FUNCTION(execSelectMarker); \
	DECLARE_FUNCTION(execServerSelectMarker);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeNavigationComponent(); \
	friend struct Z_Construct_UClass_UNarrativeNavigationComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeNavigationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeNavigator"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeNavigationComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNarrativeNavigationComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DiscoveredPOIs=NETFIELD_REP_START, \
		NETFIELD_REP_END=DiscoveredPOIs	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeNavigationComponent(UNarrativeNavigationComponent&&); \
	UNarrativeNavigationComponent(const UNarrativeNavigationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeNavigationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeNavigationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeNavigationComponent) \
	NO_API virtual ~UNarrativeNavigationComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_48_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVENAVIGATOR_API UClass* StaticClass<class UNarrativeNavigationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeNavigator_Public_NarrativeNavigationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
