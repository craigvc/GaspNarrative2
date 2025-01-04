// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UNarrativeInteractionComponent;
#ifdef NARRATIVEINTERACTION_InteractableComponent_generated_h
#error "InteractableComponent.generated.h already included, missing '#pragma once' in InteractableComponent.h"
#endif
#define NARRATIVEINTERACTION_InteractableComponent_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_9_DELEGATE \
NARRATIVEINTERACTION_API void FOnBeginInteract_DelegateWrapper(const FMulticastScriptDelegate& OnBeginInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_10_DELEGATE \
NARRATIVEINTERACTION_API void FOnEndInteract_DelegateWrapper(const FMulticastScriptDelegate& OnEndInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_11_DELEGATE \
NARRATIVEINTERACTION_API void FOnBeginFocus_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_12_DELEGATE \
NARRATIVEINTERACTION_API void FOnEndFocus_DelegateWrapper(const FMulticastScriptDelegate& OnEndFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_13_DELEGATE \
NARRATIVEINTERACTION_API void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionDefiniton_Statics; \
	NARRATIVEINTERACTION_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEINTERACTION_API UScriptStruct* StaticStruct<struct FInteractionDefiniton>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execOnEndInteract); \
	DECLARE_FUNCTION(execOnBeginInteract); \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execSetInteractableActionText); \
	DECLARE_FUNCTION(execSetInteractableNameText);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeInteractableComponent(); \
	friend struct Z_Construct_UClass_UNarrativeInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeInteraction"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeInteractableComponent)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeInteractableComponent(UNarrativeInteractableComponent&&); \
	UNarrativeInteractableComponent(const UNarrativeInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeInteractableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeInteractableComponent) \
	NO_API virtual ~UNarrativeInteractableComponent();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_58_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINTERACTION_API UClass* StaticClass<class UNarrativeInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeInteraction_Public_InteractableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
