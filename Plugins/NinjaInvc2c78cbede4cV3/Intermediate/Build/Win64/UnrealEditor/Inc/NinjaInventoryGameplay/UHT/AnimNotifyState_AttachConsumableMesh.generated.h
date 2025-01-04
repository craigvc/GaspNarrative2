// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifyState_AttachConsumableMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaEquipmentManagerComponent;
#ifdef NINJAINVENTORYGAMEPLAY_AnimNotifyState_AttachConsumableMesh_generated_h
#error "AnimNotifyState_AttachConsumableMesh.generated.h already included, missing '#pragma once' in AnimNotifyState_AttachConsumableMesh.h"
#endif
#define NINJAINVENTORYGAMEPLAY_AnimNotifyState_AttachConsumableMesh_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquipmentManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState_AttachConsumableMesh(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_AttachConsumableMesh_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState_AttachConsumableMesh, UAnimNotifyState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState_AttachConsumableMesh)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNotifyState_AttachConsumableMesh(UAnimNotifyState_AttachConsumableMesh&&); \
	UAnimNotifyState_AttachConsumableMesh(const UAnimNotifyState_AttachConsumableMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState_AttachConsumableMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState_AttachConsumableMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimNotifyState_AttachConsumableMesh) \
	NO_API virtual ~UAnimNotifyState_AttachConsumableMesh();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_35_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYGAMEPLAY_API UClass* StaticClass<class UAnimNotifyState_AttachConsumableMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Animation_AnimNotifyState_AttachConsumableMesh_h


#define FOREACH_ENUM_ECONSUMABLEMESHTYPE(op) \
	op(EConsumableMeshType::SkeletalMesh) \
	op(EConsumableMeshType::StaticMesh) 

enum class EConsumableMeshType : uint8;
template<> struct TIsUEnumClass<EConsumableMeshType> { enum { Value = true }; };
template<> NINJAINVENTORYGAMEPLAY_API UEnum* StaticEnum<EConsumableMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
