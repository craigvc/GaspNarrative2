// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Components/CombatComboManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UStateTree;
struct FGameplayTag;
#ifdef NINJACOMBAT_CombatComboManagerInterface_generated_h
#error "CombatComboManagerInterface.generated.h already included, missing '#pragma once' in CombatComboManagerInterface.h"
#endif
#define NINJACOMBAT_CombatComboManagerInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResetCombo_Implementation() {}; \
	virtual void AdvanceCombo_Implementation(FGameplayTag ComboEventTag) {}; \
	virtual void StartCombo_Implementation(UStateTree* NewComboTree) {}; \
	virtual void ResetTargetCount_Implementation() {}; \
	virtual void RegisterTargetFromCurrentAttack_Implementation(const AActor* Target) {}; \
	virtual int32 GetTargetCount_Implementation() const { return 0; }; \
	virtual void SetComboCount_Implementation(int32 NewComboCount) {}; \
	virtual int32 GetComboCount_Implementation() const { return 0; }; \
	virtual void CloseComboWindow_Implementation() {}; \
	virtual void OpenComboWindow_Implementation() {}; \
	virtual bool InComboWindow_Implementation() const { return false; }; \
	virtual void UnbindFromComboFinishedDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromComboCountChangedDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromComboTargetCountDelegate_Implementation(const UObject* Source) {}; \
	virtual void UnbindFromComboWindowChangedDelegate_Implementation(const UObject* Source) {}; \
	virtual void BindToComboFinishedDelegate_Implementation(FComboFinishedDelegate const& Delegate) {}; \
	virtual void BindToComboCountChangedDelegate_Implementation(FComboCountChangedDelegate const& Delegate) {}; \
	virtual void BindToTargetCountChangedDelegate_Implementation(FComboTargetCountChangedDelegate const& Delegate) {}; \
	virtual void BindToComboWindowChangedDelegate_Implementation(FComboWindowChangedDelegate const& Delegate) {}; \
	DECLARE_FUNCTION(execResetCombo); \
	DECLARE_FUNCTION(execAdvanceCombo); \
	DECLARE_FUNCTION(execStartCombo); \
	DECLARE_FUNCTION(execResetTargetCount); \
	DECLARE_FUNCTION(execRegisterTargetFromCurrentAttack); \
	DECLARE_FUNCTION(execGetTargetCount); \
	DECLARE_FUNCTION(execSetComboCount); \
	DECLARE_FUNCTION(execGetComboCount); \
	DECLARE_FUNCTION(execCloseComboWindow); \
	DECLARE_FUNCTION(execOpenComboWindow); \
	DECLARE_FUNCTION(execInComboWindow); \
	DECLARE_FUNCTION(execUnbindFromComboFinishedDelegate); \
	DECLARE_FUNCTION(execUnbindFromComboCountChangedDelegate); \
	DECLARE_FUNCTION(execUnbindFromComboTargetCountDelegate); \
	DECLARE_FUNCTION(execUnbindFromComboWindowChangedDelegate); \
	DECLARE_FUNCTION(execBindToComboFinishedDelegate); \
	DECLARE_FUNCTION(execBindToComboCountChangedDelegate); \
	DECLARE_FUNCTION(execBindToTargetCountChangedDelegate); \
	DECLARE_FUNCTION(execBindToComboWindowChangedDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NINJACOMBAT_API UCombatComboManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatComboManagerInterface(UCombatComboManagerInterface&&); \
	UCombatComboManagerInterface(const UCombatComboManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NINJACOMBAT_API, UCombatComboManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComboManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCombatComboManagerInterface) \
	NINJACOMBAT_API virtual ~UCombatComboManagerInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCombatComboManagerInterface(); \
	friend struct Z_Construct_UClass_UCombatComboManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UCombatComboManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NINJACOMBAT_API) \
	DECLARE_SERIALIZER(UCombatComboManagerInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICombatComboManagerInterface() {} \
public: \
	typedef UCombatComboManagerInterface UClassType; \
	typedef ICombatComboManagerInterface ThisClass; \
	static void Execute_AdvanceCombo(UObject* O, FGameplayTag ComboEventTag); \
	static void Execute_BindToComboCountChangedDelegate(UObject* O, FComboCountChangedDelegate const& Delegate); \
	static void Execute_BindToComboFinishedDelegate(UObject* O, FComboFinishedDelegate const& Delegate); \
	static void Execute_BindToComboWindowChangedDelegate(UObject* O, FComboWindowChangedDelegate const& Delegate); \
	static void Execute_BindToTargetCountChangedDelegate(UObject* O, FComboTargetCountChangedDelegate const& Delegate); \
	static void Execute_CloseComboWindow(UObject* O); \
	static int32 Execute_GetComboCount(const UObject* O); \
	static int32 Execute_GetTargetCount(const UObject* O); \
	static bool Execute_InComboWindow(const UObject* O); \
	static void Execute_OpenComboWindow(UObject* O); \
	static void Execute_RegisterTargetFromCurrentAttack(UObject* O, const AActor* Target); \
	static void Execute_ResetCombo(UObject* O); \
	static void Execute_ResetTargetCount(UObject* O); \
	static void Execute_SetComboCount(UObject* O, int32 NewComboCount); \
	static void Execute_StartCombo(UObject* O, UStateTree* NewComboTree); \
	static void Execute_UnbindFromComboCountChangedDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromComboFinishedDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromComboTargetCountDelegate(UObject* O, const UObject* Source); \
	static void Execute_UnbindFromComboWindowChangedDelegate(UObject* O, const UObject* Source); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_13_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UCombatComboManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Interfaces_Components_CombatComboManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
