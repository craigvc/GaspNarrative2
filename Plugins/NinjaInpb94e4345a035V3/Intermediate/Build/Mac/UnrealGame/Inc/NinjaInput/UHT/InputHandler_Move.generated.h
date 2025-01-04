// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputHandlers/InputHandler_Move.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInputManagerComponent;
struct FInputActionValue;
#ifdef NINJAINPUT_InputHandler_Move_generated_h
#error "InputHandler_Move.generated.h already included, missing '#pragma once' in InputHandler_Move.h"
#endif
#define NINJAINPUT_InputHandler_Move_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector2D GetMovementInputScaleValue_Implementation(const UNinjaInputManagerComponent* Manager, FVector2D const& InputValue) const; \
	virtual void Move_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	virtual bool CanMove_Implementation(UNinjaInputManagerComponent* Manager, FInputActionValue const& Value) const; \
	DECLARE_FUNCTION(execGetMovementInputScaleValue); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execCanMove);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputHandler_Move(); \
	friend struct Z_Construct_UClass_UInputHandler_Move_Statics; \
public: \
	DECLARE_CLASS(UInputHandler_Move, UNinjaInputHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInput"), NO_API) \
	DECLARE_SERIALIZER(UInputHandler_Move)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputHandler_Move(UInputHandler_Move&&); \
	UInputHandler_Move(const UInputHandler_Move&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputHandler_Move); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputHandler_Move); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputHandler_Move) \
	NO_API virtual ~UInputHandler_Move();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UInputHandler_Move>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_InputHandlers_InputHandler_Move_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
