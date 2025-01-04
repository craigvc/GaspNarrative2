// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaInputFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UActorComponent;
class UNinjaInputHandler;
class UNinjaInputManagerComponent;
enum class ETriggerEvent : uint8;
struct FBufferedInputCommand;
struct FInputActionInstance;
#ifdef NINJAINPUT_NinjaInputFunctionLibrary_generated_h
#error "NinjaInputFunctionLibrary.generated.h already included, missing '#pragma once' in NinjaInputFunctionLibrary.h"
#endif
#define NINJAINPUT_NinjaInputFunctionLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindLookAtCursorRotation); \
	DECLARE_FUNCTION(execBreakBufferedInputCommand); \
	DECLARE_FUNCTION(execMakeBufferedInputCommand); \
	DECLARE_FUNCTION(execGetInputBufferComponent); \
	DECLARE_FUNCTION(execGetInputManagerComponent);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInputFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNinjaInputFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNinjaInputFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaInput"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInputFunctionLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaInputFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInputFunctionLibrary(UNinjaInputFunctionLibrary&&); \
	UNinjaInputFunctionLibrary(const UNinjaInputFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInputFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInputFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaInputFunctionLibrary) \
	NO_API virtual ~UNinjaInputFunctionLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_19_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UNinjaInputFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_NinjaInputFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
