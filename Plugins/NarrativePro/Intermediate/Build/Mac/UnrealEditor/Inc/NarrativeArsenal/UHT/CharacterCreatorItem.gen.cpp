// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/CharacterCreator/Items/CharacterCreatorItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCreatorItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UCharacterCreatorItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UCharacterCreatorItem
void UCharacterCreatorItem::StaticRegisterNativesUCharacterCreatorItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterCreatorItem);
UClass* Z_Construct_UClass_UCharacterCreatorItem_NoRegister()
{
	return UCharacterCreatorItem::StaticClass();
}
struct Z_Construct_UClass_UCharacterCreatorItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Some options like grooms and meshes show a box of items you can select for the option. This is the base class for one of those items. \n */" },
		{ "IncludePath", "CharacterCreator/Items/CharacterCreatorItem.h" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem.h" },
		{ "ToolTip", "Some options like grooms and meshes show a box of items you can select for the option. This is the base class for one of those items." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDisplayName_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The items display name \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem.h" },
		{ "ToolTip", "The items display name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemThumbnail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "//The items thumbnail \n" },
		{ "ModuleRelativePath", "Public/CharacterCreator/Items/CharacterCreatorItem.h" },
		{ "ToolTip", "The items thumbnail" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDisplayName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemThumbnail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterCreatorItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Statics::NewProp_ItemDisplayName = { "ItemDisplayName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem, ItemDisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDisplayName_MetaData), NewProp_ItemDisplayName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterCreatorItem_Statics::NewProp_ItemThumbnail = { "ItemThumbnail", nullptr, (EPropertyFlags)0x0114000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterCreatorItem, ItemThumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemThumbnail_MetaData), NewProp_ItemThumbnail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterCreatorItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Statics::NewProp_ItemDisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterCreatorItem_Statics::NewProp_ItemThumbnail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterCreatorItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterCreatorItem_Statics::ClassParams = {
	&UCharacterCreatorItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterCreatorItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterCreatorItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterCreatorItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterCreatorItem()
{
	if (!Z_Registration_Info_UClass_UCharacterCreatorItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterCreatorItem.OuterSingleton, Z_Construct_UClass_UCharacterCreatorItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterCreatorItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UCharacterCreatorItem>()
{
	return UCharacterCreatorItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterCreatorItem);
UCharacterCreatorItem::~UCharacterCreatorItem() {}
// End Class UCharacterCreatorItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterCreatorItem, UCharacterCreatorItem::StaticClass, TEXT("UCharacterCreatorItem"), &Z_Registration_Info_UClass_UCharacterCreatorItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterCreatorItem), 3684496000U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_h_3663162067(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_CharacterCreator_Items_CharacterCreatorItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
