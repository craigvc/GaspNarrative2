// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/InteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNarrativeInteractableComponent;
class UNarrativeInteractionComponent;
#ifdef NARRATIVEARSENAL_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define NARRATIVEARSENAL_InteractionComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_11_DELEGATE \
NARRATIVEARSENAL_API void FOnFoundInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnFoundInteractable, UNarrativeInteractableComponent* Interactable);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_12_DELEGATE \
NARRATIVEARSENAL_API void FOnLostInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnLostInteractable, UNarrativeInteractableComponent* Interactable);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_14_DELEGATE \
NARRATIVEARSENAL_API void FOnInteracted_DelegateWrapper(const FMulticastScriptDelegate& OnInteracted, UNarrativeInteractionComponent* Interaction, UNarrativeInteractableComponent* Interactable);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_16_DELEGATE \
NARRATIVEARSENAL_API void FOnInteractPressed_DelegateWrapper(const FMulticastScriptDelegate& OnInteractPressed, UNarrativeInteractionComponent* Interaction);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_17_DELEGATE \
NARRATIVEARSENAL_API void FOnInteractReleased_DelegateWrapper(const FMulticastScriptDelegate& OnInteractReleased, UNarrativeInteractionComponent* Interaction);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_20_DELEGATE \
NARRATIVEARSENAL_API void FOnUseInteractable_DelegateWrapper(const FMulticastScriptDelegate& OnUseInteractable, AActor* InteractableActor, UNarrativeInteractableComponent* InteractableComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReleaseInteractionSlot); \
	DECLARE_FUNCTION(execClaimInteractionSlot);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeInteractionComponent(); \
	friend struct Z_Construct_UClass_UNarrativeInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeInteractionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNarrativeInteractionComponent*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeInteractionComponent(UNarrativeInteractionComponent&&); \
	UNarrativeInteractionComponent(const UNarrativeInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeInteractionComponent) \
	NO_API virtual ~UNarrativeInteractionComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_24_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
