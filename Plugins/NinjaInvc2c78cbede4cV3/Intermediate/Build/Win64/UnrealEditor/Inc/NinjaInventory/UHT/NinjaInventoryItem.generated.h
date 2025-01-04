// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaInventoryItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UInterface;
class UNinjaInventoryItem;
class UNinjaInventoryItemDataAsset;
class UNinjaInventoryItemFragment;
class UNinjaInventoryManagerComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGuid;
struct FInventoryDefaultItemMemory;
struct FInventoryFragmentMemory;
template struct TInstancedStruct<FInventoryFragmentMemory>;
#ifdef NINJAINVENTORY_NinjaInventoryItem_generated_h
#error "NinjaInventoryItem.generated.h already included, missing '#pragma once' in NinjaInventoryItem.h"
#endif
#define NINJAINVENTORY_NinjaInventoryItem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_47_DELEGATE \
static void FItemEventSignature_DelegateWrapper(const FMulticastScriptDelegate& ItemEventSignature, UNinjaInventoryItem* Item);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInvalidateEffectHandle); \
	DECLARE_FUNCTION(execGetActiveEffectHandle); \
	DECLARE_FUNCTION(execSaveActiveEffectHandle); \
	DECLARE_FUNCTION(execHasActiveEffectHandle); \
	DECLARE_FUNCTION(execRemoveFragmentMemory); \
	DECLARE_FUNCTION(execSaveDefaultFragmentMemories); \
	DECLARE_FUNCTION(execSaveFragmentMemory); \
	DECLARE_FUNCTION(execGetSerializableFragmentMemories); \
	DECLARE_FUNCTION(execGetFragmentMemories); \
	DECLARE_FUNCTION(execGetFragmentMemory); \
	DECLARE_FUNCTION(execHasFragmentMemory); \
	DECLARE_FUNCTION(execInitializeFragmentMemory); \
	DECLARE_FUNCTION(execInitializeFragmentMemories); \
	DECLARE_FUNCTION(execRevertFragments); \
	DECLARE_FUNCTION(execApplyFragments); \
	DECLARE_FUNCTION(execInitializeFragments); \
	DECLARE_FUNCTION(execFindFragmentsByInterface); \
	DECLARE_FUNCTION(execFindFragmentByInterface); \
	DECLARE_FUNCTION(execFindFragmentByClass); \
	DECLARE_FUNCTION(execHasAppliedFragments); \
	DECLARE_FUNCTION(execHasInitializedFragments); \
	DECLARE_FUNCTION(execOwnerHasAuthority); \
	DECLARE_FUNCTION(execHasFragment); \
	DECLARE_FUNCTION(execHasSameData); \
	DECLARE_FUNCTION(execGetAbilitySystem); \
	DECLARE_FUNCTION(execGetInventoryManager); \
	DECLARE_FUNCTION(execGetData); \
	DECLARE_FUNCTION(execGetSupportedOperations); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags); \
	DECLARE_FUNCTION(execGetItemId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryItem(); \
	friend struct Z_Construct_UClass_UNinjaInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventory"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryItem) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaInventoryItem*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bHasInitializedFragments=NETFIELD_REP_START, \
		ItemId, \
		ItemTags, \
		FragmentMemoryList, \
		ItemData, \
		InventoryManager, \
		NETFIELD_REP_END=InventoryManager	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UNinjaInventoryItem) \
public:


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryItem(UNinjaInventoryItem&&); \
	UNinjaInventoryItem(const UNinjaInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryItem) \
	NO_API virtual ~UNinjaInventoryItem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_42_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORY_API UClass* StaticClass<class UNinjaInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_GameFramework_NinjaInventoryItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
