// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaFactions/Public/GameFramework/NinjaFactionSourceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaFactionSourceActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
NINJAFACTIONS_API UClass* Z_Construct_UClass_ANinjaFactionSourceActor();
NINJAFACTIONS_API UClass* Z_Construct_UClass_ANinjaFactionSourceActor_NoRegister();
NINJAFACTIONS_API UClass* Z_Construct_UClass_UFactionSourceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaFactions();
// End Cross Module References

// Begin Class ANinjaFactionSourceActor
void ANinjaFactionSourceActor::StaticRegisterNativesANinjaFactionSourceActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaFactionSourceActor);
UClass* Z_Construct_UClass_ANinjaFactionSourceActor_NoRegister()
{
	return ANinjaFactionSourceActor::StaticClass();
}
struct Z_Construct_UClass_ANinjaFactionSourceActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic implementation of a Faction Source Actor.\n */" },
		{ "DisplayName", "Faction Source Actor" },
		{ "IncludePath", "GameFramework/NinjaFactionSourceActor.h" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionSourceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Basic implementation of a Faction Source Actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReputationWorth_MetaData[] = {
		{ "Category", "Faction Source" },
		{ "Comment", "/** How much reputation this Actor grants. */" },
		{ "ModuleRelativePath", "Public/GameFramework/NinjaFactionSourceActor.h" },
		{ "ToolTip", "How much reputation this Actor grants." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReputationWorth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaFactionSourceActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANinjaFactionSourceActor_Statics::NewProp_ReputationWorth = { "ReputationWorth", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANinjaFactionSourceActor, ReputationWorth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReputationWorth_MetaData), NewProp_ReputationWorth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaFactionSourceActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaFactionSourceActor_Statics::NewProp_ReputationWorth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionSourceActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANinjaFactionSourceActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaFactions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionSourceActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANinjaFactionSourceActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFactionSourceInterface_NoRegister, (int32)VTABLE_OFFSET(ANinjaFactionSourceActor, IFactionSourceInterface), false },  // 3858788717
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaFactionSourceActor_Statics::ClassParams = {
	&ANinjaFactionSourceActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANinjaFactionSourceActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionSourceActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaFactionSourceActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANinjaFactionSourceActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANinjaFactionSourceActor()
{
	if (!Z_Registration_Info_UClass_ANinjaFactionSourceActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaFactionSourceActor.OuterSingleton, Z_Construct_UClass_ANinjaFactionSourceActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANinjaFactionSourceActor.OuterSingleton;
}
template<> NINJAFACTIONS_API UClass* StaticClass<ANinjaFactionSourceActor>()
{
	return ANinjaFactionSourceActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaFactionSourceActor);
ANinjaFactionSourceActor::~ANinjaFactionSourceActor() {}
// End Class ANinjaFactionSourceActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionSourceActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaFactionSourceActor, ANinjaFactionSourceActor::StaticClass, TEXT("ANinjaFactionSourceActor"), &Z_Registration_Info_UClass_ANinjaFactionSourceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaFactionSourceActor), 2743273740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionSourceActor_h_1613363175(TEXT("/Script/NinjaFactions"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionSourceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaFactions_Source_NinjaFactions_Public_GameFramework_NinjaFactionSourceActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
