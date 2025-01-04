// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/CombatCameraManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCameraAnimationSequence;
struct FCombatCameraAnimationParameters;
#ifdef NINJACOMBATCAMERA_CombatCameraManagerInterface_generated_h
#error "CombatCameraManagerInterface.generated.h already included, missing '#pragma once' in CombatCameraManagerInterface.h"
#endif
#define NINJACOMBATCAMERA_CombatCameraManagerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopCombatCameraAnimation_Implementation() {}; \
	virtual void PlayCombatCameraAnimation_Implementation(AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters) {}; \
	DECLARE_FUNCTION(execStopCombatCameraAnimation); \
	DECLARE_FUNCTION(execPlayCombatCameraAnimation);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBATCAMERA_API UCombatCameraManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatCameraManagerInterface(UCombatCameraManagerInterface&&); \
	UCombatCameraManagerInterface(const UCombatCameraManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBATCAMERA_API, UCombatCameraManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatCameraManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatCameraManagerInterface) \
	NINJACOMBATCAMERA_API virtual ~UCombatCameraManagerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatCameraManagerInterface(); \
	friend struct Z_Construct_UClass_UCombatCameraManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatCameraManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombatCamera"), NINJACOMBATCAMERA_API) \
	DECLARE_SERIALIZER(UCombatCameraManagerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatCameraManagerInterface() {} \
public: \
	typedef UCombatCameraManagerInterface UClassType; \
	typedef ICombatCameraManagerInterface ThisClass; \
	static void Execute_PlayCombatCameraAnimation(UObject* O, AActor* Anchor, UCameraAnimationSequence* Animation, FCombatCameraAnimationParameters Parameters); \
	static void Execute_StopCombatCameraAnimation(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATCAMERA_API UClass* StaticClass<class UCombatCameraManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatCamera_Public_Interfaces_CombatCameraManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
