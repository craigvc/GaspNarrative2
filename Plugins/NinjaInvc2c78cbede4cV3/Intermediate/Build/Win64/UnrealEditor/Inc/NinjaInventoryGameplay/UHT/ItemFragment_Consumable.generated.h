// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/ItemFragments/ItemFragment_Consumable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayEffect;
class UNinjaInventoryItem;
enum class EConsumableItemCharges : uint8;
struct FGameplayAttribute;
#ifdef NINJAINVENTORYGAMEPLAY_ItemFragment_Consumable_generated_h
#error "ItemFragment_Consumable.generated.h already included, missing '#pragma once' in ItemFragment_Consumable.h"
#endif
#define NINJAINVENTORYGAMEPLAY_ItemFragment_Consumable_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConsume); \
	DECLARE_FUNCTION(execGetCurrentCharges); \
	DECLARE_FUNCTION(execGetEffectLevel); \
	DECLARE_FUNCTION(execGetEffectClass); \
	DECLARE_FUNCTION(execGetChargesAttribute); \
	DECLARE_FUNCTION(execGetCharges);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemFragment_Consumable(); \
	friend struct Z_Construct_UClass_UItemFragment_Consumable_Statics; \
public: \
	DECLARE_CLASS(UItemFragment_Consumable, UNinjaInventoryItemFragment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UItemFragment_Consumable)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemFragment_Consumable(UItemFragment_Consumable&&); \
	UItemFragment_Consumable(const UItemFragment_Consumable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemFragment_Consumable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemFragment_Consumable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemFragment_Consumable) \
	NO_API virtual ~UItemFragment_Consumable();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_37_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UItemFragment_Consumable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_GameFramework_ItemFragments_ItemFragment_Consumable_h


#define FOREACH_ENUM_ECONSUMABLEITEMCHARGES(op) \
	op(EConsumableItemCharges::GameplayAttribute) \
	op(EConsumableItemCharges::StackFragment) \
	op(EConsumableItemCharges::None) 

enum class EConsumableItemCharges : uint8;
template<> struct TIsUEnumClass<EConsumableItemCharges> { enum { Value = true }; };
template<> NINJAINVENTORYGAMEPLAY_API UEnum* StaticEnum<EConsumableItemCharges>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
