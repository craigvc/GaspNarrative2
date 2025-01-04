// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaEquipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UAbilitySystemComponent;
class UNinjaEquipment;
class UNinjaEquipmentDataAsset;
class UNinjaEquipmentManagerComponent;
class UNinjaEquipmentSceneComponentSelector;
class UNinjaInventoryContainer;
class UNinjaInventoryItem;
class UNinjaInventoryManagerComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FStoredEquipmentAnimLayer;
struct FStoredEquipmentMeshComponent;
#ifdef NINJAINVENTORYEQUIPMENT_NinjaEquipment_generated_h
#error "NinjaEquipment.generated.h already included, missing '#pragma once' in NinjaEquipment.h"
#endif
#define NINJAINVENTORYEQUIPMENT_NinjaEquipment_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_36_DELEGATE \
static void FEquipmentEventSignature_DelegateWrapper(const FMulticastScriptDelegate& EquipmentEventSignature, UNinjaEquipment* Equipment);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USceneComponent* GetRootComponent_Implementation() const; \
	DECLARE_FUNCTION(execOnRep_Item); \
	DECLARE_FUNCTION(execBP_OnStaticMeshRemoved); \
	DECLARE_FUNCTION(execBP_OnSkeletalMeshRemoved); \
	DECLARE_FUNCTION(execBP_OnStaticMeshSet); \
	DECLARE_FUNCTION(execBP_OnSkeletalMeshSet); \
	DECLARE_FUNCTION(execBP_OnStateTagChanged); \
	DECLARE_FUNCTION(execBP_OnItemSet); \
	DECLARE_FUNCTION(execRemoveFromAbilitySystem); \
	DECLARE_FUNCTION(execAddToAbilitySystem); \
	DECLARE_FUNCTION(execDestroyAllActors); \
	DECLARE_FUNCTION(execSynchronizeSavedActors); \
	DECLARE_FUNCTION(execAttachEquipmentActor); \
	DECLARE_FUNCTION(execSpawnOrReuseActors); \
	DECLARE_FUNCTION(execUnlinkAnimationLayers); \
	DECLARE_FUNCTION(execLinkAnimationLayers); \
	DECLARE_FUNCTION(execClearUnusedMeshes); \
	DECLARE_FUNCTION(execClearMeshes); \
	DECLARE_FUNCTION(execSetMeshes); \
	DECLARE_FUNCTION(execRemoveContainers); \
	DECLARE_FUNCTION(execAddContainers); \
	DECLARE_FUNCTION(execGetRootComponent); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetInventoryManager); \
	DECLARE_FUNCTION(execGetEquipmentManager); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetItem); \
	DECLARE_FUNCTION(execGetContainer); \
	DECLARE_FUNCTION(execGetSlotTag); \
	DECLARE_FUNCTION(execGetPreviousStateTag); \
	DECLARE_FUNCTION(execGetStateTag); \
	DECLARE_FUNCTION(execGetEquipmentTags); \
	DECLARE_FUNCTION(execGetEffectCauserActor); \
	DECLARE_FUNCTION(execIsWaitingForDataLoad); \
	DECLARE_FUNCTION(execIsDataLoaded); \
	DECLARE_FUNCTION(execIsDeactivated); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execGetSpawnedActors); \
	DECLARE_FUNCTION(execGetLinkedAnimationLayers); \
	DECLARE_FUNCTION(execGetUnusedMeshComponents); \
	DECLARE_FUNCTION(execGetModifiedMeshComponents); \
	DECLARE_FUNCTION(execGetStateContainers); \
	DECLARE_FUNCTION(execGetPawn);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaEquipment(); \
	friend struct Z_Construct_UClass_UNinjaEquipment_Statics; \
public: \
	DECLARE_CLASS(UNinjaEquipment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryEquipment"), NO_API) \
	DECLARE_SERIALIZER(UNinjaEquipment) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaEquipment*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Item=NETFIELD_REP_START, \
		StateContainers, \
		SpawnedActors, \
		NETFIELD_REP_END=SpawnedActors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UNinjaEquipment) \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaEquipment(UNinjaEquipment&&); \
	UNinjaEquipment(const UNinjaEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaEquipment) \
	NO_API virtual ~UNinjaEquipment();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_32_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<class UNinjaEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_NinjaEquipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
