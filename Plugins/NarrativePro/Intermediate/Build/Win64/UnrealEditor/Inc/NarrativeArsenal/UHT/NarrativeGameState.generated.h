// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealFramework/NarrativeGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENarrativeFactionID : uint8;
#ifdef NARRATIVEARSENAL_NarrativeGameState_generated_h
#error "NarrativeGameState.generated.h already included, missing '#pragma once' in NarrativeGameState.h"
#endif
#define NARRATIVEARSENAL_NarrativeGameState_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_13_DELEGATE \
NARRATIVEARSENAL_API void FOnFactionAttitudeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFactionAttitudeChanged, ENarrativeFactionID Faction, ENarrativeFactionID OtherFaction, ETeamAttitude::Type NewAttitude);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFactionAttitudeData_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FFactionAttitudeData>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFactionAttitude); \
	DECLARE_FUNCTION(execGetAttitudeTowards);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANarrativeGameState(); \
	friend struct Z_Construct_UClass_ANarrativeGameState_Statics; \
public: \
	DECLARE_CLASS(ANarrativeGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ANarrativeGameState) \
	virtual UObject* _getUObject() const override { return const_cast<ANarrativeGameState*>(this); }


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANarrativeGameState(ANarrativeGameState&&); \
	ANarrativeGameState(const ANarrativeGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANarrativeGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANarrativeGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANarrativeGameState) \
	NO_API virtual ~ANarrativeGameState();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_35_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ANarrativeGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
