// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ItemFragments/ItemFragment_Durability.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
#ifdef NINJAINVENTORYGAMEPLAY_ItemFragment_Durability_generated_h
#error "ItemFragment_Durability.generated.h already included, missing '#pragma once' in ItemFragment_Durability.h"
#endif
#define NINJAINVENTORYGAMEPLAY_ItemFragment_Durability_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_16_DELEGATE \
static void FItemDurabilityChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemDurabilityChangedSignature, UNinjaInventoryItem* Item, int32 Durability);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRepair); \
	DECLARE_FUNCTION(execAddWear); \
	DECLARE_FUNCTION(execSetDurability); \
	DECLARE_FUNCTION(execGetDurability); \
	DECLARE_FUNCTION(execGetMaximumDurability); \
	DECLARE_FUNCTION(execIsIndestructible); \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execCanBreak);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFragment_Durability(); \
	friend struct Z_Construct_UClass_UItemFragment_Durability_Statics; \
public: \
	DECLARE_CLASS(UItemFragment_Durability, UNinjaInventoryItemFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UItemFragment_Durability) \
	virtual UObject* _getUObject() const override { return const_cast<UItemFragment_Durability*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemFragment_Durability(UItemFragment_Durability&&); \
	UItemFragment_Durability(const UItemFragment_Durability&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFragment_Durability); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFragment_Durability); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFragment_Durability) \
	NO_API virtual ~UItemFragment_Durability();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UItemFragment_Durability>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Durability_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
