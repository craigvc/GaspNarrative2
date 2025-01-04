// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/EInputAnalogStickBehavior.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINPUT_EInputAnalogStickBehavior_generated_h
#error "EInputAnalogStickBehavior.generated.h already included, missing '#pragma once' in EInputAnalogStickBehavior.h"
#endif
#define NINJAINPUT_EInputAnalogStickBehavior_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputAnalogStickBehavior_h


#define FOREACH_ENUM_EINPUTANALOGSTICKBEHAVIOR(op) \
	op(EInputAnalogStickBehavior::FixedSpeed_SingleGait) \
	op(EInputAnalogStickBehavior::FixedSpeed_WalkRun) \
	op(EInputAnalogStickBehavior::VariableSpeed_SingleGait) \
	op(EInputAnalogStickBehavior::VariableSpeed_WalkRun) 

enum class EInputAnalogStickBehavior : uint8;
template<> struct TIsUEnumClass<EInputAnalogStickBehavior> { enum { Value = true }; };
template<> NINJAINPUT_API UEnum* StaticEnum<EInputAnalogStickBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
