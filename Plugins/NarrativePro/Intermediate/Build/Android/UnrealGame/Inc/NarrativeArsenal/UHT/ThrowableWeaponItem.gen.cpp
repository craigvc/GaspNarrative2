// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/ThrowableWeaponItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowableWeaponItem() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UEquippableItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UThrowableWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UThrowableWeaponItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UThrowableWeaponItem
void UThrowableWeaponItem::StaticRegisterNativesUThrowableWeaponItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThrowableWeaponItem);
UClass* Z_Construct_UClass_UThrowableWeaponItem_NoRegister()
{
	return UThrowableWeaponItem::StaticClass();
}
struct Z_Construct_UClass_UThrowableWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/ThrowableWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/ThrowableWeaponItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThrowableWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThrowableWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEquippableItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThrowableWeaponItem_Statics::ClassParams = {
	&UThrowableWeaponItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThrowableWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UThrowableWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThrowableWeaponItem()
{
	if (!Z_Registration_Info_UClass_UThrowableWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThrowableWeaponItem.OuterSingleton, Z_Construct_UClass_UThrowableWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThrowableWeaponItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UThrowableWeaponItem>()
{
	return UThrowableWeaponItem::StaticClass();
}
UThrowableWeaponItem::UThrowableWeaponItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowableWeaponItem);
UThrowableWeaponItem::~UThrowableWeaponItem() {}
// End Class UThrowableWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_ThrowableWeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThrowableWeaponItem, UThrowableWeaponItem::StaticClass, TEXT("UThrowableWeaponItem"), &Z_Registration_Info_UClass_UThrowableWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThrowableWeaponItem), 1729598968U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_ThrowableWeaponItem_h_1897939401(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_ThrowableWeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_ThrowableWeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
