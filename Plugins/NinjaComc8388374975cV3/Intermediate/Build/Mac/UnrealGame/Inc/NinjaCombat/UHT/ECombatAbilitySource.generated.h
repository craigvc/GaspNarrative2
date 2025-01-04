// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/ECombatAbilitySource.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBAT_ECombatAbilitySource_generated_h
#error "ECombatAbilitySource.generated.h already included, missing '#pragma once' in ECombatAbilitySource.h"
#endif
#define NINJACOMBAT_ECombatAbilitySource_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatAbilitySource_h


#define FOREACH_ENUM_ECOMBATABILITYSOURCE(op) \
	op(ECombatAbilitySource::Owner) \
	op(ECombatAbilitySource::Weapon) 

enum class ECombatAbilitySource : uint8;
template<> struct TIsUEnumClass<ECombatAbilitySource> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatAbilitySource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
