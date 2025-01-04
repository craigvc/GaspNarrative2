// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingFilterTask_Facing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_Facing() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Facing();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Facing_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingFilterTask_Facing
void UTargetingFilterTask_Facing::StaticRegisterNativesUTargetingFilterTask_Facing()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_Facing);
UClass* Z_Construct_UClass_UTargetingFilterTask_Facing_NoRegister()
{
	return UTargetingFilterTask_Facing::StaticClass();
}
struct Z_Construct_UClass_UTargetingFilterTask_Facing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filters targets that are not withing the facing angle of the source.\n */" },
		{ "IncludePath", "Targeting/TargetingFilterTask_Facing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Facing.h" },
		{ "ToolTip", "Filters targets that are not withing the facing angle of the source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAngle_MetaData[] = {
		{ "Category", "Facing Filter" },
		{ "Comment", "/**\n\x09 * Maximum angle allowed for the filter\n\x09 *\n\x09 * As a reference, if the source is facing the target, the angle would be close to zero.\n\x09 * If the source has their back to the target, the angle would be close do 180 degrees.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Facing.h" },
		{ "ToolTip", "Maximum angle allowed for the filter\n\nAs a reference, if the source is facing the target, the angle would be close to zero.\nIf the source has their back to the target, the angle would be close do 180 degrees." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_Facing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::NewProp_MaximumAngle = { "MaximumAngle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingFilterTask_Facing, MaximumAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumAngle_MetaData), NewProp_MaximumAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::NewProp_MaximumAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::ClassParams = {
	&UTargetingFilterTask_Facing::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingFilterTask_Facing()
{
	if (!Z_Registration_Info_UClass_UTargetingFilterTask_Facing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_Facing.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_Facing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingFilterTask_Facing.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingFilterTask_Facing>()
{
	return UTargetingFilterTask_Facing::StaticClass();
}
UTargetingFilterTask_Facing::UTargetingFilterTask_Facing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_Facing);
UTargetingFilterTask_Facing::~UTargetingFilterTask_Facing() {}
// End Class UTargetingFilterTask_Facing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Facing_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_Facing, UTargetingFilterTask_Facing::StaticClass, TEXT("UTargetingFilterTask_Facing"), &Z_Registration_Info_UClass_UTargetingFilterTask_Facing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_Facing), 1935385461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Facing_h_3762061167(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Facing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Facing_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
