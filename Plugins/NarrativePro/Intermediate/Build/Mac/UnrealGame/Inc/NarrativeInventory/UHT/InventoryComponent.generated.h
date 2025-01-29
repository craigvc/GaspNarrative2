// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
class UNarrativeInventoryComponent;
class UNarrativeItem;
struct FItemAddResult;
struct FLootTableRoll;
#ifdef NARRATIVEINVENTORY_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define NARRATIVEINVENTORY_InventoryComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAddResult_Statics; \
	NARRATIVEINVENTORY_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<struct FItemAddResult>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_79_DELEGATE \
NARRATIVEINVENTORY_API void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_82_DELEGATE \
NARRATIVEINVENTORY_API void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, FItemAddResult const& AddResult);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_83_DELEGATE \
NARRATIVEINVENTORY_API void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, UNarrativeItem* Item, const int32 Amount);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_85_DELEGATE \
NARRATIVEINVENTORY_API void FOnBeginLooting_DelegateWrapper(const FMulticastScriptDelegate& OnBeginLooting, UNarrativeInventoryComponent* LootSource);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_86_DELEGATE \
NARRATIVEINVENTORY_API void FOnEndLooting_DelegateWrapper(const FMulticastScriptDelegate& OnEndLooting);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_88_DELEGATE \
NARRATIVEINVENTORY_API void FOnItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnItemUsed, UNarrativeItem* Item);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_90_DELEGATE \
NARRATIVEINVENTORY_API void FOnCurrencyChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrencyChanged, const int32 OldCurrency, const int32 NewCurrency);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemWithQuantity_Statics; \
	NARRATIVEINVENTORY_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<struct FItemWithQuantity>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemCollection(); \
	friend struct Z_Construct_UClass_UItemCollection_Statics; \
public: \
	DECLARE_CLASS(UItemCollection, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeInventory"), NO_API) \
	DECLARE_SERIALIZER(UItemCollection)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_121_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemCollection(UItemCollection&&); \
	UItemCollection(const UItemCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemCollection) \
	NO_API virtual ~UItemCollection();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_116_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_121_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_121_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINVENTORY_API UClass* StaticClass<class UItemCollection>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootTableRoll_Statics; \
	NARRATIVEINVENTORY_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<struct FLootTableRoll>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLootTableRow_Statics; \
	NARRATIVEINVENTORY_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<struct FLootTableRow>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrativeSavedItem_Statics; \
	NARRATIVEINVENTORY_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<struct FNarrativeSavedItem>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRequestStoreItem_Implementation(UNarrativeItem* ItemToLoot, const int32 Quantity); \
	virtual void ServerRequestLootItem_Implementation(UNarrativeItem* ItemToLoot, const int32 Quantity); \
	virtual void ServerStopLooting_Implementation(); \
	virtual void ServerUseItem_Implementation(UNarrativeItem* Item); \
	virtual void ServerConsumeItem_Implementation(UNarrativeItem* Item, const int32 Quantity); \
	virtual void ServerRemoveItem_Implementation(UNarrativeItem* Item); \
	virtual void ClientRefreshInventory_Implementation(); \
	DECLARE_FUNCTION(execOnRep_LootSource); \
	DECLARE_FUNCTION(execOnRep_Currency); \
	DECLARE_FUNCTION(execOnRep_Items); \
	DECLARE_FUNCTION(execGetSellPrice); \
	DECLARE_FUNCTION(execGetBuyPrice); \
	DECLARE_FUNCTION(execServerRequestStoreItem); \
	DECLARE_FUNCTION(execRequestStoreItem); \
	DECLARE_FUNCTION(execServerRequestLootItem); \
	DECLARE_FUNCTION(execRequestLootItem); \
	DECLARE_FUNCTION(execStopLooting); \
	DECLARE_FUNCTION(execServerStopLooting); \
	DECLARE_FUNCTION(execServerUseItem); \
	DECLARE_FUNCTION(execServerConsumeItem); \
	DECLARE_FUNCTION(execServerRemoveItem); \
	DECLARE_FUNCTION(execSetLootSource); \
	DECLARE_FUNCTION(execGiveDefaultItems); \
	DECLARE_FUNCTION(execClientRefreshInventory); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetCapacity); \
	DECLARE_FUNCTION(execGetWeightCapacity); \
	DECLARE_FUNCTION(execSetIsVendor); \
	DECLARE_FUNCTION(execSetInventoryFriendlyName); \
	DECLARE_FUNCTION(execSetCapacity); \
	DECLARE_FUNCTION(execSetWeightCapacity); \
	DECLARE_FUNCTION(execGetCurrentWeight); \
	DECLARE_FUNCTION(execSetCurrency); \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execGetCurrency); \
	DECLARE_FUNCTION(execGetSpaceForItem); \
	DECLARE_FUNCTION(execFindItemsOfClass); \
	DECLARE_FUNCTION(execFindItemByClass); \
	DECLARE_FUNCTION(execAllowStoreItem); \
	DECLARE_FUNCTION(execAllowLootItem); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execTryAddItemFromClass); \
	DECLARE_FUNCTION(execTryAddFromLootTable); \
	DECLARE_FUNCTION(execUseItem);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeInventoryComponent(); \
	friend struct Z_Construct_UClass_UNarrativeInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeInventory"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeInventoryComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNarrativeInventoryComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LootSource=NETFIELD_REP_START, \
		Items, \
		Currency, \
		NETFIELD_REP_END=Currency	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeInventoryComponent(UNarrativeInventoryComponent&&); \
	UNarrativeInventoryComponent(const UNarrativeInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeInventoryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNarrativeInventoryComponent) \
	NO_API virtual ~UNarrativeInventoryComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_226_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINVENTORY_API UClass* StaticClass<class UNarrativeInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
