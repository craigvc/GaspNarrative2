// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ItemFragments/ItemFragment_Stack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryManagerComponent;
struct FInventoryDefaultItemMemory;
struct FInventoryItemContext;
#ifdef NINJAINVENTORYGAMEPLAY_ItemFragment_Stack_generated_h
#error "ItemFragment_Stack.generated.h already included, missing '#pragma once' in ItemFragment_Stack.h"
#endif
#define NINJAINVENTORYGAMEPLAY_ItemFragment_Stack_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_28_DELEGATE \
static void FItemStackChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemStackChangedSignature, UNinjaInventoryItem* Item, int32 StackSize);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDefaultMemory); \
	DECLARE_FUNCTION(execOrganizeStacksInContext); \
	DECLARE_FUNCTION(execSplitStack); \
	DECLARE_FUNCTION(execCombineStacks); \
	DECLARE_FUNCTION(execSetStackSize); \
	DECLARE_FUNCTION(execGetStackSizeFromDefaultMemories); \
	DECLARE_FUNCTION(execGetStackSize); \
	DECLARE_FUNCTION(execGetMaximumLimit); \
	DECLARE_FUNCTION(execGetStackLimit); \
	DECLARE_FUNCTION(execCountTotalStackSize); \
	DECLARE_FUNCTION(execCanSplitStack); \
	DECLARE_FUNCTION(execCanCombineStacks); \
	DECLARE_FUNCTION(execCanAddStack);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFragment_Stack(); \
	friend struct Z_Construct_UClass_UItemFragment_Stack_Statics; \
public: \
	DECLARE_CLASS(UItemFragment_Stack, UNinjaInventoryItemFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UItemFragment_Stack) \
	virtual UObject* _getUObject() const override { return const_cast<UItemFragment_Stack*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemFragment_Stack(UItemFragment_Stack&&); \
	UItemFragment_Stack(const UItemFragment_Stack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFragment_Stack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFragment_Stack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFragment_Stack) \
	NO_API virtual ~UItemFragment_Stack();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UItemFragment_Stack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Stack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
