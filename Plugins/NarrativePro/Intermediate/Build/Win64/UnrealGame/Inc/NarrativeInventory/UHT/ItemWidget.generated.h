// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/ItemWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NARRATIVEINVENTORY_ItemWidget_generated_h
#error "ItemWidget.generated.h already included, missing '#pragma once' in ItemWidget.h"
#endif
#define NARRATIVEINVENTORY_ItemWidget_generated_h

#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemWidget(); \
	friend struct Z_Construct_UClass_UItemWidget_Statics; \
public: \
	DECLARE_CLASS(UItemWidget, UCommonButtonBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NarrativeInventory"), NO_API) \
	DECLARE_SERIALIZER(UItemWidget)


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemWidget(UItemWidget&&); \
	UItemWidget(const UItemWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemWidget) \
	NO_API virtual ~UItemWidget();


#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_12_PROLOG
#define FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NARRATIVEINVENTORY_API UClass* StaticClass<class UItemWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NarrativePro_Source_NarrativeInventory_Public_Widgets_ItemWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
