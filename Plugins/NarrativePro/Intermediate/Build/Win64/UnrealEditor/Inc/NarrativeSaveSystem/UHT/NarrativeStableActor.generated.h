// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeStableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef NARRATIVESAVESYSTEM_NarrativeStableActor_generated_h
#error "NarrativeStableActor.generated.h already included, missing '#pragma once' in NarrativeStableActor.h"
#endif
#define NARRATIVESAVESYSTEM_NarrativeStableActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActorGUID);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeStableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeStableActor(UNarrativeStableActor&&); \
	UNarrativeStableActor(const UNarrativeStableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeStableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeStableActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeStableActor) \
	NO_API virtual ~UNarrativeStableActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNarrativeStableActor(); \
	friend struct Z_Construct_UClass_UNarrativeStableActor_Statics; \
public: \
	DECLARE_CLASS(UNarrativeStableActor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NarrativeSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeStableActor)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INarrativeStableActor() {} \
public: \
	typedef UNarrativeStableActor UClassType; \
	typedef INarrativeStableActor ThisClass; \
	static FGuid Execute_GetActorGUID(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<class UNarrativeStableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeStableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
