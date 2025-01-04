// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryItemFragment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
struct FGameplayTagContainer;
struct FInventoryFragmentMemory;
template struct TInstancedStruct<FInventoryFragmentMemory>;
struct FInventoryFragmentPayload;
template struct TInstancedStruct<FInventoryFragmentPayload>;
#ifdef NINJAINVENTORY_NinjaInventoryItemFragment_generated_h
#error "NinjaInventoryItemFragment.generated.h already included, missing '#pragma once' in NinjaInventoryItemFragment.h"
#endif
#define NINJAINVENTORY_NinjaInventoryItemFragment_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPerformOperation_Implementation(TInstancedStruct<FInventoryFragmentPayload> const& Payload); \
	virtual bool OnEvaluateOperation_Implementation(TInstancedStruct<FInventoryFragmentPayload> const& Payload) const; \
	virtual void OnRevertFragment_Implementation(UNinjaInventoryItem* Item); \
	virtual void OnApplyFragment_Implementation(UNinjaInventoryItem* Item); \
	virtual void OnInitializeFragment_Implementation(UNinjaInventoryItem* Item); \
	virtual void HandleMemoryRemoved_Implementation(UNinjaInventoryItem* Item); \
	virtual void HandleMemoryUpdated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory); \
	virtual void HandleMemoryCreated_Implementation(UNinjaInventoryItem* Item, TInstancedStruct<FInventoryFragmentMemory>& FragmentMemory); \
	DECLARE_FUNCTION(execOnPerformOperation); \
	DECLARE_FUNCTION(execOnEvaluateOperation); \
	DECLARE_FUNCTION(execOnRevertFragment); \
	DECLARE_FUNCTION(execOnApplyFragment); \
	DECLARE_FUNCTION(execOnInitializeFragment); \
	DECLARE_FUNCTION(execItemHasAuthority); \
	DECLARE_FUNCTION(execPerformOperation); \
	DECLARE_FUNCTION(execEvaluateOperation); \
	DECLARE_FUNCTION(execGetSupportedOperationTags); \
	DECLARE_FUNCTION(execGetItemTags); \
	DECLARE_FUNCTION(execHandleMemoryRemoved); \
	DECLARE_FUNCTION(execHandleMemoryUpdated); \
	DECLARE_FUNCTION(execHandleMemoryCreated); \
	DECLARE_FUNCTION(execRevertFragment); \
	DECLARE_FUNCTION(execApplyFragment); \
	DECLARE_FUNCTION(execInitializeFragment); \
	DECLARE_FUNCTION(execItemHasFragment);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryItemFragment(); \
	friend struct Z_Construct_UClass_UNinjaInventoryItemFragment_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryItemFragment, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryItemFragment) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaInventoryItemFragment*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryItemFragment(UNinjaInventoryItemFragment&&); \
	UNinjaInventoryItemFragment(const UNinjaInventoryItemFragment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryItemFragment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryItemFragment); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryItemFragment) \
	NO_API virtual ~UNinjaInventoryItemFragment();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_21_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryItemFragment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItemFragment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
