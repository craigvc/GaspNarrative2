// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingFilterTask_Distance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_Distance() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Distance();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Distance_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingFilterTask_Distance
void UTargetingFilterTask_Distance::StaticRegisterNativesUTargetingFilterTask_Distance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_Distance);
UClass* Z_Construct_UClass_UTargetingFilterTask_Distance_NoRegister()
{
	return UTargetingFilterTask_Distance::StaticClass();
}
struct Z_Construct_UClass_UTargetingFilterTask_Distance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filters targets that are longer than the provided distance threshold.\n */" },
		{ "IncludePath", "Targeting/TargetingFilterTask_Distance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Distance.h" },
		{ "ToolTip", "Filters targets that are longer than the provided distance threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "Distance Filter" },
		{ "Comment", "/**\n\x09 * Maximum distance allowed for the filter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Distance.h" },
		{ "ToolTip", "Maximum distance allowed for the filter." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_Distance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingFilterTask_Distance, MaximumDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumDistance_MetaData), NewProp_MaximumDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::NewProp_MaximumDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::ClassParams = {
	&UTargetingFilterTask_Distance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingFilterTask_Distance()
{
	if (!Z_Registration_Info_UClass_UTargetingFilterTask_Distance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_Distance.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_Distance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingFilterTask_Distance.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingFilterTask_Distance>()
{
	return UTargetingFilterTask_Distance::StaticClass();
}
UTargetingFilterTask_Distance::UTargetingFilterTask_Distance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_Distance);
UTargetingFilterTask_Distance::~UTargetingFilterTask_Distance() {}
// End Class UTargetingFilterTask_Distance

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Distance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_Distance, UTargetingFilterTask_Distance::StaticClass, TEXT("UTargetingFilterTask_Distance"), &Z_Registration_Info_UClass_UTargetingFilterTask_Distance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_Distance), 4117281254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Distance_h_1074255030(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Distance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Distance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
