// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingFilterTask_Health.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_Health() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Health();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Health_NoRegister();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType();
NINJACOMBAT_API UEnum* Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Enum EHealthFilterCheckType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHealthFilterCheckType;
static UEnum* EHealthFilterCheckType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHealthFilterCheckType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHealthFilterCheckType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("EHealthFilterCheckType"));
	}
	return Z_Registration_Info_UEnum_EHealthFilterCheckType.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<EHealthFilterCheckType>()
{
	return EHealthFilterCheckType_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equal.Name", "EHealthFilterCheckType::Equal" },
		{ "GreaterOrEqual.Name", "EHealthFilterCheckType::GreaterOrEqual" },
		{ "GreaterThan.Name", "EHealthFilterCheckType::GreaterThan" },
		{ "LesserOrEqual.Name", "EHealthFilterCheckType::LesserOrEqual" },
		{ "LesserThan.Name", "EHealthFilterCheckType::LesserThan" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Health.h" },
		{ "NotEqual.Name", "EHealthFilterCheckType::NotEqual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHealthFilterCheckType::Equal", (int64)EHealthFilterCheckType::Equal },
		{ "EHealthFilterCheckType::NotEqual", (int64)EHealthFilterCheckType::NotEqual },
		{ "EHealthFilterCheckType::GreaterThan", (int64)EHealthFilterCheckType::GreaterThan },
		{ "EHealthFilterCheckType::GreaterOrEqual", (int64)EHealthFilterCheckType::GreaterOrEqual },
		{ "EHealthFilterCheckType::LesserThan", (int64)EHealthFilterCheckType::LesserThan },
		{ "EHealthFilterCheckType::LesserOrEqual", (int64)EHealthFilterCheckType::LesserOrEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"EHealthFilterCheckType",
	"EHealthFilterCheckType",
	Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType()
{
	if (!Z_Registration_Info_UEnum_EHealthFilterCheckType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHealthFilterCheckType.InnerSingleton, Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHealthFilterCheckType.InnerSingleton;
}
// End Enum EHealthFilterCheckType

// Begin Enum EHealthFilterReferenceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHealthFilterReferenceType;
static UEnum* EHealthFilterReferenceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHealthFilterReferenceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHealthFilterReferenceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType, (UObject*)Z_Construct_UPackage__Script_NinjaCombat(), TEXT("EHealthFilterReferenceType"));
	}
	return Z_Registration_Info_UEnum_EHealthFilterReferenceType.OuterSingleton;
}
template<> NINJACOMBAT_API UEnum* StaticEnum<EHealthFilterReferenceType>()
{
	return EHealthFilterReferenceType_StaticEnum();
}
struct Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.Name", "EHealthFilterReferenceType::Absolute" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Health.h" },
		{ "Percent.Name", "EHealthFilterReferenceType::Percent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHealthFilterReferenceType::Percent", (int64)EHealthFilterReferenceType::Percent },
		{ "EHealthFilterReferenceType::Absolute", (int64)EHealthFilterReferenceType::Absolute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NinjaCombat,
	nullptr,
	"EHealthFilterReferenceType",
	"EHealthFilterReferenceType",
	Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType()
{
	if (!Z_Registration_Info_UEnum_EHealthFilterReferenceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHealthFilterReferenceType.InnerSingleton, Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHealthFilterReferenceType.InnerSingleton;
}
// End Enum EHealthFilterReferenceType

// Begin Class UTargetingFilterTask_Health
void UTargetingFilterTask_Health::StaticRegisterNativesUTargetingFilterTask_Health()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_Health);
UClass* Z_Construct_UClass_UTargetingFilterTask_Health_NoRegister()
{
	return UTargetingFilterTask_Health::StaticClass();
}
struct Z_Construct_UClass_UTargetingFilterTask_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filters targets based on their health.\n *\n * This can be useful for Opportunity Attacks that must filter targets based on their current health.\n * An example of that is an Execution Attack that should only trigger if a health has 10% health or less.\n *\n * Always expect the Target Actor to have an Ability System Component and the expected Health Attributes.\n * Targets without these will always be filtered out.\n */" },
		{ "IncludePath", "Targeting/TargetingFilterTask_Health.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Health.h" },
		{ "ToolTip", "Filters targets based on their health.\n\nThis can be useful for Opportunity Attacks that must filter targets based on their current health.\nAn example of that is an Execution Attack that should only trigger if a health has 10% health or less.\n\nAlways expect the Target Actor to have an Ability System Component and the expected Health Attributes.\nTargets without these will always be filtered out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckType_MetaData[] = {
		{ "Category", "Health Filter" },
		{ "Comment", "/**\n\x09 * What type of check will be performed against the reference value.\n\x09 *\n\x09 * Remember that you are configuring a FILTER, so a set of values like \"Equal 10\" means that,\n\x09 * if the target has 10 points of health, it will be filtered OUT of the list, and every other\n\x09 * values will be ACCEPTED.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Health.h" },
		{ "ToolTip", "What type of check will be performed against the reference value.\n\nRemember that you are configuring a FILTER, so a set of values like \"Equal 10\" means that,\nif the target has 10 points of health, it will be filtered OUT of the list, and every other\nvalues will be ACCEPTED." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceType_MetaData[] = {
		{ "Category", "Health Filter" },
		{ "Comment", "/**\n\x09 * Informs if the reference value is absolute or a percentage.\n\x09 *\n\x09 * An absolute test will compare the Reference against the Current Health. A percentage test\n\x09 * will compare the Reference against Current Health / Maximum Total Health.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Health.h" },
		{ "ToolTip", "Informs if the reference value is absolute or a percentage.\n\nAn absolute test will compare the Reference against the Current Health. A percentage test\nwill compare the Reference against Current Health / Maximum Total Health." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthReference_MetaData[] = {
		{ "Category", "Health Filter" },
		{ "Comment", "/** Reference value for the test. */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Health.h" },
		{ "ToolTip", "Reference value for the test." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CheckType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReferenceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReferenceType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_Health>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingFilterTask_Health, CheckType), Z_Construct_UEnum_NinjaCombat_EHealthFilterCheckType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckType_MetaData), NewProp_CheckType_MetaData) }; // 1206186353
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_ReferenceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_ReferenceType = { "ReferenceType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingFilterTask_Health, ReferenceType), Z_Construct_UEnum_NinjaCombat_EHealthFilterReferenceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceType_MetaData), NewProp_ReferenceType_MetaData) }; // 2179087746
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_HealthReference = { "HealthReference", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingFilterTask_Health, HealthReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthReference_MetaData), NewProp_HealthReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingFilterTask_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_CheckType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_CheckType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_ReferenceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_ReferenceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Health_Statics::NewProp_HealthReference,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Health_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingFilterTask_Health_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Health_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_Health_Statics::ClassParams = {
	&UTargetingFilterTask_Health::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingFilterTask_Health_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Health_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Health_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingFilterTask_Health_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingFilterTask_Health()
{
	if (!Z_Registration_Info_UClass_UTargetingFilterTask_Health.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_Health.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_Health_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingFilterTask_Health.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingFilterTask_Health>()
{
	return UTargetingFilterTask_Health::StaticClass();
}
UTargetingFilterTask_Health::UTargetingFilterTask_Health(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_Health);
UTargetingFilterTask_Health::~UTargetingFilterTask_Health() {}
// End Class UTargetingFilterTask_Health

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHealthFilterCheckType_StaticEnum, TEXT("EHealthFilterCheckType"), &Z_Registration_Info_UEnum_EHealthFilterCheckType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1206186353U) },
		{ EHealthFilterReferenceType_StaticEnum, TEXT("EHealthFilterReferenceType"), &Z_Registration_Info_UEnum_EHealthFilterReferenceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2179087746U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_Health, UTargetingFilterTask_Health::StaticClass, TEXT("UTargetingFilterTask_Health"), &Z_Registration_Info_UClass_UTargetingFilterTask_Health, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_Health), 2819822008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_852552486(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Health_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
