// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Interfaces/InventoryAnimationProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FGameplayTagQuery;
#ifdef NINJAINVENTORYGAMEPLAY_InventoryAnimationProviderInterface_generated_h
#error "InventoryAnimationProviderInterface.generated.h already included, missing '#pragma once' in InventoryAnimationProviderInterface.h"
#endif
#define NINJAINVENTORYGAMEPLAY_InventoryAnimationProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInventoryAnimation_Implementation(UObject* Requester, FGameplayTagQuery AnimationQuery) { return false; }; \
	DECLARE_FUNCTION(execGetInventoryAnimation);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYGAMEPLAY_API UInventoryAnimationProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryAnimationProviderInterface(UInventoryAnimationProviderInterface&&); \
	UInventoryAnimationProviderInterface(const UInventoryAnimationProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYGAMEPLAY_API, UInventoryAnimationProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryAnimationProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryAnimationProviderInterface) \
	NINJAINVENTORYGAMEPLAY_API virtual ~UInventoryAnimationProviderInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryAnimationProviderInterface(); \
	friend struct Z_Construct_UClass_UInventoryAnimationProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryAnimationProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NINJAINVENTORYGAMEPLAY_API) \
	DECLARE_SERIALIZER(UInventoryAnimationProviderInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryAnimationProviderInterface() {} \
public: \
	typedef UInventoryAnimationProviderInterface UClassType; \
	typedef IInventoryAnimationProviderInterface ThisClass; \
	static bool Execute_GetInventoryAnimation(UObject* O, UObject* Requester, FGameplayTagQuery AnimationQuery); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UInventoryAnimationProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
