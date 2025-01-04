// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ItemFragments/ItemFragment_Container.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
struct FInventoryDefaultItemMemory;
#ifdef NINJAINVENTORYGAMEPLAY_ItemFragment_Container_generated_h
#error "ItemFragment_Container.generated.h already included, missing '#pragma once' in ItemFragment_Container.h"
#endif
#define NINJAINVENTORYGAMEPLAY_ItemFragment_Container_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_32_DELEGATE \
static void FItemContainerChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemContainerChangedSignature, UNinjaInventoryItem* Item, UNinjaInventoryContainer* Container);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_33_DELEGATE \
static void FItemPositionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemPositionChangedSignature, UNinjaInventoryItem* Item, int32 Position);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindBestPositionForItem); \
	DECLARE_FUNCTION(execFindBestContainerForItem); \
	DECLARE_FUNCTION(execCreateDefaultMemory); \
	DECLARE_FUNCTION(execSwapItems); \
	DECLARE_FUNCTION(execMoveItem); \
	DECLARE_FUNCTION(execSetBestContainerAndPositionForItem); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetPrimaryContainer); \
	DECLARE_FUNCTION(execCanSwapItems); \
	DECLARE_FUNCTION(execCanMoveItem); \
	DECLARE_FUNCTION(execIsPreferredContainer); \
	DECLARE_FUNCTION(execIsValidPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetPrimaryContainer);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFragment_Container(); \
	friend struct Z_Construct_UClass_UItemFragment_Container_Statics; \
public: \
	DECLARE_CLASS(UItemFragment_Container, UNinjaInventoryItemFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UItemFragment_Container) \
	virtual UObject* _getUObject() const override { return const_cast<UItemFragment_Container*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemFragment_Container(UItemFragment_Container&&); \
	UItemFragment_Container(const UItemFragment_Container&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFragment_Container); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFragment_Container); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFragment_Container) \
	NO_API virtual ~UItemFragment_Container();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UItemFragment_Container>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Container_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
