// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameModeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameModeBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativeGameModeBase
void ANarrativeGameModeBase::StaticRegisterNativesANarrativeGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeGameModeBase);
UClass* Z_Construct_UClass_ANarrativeGameModeBase_NoRegister()
{
	return ANarrativeGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ANarrativeGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativeGameModeBase.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameModeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANarrativeGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeGameModeBase_Statics::ClassParams = {
	&ANarrativeGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeGameModeBase()
{
	if (!Z_Registration_Info_UClass_ANarrativeGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeGameModeBase.OuterSingleton, Z_Construct_UClass_ANarrativeGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeGameModeBase.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeGameModeBase>()
{
	return ANarrativeGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeGameModeBase);
ANarrativeGameModeBase::~ANarrativeGameModeBase() {}
// End Class ANarrativeGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeGameModeBase, ANarrativeGameModeBase::StaticClass, TEXT("ANarrativeGameModeBase"), &Z_Registration_Info_UClass_ANarrativeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeGameModeBase), 2237577396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameModeBase_h_222096272(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
