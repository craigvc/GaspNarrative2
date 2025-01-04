// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaInputHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UNinjaInputManagerComponent;
enum class ETriggerEvent : uint8;
struct FGameplayTagContainer;
struct FInputActionValue;
#ifdef NINJAINPUT_NinjaInputHandler_generated_h
#error "NinjaInputHandler.generated.h already included, missing '#pragma once' in NinjaInputHandler.h"
#endif
#define NINJAINPUT_NinjaInputHandler_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleCancelledEvent_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction) const; \
	virtual void HandleCompletedEvent_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction) const; \
	virtual void HandleOngoingEvent_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction, float ElapsedTime) const; \
	virtual void HandleTriggeredEvent_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction, float ElapsedTime) const; \
	virtual void HandleStartedEvent_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value, const UInputAction* InputAction) const; \
	virtual bool CanHandle_Implementation(ETriggerEvent const& TriggerEvent, const UInputAction* InputAction) const; \
	DECLARE_FUNCTION(execHasAnyTags); \
	DECLARE_FUNCTION(execHandleCancelledEvent); \
	DECLARE_FUNCTION(execHandleCompletedEvent); \
	DECLARE_FUNCTION(execHandleOngoingEvent); \
	DECLARE_FUNCTION(execHandleTriggeredEvent); \
	DECLARE_FUNCTION(execHandleStartedEvent); \
	DECLARE_FUNCTION(execCanBeBuffered); \
	DECLARE_FUNCTION(execCanHandle);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInputHandler(); \
	friend struct Z_Construct_UClass_UNinjaInputHandler_Statics; \
public: \
	DECLARE_CLASS(UNinjaInputHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NinjaInput"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInputHandler)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInputHandler(UNinjaInputHandler&&); \
	UNinjaInputHandler(const UNinjaInputHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInputHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInputHandler); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNinjaInputHandler) \
	NO_API virtual ~UNinjaInputHandler();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_18_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UNinjaInputHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
