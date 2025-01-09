// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillTrees/SkillTreeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTreePerk;
class UTreeSkill;
#ifdef NARRATIVEARSENAL_SkillTreeComponent_generated_h
#error "SkillTreeComponent.generated.h already included, missing '#pragma once' in SkillTreeComponent.h"
#endif
#define NARRATIVEARSENAL_SkillTreeComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSavedPerk_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSavedPerk>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSavedSkill_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSavedSkill>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillTreeSaveData_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FSkillTreeSaveData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerkArray_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FPerkArray>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasPerk); \
	DECLARE_FUNCTION(execGetPerk); \
	DECLARE_FUNCTION(execGetPerkLevel); \
	DECLARE_FUNCTION(execHasRequiredPerks); \
	DECLARE_FUNCTION(execCanBuyPerk); \
	DECLARE_FUNCTION(execBuyPerk); \
	DECLARE_FUNCTION(execGiveSkillPoints);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillTreeComponent(); \
	friend struct Z_Construct_UClass_USkillTreeComponent_Statics; \
public: \
	DECLARE_CLASS(USkillTreeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(USkillTreeComponent) \
	DECLARE_WITHIN(APlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<USkillTreeComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkillTreeComponent(USkillTreeComponent&&); \
	USkillTreeComponent(const USkillTreeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillTreeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillTreeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkillTreeComponent) \
	NO_API virtual ~USkillTreeComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_108_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class USkillTreeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_SkillTrees_SkillTreeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
