// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/WeaponItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEARSENAL_WeaponItem_generated_h
#error "WeaponItem.generated.h already included, missing '#pragma once' in WeaponItem.h"
#endif
#define NARRATIVEARSENAL_WeaponItem_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCanFire); \
	DECLARE_FUNCTION(execWantsReload); \
	DECLARE_FUNCTION(execIsHolstered); \
	DECLARE_FUNCTION(execReload);


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponItem(); \
	friend struct Z_Construct_UClass_UWeaponItem_Statics; \
public: \
	DECLARE_CLASS(UWeaponItem, UEquippableItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeArsenal"), NO_API) \
	DECLARE_SERIALIZER(UWeaponItem)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeaponItem(UWeaponItem&&); \
	UWeaponItem(const UWeaponItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponItem) \
	NO_API virtual ~UWeaponItem();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_13_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEARSENAL_API UClass* StaticClass<class UWeaponItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_WeaponItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
