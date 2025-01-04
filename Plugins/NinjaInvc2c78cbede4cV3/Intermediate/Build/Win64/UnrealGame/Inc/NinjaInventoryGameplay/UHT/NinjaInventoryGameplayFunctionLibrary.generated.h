// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaInventoryGameplayFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInventoryContainer;
class UNinjaInventoryContainerDataAsset;
class UNinjaInventoryItem;
struct FInventoryDefaultItemMemory;
struct FInventoryFragmentPayload;
template struct TInstancedStruct<FInventoryFragmentPayload>;
#ifdef NINJAINVENTORYGAMEPLAY_NinjaInventoryGameplayFunctionLibrary_generated_h
#error "NinjaInventoryGameplayFunctionLibrary.generated.h already included, missing '#pragma once' in NinjaInventoryGameplayFunctionLibrary.h"
#endif
#define NINJAINVENTORYGAMEPLAY_NinjaInventoryGameplayFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateWearPayload); \
	DECLARE_FUNCTION(execCreateUpgradePayload); \
	DECLARE_FUNCTION(execCreateSwapPayload); \
	DECLARE_FUNCTION(execCreateSplitPayload); \
	DECLARE_FUNCTION(execCreateRepairPayload); \
	DECLARE_FUNCTION(execCreateMovePayload); \
	DECLARE_FUNCTION(execCreateDropPayload); \
	DECLARE_FUNCTION(execCreateDeactivatePayload); \
	DECLARE_FUNCTION(execCreateConsumePayload); \
	DECLARE_FUNCTION(execCreateCombinePayload); \
	DECLARE_FUNCTION(execCreateActivatePayload); \
	DECLARE_FUNCTION(execCreateLevelMemory); \
	DECLARE_FUNCTION(execCreateDurabilityMemory); \
	DECLARE_FUNCTION(execCreateStackMemory); \
	DECLARE_FUNCTION(execCreateContainerMemory); \
	DECLARE_FUNCTION(execIsEquipmentContainer); \
	DECLARE_FUNCTION(execInEquipmentContainer);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryGameplayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNinjaInventoryGameplayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryGameplayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryGameplayFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryGameplayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryGameplayFunctionLibrary(UNinjaInventoryGameplayFunctionLibrary&&); \
	UNinjaInventoryGameplayFunctionLibrary(const UNinjaInventoryGameplayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryGameplayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryGameplayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryGameplayFunctionLibrary) \
	NO_API virtual ~UNinjaInventoryGameplayFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UNinjaInventoryGameplayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_NinjaInventoryGameplayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
