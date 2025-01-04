// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingFilterTask_Dead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_Dead() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Dead();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_Dead_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingFilterTask_Dead
void UTargetingFilterTask_Dead::StaticRegisterNativesUTargetingFilterTask_Dead()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_Dead);
UClass* Z_Construct_UClass_UTargetingFilterTask_Dead_NoRegister()
{
	return UTargetingFilterTask_Dead::StaticClass();
}
struct Z_Construct_UClass_UTargetingFilterTask_Dead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filters targets that are considered \"dead\" in the Combat System.\n */" },
		{ "IncludePath", "Targeting/TargetingFilterTask_Dead.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Dead.h" },
		{ "ToolTip", "Filters targets that are considered \"dead\" in the Combat System." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Dead Filter" },
		{ "Comment", "/** Informs if we actually want to filter out alive characters instead. */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_Dead.h" },
		{ "ToolTip", "Informs if we actually want to filter out alive characters instead." },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_Dead>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UTargetingFilterTask_Dead*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingFilterTask_Dead), &Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::ClassParams = {
	&UTargetingFilterTask_Dead::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingFilterTask_Dead()
{
	if (!Z_Registration_Info_UClass_UTargetingFilterTask_Dead.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_Dead.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_Dead_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingFilterTask_Dead.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingFilterTask_Dead>()
{
	return UTargetingFilterTask_Dead::StaticClass();
}
UTargetingFilterTask_Dead::UTargetingFilterTask_Dead(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_Dead);
UTargetingFilterTask_Dead::~UTargetingFilterTask_Dead() {}
// End Class UTargetingFilterTask_Dead

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Dead_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_Dead, UTargetingFilterTask_Dead::StaticClass, TEXT("UTargetingFilterTask_Dead"), &Z_Registration_Info_UClass_UTargetingFilterTask_Dead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_Dead), 3455763572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Dead_h_3565234834(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Dead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_Dead_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
