// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/EquipmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEquippableItem;
class USkeletalMeshComponent;
enum class EEquippableSlot : uint8;
enum class EEquippableSlot : uint8; class USkeletalMeshComponent;
#ifdef NARRATIVEARSENAL_EquipmentComponent_generated_h
#error "EquipmentComponent.generated.h already included, missing '#pragma once' in EquipmentComponent.h"
#endif
#define NARRATIVEARSENAL_EquipmentComponent_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_11_DELEGATE \
NARRATIVEARSENAL_API void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, const EEquippableSlot Slot, UEquippableItem* Equippable);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_12_DELEGATE \
NARRATIVEARSENAL_API void FOnItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnequipped, const EEquippableSlot Slot, UEquippableItem* Equippable);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDefaultClothingMeshMaterials_Statics; \
	NARRATIVEARSENAL_API static class UScriptStruct* StaticStruct();


template<> NARRATIVEARSENAL_API UScriptStruct* StaticStruct<struct FDefaultClothingMeshMaterials>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEquippedItemsWeight); \
	DECLARE_FUNCTION(execGetEquippedItemAtSlot); \
	DECLARE_FUNCTION(execInitialize);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentComponent(); \
	friend struct Z_Construct_UClass_UEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentComponent)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipmentComponent(UEquipmentComponent&&); \
	UEquipmentComponent(const UEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipmentComponent) \
	NO_API virtual ~UEquipmentComponent();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_34_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Components_EquipmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
