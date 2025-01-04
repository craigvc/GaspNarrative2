// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/NinjaInventoryAction_BaseWait.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINVENTORYCORE_NinjaInventoryAction_BaseWait_generated_h
#error "NinjaInventoryAction_BaseWait.generated.h already included, missing '#pragma once' in NinjaInventoryAction_BaseWait.h"
#endif
#define NINJAINVENTORYCORE_NinjaInventoryAction_BaseWait_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_16_DELEGATE \
NINJAINVENTORYCORE_API void FInventoryAsyncActionSignature_DelegateWrapper(const FMulticastScriptDelegate& InventoryAsyncActionSignature);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteAction_Implementation(); \
	DECLARE_FUNCTION(execAccumulateElapsedTime); \
	DECLARE_FUNCTION(execExecuteAction); \
	DECLARE_FUNCTION(execComplete);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryAction_BaseWait(); \
	friend struct Z_Construct_UClass_UNinjaInventoryAction_BaseWait_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryAction_BaseWait, UCancellableAsyncAction, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventoryCore"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryAction_BaseWait)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryAction_BaseWait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryAction_BaseWait(UNinjaInventoryAction_BaseWait&&); \
	UNinjaInventoryAction_BaseWait(const UNinjaInventoryAction_BaseWait&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryAction_BaseWait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryAction_BaseWait); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryAction_BaseWait) \
	NO_API virtual ~UNinjaInventoryAction_BaseWait();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYCORE_API UClass* StaticClass<class UNinjaInventoryAction_BaseWait>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryCore_Public_Async_NinjaInventoryAction_BaseWait_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
