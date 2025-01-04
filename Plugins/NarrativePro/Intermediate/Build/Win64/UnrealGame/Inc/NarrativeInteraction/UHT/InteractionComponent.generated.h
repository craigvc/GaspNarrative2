// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedInputComponent;
class UNarrativeInteractableComponent;
class UNarrativeInteractionComponent;
#ifdef NARRATIVEINTERACTION_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define NARRATIVEINTERACTION_InteractionComponent_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_9_DELEGATE \
NARRATIVEINTERACTION_API void FOnFoundInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnFoundInteractable, UNarrativeInteractableComponent* Interactable);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_10_DELEGATE \
NARRATIVEINTERACTION_API void FOnLostInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnLostInteractable, UNarrativeInteractableComponent* Interactable);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_12_DELEGATE \
NARRATIVEINTERACTION_API void FOnInteracted_DelegateWrapper(const FMulticastScriptDelegate& OnInteracted, UNarrativeInteractionComponent* Interaction, UNarrativeInteractableComponent* Interactable);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_14_DELEGATE \
NARRATIVEINTERACTION_API void FOnInteractPressed_DelegateWrapper(const FMulticastScriptDelegate& OnInteractPressed, UNarrativeInteractionComponent* Interaction);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_15_DELEGATE \
NARRATIVEINTERACTION_API void FOnInteractReleased_DelegateWrapper(const FMulticastScriptDelegate& OnInteractReleased, UNarrativeInteractionComponent* Interaction);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerEndInteract_Implementation(); \
	virtual void ServerBeginInteract_Implementation(); \
	DECLARE_FUNCTION(execEndInteract); \
	DECLARE_FUNCTION(execBeginInteract); \
	DECLARE_FUNCTION(execServerEndInteract); \
	DECLARE_FUNCTION(execServerBeginInteract); \
	DECLARE_FUNCTION(execBindToInput);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeInteractionComponent(); \
	friend struct Z_Construct_UClass_UNarrativeInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeInteraction"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeInteractionComponent)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeInteractionComponent(UNarrativeInteractionComponent&&); \
	UNarrativeInteractionComponent(const UNarrativeInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeInteractionComponent) \
	NO_API virtual ~UNarrativeInteractionComponent();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_19_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINTERACTION_API UClass* StaticClass<class UNarrativeInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
