// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputHandlers/InputHandler_Look.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInputManagerComponent;
struct FInputActionValue;
#ifdef NINJAINPUT_InputHandler_Look_generated_h
#error "InputHandler_Look.generated.h already included, missing '#pragma once' in InputHandler_Look.h"
#endif
#define NINJAINPUT_InputHandler_Look_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Look_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	virtual bool CanChangeYaw_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	virtual bool CanChangePitch_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	virtual bool CanLook_Implementation(UNinjaInputManagerComponent* Manager) const; \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execCanChangeYaw); \
	DECLARE_FUNCTION(execCanChangePitch); \
	DECLARE_FUNCTION(execCanLook);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputHandler_Look(); \
	friend struct Z_Construct_UClass_UInputHandler_Look_Statics; \
public: \
	DECLARE_CLASS(UInputHandler_Look, UNinjaInputHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInput"), NO_API) \
	DECLARE_SERIALIZER(UInputHandler_Look)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputHandler_Look(UInputHandler_Look&&); \
	UInputHandler_Look(const UInputHandler_Look&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputHandler_Look); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputHandler_Look); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputHandler_Look) \
	NO_API virtual ~UInputHandler_Look();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_11_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UInputHandler_Look>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Look_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
