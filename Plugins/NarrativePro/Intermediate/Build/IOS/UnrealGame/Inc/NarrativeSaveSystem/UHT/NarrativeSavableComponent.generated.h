// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeSavableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVESAVESYSTEM_NarrativeSavableComponent_generated_h
#error "NarrativeSavableComponent.generated.h already included, missing '#pragma once' in NarrativeSavableComponent.h"
#endif
#define NARRATIVESAVESYSTEM_NarrativeSavableComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execPrepareForSave);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNarrativeSavableComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeSavableComponent(UNarrativeSavableComponent&&); \
	UNarrativeSavableComponent(const UNarrativeSavableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeSavableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeSavableComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeSavableComponent) \
	NO_API virtual ~UNarrativeSavableComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNarrativeSavableComponent(); \
	friend struct Z_Construct_UClass_UNarrativeSavableComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeSavableComponent, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NarrativeSaveSystem"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeSavableComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INarrativeSavableComponent() {} \
public: \
	typedef UNarrativeSavableComponent UClassType; \
	typedef INarrativeSavableComponent ThisClass; \
	static void Execute_Load(UObject* O); \
	static void Execute_PrepareForSave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_13_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVESAVESYSTEM_API UClass* StaticClass<class UNarrativeSavableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeSaveSystem_Public_NarrativeSavableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
