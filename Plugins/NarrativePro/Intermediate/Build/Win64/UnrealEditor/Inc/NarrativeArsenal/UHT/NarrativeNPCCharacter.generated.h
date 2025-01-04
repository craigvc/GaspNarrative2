// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnrealFramework/NarrativeNPCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNarrativeInventoryComponent;
struct FGameplayTag;
struct FTaggedDialogue;
#ifdef NARRATIVEARSENAL_NarrativeNPCCharacter_generated_h
#error "NarrativeNPCCharacter.generated.h already included, missing '#pragma once' in NarrativeNPCCharacter.h"
#endif
#define NARRATIVEARSENAL_NarrativeNPCCharacter_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaggedDialogue_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FTaggedDialogue>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTradingInventoryComponent); \
	DECLARE_FUNCTION(execGetInventoryComponent); \
	DECLARE_FUNCTION(execPlayTaggedDialogue); \
	DECLARE_FUNCTION(execOnRep_NPCData);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANarrativeNPCCharacter(); \
	friend struct Z_Construct_UClass_ANarrativeNPCCharacter_Statics; \
public: \
	DECLARE_CLASS(ANarrativeNPCCharacter, ANarrativeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(ANarrativeNPCCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NPCData=NETFIELD_REP_START, \
		NETFIELD_REP_END=NPCData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANarrativeNPCCharacter(ANarrativeNPCCharacter&&); \
	ANarrativeNPCCharacter(const ANarrativeNPCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANarrativeNPCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANarrativeNPCCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANarrativeNPCCharacter) \
	NO_API virtual ~ANarrativeNPCCharacter();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_58_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class ANarrativeNPCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeNPCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
