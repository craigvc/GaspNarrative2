// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/AmmoItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoItem() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAmmoItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UAmmoItem_NoRegister();
NARRATIVEINVENTORY_API UClass* Z_Construct_UClass_UNarrativeItem();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UAmmoItem
void UAmmoItem::StaticRegisterNativesUAmmoItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmmoItem);
UClass* Z_Construct_UClass_UAmmoItem_NoRegister()
{
	return UAmmoItem::StaticClass();
}
struct Z_Construct_UClass_UAmmoItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/AmmoItem.h" },
		{ "ModuleRelativePath", "Public/Items/AmmoItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmmoItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAmmoItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNarrativeItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmmoItem_Statics::ClassParams = {
	&UAmmoItem::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmmoItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmmoItem()
{
	if (!Z_Registration_Info_UClass_UAmmoItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmmoItem.OuterSingleton, Z_Construct_UClass_UAmmoItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmmoItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UAmmoItem>()
{
	return UAmmoItem::StaticClass();
}
UAmmoItem::UAmmoItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmmoItem);
UAmmoItem::~UAmmoItem() {}
// End Class UAmmoItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_AmmoItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmmoItem, UAmmoItem::StaticClass, TEXT("UAmmoItem"), &Z_Registration_Info_UClass_UAmmoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmmoItem), 326952597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_AmmoItem_h_1044631993(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_AmmoItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_AmmoItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
