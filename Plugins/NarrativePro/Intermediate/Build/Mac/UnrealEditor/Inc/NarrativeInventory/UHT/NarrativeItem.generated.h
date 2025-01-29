// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerController;
#ifdef NARRATIVEINVENTORY_NarrativeItem_generated_h
#error "NarrativeItem.generated.h already included, missing '#pragma once' in NarrativeItem.h"
#endif
#define NARRATIVEINVENTORY_NarrativeItem_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_11_DELEGATE \
NARRATIVEINVENTORY_API void FOnItemModified_DelegateWrapper(const FMulticastScriptDelegate& OnItemModified);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNarrativeItemStat_Statics; \
	NARRATIVEINVENTORY_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEINVENTORY_API UScriptStruct* StaticStruct<struct FNarrativeItemStat>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShouldShowInInventory); \
	DECLARE_FUNCTION(execShouldUseOnAdd); \
	DECLARE_FUNCTION(execCanUse); \
	DECLARE_FUNCTION(execCanBeRemoved); \
	DECLARE_FUNCTION(execDeactivated); \
	DECLARE_FUNCTION(execActivated); \
	DECLARE_FUNCTION(execGetStringVariable); \
	DECLARE_FUNCTION(execGetParsedDescription); \
	DECLARE_FUNCTION(execGetRawDescription); \
	DECLARE_FUNCTION(execMarkDirtyForReplication); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetOwningController); \
	DECLARE_FUNCTION(execGetStackSpace); \
	DECLARE_FUNCTION(execGetMaxStackSize); \
	DECLARE_FUNCTION(execIsStackFull); \
	DECLARE_FUNCTION(execGetStackWeight); \
	DECLARE_FUNCTION(execGetLastUseTime); \
	DECLARE_FUNCTION(execSetLastUseTime); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execOnRep_Quantity); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execOnRep_bActive);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeItem(); \
	friend struct Z_Construct_UClass_UNarrativeItem_Statics; \
public: \
	DECLARE_CLASS(UNarrativeItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeInventory"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActive=NETFIELD_REP_START, \
		Quantity, \
		LastUseTime, \
		NETFIELD_REP_END=LastUseTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UNarrativeItem) \
public:


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeItem(UNarrativeItem&&); \
	UNarrativeItem(const UNarrativeItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeItem) \
	NO_API virtual ~UNarrativeItem();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_46_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINVENTORY_API UClass* StaticClass<class UNarrativeItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_NarrativeItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
