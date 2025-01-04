// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Providers/Animation/AnimationProvider_HitReaction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaCombatGameplayAbility;
struct FGameplayEffectContextHandle;
struct FGameplayTagContainer;
struct FHitReactionContext;
#ifdef NINJACOMBAT_AnimationProvider_HitReaction_generated_h
#error "AnimationProvider_HitReaction.generated.h already included, missing '#pragma once' in AnimationProvider_HitReaction.h"
#endif
#define NINJACOMBAT_AnimationProvider_HitReaction_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitReactionContext_Statics; \
	NINJACOMBAT_API static class UScriptStruct* StaticStruct();


template<> NINJACOMBAT_API UScriptStruct* StaticStruct<struct FHitReactionContext>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Applies_Implementation(FGameplayTagContainer const& AbilityContext, FHitReactionContext const& HitReactionContext) const; \
	DECLARE_FUNCTION(execApplies); \
	DECLARE_FUNCTION(execGetEffectContext); \
	DECLARE_FUNCTION(execGetAnimationContext);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationProvider_HitReaction(); \
	friend struct Z_Construct_UClass_UAnimationProvider_HitReaction_Statics; \
public: \
	DECLARE_CLASS(UAnimationProvider_HitReaction, UNinjaCombatDirectionalAnimationProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UAnimationProvider_HitReaction)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationProvider_HitReaction(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationProvider_HitReaction(UAnimationProvider_HitReaction&&); \
	UAnimationProvider_HitReaction(const UAnimationProvider_HitReaction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationProvider_HitReaction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationProvider_HitReaction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationProvider_HitReaction) \
	NO_API virtual ~UAnimationProvider_HitReaction();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_29_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UAnimationProvider_HitReaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_AbilitySystem_Providers_Animation_AnimationProvider_HitReaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
