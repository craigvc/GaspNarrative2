// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NPCBehaviourComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNPCActivity;
#ifdef NARRATIVESETTLEMENT_NPCBehaviourComponent_generated_h
#error "NPCBehaviourComponent.generated.h already included, missing '#pragma once' in NPCBehaviourComponent.h"
#endif
#define NARRATIVESETTLEMENT_NPCBehaviourComponent_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScheduledActivity_Statics; \
	NARRATIVESETTLEMENT_API static class UScriptStruct* StaticStruct();


template<> NARRATIVESETTLEMENT_API UScriptStruct* StaticStruct<struct FScheduledActivity>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBeginActivity);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCBehaviourComponent(); \
	friend struct Z_Construct_UClass_UNPCBehaviourComponent_Statics; \
public: \
	DECLARE_CLASS(UNPCBehaviourComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeSettlement"), NO_API) \
	DECLARE_SERIALIZER(UNPCBehaviourComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNPCBehaviourComponent*>(this); }


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNPCBehaviourComponent(UNPCBehaviourComponent&&); \
	UNPCBehaviourComponent(const UNPCBehaviourComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCBehaviourComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCBehaviourComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNPCBehaviourComponent) \
	NO_API virtual ~UNPCBehaviourComponent();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_32_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVESETTLEMENT_API UClass* StaticClass<class UNPCBehaviourComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeSettlement_Public_NPCBehaviourComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
