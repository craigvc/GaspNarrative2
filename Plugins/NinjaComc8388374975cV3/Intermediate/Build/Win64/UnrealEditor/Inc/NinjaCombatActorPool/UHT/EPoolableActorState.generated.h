// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/EPoolableActorState.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBATACTORPOOL_EPoolableActorState_generated_h
#error "EPoolableActorState.generated.h already included, missing '#pragma once' in EPoolableActorState.h"
#endif
#define NINJACOMBATACTORPOOL_EPoolableActorState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatActorPool_Public_Types_EPoolableActorState_h


#define FOREACH_ENUM_EPOOLABLEACTORSTATE(op) \
	op(EPoolableActorState::Inactive) \
	op(EPoolableActorState::Reserved) \
	op(EPoolableActorState::Active) 

enum class EPoolableActorState : uint8;
template<> struct TIsUEnumClass<EPoolableActorState> { enum { Value = true }; };
template<> NINJACOMBATACTORPOOL_API UEnum* StaticEnum<EPoolableActorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
