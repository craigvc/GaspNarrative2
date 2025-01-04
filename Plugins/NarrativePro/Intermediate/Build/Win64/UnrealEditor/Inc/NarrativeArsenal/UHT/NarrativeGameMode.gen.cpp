// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/UnrealFramework/NarrativeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNarrativeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameMode();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_ANarrativeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class ANarrativeGameMode
void ANarrativeGameMode::StaticRegisterNativesANarrativeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANarrativeGameMode);
UClass* Z_Construct_UClass_ANarrativeGameMode_NoRegister()
{
	return ANarrativeGameMode::StaticClass();
}
struct Z_Construct_UClass_ANarrativeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project. \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealFramework/NarrativeGameMode.h" },
		{ "ModuleRelativePath", "Public/UnrealFramework/NarrativeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Default Game State class for Narrative pro. Subclass this if you want your own game state in a Narrative Pro project." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANarrativeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANarrativeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANarrativeGameMode_Statics::ClassParams = {
	&ANarrativeGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANarrativeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANarrativeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANarrativeGameMode()
{
	if (!Z_Registration_Info_UClass_ANarrativeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANarrativeGameMode.OuterSingleton, Z_Construct_UClass_ANarrativeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANarrativeGameMode.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<ANarrativeGameMode>()
{
	return ANarrativeGameMode::StaticClass();
}
ANarrativeGameMode::ANarrativeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANarrativeGameMode);
ANarrativeGameMode::~ANarrativeGameMode() {}
// End Class ANarrativeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANarrativeGameMode, ANarrativeGameMode::StaticClass, TEXT("ANarrativeGameMode"), &Z_Registration_Info_UClass_ANarrativeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANarrativeGameMode), 1618441448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_3102985071(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_UnrealFramework_NarrativeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
