// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NarrativeArsenal.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEARSENAL_NarrativeArsenal_generated_h
#error "NarrativeArsenal.generated.h already included, missing '#pragma once' in NarrativeArsenal.h"
#endif
#define NARRATIVEARSENAL_NarrativeArsenal_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_NarrativeArsenal_h


#define FOREACH_ENUM_ENARRATIVEABILITYINPUTID(op) \
	op(ENarrativeAbilityInputID::None) \
	op(ENarrativeAbilityInputID::Confirm) \
	op(ENarrativeAbilityInputID::Cancel) \
	op(ENarrativeAbilityInputID::Attack) \
	op(ENarrativeAbilityInputID::AltAttack) \
	op(ENarrativeAbilityInputID::Ability1) \
	op(ENarrativeAbilityInputID::Ability2) \
	op(ENarrativeAbilityInputID::Ability3) \
	op(ENarrativeAbilityInputID::Reload) \
	op(ENarrativeAbilityInputID::Jump) \
	op(ENarrativeAbilityInputID::Crouch) \
	op(ENarrativeAbilityInputID::Sprint) 

enum class ENarrativeAbilityInputID : uint8;
template<> struct TIsUEnumClass<ENarrativeAbilityInputID> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeAbilityInputID>();

#define FOREACH_ENUM_ENARRATIVEFACTIONID(op) \
	op(ENarrativeFactionID::None) \
	op(ENarrativeFactionID::Bandits) \
	op(ENarrativeFactionID::Heroes) \
	op(ENarrativeFactionID::Civilians) \
	op(ENarrativeFactionID::Soldiers) 

enum class ENarrativeFactionID : uint8;
template<> struct TIsUEnumClass<ENarrativeFactionID> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeFactionID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
