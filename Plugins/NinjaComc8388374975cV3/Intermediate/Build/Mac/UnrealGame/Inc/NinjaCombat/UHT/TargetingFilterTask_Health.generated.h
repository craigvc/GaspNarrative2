// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Targeting/TargetingFilterTask_Health.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBAT_TargetingFilterTask_Health_generated_h
#error "TargetingFilterTask_Health.generated.h already included, missing '#pragma once' in TargetingFilterTask_Health.h"
#endif
#define NINJACOMBAT_TargetingFilterTask_Health_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTargetingFilterTask_Health(); \
	friend struct Z_Construct_UClass_UTargetingFilterTask_Health_Statics; \
public: \
	DECLARE_CLASS(UTargetingFilterTask_Health, UTargetingFilterTask_BasicFilterTemplate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombat"), NO_API) \
	DECLARE_SERIALIZER(UTargetingFilterTask_Health)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTargetingFilterTask_Health(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTargetingFilterTask_Health(UTargetingFilterTask_Health&&); \
	UTargetingFilterTask_Health(const UTargetingFilterTask_Health&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTargetingFilterTask_Health); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTargetingFilterTask_Health); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTargetingFilterTask_Health) \
	NO_API virtual ~UTargetingFilterTask_Health();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_35_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_39_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBAT_API UClass* StaticClass<class UTargetingFilterTask_Health>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h


#define FOREACH_ENUM_EHEALTHFILTERCHECKTYPE(op) \
	op(EHealthFilterCheckType::Equal) \
	op(EHealthFilterCheckType::NotEqual) \
	op(EHealthFilterCheckType::GreaterThan) \
	op(EHealthFilterCheckType::GreaterOrEqual) \
	op(EHealthFilterCheckType::LesserThan) \
	op(EHealthFilterCheckType::LesserOrEqual) 

enum class EHealthFilterCheckType : uint8;
template<> struct TIsUEnumClass<EHealthFilterCheckType> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<EHealthFilterCheckType>();

#define FOREACH_ENUM_EHEALTHFILTERREFERENCETYPE(op) \
	op(EHealthFilterReferenceType::Percent) \
	op(EHealthFilterReferenceType::Absolute) 

enum class EHealthFilterReferenceType : uint8;
template<> struct TIsUEnumClass<EHealthFilterReferenceType> { enum { Value = true }; };
template<> NINJACOMBAT_API UEnum* StaticEnum<EHealthFilterReferenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
