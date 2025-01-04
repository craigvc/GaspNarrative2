// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Activities/NPCActivity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlackboardComponent;
#ifdef NARRATIVESETTLEMENT_NPCActivity_generated_h
#error "NPCActivity.generated.h already included, missing '#pragma once' in NPCActivity.h"
#endif
#define NARRATIVESETTLEMENT_NPCActivity_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActivityTransform); \
	DECLARE_FUNCTION(execSetupBlackboard);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCActivity(); \
	friend struct Z_Construct_UClass_UNPCActivity_Statics; \
public: \
	DECLARE_CLASS(UNPCActivity, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NarrativeSettlement"), NO_API) \
	DECLARE_SERIALIZER(UNPCActivity)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNPCActivity(UNPCActivity&&); \
	UNPCActivity(const UNPCActivity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCActivity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCActivity); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNPCActivity) \
	NO_API virtual ~UNPCActivity();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_16_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVESETTLEMENT_API UClass* StaticClass<class UNPCActivity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_Activities_NPCActivity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
