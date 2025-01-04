// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/FInventoryItemContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINVENTORY_FInventoryItemContext_generated_h
#error "FInventoryItemContext.generated.h already included, missing '#pragma once' in FInventoryItemContext.h"
#endif
#define NINJAINVENTORY_FInventoryItemContext_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemContextEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<struct FInventoryItemContextEntry>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItemContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NINJAINVENTORY_API UScriptStruct* StaticStruct<struct FInventoryItemContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventory_Public_Types_FInventoryItemContext_h


#define FOREACH_ENUM_EINVENTORYCONTEXTSTATE(op) \
	op(EInventoryContextState::Empty) \
	op(EInventoryContextState::NotExecuted) \
	op(EInventoryContextState::Succeeded) \
	op(EInventoryContextState::PartiallySucceeded) \
	op(EInventoryContextState::Failed) 

enum class EInventoryContextState : uint8;
template<> struct TIsUEnumClass<EInventoryContextState> { enum { Value = true }; };
template<> NINJAINVENTORY_API UEnum* StaticEnum<EInventoryContextState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
