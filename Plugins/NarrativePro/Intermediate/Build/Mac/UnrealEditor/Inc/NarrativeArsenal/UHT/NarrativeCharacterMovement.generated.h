// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/NarrativeCharacterMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENarrativeClimbMode : uint8;
#ifdef NARRATIVEARSENAL_NarrativeCharacterMovement_generated_h
#error "NarrativeCharacterMovement.generated.h already included, missing '#pragma once' in NarrativeCharacterMovement.h"
#endif
#define NARRATIVEARSENAL_NarrativeCharacterMovement_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLocalInputVector); \
	DECLARE_FUNCTION(execIsMovementMode); \
	DECLARE_FUNCTION(execIsCustomMovementMode); \
	DECLARE_FUNCTION(execGetDesiredClimbMode); \
	DECLARE_FUNCTION(execGetClimbMode); \
	DECLARE_FUNCTION(execGetPreviousClimbSurface); \
	DECLARE_FUNCTION(execGetClimbSurface); \
	DECLARE_FUNCTION(execIsClimbing); \
	DECLARE_FUNCTION(execIsTransitionClimbMode); \
	DECLARE_FUNCTION(execIsSlowWalking); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execIsMovingForward); \
	DECLARE_FUNCTION(execStopSprinting); \
	DECLARE_FUNCTION(execStartSprinting);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeCharacterMovement(); \
	friend struct Z_Construct_UClass_UNarrativeCharacterMovement_Statics; \
public: \
	DECLARE_CLASS(UNarrativeCharacterMovement, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeCharacterMovement)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeCharacterMovement(UNarrativeCharacterMovement&&); \
	UNarrativeCharacterMovement(const UNarrativeCharacterMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeCharacterMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeCharacterMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeCharacterMovement) \
	NO_API virtual ~UNarrativeCharacterMovement();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_32_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeCharacterMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_NarrativeCharacterMovement_h


#define FOREACH_ENUM_ENARRATIVECUSTOMMOVEMENTMODE(op) \
	op(CMOVE_None) \
	op(CMOVE_Climb) 
#define FOREACH_ENUM_ENARRATIVECLIMBMODE(op) \
	op(ENarrativeClimbMode::Idle) \
	op(ENarrativeClimbMode::Strafe) \
	op(ENarrativeClimbMode::Jump) \
	op(ENarrativeClimbMode::Turn) 

enum class ENarrativeClimbMode : uint8;
template<> struct TIsUEnumClass<ENarrativeClimbMode> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<ENarrativeClimbMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
