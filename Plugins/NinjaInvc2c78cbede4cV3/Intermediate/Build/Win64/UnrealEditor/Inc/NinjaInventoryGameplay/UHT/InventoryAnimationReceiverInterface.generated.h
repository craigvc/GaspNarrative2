// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Interfaces/InventoryAnimationReceiverInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef NINJAINVENTORYGAMEPLAY_InventoryAnimationReceiverInterface_generated_h
#error "InventoryAnimationReceiverInterface.generated.h already included, missing '#pragma once' in InventoryAnimationReceiverInterface.h"
#endif
#define NINJAINVENTORYGAMEPLAY_InventoryAnimationReceiverInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleAnimationNotFound_Implementation() {}; \
	virtual void HandleAnimationLoaded_Implementation(UAnimMontage* MontageToPlay, FName MontageSection) {}; \
	DECLARE_FUNCTION(execHandleAnimationNotFound); \
	DECLARE_FUNCTION(execHandleAnimationLoaded);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINVENTORYGAMEPLAY_API UInventoryAnimationReceiverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryAnimationReceiverInterface(UInventoryAnimationReceiverInterface&&); \
	UInventoryAnimationReceiverInterface(const UInventoryAnimationReceiverInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINVENTORYGAMEPLAY_API, UInventoryAnimationReceiverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryAnimationReceiverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryAnimationReceiverInterface) \
	NINJAINVENTORYGAMEPLAY_API virtual ~UInventoryAnimationReceiverInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryAnimationReceiverInterface(); \
	friend struct Z_Construct_UClass_UInventoryAnimationReceiverInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryAnimationReceiverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NINJAINVENTORYGAMEPLAY_API) \
	DECLARE_SERIALIZER(UInventoryAnimationReceiverInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryAnimationReceiverInterface() {} \
public: \
	typedef UInventoryAnimationReceiverInterface UClassType; \
	typedef IInventoryAnimationReceiverInterface ThisClass; \
	static void Execute_HandleAnimationLoaded(UObject* O, UAnimMontage* MontageToPlay, FName MontageSection); \
	static void Execute_HandleAnimationNotFound(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_8_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UInventoryAnimationReceiverInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_AbilitySystem_Interfaces_InventoryAnimationReceiverInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
