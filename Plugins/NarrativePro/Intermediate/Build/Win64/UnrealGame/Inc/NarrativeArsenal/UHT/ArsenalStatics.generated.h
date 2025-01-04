// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArsenalStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UArsenalSettings;
class ULevelSequence;
class UNarrativeGameUserSettings;
class UNPCDefinition;
enum class ENarrativeGameplayDifficulty : uint8;
#ifdef NARRATIVEARSENAL_ArsenalStatics_generated_h
#error "ArsenalStatics.generated.h already included, missing '#pragma once' in ArsenalStatics.h"
#endif
#define NARRATIVEARSENAL_ArsenalStatics_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameplayDifficultyLevel); \
	DECLARE_FUNCTION(execGetNarrativeGameUserSettings); \
	DECLARE_FUNCTION(execGetGameEntryMapName); \
	DECLARE_FUNCTION(execGetNarrativeProSettings); \
	DECLARE_FUNCTION(execGetNPCSequenceStartTransform); \
	DECLARE_FUNCTION(execGetAttitude); \
	DECLARE_FUNCTION(execIsSameTeam);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArsenalStatics(); \
	friend struct Z_Construct_UClass_UArsenalStatics_Statics; \
public: \
	DECLARE_CLASS(UArsenalStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UArsenalStatics)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArsenalStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UArsenalStatics(UArsenalStatics&&); \
	UArsenalStatics(const UArsenalStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArsenalStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArsenalStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArsenalStatics) \
	NO_API virtual ~UArsenalStatics();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_14_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UArsenalStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_ArsenalStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
