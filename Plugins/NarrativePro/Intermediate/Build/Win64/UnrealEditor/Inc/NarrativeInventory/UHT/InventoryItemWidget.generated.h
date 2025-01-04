// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryItemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEINVENTORY_InventoryItemWidget_generated_h
#error "InventoryItemWidget.generated.h already included, missing '#pragma once' in InventoryItemWidget.h"
#endif
#define NARRATIVEINVENTORY_InventoryItemWidget_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItemWidget(); \
	friend struct Z_Construct_UClass_UInventoryItemWidget_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeInventory"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItemWidget)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryItemWidget(UInventoryItemWidget&&); \
	UInventoryItemWidget(const UInventoryItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemWidget) \
	NO_API virtual ~UInventoryItemWidget();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_12_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINVENTORY_API UClass* StaticClass<class UInventoryItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_InventoryItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
