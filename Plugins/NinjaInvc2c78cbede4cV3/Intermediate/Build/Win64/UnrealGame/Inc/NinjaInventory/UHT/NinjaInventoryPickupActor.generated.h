// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryPickupActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINVENTORY_NinjaInventoryPickupActor_generated_h
#error "NinjaInventoryPickupActor.generated.h already included, missing '#pragma once' in NinjaInventoryPickupActor.h"
#endif
#define NINJAINVENTORY_NinjaInventoryPickupActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleSourceUpdated_Implementation(); \
	virtual void HandleItemDataUpdated_Implementation(); \
	DECLARE_FUNCTION(execOnRep_Source); \
	DECLARE_FUNCTION(execOnRep_ItemData); \
	DECLARE_FUNCTION(execHandleSourceUpdated); \
	DECLARE_FUNCTION(execHandleItemDataUpdated);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaInventoryPickupActor(); \
	friend struct Z_Construct_UClass_ANinjaInventoryPickupActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaInventoryPickupActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(ANinjaInventoryPickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaInventoryPickupActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ItemData=NETFIELD_REP_START, \
		SourcePtr, \
		NETFIELD_REP_END=SourcePtr	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaInventoryPickupActor(ANinjaInventoryPickupActor&&); \
	ANinjaInventoryPickupActor(const ANinjaInventoryPickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaInventoryPickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaInventoryPickupActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaInventoryPickupActor) \
	NO_API virtual ~ANinjaInventoryPickupActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class ANinjaInventoryPickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryPickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
