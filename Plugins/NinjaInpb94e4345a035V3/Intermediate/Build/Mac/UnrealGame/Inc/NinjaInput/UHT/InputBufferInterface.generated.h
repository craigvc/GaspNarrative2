// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InputBufferInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBufferedInputCommand;
#ifdef NINJAINPUT_InputBufferInterface_generated_h
#error "InputBufferInterface.generated.h already included, missing '#pragma once' in InputBufferInterface.h"
#endif
#define NINJAINPUT_InputBufferInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CloseInputBuffer_Implementation(bool bCancelled) {}; \
	virtual void BufferInputCommands_Implementation(TArray<FBufferedInputCommand>& InputCommandsForAction) {}; \
	virtual void OpenInputBuffer_Implementation() {}; \
	virtual bool IsInputBufferOpen_Implementation() const { return false; }; \
	virtual bool IsInputBufferEnabled_Implementation() const { return false; }; \
	DECLARE_FUNCTION(execCloseInputBuffer); \
	DECLARE_FUNCTION(execBufferInputCommands); \
	DECLARE_FUNCTION(execOpenInputBuffer); \
	DECLARE_FUNCTION(execIsInputBufferOpen); \
	DECLARE_FUNCTION(execIsInputBufferEnabled);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJAINPUT_API UInputBufferInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputBufferInterface(UInputBufferInterface&&); \
	UInputBufferInterface(const UInputBufferInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJAINPUT_API, UInputBufferInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBufferInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBufferInterface) \
	NINJAINPUT_API virtual ~UInputBufferInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInputBufferInterface(); \
	friend struct Z_Construct_UClass_UInputBufferInterface_Statics; \
public: \
	DECLARE_CLASS(UInputBufferInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaInput"), NINJAINPUT_API) \
	DECLARE_SERIALIZER(UInputBufferInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInputBufferInterface() {} \
public: \
	typedef UInputBufferInterface UClassType; \
	typedef IInputBufferInterface ThisClass; \
	static void Execute_BufferInputCommands(UObject* O, TArray<FBufferedInputCommand>& InputCommandsForAction); \
	static void Execute_CloseInputBuffer(UObject* O, bool bCancelled); \
	static bool Execute_IsInputBufferEnabled(const UObject* O); \
	static bool Execute_IsInputBufferOpen(const UObject* O); \
	static void Execute_OpenInputBuffer(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UInputBufferInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Interfaces_InputBufferInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
