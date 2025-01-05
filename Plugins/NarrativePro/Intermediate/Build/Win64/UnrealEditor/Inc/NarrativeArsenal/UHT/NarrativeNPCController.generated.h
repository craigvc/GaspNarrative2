// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NarrativeNPCController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviorTree;
#ifdef NARRATIVEARSENAL_NarrativeNPCController_generated_h
#error "NarrativeNPCController.generated.h already included, missing '#pragma once' in NarrativeNPCController.h"
#endif
#define NARRATIVEARSENAL_NarrativeNPCController_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentTree);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANarrativeNPCController(); \
	friend struct Z_Construct_UClass_ANarrativeNPCController_Statics; \
public: \
	DECLARE_CLASS(ANarrativeNPCController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ANarrativeNPCController) \
	virtual UObject* _getUObject() const override { return const_cast<ANarrativeNPCController*>(this); }


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANarrativeNPCController(ANarrativeNPCController&&); \
	ANarrativeNPCController(const ANarrativeNPCController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANarrativeNPCController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANarrativeNPCController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANarrativeNPCController) \
	NO_API virtual ~ANarrativeNPCController();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_14_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ANarrativeNPCController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_AI_NarrativeNPCController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS