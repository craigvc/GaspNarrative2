// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/EInventoryAnimationStrategy.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINVENTORYGAMEPLAY_EInventoryAnimationStrategy_generated_h
#error "EInventoryAnimationStrategy.generated.h already included, missing '#pragma once' in EInventoryAnimationStrategy.h"
#endif
#define NINJAINVENTORYGAMEPLAY_EInventoryAnimationStrategy_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryGameplay_Public_Types_EInventoryAnimationStrategy_h


#define FOREACH_ENUM_EINVENTORYANIMATIONSTRATEGY(op) \
	op(EInventoryAnimationStrategy::AlwaysExecute) \
	op(EInventoryAnimationStrategy::WhenAnimationStarts) \
	op(EInventoryAnimationStrategy::WaitForGameplayEvent) 

enum class EInventoryAnimationStrategy : uint8;
template<> struct TIsUEnumClass<EInventoryAnimationStrategy> { enum { Value = true }; };
template<> NINJAINVENTORYGAMEPLAY_API UEnum* StaticEnum<EInventoryAnimationStrategy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
