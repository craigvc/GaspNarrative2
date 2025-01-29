// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/NPCInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNarrativeInteractableComponent;
class UNarrativeInteractionComponent;
#ifdef NARRATIVEARSENAL_NPCInteractionComponent_generated_h
#error "NPCInteractionComponent.generated.h already included, missing '#pragma once' in NPCInteractionComponent.h"
#endif
#define NARRATIVEARSENAL_NPCInteractionComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_9_DELEGATE \
NARRATIVEARSENAL_API void FOnTargetedInteractionSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTargetedInteractionSlotChanged, UNarrativeInteractableComponent* InteractableComponent, int32 NewSlotIdx);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTargetSlotTaken); \
	DECLARE_FUNCTION(execTargetInteractionSlot); \
	DECLARE_FUNCTION(execTargetClosestInteractionSlot);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNPCInteractionComponent(); \
	friend struct Z_Construct_UClass_UNPCInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UNPCInteractionComponent, UNarrativeInteractionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNPCInteractionComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNPCInteractionComponent(UNPCInteractionComponent&&); \
	UNPCInteractionComponent(const UNPCInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNPCInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNPCInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNPCInteractionComponent) \
	NO_API virtual ~UNPCInteractionComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_14_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNPCInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_NPCInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
