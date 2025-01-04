// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEINTERACTION_Interaction_generated_h
#error "Interaction.generated.h already included, missing '#pragma once' in Interaction.h"
#endif
#define NARRATIVEINTERACTION_Interaction_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteraction(); \
	friend struct Z_Construct_UClass_UInteraction_Statics; \
public: \
	DECLARE_CLASS(UInteraction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeInteraction"), NO_API) \
	DECLARE_SERIALIZER(UInteraction)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteraction(UInteraction&&); \
	UInteraction(const UInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteraction) \
	NO_API virtual ~UInteraction();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_12_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINTERACTION_API UClass* StaticClass<class UInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_Interaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
