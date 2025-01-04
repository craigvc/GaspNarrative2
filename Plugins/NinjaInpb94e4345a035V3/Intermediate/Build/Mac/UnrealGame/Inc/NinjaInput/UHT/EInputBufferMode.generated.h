// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/EInputBufferMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJAINPUT_EInputBufferMode_generated_h
#error "EInputBufferMode.generated.h already included, missing '#pragma once' in EInputBufferMode.h"
#endif
#define NINJAINPUT_EInputBufferMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Types_EInputBufferMode_h


#define FOREACH_ENUM_EINPUTBUFFERMODE(op) \
	op(EInputBufferMode::Disabled) \
	op(EInputBufferMode::FirstCommand) \
	op(EInputBufferMode::LastCommand) 

enum class EInputBufferMode : uint8;
template<> struct TIsUEnumClass<EInputBufferMode> { enum { Value = true }; };
template<> NINJAINPUT_API UEnum* StaticEnum<EInputBufferMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
