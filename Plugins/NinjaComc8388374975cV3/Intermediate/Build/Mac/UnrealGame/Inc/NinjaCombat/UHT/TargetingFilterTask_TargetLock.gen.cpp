// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingFilterTask_TargetLock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_TargetLock() {}

// Begin Cross Module References
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_TargetLock();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingFilterTask_TargetLock_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingFilterTask_TargetLock
void UTargetingFilterTask_TargetLock::StaticRegisterNativesUTargetingFilterTask_TargetLock()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_TargetLock);
UClass* Z_Construct_UClass_UTargetingFilterTask_TargetLock_NoRegister()
{
	return UTargetingFilterTask_TargetLock::StaticClass();
}
struct Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Filters targets that are not currently locked on the owner, having it as a target.\n */" },
		{ "IncludePath", "Targeting/TargetingFilterTask_TargetLock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_TargetLock.h" },
		{ "ToolTip", "Filters targets that are not currently locked on the owner, having it as a target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[] = {
		{ "Category", "Target Lock Filter" },
		{ "Comment", "/** Informs if we actually want to filter out characters that are locked on us. */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingFilterTask_TargetLock.h" },
		{ "ToolTip", "Informs if we actually want to filter out characters that are locked on us." },
	};
#endif // WITH_METADATA
	static void NewProp_bInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_TargetLock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::NewProp_bInvert_SetBit(void* Obj)
{
	((UTargetingFilterTask_TargetLock*)Obj)->bInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetingFilterTask_TargetLock), &Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvert_MetaData), NewProp_bInvert_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::NewProp_bInvert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingFilterTask_BasicFilterTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::ClassParams = {
	&UTargetingFilterTask_TargetLock::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingFilterTask_TargetLock()
{
	if (!Z_Registration_Info_UClass_UTargetingFilterTask_TargetLock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_TargetLock.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_TargetLock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingFilterTask_TargetLock.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingFilterTask_TargetLock>()
{
	return UTargetingFilterTask_TargetLock::StaticClass();
}
UTargetingFilterTask_TargetLock::UTargetingFilterTask_TargetLock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_TargetLock);
UTargetingFilterTask_TargetLock::~UTargetingFilterTask_TargetLock() {}
// End Class UTargetingFilterTask_TargetLock

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_TargetLock_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_TargetLock, UTargetingFilterTask_TargetLock::StaticClass, TEXT("UTargetingFilterTask_TargetLock"), &Z_Registration_Info_UClass_UTargetingFilterTask_TargetLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_TargetLock), 1500344282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_TargetLock_h_1634252693(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_TargetLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingFilterTask_TargetLock_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
