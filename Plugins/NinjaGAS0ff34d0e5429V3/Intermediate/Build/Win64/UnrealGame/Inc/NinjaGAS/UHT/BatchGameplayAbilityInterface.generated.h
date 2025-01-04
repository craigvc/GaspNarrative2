// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BatchGameplayAbilityInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAGAS_BatchGameplayAbilityInterface_generated_h
#error "BatchGameplayAbilityInterface.generated.h already included, missing '#pragma once' in BatchGameplayAbilityInterface.h"
#endif
#define NINJAGAS_BatchGameplayAbilityInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndAbilityFromBatch_Implementation() {}; \
	DECLARE_FUNCTION(execEndAbilityFromBatch);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAGAS_API UBatchGameplayAbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBatchGameplayAbilityInterface(UBatchGameplayAbilityInterface&&); \
	UBatchGameplayAbilityInterface(const UBatchGameplayAbilityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAGAS_API, UBatchGameplayAbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBatchGameplayAbilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBatchGameplayAbilityInterface) \
	NINJAGAS_API virtual ~UBatchGameplayAbilityInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBatchGameplayAbilityInterface(); \
	friend struct Z_Construct_UClass_UBatchGameplayAbilityInterface_Statics; \
public: \
	DECLARE_CLASS(UBatchGameplayAbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaGAS"), NINJAGAS_API) \
	DECLARE_SERIALIZER(UBatchGameplayAbilityInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBatchGameplayAbilityInterface() {} \
public: \
	typedef UBatchGameplayAbilityInterface UClassType; \
	typedef IBatchGameplayAbilityInterface ThisClass; \
	static void Execute_EndAbilityFromBatch(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_8_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAGAS_API UClass* StaticClass<class UBatchGameplayAbilityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_Interfaces_BatchGameplayAbilityInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
