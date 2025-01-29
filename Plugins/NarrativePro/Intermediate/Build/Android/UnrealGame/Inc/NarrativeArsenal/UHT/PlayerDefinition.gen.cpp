// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Character/PlayerDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDefinition() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterDefinition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerDefinition();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UPlayerDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UPlayerDefinition
void UPlayerDefinition::StaticRegisterNativesUPlayerDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerDefinition);
UClass* Z_Construct_UClass_UPlayerDefinition_NoRegister()
{
	return UPlayerDefinition::StaticClass();
}
struct Z_Construct_UClass_UPlayerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a player character that will be player controlled \n */" },
		{ "IncludePath", "Character/PlayerDefinition.h" },
		{ "ModuleRelativePath", "Public/Character/PlayerDefinition.h" },
		{ "ToolTip", "Defines a player character that will be player controlled" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerDefinition_Statics::ClassParams = {
	&UPlayerDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerDefinition()
{
	if (!Z_Registration_Info_UClass_UPlayerDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerDefinition.OuterSingleton, Z_Construct_UClass_UPlayerDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerDefinition.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UPlayerDefinition>()
{
	return UPlayerDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerDefinition);
UPlayerDefinition::~UPlayerDefinition() {}
// End Class UPlayerDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_PlayerDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerDefinition, UPlayerDefinition::StaticClass, TEXT("UPlayerDefinition"), &Z_Registration_Info_UClass_UPlayerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerDefinition), 4017561301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_PlayerDefinition_h_3633731301(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_PlayerDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Character_PlayerDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
