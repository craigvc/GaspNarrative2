// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InputModeAwareInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef NINJAINPUT_InputModeAwareInterface_generated_h
#error "InputModeAwareInterface.generated.h already included, missing '#pragma once' in InputModeAwareInterface.h"
#endif
#define NINJAINPUT_InputModeAwareInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetPlayerInputMode_Implementation(FGameplayTag InputModeTag) {}; \
	virtual FGameplayTag GetPlayerInputMode_Implementation() const { return FGameplayTag(); }; \
	DECLARE_FUNCTION(execSetPlayerInputMode); \
	DECLARE_FUNCTION(execGetPlayerInputMode);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINPUT_API UInputModeAwareInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModeAwareInterface(UInputModeAwareInterface&&); \
	UInputModeAwareInterface(const UInputModeAwareInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINPUT_API, UInputModeAwareInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModeAwareInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModeAwareInterface) \
	NINJAINPUT_API virtual ~UInputModeAwareInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputModeAwareInterface(); \
	friend struct Z_Construct_UClass_UInputModeAwareInterface_Statics; \
public: \
	DECLARE_CLASS(UInputModeAwareInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInput"), NINJAINPUT_API) \
	DECLARE_SERIALIZER(UInputModeAwareInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputModeAwareInterface() {} \
public: \
	typedef UInputModeAwareInterface UClassType; \
	typedef IInputModeAwareInterface ThisClass; \
	static FGameplayTag Execute_GetPlayerInputMode(const UObject* O); \
	static void Execute_SetPlayerInputMode(UObject* O, FGameplayTag InputModeTag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UInputModeAwareInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputModeAwareInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
