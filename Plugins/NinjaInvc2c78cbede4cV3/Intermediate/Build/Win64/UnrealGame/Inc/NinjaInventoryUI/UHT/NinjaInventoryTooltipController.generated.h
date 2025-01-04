// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/NinjaInventoryTooltipController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UNinjaInventoryItemWidget;
class UNinjaInventoryTooltipWidget;
class UUserWidget;
#ifdef NINJAINVENTORYUI_NinjaInventoryTooltipController_generated_h
#error "NinjaInventoryTooltipController.generated.h already included, missing '#pragma once' in NinjaInventoryTooltipController.h"
#endif
#define NINJAINVENTORYUI_NinjaInventoryTooltipController_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UNinjaInventoryTooltipWidget* SelectTooltip_Implementation(UNinjaInventoryItemWidget* ItemWidget); \
	virtual void Tick_Implementation(float DeltaTime); \
	virtual void Initialize_Implementation(APlayerController* OwningPlayer); \
	DECLARE_FUNCTION(execSafelyUpdateTooltip); \
	DECLARE_FUNCTION(execSelectTooltip); \
	DECLARE_FUNCTION(execGetTooltipHolder); \
	DECLARE_FUNCTION(execRequestTooltip); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execInitialize);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInventoryTooltipController(); \
	friend struct Z_Construct_UClass_UNinjaInventoryTooltipController_Statics; \
public: \
	DECLARE_CLASS(UNinjaInventoryTooltipController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInventoryUI"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInventoryTooltipController)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInventoryTooltipController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInventoryTooltipController(UNinjaInventoryTooltipController&&); \
	UNinjaInventoryTooltipController(const UNinjaInventoryTooltipController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInventoryTooltipController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInventoryTooltipController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInventoryTooltipController) \
	NO_API virtual ~UNinjaInventoryTooltipController();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINVENTORYUI_API UClass* StaticClass<class UNinjaInventoryTooltipController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryUI_Public_UI_NinjaInventoryTooltipController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
