// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeSavableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
#ifdef NARRATIVESAVESYSTEM_NarrativeSavableActor_generated_h
#error "NarrativeSavableActor.generated.h already included, missing '#pragma once' in NarrativeSavableActor.h"
#endif
#define NARRATIVESAVESYSTEM_NarrativeSavableActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActorGUID); \
	DECLARE_FUNCTION(execShouldRespawn); \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execPrepareForSave);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeSavableActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeSavableActor(UNarrativeSavableActor&&); \
	UNarrativeSavableActor(const UNarrativeSavableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeSavableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeSavableActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeSavableActor) \
	NO_API virtual ~UNarrativeSavableActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNarrativeSavableActor(); \
	friend struct Z_Construct_UClass_UNarrativeSavableActor_Statics; \
public: \
	DECLARE_CLASS(UNarrativeSavableActor, UNarrativeStableActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NarrativeSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeSavableActor)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INarrativeSavableActor() {} \
public: \
	typedef UNarrativeSavableActor UClassType; \
	typedef INarrativeSavableActor ThisClass; \
	static void Execute_Load(UObject* O); \
	static void Execute_PrepareForSave(UObject* O); \
	static void Execute_SetActorGUID(UObject* O, FGuid const& SavedGUID); \
	static bool Execute_ShouldRespawn(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<class UNarrativeSavableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
