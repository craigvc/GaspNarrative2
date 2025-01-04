// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/ECombatComboEventMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBAT_ECombatComboEventMode_generated_h
#error "ECombatComboEventMode.generated.h already included, missing '#pragma once' in ECombatComboEventMode.h"
#endif
#define NINJACOMBAT_ECombatComboEventMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_ECombatComboEventMode_h


#define FOREACH_ENUM_ECOMBATCOMBOEVENTMODE(op) \
	op(ECombatComboEventMode::InputAction) \
	op(ECombatComboEventMode::GameplayTag) 

enum class ECombatComboEventMode : uint8;
template<> struct TIsUEnumClass<ECombatComboEventMode> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<ECombatComboEventMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
