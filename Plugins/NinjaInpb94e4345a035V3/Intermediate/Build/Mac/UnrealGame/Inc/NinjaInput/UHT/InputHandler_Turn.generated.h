// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputHandlers/InputHandler_Turn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInputManagerComponent;
struct FInputActionValue;
#ifdef NINJAINPUT_InputHandler_Turn_generated_h
#error "InputHandler_Turn.generated.h already included, missing '#pragma once' in InputHandler_Turn.h"
#endif
#define NINJAINPUT_InputHandler_Turn_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Turn_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	virtual bool CanTurn_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execCanTurn);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputHandler_Turn(); \
	friend struct Z_Construct_UClass_UInputHandler_Turn_Statics; \
public: \
	DECLARE_CLASS(UInputHandler_Turn, UNinjaInputHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInput"), NO_API) \
	DECLARE_SERIALIZER(UInputHandler_Turn)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputHandler_Turn(UInputHandler_Turn&&); \
	UInputHandler_Turn(const UInputHandler_Turn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputHandler_Turn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputHandler_Turn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputHandler_Turn) \
	NO_API virtual ~UInputHandler_Turn();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UInputHandler_Turn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Turn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
