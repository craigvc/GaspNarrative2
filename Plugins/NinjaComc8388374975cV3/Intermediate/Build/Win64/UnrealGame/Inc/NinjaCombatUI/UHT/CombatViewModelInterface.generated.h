// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Interfaces/CombatViewModelInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef NINJACOMBATUI_CombatViewModelInterface_generated_h
#error "CombatViewModelInterface.generated.h already included, missing '#pragma once' in CombatViewModelInterface.h"
#endif
#define NINJACOMBATUI_CombatViewModelInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearWidgetOwner_Implementation() {}; \
	virtual void SetWidgetOwner_Implementation(APlayerController* WidgetOwner) {}; \
	DECLARE_FUNCTION(execClearWidgetOwner); \
	DECLARE_FUNCTION(execSetWidgetOwner);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBATUI_API UCombatViewModelInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatViewModelInterface(UCombatViewModelInterface&&); \
	UCombatViewModelInterface(const UCombatViewModelInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBATUI_API, UCombatViewModelInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatViewModelInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatViewModelInterface) \
	NINJACOMBATUI_API virtual ~UCombatViewModelInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatViewModelInterface(); \
	friend struct Z_Construct_UClass_UCombatViewModelInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatViewModelInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombatUI"), NINJACOMBATUI_API) \
	DECLARE_SERIALIZER(UCombatViewModelInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatViewModelInterface() {} \
public: \
	typedef UCombatViewModelInterface UClassType; \
	typedef ICombatViewModelInterface ThisClass; \
	static void Execute_ClearWidgetOwner(UObject* O); \
	static void Execute_SetWidgetOwner(UObject* O, APlayerController* WidgetOwner); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATUI_API UClass* StaticClass<class UCombatViewModelInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombatUI_Public_UI_Interfaces_CombatViewModelInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
