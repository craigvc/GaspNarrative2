// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ItemFragments/ItemFragment_Weight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;
#ifdef NINJAINVENTORYGAMEPLAY_ItemFragment_Weight_generated_h
#error "ItemFragment_Weight.generated.h already included, missing '#pragma once' in ItemFragment_Weight.h"
#endif
#define NINJAINVENTORYGAMEPLAY_ItemFragment_Weight_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_20_DELEGATE \
static void FItemWeightChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemWeightChangedSignature, UNinjaInventoryItem* Item, float Weight);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStackSizeChanged); \
	DECLARE_FUNCTION(execCanAddWeight); \
	DECLARE_FUNCTION(execGetTotalWeight); \
	DECLARE_FUNCTION(execGetWeight);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFragment_Weight(); \
	friend struct Z_Construct_UClass_UItemFragment_Weight_Statics; \
public: \
	DECLARE_CLASS(UItemFragment_Weight, UItemFragment_GameplayEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UItemFragment_Weight) \
	virtual UObject* _getUObject() const override { return const_cast<UItemFragment_Weight*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemFragment_Weight(UItemFragment_Weight&&); \
	UItemFragment_Weight(const UItemFragment_Weight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFragment_Weight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFragment_Weight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFragment_Weight) \
	NO_API virtual ~UItemFragment_Weight();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UItemFragment_Weight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Weight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
