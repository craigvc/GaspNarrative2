// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/NinjaInputManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
class UAbilitySystemComponent;
class UEnhancedInputLocalPlayerSubsystem;
class UInputAction;
class UInputMappingContext;
class UNinjaInputSetupDataAsset;
class USceneComponent;
enum class EInputAnalogStickBehavior : uint8;
enum class ETriggerEvent : uint8;
struct FGameplayTag;
struct FInputActionInstance;
struct FInputActionValue;
#ifdef NINJAINPUT_NinjaInputManagerComponent_generated_h
#error "NinjaInputManagerComponent.generated.h already included, missing '#pragma once' in NinjaInputManagerComponent.h"
#endif
#define NINJAINPUT_NinjaInputManagerComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_43_DELEGATE \
static void FInputModeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& InputModeChangedSignature, FGameplayTag InputMode);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_SendGameplayEventToOwner_Implementation(FGameplayTag const& GameplayEventTag, FInputActionValue const& Value, const UInputAction* InputAction) const; \
	virtual void Server_SendGameplayEventToOwner_Implementation(FGameplayTag const& GameplayEventTag, FInputActionValue const& Value, const UInputAction* InputAction) const; \
	virtual void Server_SetPlayerInputMode_Implementation(FGameplayTag const& InputModeTag); \
	virtual void RotateControllerToMouseCursor_Implementation(float DeltaTime); \
	virtual USceneComponent* CreateForwardReference_Implementation(APawn* Owner) const; \
	virtual void GetVectorForAxis_Implementation(const EAxis::Type Axis, FVector& OutReference) const; \
	virtual FVector GetRightVector_Implementation() const; \
	virtual FVector GetForwardVector_Implementation() const; \
	DECLARE_FUNCTION(execClient_SendGameplayEventToOwner); \
	DECLARE_FUNCTION(execServer_SendGameplayEventToOwner); \
	DECLARE_FUNCTION(execServer_SetPlayerInputMode); \
	DECLARE_FUNCTION(execOnRep_CurrentInputModeTag); \
	DECLARE_FUNCTION(execRotateControllerToMouseCursor); \
	DECLARE_FUNCTION(execCreateForwardReference); \
	DECLARE_FUNCTION(execGetVectorForAxis); \
	DECLARE_FUNCTION(execOnPossessedPawnChanged); \
	DECLARE_FUNCTION(execOnControllerChanged); \
	DECLARE_FUNCTION(execOnPawnRestarted); \
	DECLARE_FUNCTION(execDispatchCancelledEvent); \
	DECLARE_FUNCTION(execDispatchCompletedEvent); \
	DECLARE_FUNCTION(execDispatchOngoingEvent); \
	DECLARE_FUNCTION(execDispatchTriggeredEvent); \
	DECLARE_FUNCTION(execDispatchStartedEvent); \
	DECLARE_FUNCTION(execSendGameplayEventToOwner); \
	DECLARE_FUNCTION(execSetAnalogStickBehavior); \
	DECLARE_FUNCTION(execGetAnalogStickBehavior); \
	DECLARE_FUNCTION(execRemoveInputSetupData); \
	DECLARE_FUNCTION(execAddInputSetupData); \
	DECLARE_FUNCTION(execHasCompatibleInputHandler); \
	DECLARE_FUNCTION(execHasInputMappingContext); \
	DECLARE_FUNCTION(execHasSetupData); \
	DECLARE_FUNCTION(execGetEnhancedInputSubsystem); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execGetController); \
	DECLARE_FUNCTION(execGetPawn); \
	DECLARE_FUNCTION(execGetLastInputVector); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execIsUsingGamepad); \
	DECLARE_FUNCTION(execIsUsingKeyboardAndMouse); \
	DECLARE_FUNCTION(execDisableInputProcessing); \
	DECLARE_FUNCTION(execEnableInputProcessing); \
	DECLARE_FUNCTION(execShouldProcessInputs);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaInputManagerComponent(); \
	friend struct Z_Construct_UClass_UNinjaInputManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaInputManagerComponent, UNinjaInputBufferComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaInput"), NO_API) \
	DECLARE_SERIALIZER(UNinjaInputManagerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNinjaInputManagerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentInputModeTag=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentInputModeTag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNinjaInputManagerComponent(UNinjaInputManagerComponent&&); \
	UNinjaInputManagerComponent(const UNinjaInputManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaInputManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaInputManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNinjaInputManagerComponent) \
	NO_API virtual ~UNinjaInputManagerComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_38_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJAINPUT_API UClass* StaticClass<class UNinjaInputManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInput_Source_NinjaInput_Public_Components_NinjaInputManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
