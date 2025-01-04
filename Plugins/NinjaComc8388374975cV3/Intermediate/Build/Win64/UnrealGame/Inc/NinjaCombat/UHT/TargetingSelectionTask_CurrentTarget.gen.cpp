// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombat/Public/Targeting/TargetingSelectionTask_CurrentTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSelectionTask_CurrentTarget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget();
NINJACOMBAT_API UClass* Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_NoRegister();
TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
UPackage* Z_Construct_UPackage__Script_NinjaCombat();
// End Cross Module References

// Begin Class UTargetingSelectionTask_CurrentTarget
void UTargetingSelectionTask_CurrentTarget::StaticRegisterNativesUTargetingSelectionTask_CurrentTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSelectionTask_CurrentTarget);
UClass* Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_NoRegister()
{
	return UTargetingSelectionTask_CurrentTarget::StaticClass();
}
struct Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Selects the current target from the Target Lock ability.\n */" },
		{ "IncludePath", "Targeting/TargetingSelectionTask_CurrentTarget.h" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingSelectionTask_CurrentTarget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Selects the current target from the Target Lock ability." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** An offset to add to the Actor Location. */" },
		{ "ModuleRelativePath", "Public/Targeting/TargetingSelectionTask_CurrentTarget.h" },
		{ "ToolTip", "An offset to add to the Actor Location." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSelectionTask_CurrentTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetingSelectionTask_CurrentTarget, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTargetingTask,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::ClassParams = {
	&UTargetingSelectionTask_CurrentTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::PropPointers),
	0,
	0x001110A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget()
{
	if (!Z_Registration_Info_UClass_UTargetingSelectionTask_CurrentTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSelectionTask_CurrentTarget.OuterSingleton, Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTargetingSelectionTask_CurrentTarget.OuterSingleton;
}
template<> NINJACOMBAT_API UClass* StaticClass<UTargetingSelectionTask_CurrentTarget>()
{
	return UTargetingSelectionTask_CurrentTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSelectionTask_CurrentTarget);
UTargetingSelectionTask_CurrentTarget::~UTargetingSelectionTask_CurrentTarget() {}
// End Class UTargetingSelectionTask_CurrentTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_CurrentTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSelectionTask_CurrentTarget, UTargetingSelectionTask_CurrentTarget::StaticClass, TEXT("UTargetingSelectionTask_CurrentTarget"), &Z_Registration_Info_UClass_UTargetingSelectionTask_CurrentTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSelectionTask_CurrentTarget), 2508641093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_CurrentTarget_h_3024693802(TEXT("/Script/NinjaCombat"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_CurrentTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaCombat_Source_NinjaCombat_Public_Targeting_TargetingSelectionTask_CurrentTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
