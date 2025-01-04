// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryGameplayEffectItemFragment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
struct FGameplayTag; 
#ifdef NINJAINVENTORY_NinjaInventoryGameplayEffectItemFragment_generated_h
#error "NinjaInventoryGameplayEffectItemFragment.generated.h already included, missing '#pragma once' in NinjaInventoryGameplayEffectItemFragment.h"
#endif
#define NINJAINVENTORY_NinjaInventoryGameplayEffectItemFragment_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetMagnitudes_Implementation(const UNinjaInventoryItem* Item, TMap<FGameplayTag,float>& OutMagnitudes) const; \
	virtual bool DetermineEffectLevel_Implementation(const UNinjaInventoryItem* Item, float& OutEffectLevel) const; \
	DECLARE_FUNCTION(execGetMagnitudes); \
	DECLARE_FUNCTION(execDetermineEffectLevel); \
	DECLARE_FUNCTION(execRemoveEffectByClass); \
	DECLARE_FUNCTION(execRemoveEffect); \
	DECLARE_FUNCTION(execApplyEffect); \
	DECLARE_FUNCTION(execGetEffectLevel); \
	DECLARE_FUNCTION(execCanApplyEffect); \
	DECLARE_FUNCTION(execHasAppliedEffect);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryGameplayEffectItemFragment(); \
	friend struct Z_Construct_UClass_UNinjaInventoryGameplayEffectItemFragment_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryGameplayEffectItemFragment, UNinjaInventoryItemFragment, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryGameplayEffectItemFragment)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryGameplayEffectItemFragment(UNinjaInventoryGameplayEffectItemFragment&&); \
	UNinjaInventoryGameplayEffectItemFragment(const UNinjaInventoryGameplayEffectItemFragment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryGameplayEffectItemFragment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryGameplayEffectItemFragment); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInventoryGameplayEffectItemFragment) \
	NO_API virtual ~UNinjaInventoryGameplayEffectItemFragment();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryGameplayEffectItemFragment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryGameplayEffectItemFragment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
