// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Options/CharacterCreatorOption_Mesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorOption_Mesh() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Mesh();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorOption_Mesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorOption_Mesh
void UCharacterCreatorOption_Mesh::StaticRegisterNativesUCharacterCreatorOption_Mesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorOption_Mesh);
UClass* Z_Construct_UClass_UCharacterCreatorOption_Mesh_NoRegister()
{
	return UCharacterCreatorOption_Mesh::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/***/" },
		{ "IncludePath", "CharacterCreator/Options/CharacterCreatorOption_Mesh.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Mesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "//The meshes you can select for this option\n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Options/CharacterCreatorOption_Mesh.h" },
		{ "ToolTip", "The meshes you can select for this option" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorOption_Mesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCharacterCreatorItem_Mesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorOption_Mesh, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::NewProp_Meshes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterCreatorOption,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::ClassParams = {
	&UCharacterCreatorOption_Mesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorOption_Mesh()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorOption_Mesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorOption_Mesh.OuterSingleton, Z_Construct_UClass_UCharacterCreatorOption_Mesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorOption_Mesh.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorOption_Mesh>()
{
	return UCharacterCreatorOption_Mesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorOption_Mesh);
UCharacterCreatorOption_Mesh::~UCharacterCreatorOption_Mesh() {}
// End Class UCharacterCreatorOption_Mesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Mesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorOption_Mesh, UCharacterCreatorOption_Mesh::StaticClass, TEXT("UCharacterCreatorOption_Mesh"), &Z_Registration_Info_UClass_UCharacterCreatorOption_Mesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorOption_Mesh), 132826460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Mesh_h_1944402702(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Mesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Options_CharacterCreatorOption_Mesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
