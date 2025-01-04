// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/NarrativeCombatAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCombatTraceData;
struct FGameplayAbilityTargetDataHandle;
#ifdef NARRATIVEARSENAL_NarrativeCombatAbility_generated_h
#error "NarrativeCombatAbility.generated.h already included, missing '#pragma once' in NarrativeCombatAbility.h"
#endif
#define NARRATIVEARSENAL_NarrativeCombatAbility_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCombatTraceData_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FCombatTraceData>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetingViewPoint); \
	DECLARE_FUNCTION(execGetTraceData); \
	DECLARE_FUNCTION(execGenerateTargetDataUsingTrace); \
	DECLARE_FUNCTION(execGenerateTargetData);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeCombatAbility(); \
	friend struct Z_Construct_UClass_UNarrativeCombatAbility_Statics; \
public: \
	DECLARE_CLASS(UNarrativeCombatAbility, UNarrativeGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeCombatAbility)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeCombatAbility(UNarrativeCombatAbility&&); \
	UNarrativeCombatAbility(const UNarrativeCombatAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeCombatAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeCombatAbility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeCombatAbility) \
	NO_API virtual ~UNarrativeCombatAbility();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_32_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeCombatAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_GAS_NarrativeCombatAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
