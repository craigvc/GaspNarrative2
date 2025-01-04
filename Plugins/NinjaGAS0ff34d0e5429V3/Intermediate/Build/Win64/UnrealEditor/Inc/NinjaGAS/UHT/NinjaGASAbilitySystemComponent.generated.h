// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/NinjaGASAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimInstance;
class UGameplayAbility;
class UGameplayEffect;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;
struct FGameplayCueParameters;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef NINJAGAS_NinjaGASAbilitySystemComponent_generated_h
#error "NinjaGASAbilitySystemComponent.generated.h already included, missing '#pragma once' in NinjaGASAbilitySystemComponent.h"
#endif
#define NINJAGAS_NinjaGASAbilitySystemComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_45_DELEGATE \
static void FAbilitySystemAvatarChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& AbilitySystemAvatarChangedSignature, AActor* NewAvatar);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveGameplayCueLocally); \
	DECLARE_FUNCTION(execAddGameplayCueLocally); \
	DECLARE_FUNCTION(execExecuteGameplayCueLocal); \
	DECLARE_FUNCTION(execCancelAbilitiesByTags); \
	DECLARE_FUNCTION(execTryBatchActivateAbility); \
	DECLARE_FUNCTION(execGiveAbilityFromClass); \
	DECLARE_FUNCTION(execApplyGameplayEffectClassToSelf); \
	DECLARE_FUNCTION(execGetAnimInstanceFromActorInfo);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaGASAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UNinjaGASAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaGASAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaGAS"), NO_API) \
	DECLARE_SERIALIZER(UNinjaGASAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaGASAbilitySystemComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaGASAbilitySystemComponent(UNinjaGASAbilitySystemComponent&&); \
	UNinjaGASAbilitySystemComponent(const UNinjaGASAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaGASAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaGASAbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaGASAbilitySystemComponent) \
	NO_API virtual ~UNinjaGASAbilitySystemComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_41_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAGAS_API UClass* StaticClass<class UNinjaGASAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaGAS_Source_NinjaGAS_Public_AbilitySystem_NinjaGASAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
