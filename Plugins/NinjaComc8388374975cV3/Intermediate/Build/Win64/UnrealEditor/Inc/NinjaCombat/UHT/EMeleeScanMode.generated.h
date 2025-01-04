// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/EMeleeScanMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBAT_EMeleeScanMode_generated_h
#error "EMeleeScanMode.generated.h already included, missing '#pragma once' in EMeleeScanMode.h"
#endif
#define NINJACOMBAT_EMeleeScanMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Types_EMeleeScanMode_h


#define FOREACH_ENUM_EMELEESCANMODE(op) \
	op(EMeleeScanMode::LineTrace) \
	op(EMeleeScanMode::BoxSweep) \
	op(EMeleeScanMode::CapsuleSweep) \
	op(EMeleeScanMode::SphereSweep) 

enum class EMeleeScanMode : uint8;
template<> struct TIsUEnumClass<EMeleeScanMode> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<EMeleeScanMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
