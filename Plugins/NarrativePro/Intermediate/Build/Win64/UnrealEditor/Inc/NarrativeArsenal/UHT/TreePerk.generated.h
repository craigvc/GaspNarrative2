// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillTrees/TreePerk.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkillTreeComponent;
class UTreeSkill;
#ifdef NARRATIVEARSENAL_TreePerk_generated_h
#error "TreePerk.generated.h already included, missing '#pragma once' in TreePerk.h"
#endif
#define NARRATIVEARSENAL_TreePerk_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOwningComponent); \
	DECLARE_FUNCTION(execGetOwningSkill); \
	DECLARE_FUNCTION(execGetPerkDescription); \
	DECLARE_FUNCTION(execSetPerkLevel);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTreePerk(); \
	friend struct Z_Construct_UClass_UTreePerk_Statics; \
public: \
	DECLARE_CLASS(UTreePerk, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UTreePerk)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTreePerk(UTreePerk&&); \
	UTreePerk(const UTreePerk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTreePerk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreePerk); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreePerk) \
	NO_API virtual ~UTreePerk();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_14_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UTreePerk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_TreePerk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
