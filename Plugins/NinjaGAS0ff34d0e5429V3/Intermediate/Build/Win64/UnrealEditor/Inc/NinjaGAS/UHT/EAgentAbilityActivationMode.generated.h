// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Types/EAgentAbilityActivationMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAGAS_EAgentAbilityActivationMode_generated_h
#error "EAgentAbilityActivationMode.generated.h already included, missing '#pragma once' in EAgentAbilityActivationMode.h"
#endif
#define NINJAGAS_EAgentAbilityActivationMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AI_Types_EAgentAbilityActivationMode_h


#define FOREACH_ENUM_EAGENTABILITYACTIVATIONMODE(op) \
	op(EAgentAbilityActivationMode::AbilityClass) \
	op(EAgentAbilityActivationMode::BlackboardClass) \
	op(EAgentAbilityActivationMode::GameplayTags) 

enum class EAgentAbilityActivationMode : uint8;
template<> struct TIsUEnumClass<EAgentAbilityActivationMode> { enum { Value = true }; };
template<> NINJAGAS_API UEnum* StaticEnum<EAgentAbilityActivationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
