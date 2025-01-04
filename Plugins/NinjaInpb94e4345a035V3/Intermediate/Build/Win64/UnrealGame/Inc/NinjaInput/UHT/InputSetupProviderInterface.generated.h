// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InputSetupProviderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNinjaInputSetupDataAsset;
#ifdef NINJAINPUT_InputSetupProviderInterface_generated_h
#error "InputSetupProviderInterface.generated.h already included, missing '#pragma once' in InputSetupProviderInterface.h"
#endif
#define NINJAINPUT_InputSetupProviderInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<UNinjaInputSetupDataAsset*> GetRemovedSetups_Implementation() const { return TArray<UNinjaInputSetupDataAsset*>(); }; \
	virtual TArray<UNinjaInputSetupDataAsset*> GetAddedSetups_Implementation() const { return TArray<UNinjaInputSetupDataAsset*>(); }; \
	DECLARE_FUNCTION(execGetRemovedSetups); \
	DECLARE_FUNCTION(execGetAddedSetups);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINPUT_API UInputSetupProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputSetupProviderInterface(UInputSetupProviderInterface&&); \
	UInputSetupProviderInterface(const UInputSetupProviderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINPUT_API, UInputSetupProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputSetupProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputSetupProviderInterface) \
	NINJAINPUT_API virtual ~UInputSetupProviderInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputSetupProviderInterface(); \
	friend struct Z_Construct_UClass_UInputSetupProviderInterface_Statics; \
public: \
	DECLARE_CLASS(UInputSetupProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInput"), NINJAINPUT_API) \
	DECLARE_SERIALIZER(UInputSetupProviderInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputSetupProviderInterface() {} \
public: \
	typedef UInputSetupProviderInterface UClassType; \
	typedef IInputSetupProviderInterface ThisClass; \
	static TArray<UNinjaInputSetupDataAsset*> Execute_GetAddedSetups(const UObject* O); \
	static TArray<UNinjaInputSetupDataAsset*> Execute_GetRemovedSetups(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UInputSetupProviderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputSetupProviderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
