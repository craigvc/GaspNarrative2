// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/InteractableComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UNarrativeInteractableComponent;
class UNarrativeInteractionComponent;
enum class EInteractionSlotStatus : uint8;
struct FActiveInteractionSlot;
struct FInteractionDebugVisualizeSlot;
struct FInteractionSlotClaimHandle;
struct FInteractionSlotConfig;
#ifdef NARRATIVEARSENAL_InteractableComponent_generated_h
#error "InteractableComponent.generated.h already included, missing '#pragma once' in InteractableComponent.h"
#endif
#define NARRATIVEARSENAL_InteractableComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_16_DELEGATE \
NARRATIVEARSENAL_API void FOnBeginInteract_DelegateWrapper(const FMulticastScriptDelegate& OnBeginInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_17_DELEGATE \
NARRATIVEARSENAL_API void FOnEndInteract_DelegateWrapper(const FMulticastScriptDelegate& OnEndInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_18_DELEGATE \
NARRATIVEARSENAL_API void FOnBeginFocus_DelegateWrapper(const FMulticastScriptDelegate& OnBeginFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_19_DELEGATE \
NARRATIVEARSENAL_API void FOnEndFocus_DelegateWrapper(const FMulticastScriptDelegate& OnEndFocus, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_20_DELEGATE \
NARRATIVEARSENAL_API void FOnInteract_DelegateWrapper(const FMulticastScriptDelegate& OnInteract, APawn* Interactor, UNarrativeInteractionComponent* InteractionComp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_22_DELEGATE \
NARRATIVEARSENAL_API void FOnTargetedSlotTaken_DelegateWrapper(const FMulticastScriptDelegate& OnTargetedSlotTaken, int32 Slot, UNarrativeInteractionComponent* InteractionComp, UNarrativeInteractableComponent* InteractableComp);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionDefiniton_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FInteractionDefiniton>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveInteractionSlot_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FActiveInteractionSlot>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionDebugVisualizeSlot_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FInteractionDebugVisualizeSlot>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDebugSlots);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionSlotBehavior(); \
	friend struct Z_Construct_UClass_UInteractionSlotBehavior_Statics; \
public: \
	DECLARE_CLASS(UInteractionSlotBehavior, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UInteractionSlotBehavior)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractionSlotBehavior(UInteractionSlotBehavior&&); \
	UInteractionSlotBehavior(const UInteractionSlotBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionSlotBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionSlotBehavior); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInteractionSlotBehavior) \
	NO_API virtual ~UInteractionSlotBehavior();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_116_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UInteractionSlotBehavior>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionSlotConfig_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FInteractionSlotConfig>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionSlotClaimHandle_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FInteractionSlotClaimHandle>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_SlotStatuses); \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execOnEndInteract); \
	DECLARE_FUNCTION(execOnBeginInteract); \
	DECLARE_FUNCTION(execOnInteract); \
	DECLARE_FUNCTION(execHasSlotAvailable); \
	DECLARE_FUNCTION(execGetConfigAtSlot); \
	DECLARE_FUNCTION(execUpdateSlotStatus); \
	DECLARE_FUNCTION(execClaimSlot); \
	DECLARE_FUNCTION(execGetAvailableSlots); \
	DECLARE_FUNCTION(execGetClosestAvailableSlot); \
	DECLARE_FUNCTION(execSetInteractableActionText); \
	DECLARE_FUNCTION(execSetInteractableNameText);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNarrativeInteractableComponent(); \
	friend struct Z_Construct_UClass_UNarrativeInteractableComponent_Statics; \
public: \
	DECLARE_CLASS(UNarrativeInteractableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UNarrativeInteractableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SlotStatuses=NETFIELD_REP_START, \
		NETFIELD_REP_END=SlotStatuses	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNarrativeInteractableComponent(UNarrativeInteractableComponent&&); \
	UNarrativeInteractableComponent(const UNarrativeInteractableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNarrativeInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNarrativeInteractableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNarrativeInteractableComponent) \
	NO_API virtual ~UNarrativeInteractableComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_231_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UNarrativeInteractableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Interaction_InteractableComponent_h


#define FOREACH_ENUM_EINTERACTIONSLOTSTATUS(op) \
	op(EInteractionSlotStatus::ISS_Free) \
	op(EInteractionSlotStatus::ISS_Targeted) \
	op(EInteractionSlotStatus::ISS_Occupied) 

enum class EInteractionSlotStatus : uint8;
template<> struct TIsUEnumClass<EInteractionSlotStatus> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EInteractionSlotStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
