// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NarrativeArsenal/Public/Items/MagicWeaponItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicWeaponItem() {}

// Begin Cross Module References
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMagicWeaponItem();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UMagicWeaponItem_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UNarrativeAnimSet_NoRegister();
NARRATIVEARSENAL_API UClass* Z_Construct_UClass_UWeaponItem();
UPackage* Z_Construct_UPackage__Script_NarrativeArsenal();
// End Cross Module References

// Begin Class UMagicWeaponItem
void UMagicWeaponItem::StaticRegisterNativesUMagicWeaponItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMagicWeaponItem);
UClass* Z_Construct_UClass_UMagicWeaponItem_NoRegister()
{
	return UMagicWeaponItem::StaticClass();
}
struct Z_Construct_UClass_UMagicWeaponItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a magic based weapon. \n */" },
		{ "IncludePath", "Items/MagicWeaponItem.h" },
		{ "ModuleRelativePath", "Public/Items/MagicWeaponItem.h" },
		{ "ToolTip", "Base class for a magic based weapon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCombos_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Combo montages for our magic attacks \n" },
		{ "ModuleRelativePath", "Public/Items/MagicWeaponItem.h" },
		{ "ToolTip", "Combo montages for our magic attacks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackCombos_MetaData[] = {
		{ "Category", "Combat Data" },
		{ "Comment", "//Combo montages for our heavy magic attacks \n" },
		{ "ModuleRelativePath", "Public/Items/MagicWeaponItem.h" },
		{ "ToolTip", "Combo montages for our heavy magic attacks" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackCombos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackCombos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeavyAttackCombos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicWeaponItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_AttackCombos_Inner = { "AttackCombos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_AttackCombos = { "AttackCombos", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMagicWeaponItem, AttackCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCombos_MetaData), NewProp_AttackCombos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_HeavyAttackCombos_Inner = { "HeavyAttackCombos", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNarrativeAnimSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_HeavyAttackCombos = { "HeavyAttackCombos", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMagicWeaponItem, HeavyAttackCombos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyAttackCombos_MetaData), NewProp_HeavyAttackCombos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicWeaponItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_AttackCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_AttackCombos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_HeavyAttackCombos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicWeaponItem_Statics::NewProp_HeavyAttackCombos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicWeaponItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMagicWeaponItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponItem,
	(UObject* (*)())Z_Construct_UPackage__Script_NarrativeArsenal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicWeaponItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMagicWeaponItem_Statics::ClassParams = {
	&UMagicWeaponItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMagicWeaponItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMagicWeaponItem_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMagicWeaponItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMagicWeaponItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMagicWeaponItem()
{
	if (!Z_Registration_Info_UClass_UMagicWeaponItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMagicWeaponItem.OuterSingleton, Z_Construct_UClass_UMagicWeaponItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMagicWeaponItem.OuterSingleton;
}
template<> NARRATIVEARSENAL_API UClass* StaticClass<UMagicWeaponItem>()
{
	return UMagicWeaponItem::StaticClass();
}
UMagicWeaponItem::UMagicWeaponItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicWeaponItem);
UMagicWeaponItem::~UMagicWeaponItem() {}
// End Class UMagicWeaponItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MagicWeaponItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMagicWeaponItem, UMagicWeaponItem::StaticClass, TEXT("UMagicWeaponItem"), &Z_Registration_Info_UClass_UMagicWeaponItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMagicWeaponItem), 3330960907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MagicWeaponItem_h_613877883(TEXT("/Script/NarrativeArsenal"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MagicWeaponItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NarrativePro_Source_NarrativeArsenal_Public_Items_MagicWeaponItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
