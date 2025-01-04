// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaInventoryEquipment/Public/GameFramework/Selectors/Selector_CharacterMesh.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelector_CharacterMesh() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_USelector_CharacterMesh();
NINJAINVENTORYEQUIPMENT_API UClass* Z_Construct_UClass_USelector_CharacterMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_NinjaInventoryEquipment();
// End Cross Module References

// Begin Class USelector_CharacterMesh
void USelector_CharacterMesh::StaticRegisterNativesUSelector_CharacterMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelector_CharacterMesh);
UClass* Z_Construct_UClass_USelector_CharacterMesh_NoRegister()
{
	return USelector_CharacterMesh::StaticClass();
}
struct Z_Construct_UClass_USelector_CharacterMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Selects the character mesh as the scene component.\n */" },
		{ "DisplayName", "Character Mesh Selector" },
		{ "IncludePath", "GameFramework/Selectors/Selector_CharacterMesh.h" },
		{ "ModuleRelativePath", "Public/GameFramework/Selectors/Selector_CharacterMesh.h" },
		{ "ToolTip", "Selects the character mesh as the scene component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTag_MetaData[] = {
		{ "Categories", "Equipment.Component" },
		{ "Category", "Scene Component Selector" },
		{ "Comment", "/**\n\x09 * An optional gameplay tag used to find the proper scene component.\n\x09 *\n\x09 * If set, attempts to retrieve a component using this tag, before attempting to cast\n\x09 * the owning pawn into a character and retrieving its mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GameFramework/Selectors/Selector_CharacterMesh.h" },
		{ "ToolTip", "An optional gameplay tag used to find the proper scene component.\n\nIf set, attempts to retrieve a component using this tag, before attempting to cast\nthe owning pawn into a character and retrieving its mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelector_CharacterMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelector_CharacterMesh_Statics::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelector_CharacterMesh, ComponentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentTag_MetaData), NewProp_ComponentTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelector_CharacterMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelector_CharacterMesh_Statics::NewProp_ComponentTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_CharacterMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USelector_CharacterMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNinjaEquipmentSceneComponentSelector,
	(UObject* (*)())Z_Construct_UPackage__Script_NinjaInventoryEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_CharacterMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelector_CharacterMesh_Statics::ClassParams = {
	&USelector_CharacterMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USelector_CharacterMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USelector_CharacterMesh_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelector_CharacterMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_USelector_CharacterMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelector_CharacterMesh()
{
	if (!Z_Registration_Info_UClass_USelector_CharacterMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelector_CharacterMesh.OuterSingleton, Z_Construct_UClass_USelector_CharacterMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelector_CharacterMesh.OuterSingleton;
}
template<> NINJAINVENTORYEQUIPMENT_API UClass* StaticClass<USelector_CharacterMesh>()
{
	return USelector_CharacterMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelector_CharacterMesh);
USelector_CharacterMesh::~USelector_CharacterMesh() {}
// End Class USelector_CharacterMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_CharacterMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelector_CharacterMesh, USelector_CharacterMesh::StaticClass, TEXT("USelector_CharacterMesh"), &Z_Registration_Info_UClass_USelector_CharacterMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelector_CharacterMesh), 2057487859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_CharacterMesh_h_1386229538(TEXT("/Script/NinjaInventoryEquipment"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_CharacterMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NinjaInventory_Source_NinjaInventoryEquipment_Public_GameFramework_Selectors_Selector_CharacterMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
