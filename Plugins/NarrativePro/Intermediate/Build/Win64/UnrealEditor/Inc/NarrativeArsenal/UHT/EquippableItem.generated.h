// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/EquippableItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEARSENAL_EquippableItem_generated_h
#error "EquippableItem.generated.h already included, missing '#pragma once' in EquippableItem.h"
#endif
#define NARRATIVEARSENAL_EquippableItem_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleUnequip); \
	DECLARE_FUNCTION(execHandleEquip);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquippableItem(); \
	friend struct Z_Construct_UClass_UEquippableItem_Statics; \
public: \
	DECLARE_CLASS(UEquippableItem, UNarrativeItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UEquippableItem)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquippableItem(UEquippableItem&&); \
	UEquippableItem(const UEquippableItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippableItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquippableItem) \
	NO_API virtual ~UEquippableItem();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_34_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UEquippableItem>();

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquippableItem_Clothing(); \
	friend struct Z_Construct_UClass_UEquippableItem_Clothing_Statics; \
public: \
	DECLARE_CLASS(UEquippableItem_Clothing, UEquippableItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UEquippableItem_Clothing)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_104_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquippableItem_Clothing(UEquippableItem_Clothing&&); \
	UEquippableItem_Clothing(const UEquippableItem_Clothing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippableItem_Clothing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippableItem_Clothing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquippableItem_Clothing) \
	NO_API virtual ~UEquippableItem_Clothing();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_101_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_104_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UEquippableItem_Clothing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_EquippableItem_h


#define FOREACH_ENUM_EEQUIPPABLESLOT(op) \
	op(EEquippableSlot::ES_Torso) \
	op(EEquippableSlot::ES_Legs) \
	op(EEquippableSlot::ES_Feet) \
	op(EEquippableSlot::ES_Helmet) \
	op(EEquippableSlot::ES_Hands) \
	op(EEquippableSlot::ES_Backpack) \
	op(EEquippableSlot::ES_Necklace) \
	op(EEquippableSlot::ES_Holster) \
	op(EEquippableSlot::ES_Weapon) \
	op(EEquippableSlot::ES_ThrowableWeapon) \
	op(EEquippableSlot::ES_Custom1) \
	op(EEquippableSlot::ES_Custom2) \
	op(EEquippableSlot::ES_Custom3) \
	op(EEquippableSlot::ES_Custom4) \
	op(EEquippableSlot::ES_Custom5) 

enum class EEquippableSlot : uint8;
template<> struct TIsUEnumClass<EEquippableSlot> { enum { Value = true }; };
template<> NARRATIVEARSENAL_API UEnum* StaticEnum<EEquippableSlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
