// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/NinjaCombatCastActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FGameplayTag; 
struct FGameplayTagContainer;
struct FGameplayTagQuery;
struct FHitResult;
#ifdef NINJACOMBAT_NinjaCombatCastActor_generated_h
#error "NinjaCombatCastActor.generated.h already included, missing '#pragma once' in NinjaCombatCastActor.h"
#endif
#define NINJACOMBAT_NinjaCombatCastActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult); \
	virtual bool ShouldApplyToTarget_Implementation(const AActor* Target); \
	virtual TMap<FGameplayTag,float> GetAdditionalSetByCallerMagnitudes_Implementation() const; \
	virtual FGameplayTagContainer GetDynamicGameplayTags_Implementation() const; \
	virtual void AlignWithFloor_Implementation(); \
	DECLARE_FUNCTION(execHandleOverlap); \
	DECLARE_FUNCTION(execShouldApplyToTarget); \
	DECLARE_FUNCTION(execGetAdditionalSetByCallerMagnitudes); \
	DECLARE_FUNCTION(execGetDynamicGameplayTags); \
	DECLARE_FUNCTION(execApplyEffectToHitResult); \
	DECLARE_FUNCTION(execApplyEffectToTarget); \
	DECLARE_FUNCTION(execAlignWithFloor); \
	DECLARE_FUNCTION(execTryAlignWithFloor); \
	DECLARE_FUNCTION(execGetWeapon); \
	DECLARE_FUNCTION(execGetCastOwner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCombatCastActor(); \
	friend struct Z_Construct_UClass_ANinjaCombatCastActor_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatCastActor, ANinjaCombatPoolableActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatCastActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANinjaCombatCastActor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CastOwnerPtr=NETFIELD_REP_START, \
		NETFIELD_REP_END=CastOwnerPtr	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANinjaCombatCastActor(ANinjaCombatCastActor&&); \
	ANinjaCombatCastActor(const ANinjaCombatCastActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatCastActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatCastActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCombatCastActor) \
	NO_API virtual ~ANinjaCombatCastActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class ANinjaCombatCastActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_GameFramework_NinjaCombatCastActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
